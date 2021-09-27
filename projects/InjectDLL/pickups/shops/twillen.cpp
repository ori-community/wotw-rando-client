#include <dll_main.h>
#include <Common/ext.h>
#include <csharp_bridge.h>
#include <pickups/shops/general.h>
#include <uber_states/uber_state_manager.h>
#include <uber_states/uber_state_helper.h>
#include <system/textures.h>
#include <utils/messaging.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>
#include <map>

using namespace modloader;

namespace
{
    const std::set<app::SpiritShardType__Enum> TWILLEN_SHARDS{
        app::SpiritShardType__Enum_GlassCannon,
        app::SpiritShardType__Enum_TripleJump,
        app::SpiritShardType__Enum_AntiAir,
        app::SpiritShardType__Enum_Swap,
        app::SpiritShardType__Enum_SpiritLightLuck,
        app::SpiritShardType__Enum_Vitality,
        app::SpiritShardType__Enum_Energy,
        app::SpiritShardType__Enum_CombatLuck
    };

    std::unordered_map<uint8_t, shops::ShopItem> twillen_overrides;

    IL2CPP_INTERCEPT(, PlayerSpiritShards, bool, HasShard, (app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shad_type))
    {
        if (shops::is_in_shop(shops::ShopType::Twillen) && TWILLEN_SHARDS.find(shad_type) != TWILLEN_SHARDS.end())
            return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shad_type));

        return PlayerSpiritShards::HasShard(this_ptr, shad_type);
    }

    IL2CPP_INTERCEPT(, SpiritShardUIShardBackdrop, void, SetUpgradeCount, (app::SpiritShardUIShardBackdrop* this_ptr, int actual, int total)) {
        if (shops::is_in_shop(shops::ShopType::Twillen))
            SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, 0, 0);
        else
            SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, actual, total);
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_VisibleInShop, (app::PlayerUberStateShards_Shard* this_ptr)) {
        return true;
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_PurchasableInShop, (app::PlayerUberStateShards_Shard* this_ptr)) {
        return true;
    }

    IL2CPP_BINDING(, SpiritShardsShopScreen, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, (app::SpiritShardsShopScreen* this_ptr));

    bool overwrite_shard_text = false;
    app::PlayerUberStateShards_Shard* selected_shard;
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen* this_ptr)) {
        overwrite_shard_text = true;
        selected_shard = get_SelectedSpiritShard(this_ptr);
        UpdateContextCanvasShards(this_ptr);
        overwrite_shard_text = false;
    }

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, void, RunSetDirtyCallback, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, CompletePurchase, (app::SpiritShardsShopScreen* this_ptr)) {
        //SpiritShardsShopScreen$$CompletePurchase
        //save shard new/purchased state
        auto* const shard = get_SelectedSpiritShard(this_ptr);
        const auto first = shard->fields.m_isNew;
        const auto second = shard->fields.m_gained;

        CompletePurchase(this_ptr);

        // rollback vanilla purchase 
        shard->fields.m_isNew = first;
        shard->fields.m_gained = second;

        il2cpp::invoke(get_sein()->fields.PlayerSpiritShards->fields.OnInventoryUpdated, "Invoke", shard);

        // do the rando purchase /after/ rollback, xem ;3
        csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));

        PlayerUberStateShards::Shard::RunSetDirtyCallback(shard);
        UpdateContextCanvasShards(this_ptr);
    }

    IL2CPP_BINDING(, UpgradableShardItem, int, get_ItemCurrentLevel, (app::UpgradableShardItem* item));
    IL2CPP_BINDING(, UpgradableShardItem, int, GetCostForLevel, (app::UpgradableShardItem* item, int level));
    IL2CPP_INTERCEPT(, UpgradableShardItem, void, DoPurchase, (app::UpgradableShardItem* this_ptr, app::PurchaseContext* context)) {
        UpgradableShardItem::DoPurchase(this_ptr, context);
        auto level = UpgradableShardItem::get_ItemCurrentLevel(this_ptr);
        auto cost = UpgradableShardItem::GetCostForLevel(this_ptr, level - 1);
        csharp_bridge::twillen_shard_upgraded(static_cast<csharp_bridge::ShardType>(this_ptr->fields.Shard), level, cost);
    }

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails* this_ptr));

    textures::TextureData get_shard_icon(app::SpiritShardType__Enum shard)
    {
        const auto it = twillen_overrides.find(static_cast<uint8_t>(shard));
        if (it == twillen_overrides.end() || it->second.texture_data.texture == nullptr)
        {
            auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")
                ->static_fields->Instance->fields.Icons;
            auto icon = 0;
            auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &icon);
            textures::TextureData data;
            data.texture = reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon);
            return data;
        }

        return it->second.texture_data;
    }

    bool locked_shard_overwrite = false;
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus* this_ptr, app::EquipmentType__Enum type));
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails* this_ptr)) {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        app::MessageProvider* locked_provider = nullptr;

        auto* const item = overwrite_shard_text ? selected_shard : this_ptr->fields.m_item;
        auto type = item->fields.m_type;
        if (overwrite_shard_text)
        {
            const auto it = twillen_overrides.find(static_cast<uint8_t>(type));
            if (it != twillen_overrides.end())
            {
                name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
                description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
                locked_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.locked));
            }
        }

        auto* const settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;

        auto* const description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto* const renderer = renderer_components[0];
        if (!(item->fields.m_gained || !this_ptr->fields.RequireOwned) || locked_shard_overwrite)
            type = app::SpiritShardType__Enum_None;

        if (settings != nullptr)
        {
            auto* const empty_str = il2cpp::string_new("");
            if (overwrite_shard_text)
                textures::apply(renderer, get_shard_icon(type));
            else
            {
                auto* const icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(
                    settings->fields.Icons, "GetValue", &type);
                textures::TextureData data;
                data.texture = reinterpret_cast<app::Texture*>(icons->fields.HeaderIcon);
                textures::apply(renderer, data);
            }

            auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
            auto* const name_box = message_box_components[0];

            message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
            auto* const description_box = message_box_components[0];

            if (type == 0)
            {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = locked_provider == nullptr ? this_ptr->fields.LockedDescription : locked_provider;
            }
            else
            {
                name_box->fields.MessageProvider = name_provider == nullptr ? description->fields.Name : name_provider;
                auto* const property_levels = description->fields.UpgradablePropertyLevels;
                auto* const property_level = property_levels->fields._items->vector[item->fields.m_level];
                description_box->fields.MessageProvider = description_provider == nullptr ? property_level->fields.Description : description_provider;
            }

            MessageBox::RefreshText(name_box, empty_str, empty_str);
            MessageBox::RefreshText(description_box, empty_str, empty_str);
            UpdateUpgradeDetails(this_ptr);

            auto active = false;
            il2cpp::invoke(this_ptr->fields.LevelNextGO, "SetActive", &active);
            il2cpp::invoke(this_ptr->fields.LevelNextDescriptionGO, "SetActive", &active);

            if (this_ptr->fields.ShowEquipStatus)
                SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum_None);
        }
    }

    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, ShowEmptyDetails, (app::SpiritShardUIShardDetails* this_ptr)) {
        if (overwrite_shard_text && selected_shard != nullptr)
        {
            const auto it = twillen_overrides.find(static_cast<uint8_t>(selected_shard->fields.m_type));
            if (it != twillen_overrides.end())
            {
                locked_shard_overwrite = true;
                this_ptr->fields.m_item = selected_shard;
                UpdateDetails_intercept(this_ptr);
                this_ptr->fields.m_item = nullptr;
                locked_shard_overwrite = false;
                return;
            }
        }

        ShowEmptyDetails(this_ptr);
    }

    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, Show, (app::SpiritShardsShopScreen* this_ptr)) {
        csharp_bridge::update_shop_data();
        auto sein = get_sein();
        if (sein != nullptr && sein->fields.PlayerSpiritShards != nullptr)
        {
            auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
            auto shards_to_buy = sein->fields.PlayerSpiritShards->fields.InventoryItemsAvailableToBuy;
            for (int i = 0; i < shards_to_buy->fields._size; ++i)
            {
                auto shard = shards_to_buy->fields._items->vector[i];
                auto desc = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &shard);
                desc->fields.InitialBuyCost = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard));
            }
        }

        SpiritShardsShopScreen::Show(this_ptr);
    }

    bool not_found = false;
    IL2CPP_INTERCEPT(, SpiritShardUIItem, void, UpdateShardIcon, (app::SpiritShardUIItem* this_ptr)) {
        if (shops::is_in_shop(shops::ShopType::Twillen))
        {
            GameObject::SetActive(this_ptr->fields.IconGO, true);
            auto renderer = il2cpp::unity::get_components<app::Renderer>(
                this_ptr->fields.IconGO, "UnityEngine", "Renderer")[0];
            auto shard = this_ptr->fields.m_spiritShard != nullptr ?
                this_ptr->fields.m_spiritShard->fields.m_type : app::SpiritShardType__Enum_None;

            auto texture = get_shard_icon(shard);
            if (texture.texture != nullptr)
                textures::apply(renderer, texture);
            else
                textures::apply_default(renderer);
        }
        else
            SpiritShardUIItem::UpdateShardIcon(this_ptr);
    }

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider* this_ptr));
    IL2CPP_BINDING(, MessageBox, void, SetMessage, (app::MessageBox* this_ptr, app::MessageDescriptor* descriptor, app::String* replace, app::String* with));
    IL2CPP_BINDING(, SpiritShardDescription, int, get_BuyCost, (app::SpiritShardDescription* this_ptr));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_InitialPurchaseAffordable, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardShopUIItem, void, UpdateShard, (app::SpiritShardShopUIItem* this_ptr, app::PlayerUberStateShards_Shard* shard)) {
        auto owned = true;
        auto cost_enabled = false;
        if (shard != nullptr)
        {
            SpiritShardUIItem::UpdateShardIcon_intercept(this_ptr->fields.Shard);
            owned = csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));
            if (PlayerUberStateShards::Shard::get_VisibleInShop_intercept(shard))
                cost_enabled = !owned;

            auto cost = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));
            auto purchasable = PlayerUberStateShards::Shard::get_PurchasableInShop_intercept(shard);
            auto affordable = get_experience() >= cost;
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.IconGO, "UnityEngine", "Renderer");
            auto background_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.Background, "UnityEngine", "Renderer");
            if ((purchasable && !owned) && (affordable && !owned))
            {
                shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.PurchasableColor);
                shaders::UberShaderAPI::SetColor(background_renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.PurchasableColor);
            }
            else
            {
                shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.UnpurchaseableColor);
                shaders::UberShaderAPI::SetColor(background_renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.UnpurchaseableColor);
            }

            auto descriptions = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance->fields.Descriptions;
            auto* shard_description = il2cpp::invoke<app::SpiritShardDescription>(descriptions, "GetValue", &shard->fields.m_type);
            //auto cost = SpiritShardDescription::get_BuyCost(shard_description);
            app::MessageDescriptor descriptor = {0};
            descriptor.Message = il2cpp::string_new(std::to_string(cost));
            auto empty = il2cpp::string_new("");
            MessageBox::SetMessage(il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.CostGO, "", "MessageBox"), &descriptor, empty, empty);

            auto enabled = purchasable && !owned && affordable;
            GameObject::SetActive(this_ptr->fields.PurchasableGO, enabled);
            GameObject::SetActive(this_ptr->fields.NotPurchasableGO, !enabled);
        }

        GameObject::SetActive(this_ptr->fields.CostGO, cost_enabled);
        GameObject::SetActive(this_ptr->fields.SpiritLightGO, cost_enabled);
        GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, owned);
    }
}

namespace shops
{
    textures::TextureData get_twillen_icon(app::UpgradableShardItem* shop_item)
    {
        auto* const item = reinterpret_cast<app::UpgradableShardItem*>(shop_item);
        return get_shard_icon(item->fields.Shard);
    }
}

INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description, const wchar_t* texture, const wchar_t* locked)
{
    const auto key = static_cast<uint8_t>(shard);
    auto& item = twillen_overrides[key];
    set_item(item, name, description, texture, locked, false);
}
