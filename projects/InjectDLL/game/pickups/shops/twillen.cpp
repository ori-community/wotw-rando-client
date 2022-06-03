#include <enums/static_text_entries.h>
#include <game/pickups/shops/general.h>
#include <game/player.h>
#include <game/system/message_provider.h>
#include <interop/csharp_bridge.h>
#include <randomizer/render/textures.h>
#include <randomizer/text_database.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <map>
#include <set>

using namespace modloader;

namespace {
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

    IL2CPP_INTERCEPT(, PlayerSpiritShards, bool, HasShard, (app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum shad_type)) {
        if (shops::is_in_shop(shops::ShopType::Twillen) && TWILLEN_SHARDS.find(shad_type) != TWILLEN_SHARDS.end())
            return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shad_type));

        return PlayerSpiritShards::HasShard(this_ptr, shad_type);
    }

    IL2CPP_INTERCEPT(, SpiritShardUIShardBackdrop, void, SetUpgradeCount, (app::SpiritShardUIShardBackdrop * this_ptr, int actual, int total)) {
        if (shops::is_in_shop(shops::ShopType::Twillen))
            SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, 0, 0);
        else
            SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, actual, total);
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_VisibleInShop, (app::PlayerUberStateShards_Shard * this_ptr)) {
        const auto it = twillen_overrides.find(static_cast<uint8_t>(this_ptr->fields.m_type));
        return it != twillen_overrides.end() ? it->second.is_visible : false;
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_PurchasableInShop, (app::PlayerUberStateShards_Shard * this_ptr)) {
        const auto it = twillen_overrides.find(static_cast<uint8_t>(this_ptr->fields.m_type));
        return it != twillen_overrides.end() ? !it->second.is_locked : false;
    }

    IL2CPP_BINDING(, SpiritShardsShopScreen, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, (app::SpiritShardsShopScreen * this_ptr));

    bool overwrite_shard = false;
    app::PlayerUberStateShards_Shard* selected_shard;
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen * this_ptr)) {
        overwrite_shard = shops::is_in_shop(shops::ShopType::Twillen);
        selected_shard = get_SelectedSpiritShard(this_ptr);
        UpdateContextCanvasShards(this_ptr);
        overwrite_shard = false;
    }

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, void, RunSetDirtyCallback, (app::PlayerUberStateShards_Shard * this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, CompletePurchase, (app::SpiritShardsShopScreen * this_ptr)) {
        // SpiritShardsShopScreen$$CompletePurchase
        // save shard new/purchased state
        auto* const shard = get_SelectedSpiritShard(this_ptr);
        const auto first = shard->fields.m_isNew;
        const auto second = shard->fields.m_gained;

        CompletePurchase(this_ptr);

        // rollback vanilla purchase
        shard->fields.m_isNew = first;
        shard->fields.m_gained = second;

        il2cpp::invoke(game::player::sein()->fields.PlayerSpiritShards->fields.OnInventoryUpdated, "Invoke", shard);

        // do the rando purchase /after/ rollback, xem ;3
        csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));

        PlayerUberStateShards::Shard::RunSetDirtyCallback(shard);
        UpdateContextCanvasShards(this_ptr);
    }

    IL2CPP_BINDING(, UpgradableShardItem, int, get_ItemCurrentLevel, (app::UpgradableShardItem * item));
    IL2CPP_BINDING(, UpgradableShardItem, int, GetCostForLevel, (app::UpgradableShardItem * item, int level));
    IL2CPP_INTERCEPT(, UpgradableShardItem, void, DoPurchase, (app::UpgradableShardItem * this_ptr, app::PurchaseContext* context)) {
        UpgradableShardItem::DoPurchase(this_ptr, context);
        auto level = UpgradableShardItem::get_ItemCurrentLevel(this_ptr);
        auto cost = UpgradableShardItem::GetCostForLevel(this_ptr, level - 1);
        csharp_bridge::twillen_shard_upgraded(static_cast<csharp_bridge::ShardType>(this_ptr->fields.Shard), level, cost);
    }

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails * this_ptr));

    std::shared_ptr<randomizer::textures::TextureData> get_shard_icon(app::SpiritShardType__Enum shard) {
        const auto it = twillen_overrides.find(static_cast<uint8_t>(shard));
        if (it == twillen_overrides.end() || it->second.texture_data == nullptr)
            return nullptr;

        return it->second.texture_data;
    }

    std::unordered_map<app::SpiritShardType__Enum, std::shared_ptr<randomizer::textures::TextureData>> shard_textures;

    bool locked_shard_overwrite = false;
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject * this_ptr, bool value));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox * this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus * this_ptr, app::EquipmentType__Enum type));
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails * this_ptr)) {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;

        auto* const item = overwrite_shard ? selected_shard : this_ptr->fields.m_item;
        auto type = item->fields.m_type;
        const auto it = twillen_overrides.find(static_cast<uint8_t>(type));
        if (overwrite_shard) {
            if (it != twillen_overrides.end()) {
                if (it->second.name != 0)
                    name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
                if (it->second.description != 0)
                    description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
            } else
                type = app::SpiritShardType__Enum_None;

            auto is_visible = PlayerUberStateShards::Shard::get_VisibleInShop_intercept(item);
            auto is_locked = PlayerUberStateShards::Shard::get_PurchasableInShop(item);
            if (!il2cpp::unity::is_valid(name_provider)) {
                if (!is_visible)
                    name_provider = text_database::get_provider(*static_text_entries::Undiscovered);
                else if (is_locked)
                    name_provider = text_database::get_provider(*static_text_entries::Locked);
                else
                    name_provider = text_database::get_provider(*static_text_entries::EmptyName);
            }

            if (!il2cpp::unity::is_valid(description_provider)) {
                if (!is_visible)
                    name_provider = text_database::get_provider(*static_text_entries::UndiscoveredDescription);
                else
                    name_provider = text_database::get_provider(*static_text_entries::Empty);
            }
        }

        auto* const settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;

        auto* const description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        if (!(item->fields.m_gained || !this_ptr->fields.RequireOwned) || locked_shard_overwrite)
            type = app::SpiritShardType__Enum_None;

        if (settings != nullptr) {
            auto* const renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
            if (overwrite_shard) {
                auto texture = shops::get_icon(shops::ShopType::Twillen, item);
                texture->apply(renderer);
            } else {
                auto it = shard_textures.find(type);
                if (it == shard_textures.end()) {
                    auto shard_icons = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")
                                               ->static_fields->Instance->fields.Icons;
                    auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &type);

                    auto texture = randomizer::textures::create_texture();
                    texture->set_texture(reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon));
                    shard_textures[type] = texture;
                    it = shard_textures.find(type);
                }

                it->second->apply(renderer);
            }

            auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
            auto* const name_box = message_box_components[0];

            message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
            auto* const description_box = message_box_components[0];

            if (overwrite_shard) {
                name_box->fields.MessageProvider = name_provider;
                description_box->fields.MessageProvider = description_provider;
            } else if (type == 0) {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
            } else {
                name_box->fields.MessageProvider = name_provider == nullptr ? description->fields.Name : name_provider;
                auto* const property_levels = description->fields.UpgradablePropertyLevels;
                auto* const property_level = property_levels->fields._items->vector[item->fields.m_level];
                description_box->fields.MessageProvider = description_provider == nullptr ? property_level->fields.Description : description_provider;
            }

            auto* const empty_str = il2cpp::string_new("");
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

    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, ShowEmptyDetails, (app::SpiritShardUIShardDetails * this_ptr)) {
        if (overwrite_shard && selected_shard != nullptr) {
            locked_shard_overwrite = true;
            this_ptr->fields.m_item = selected_shard;
            UpdateDetails_intercept(this_ptr);
            this_ptr->fields.m_item = nullptr;
            locked_shard_overwrite = false;
        } else
            ShowEmptyDetails(this_ptr);
    }

    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, Show, (app::SpiritShardsShopScreen * this_ptr)) {
        csharp_bridge::update_shop_data();
        auto sein = game::player::sein();
        if (sein != nullptr && sein->fields.PlayerSpiritShards != nullptr) {
            auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;
            auto shards_to_buy = sein->fields.PlayerSpiritShards->fields.InventoryItemsAvailableToBuy;
            for (int i = 0; i < shards_to_buy->fields._size; ++i) {
                auto shard = shards_to_buy->fields._items->vector[i];
                auto desc = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &shard);
                desc->fields.InitialBuyCost = shards_to_buy->fields._items->vector[i];
            }
        }

        SpiritShardsShopScreen::Show(this_ptr);
    }

    bool not_found = false;
    IL2CPP_INTERCEPT(, SpiritShardUIItem, void, UpdateShardIcon, (app::SpiritShardUIItem * this_ptr)) {
        if (shops::is_in_shop(shops::ShopType::Twillen)) {
            auto renderer = il2cpp::unity::get_components<app::Renderer>(
                    this_ptr->fields.IconGO, "UnityEngine", "Renderer"
            )[0];
            auto shard = this_ptr->fields.m_spiritShard != nullptr ? this_ptr->fields.m_spiritShard->fields.m_type : app::SpiritShardType__Enum_None;
            auto is_visible = this_ptr->fields.m_spiritShard != nullptr ? PlayerUberStateShards::Shard::get_VisibleInShop_intercept(this_ptr->fields.m_spiritShard) : false;
            auto is_locked = this_ptr->fields.m_spiritShard != nullptr ? !PlayerUberStateShards::Shard::get_PurchasableInShop_intercept(this_ptr->fields.m_spiritShard) : true;
            GameObject::SetActive(this_ptr->fields.IconGO, is_visible);

            auto texture = get_shard_icon(shard);
            if (texture == nullptr)
                texture = shops::get_icon(shops::ShopType::None, nullptr);

            texture->apply(renderer);
        } else {
            auto renderer = il2cpp::unity::get_components<app::Renderer>(
                    this_ptr->fields.IconGO, "UnityEngine", "Renderer"
            )[0];
            randomizer::textures::apply_default(renderer);
            SpiritShardUIItem::UpdateShardIcon(this_ptr);
        }
    }

    IL2CPP_BINDING(, MessageProvider, app::String__Array*, GetAllMessages, (app::MessageProvider * this_ptr));
    IL2CPP_BINDING(, MessageBox, void, SetMessage, (app::MessageBox * this_ptr, app::MessageDescriptor* descriptor, app::String* replace, app::String* with));
    IL2CPP_INTERCEPT(, SpiritShardDescription, int, get_BuyCost, (app::SpiritShardDescription * this_ptr)) {
        return csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(this_ptr->fields.InitialBuyCost));
    }

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_InitialPurchaseAffordable, (app::PlayerUberStateShards_Shard * this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardShopUIItem, void, UpdateShard, (app::SpiritShardShopUIItem * this_ptr, app::PlayerUberStateShards_Shard* shard)) {
        auto owned = true;
        auto visible = false;
        if (shard != nullptr) {
            SpiritShardUIItem::UpdateShardIcon_intercept(this_ptr->fields.Shard);
            owned = csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));
            visible = PlayerUberStateShards::Shard::get_VisibleInShop_intercept(shard);
            auto cost = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));
            auto purchasable = PlayerUberStateShards::Shard::get_PurchasableInShop_intercept(shard);

            auto affordable = get_experience() >= cost;
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.IconGO, "UnityEngine", "Renderer");
            auto background_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.Background, "UnityEngine", "Renderer");
            if ((purchasable && !owned) && (affordable && !owned)) {
                randomizer::shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.PurchasableColor);
                randomizer::shaders::UberShaderAPI::SetColor(background_renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.PurchasableColor);
            } else {
                randomizer::shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.UnpurchaseableColor);
                randomizer::shaders::UberShaderAPI::SetColor(background_renderer, app::UberShaderProperty_Color__Enum_MainColor, &this_ptr->fields.UnpurchaseableColor);
            }

            auto descriptions = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance->fields.Descriptions;
            auto* shard_description = il2cpp::invoke<app::SpiritShardDescription>(descriptions, "GetValue", &shard->fields.m_type);
            // auto cost = SpiritShardDescription::get_BuyCost(shard_description);
            app::MessageDescriptor descriptor = { 0 };
            descriptor.Message = il2cpp::string_new(std::to_string(cost));
            auto empty = il2cpp::string_new("");
            MessageBox::SetMessage(il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.CostGO, "", "MessageBox"), &descriptor, empty, empty);

            auto enabled = purchasable && !owned && affordable;
            GameObject::SetActive(this_ptr->fields.PurchasableGO, visible && enabled);
            GameObject::SetActive(this_ptr->fields.NotPurchasableGO, visible && !enabled);
        }

        GameObject::SetActive(this_ptr->fields.CostGO, visible && !owned);
        GameObject::SetActive(this_ptr->fields.SpiritLightGO, visible && !owned);
        GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, owned);
    }
} // namespace

namespace shops {
    std::shared_ptr<randomizer::textures::TextureData> get_twillen_icon(app::UpgradableShardItem* shop_item) {
        auto* const item = reinterpret_cast<app::UpgradableShardItem*>(shop_item);
        return get_shard_icon(item->fields.Shard);
    }
} // namespace shops

INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool is_locked, bool is_visible) {
    const auto key = static_cast<uint8_t>(shard);
    auto& item = twillen_overrides[key];
    set_item(item, name, description, texture, false, is_locked, is_visible);
}
