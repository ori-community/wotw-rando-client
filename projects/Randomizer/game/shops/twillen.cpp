#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/shops/twillen.h>

#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards_Shard.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/SpellUIShardEquipStatus.h>
#include <Modloader/app/methods/SpiritShardDescription.h>
#include <Modloader/app/methods/SpiritShardShopUIItem.h>
#include <Modloader/app/methods/SpiritShardUIItem.h>
#include <Modloader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/methods/SpiritShardUIShardDetails.h>
#include <Modloader/app/methods/SpiritShardsShopScreen.h>
#include <Modloader/app/methods/SpiritShardsShopScreen___c.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Boxed.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/SpellUIExperience.h>
#include <Modloader/app/types/SpiritShardSettings.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Modloader/app/methods/SpellUIExperience.h>
#include <set>

namespace randomizer::game::shops::twillen {
    core::api::uber_states::UberState get_slot_key_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type) {
        return {UberStateGroup::TwillenShop, static_cast<int>(spirit_shard_type)};
    }

    ShopCollection::twillen_shop_t::slot_t& get_slot(app::SpiritShardType__Enum spirit_shard_type) {
        const auto slot = shops().twillen_shop().slot(get_slot_key_for_spirit_shard_type(spirit_shard_type));

        if (!slot.has_value()) {
            throw std::exception("Missing Twillen shop slot");
        }

        return slot.value().get();
    }

    namespace {
        using namespace modloader;
        using namespace app::classes;
        using namespace app::classes::UnityEngine;
        using namespace randomizer::game::shops;

        auto is_completing_purchase = false;

        const std::set<app::SpiritShardType__Enum> TWILLEN_SHARDS{
            app::SpiritShardType__Enum::GlassCannon,
            app::SpiritShardType__Enum::TripleJump,
            app::SpiritShardType__Enum::AntiAir,
            app::SpiritShardType__Enum::Swap,
            app::SpiritShardType__Enum::SpiritLightLuck,
            app::SpiritShardType__Enum::Vitality,
            app::SpiritShardType__Enum::Energy,
            app::SpiritShardType__Enum::CombatLuck
        };

        IL2CPP_INTERCEPT(bool, PlayerSpiritShards, HasShard, app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shard_type) {
            if (!is_completing_purchase && is_in_shop(ShopType::Twillen) && TWILLEN_SHARDS.contains(shard_type)) {
                return is_owned(get_slot(shard_type));
            }

            return next::PlayerSpiritShards::HasShard(this_ptr, shard_type);
        }

        IL2CPP_INTERCEPT(void, SpiritShardUIShardBackdrop, SetUpgradeCount, app::SpiritShardUIShardBackdrop* this_ptr, int actual, int total) {
            if (is_in_shop(ShopType::Twillen)) {
                actual = 0;
                total = 0;
            }

            next::SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, actual, total);
        }

        IL2CPP_INTERCEPT(bool, Moon::uberSerializationWisp::PlayerUberStateShards_Shard, get_VisibleInShop, app::PlayerUberStateShards_Shard* this_ptr) {
            auto const& slot = get_slot(this_ptr->fields.m_type);
            return slot.visibility() == SlotVisibility::Visible;
        }

        IL2CPP_INTERCEPT(bool, Moon::uberSerializationWisp::PlayerUberStateShards_Shard, get_PurchasableInShop, app::PlayerUberStateShards_Shard* this_ptr) {
            auto const& slot = get_slot(this_ptr->fields.m_type);
            return slot.visibility() != SlotVisibility::Locked;
        }

        bool overwrite_shard = false;
        app::PlayerUberStateShards_Shard* selected_shard;

        const std::unordered_map<app::SpiritShardType__Enum, int> TWILLEN_SHOP_ORDER = {
            {app::SpiritShardType__Enum::Energy,          0},
            {app::SpiritShardType__Enum::Vitality,        1},
            {app::SpiritShardType__Enum::AntiAir,         2},
            {app::SpiritShardType__Enum::CombatLuck,      3},
            {app::SpiritShardType__Enum::SpiritLightLuck, 4},
            {app::SpiritShardType__Enum::GlassCannon,     5},
            {app::SpiritShardType__Enum::Swap,            6},
            {app::SpiritShardType__Enum::TripleJump,      7},
        };

        // Prevent Twillen from cleaning up (sorting) his shop
        IL2CPP_INTERCEPT(
            int32_t,
            SpiritShardsShopScreen___c,
            _PopulateInventoryCanvasWithShards_b__68_0,
            app::SpiritShardsShopScreen_c* this_ptr,
            app::Object* a,
            app::Object* b
        ) {
            const auto shard_a = reinterpret_cast<app::PlayerUberStateShards_Shard*>(a);
            const auto shard_b = reinterpret_cast<app::PlayerUberStateShards_Shard*>(b);

            return TWILLEN_SHOP_ORDER.at(shard_a->fields.m_type) - TWILLEN_SHOP_ORDER.at(shard_b->fields.m_type);
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, UpdateContextCanvasShards, app::SpiritShardsShopScreen* this_ptr) {
            modloader::ScopedSetter setter(overwrite_shard, is_in_shop(ShopType::Twillen));
            selected_shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
            next::SpiritShardsShopScreen::UpdateContextCanvasShards(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, CompletePurchase, app::SpiritShardsShopScreen* this_ptr) {
            ScopedSetter _(is_completing_purchase, true);

            auto* const shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
            auto sound = SpiritShardsShopScreen::get_PurchaseCompleteSound(this_ptr);
            il2cpp::invoke(this_ptr, "PlaySoundEvent", sound);
            il2cpp::invoke(core::api::game::player::sein()->fields.PlayerSpiritShards->fields.OnInventoryUpdated, "Invoke", shard);

            auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
                il2cpp::unity::get_game_object(types::UI::get_class()->static_fields->SeinUI), types::SpellUIExperience::get_class()
            );

            if (il2cpp::unity::is_valid(ui_experience)) {
                SpellUIExperience::Spend(ui_experience, get_slot(shard->fields.m_type).cost.get());
            }

            buy_item(get_slot(shard->fields.m_type));
            Moon::uberSerializationWisp::PlayerUberStateShards_Shard::RunSetDirtyCallback(shard);
            UpdateContextCanvasShards(this_ptr);
        }

        bool locked_shard_overwrite = false;
        IL2CPP_INTERCEPT(void, SpiritShardUIShardDetails, UpdateDetails, app::SpiritShardUIShardDetails* this_ptr) {
            auto* const item = overwrite_shard ? selected_shard : this_ptr->fields.m_item;
            auto type = item->fields.m_type;
            auto slot = overwrite_shard ? std::make_optional(get_slot(this_ptr->fields.m_item->fields.m_type)) : std::nullopt;
            auto* const settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
            auto* const description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
            if ((!item->fields.m_gained && this_ptr->fields.RequireOwned) || locked_shard_overwrite) {
                type = app::SpiritShardType__Enum::None;
            }

            auto* const renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            if (overwrite_shard) {
                const auto& icon = slot->icon();
                if (icon == nullptr) {
                    core::api::graphics::textures::apply_default(renderer);
                } else {
                    icon->apply(renderer);
                }
            } else {
                static std::unordered_map<app::SpiritShardType__Enum, std::shared_ptr<core::api::graphics::textures::TextureData>> shard_textures;
                auto it = shard_textures.find(type);
                if (it == shard_textures.end()) {
                    auto shard_icons = types::SpiritShardSettings::get_class()->static_fields->Instance->fields.Icons;
                    auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &type);

                    auto texture = core::api::graphics::textures::create_texture();
                    texture->set_texture(reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon));
                    shard_textures[type] = texture;
                    it = shard_textures.find(type);
                }

                it->second->apply(renderer);
            }

            auto* const name_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
            auto* const description_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());

            if (overwrite_shard) {
                name_box->fields.MessageProvider = slot->name.get_provider();
                description_box->fields.MessageProvider = slot->description.get_provider();
            } else if (type == app::SpiritShardType__Enum::None) {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
            } else {
                name_box->fields.MessageProvider = description->fields.Name;
                auto* const property_levels = description->fields.UpgradablePropertyLevels;
                auto* const property_level = property_levels->fields._items->vector[item->fields.m_level];
                description_box->fields.MessageProvider = property_level->fields.Description;
            }

            MessageBox::RefreshText_1(name_box);
            MessageBox::RefreshText_1(description_box);
            SpiritShardUIShardDetails::UpdateUpgradeDetails(this_ptr);

            auto active = false;
            il2cpp::invoke(this_ptr->fields.LevelNextGO, "SetActive", &active);
            il2cpp::invoke(this_ptr->fields.LevelNextDescriptionGO, "SetActive", &active);
            if (this_ptr->fields.ShowEquipStatus) {
                SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum::None);
            }
        }

        IL2CPP_INTERCEPT(void, SpiritShardUIShardDetails, ShowEmptyDetails, app::SpiritShardUIShardDetails* this_ptr) {
            if (overwrite_shard && selected_shard != nullptr) {
                modloader::ScopedSetter setter(locked_shard_overwrite, true);
                this_ptr->fields.m_item = selected_shard;
                SpiritShardUIShardDetails::UpdateDetails(this_ptr);
                this_ptr->fields.m_item = nullptr;
            } else {
                next::SpiritShardUIShardDetails::ShowEmptyDetails(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, Show, app::SpiritShardsShopScreen* this_ptr) {
            // csharp_bridge::update_shop_data();
            auto sein = core::api::game::player::sein();
            if (sein != nullptr && sein->fields.PlayerSpiritShards != nullptr) {
                auto settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
                for (auto shard: il2cpp::ListIterator(sein->fields.PlayerSpiritShards->fields.InventoryItemsAvailableToBuy)) {
                    const auto desc = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &shard);
                    // We overwrite get_BuyCost on SpiritShardDescription to use InitialBuyCost as the shard index into our shop.
                    desc->fields.InitialBuyCost = static_cast<int>(shard);
                }
            }

            next::SpiritShardsShopScreen::Show(this_ptr);
        }

        IL2CPP_INTERCEPT(void, SpiritShardUIItem, UpdateShardIcon, app::SpiritShardUIItem* this_ptr) {
            if (is_in_shop(ShopType::Twillen)) {
                if (this_ptr->fields.m_spiritShard != nullptr) {
                    auto& slot = get_slot(this_ptr->fields.m_spiritShard->fields.m_type);
                    const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
                    const auto is_visible = slot.visibility() == SlotVisibility::Visible;
                    const auto is_locked = slot.visibility() == SlotVisibility::Locked;
                    GameObject::SetActive(this_ptr->fields.IconGO, is_visible);
                    GameObject::SetActive(this_ptr->fields.LockedGO, is_locked);

                    const auto icon = slot.icon();
                    if (icon == nullptr) {
                        core::api::graphics::textures::apply_default(renderer);
                    } else {
                        icon->apply(renderer);
                    }

                    return;
                }
            }

            const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            core::api::graphics::textures::apply_default(renderer);
            next::SpiritShardUIItem::UpdateShardIcon(this_ptr);
        }

        IL2CPP_INTERCEPT(int, SpiritShardDescription, get_BuyCost, app::SpiritShardDescription* this_ptr) {
            return get_slot(static_cast<app::SpiritShardType__Enum>(this_ptr->fields.InitialBuyCost)).cost.get();
        }

        IL2CPP_INTERCEPT(void, SpiritShardShopUIItem, UpdateShard, app::SpiritShardShopUIItem* this_ptr, app::PlayerUberStateShards_Shard* shard) {
            auto owned = true;
            auto visible = false;
            if (shard != nullptr) {
                const auto& slot = get_slot(this_ptr->fields.Shard->fields.m_spiritShard->fields.m_type);
                SpiritShardUIItem::UpdateShardIcon(this_ptr->fields.Shard);
                owned = is_owned(slot);
                visible = Moon::uberSerializationWisp::PlayerUberStateShards_Shard::get_VisibleInShop(shard);
                const auto cost = slot.cost.get();
                const auto purchasable = slot.visibility() == SlotVisibility::Visible;

                const auto affordable = core::api::game::player::spirit_light().get() >= cost;
                const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.IconGO, types::Renderer::get_class());
                const auto background_renderer = il2cpp::unity::get_component<app::Renderer>(
                    this_ptr->fields.Shard->fields.Background, types::Renderer::get_class()
                );
                if (purchasable && affordable && !owned) {
                    UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.PurchasableColor);
                    UberShaderAPI::SetColor_1(background_renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.PurchasableColor);
                } else {
                    UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.UnpurchaseableColor);
                    UberShaderAPI::SetColor_1(background_renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.UnpurchaseableColor);
                }

                app::MessageDescriptor descriptor = {0};
                descriptor.Message = il2cpp::string_new(std::to_string(cost));
                const auto empty = il2cpp::string_new("");
                MessageBox::SetMessage(
                    il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.CostGO, types::MessageBox::get_class()), descriptor, empty, empty
                );

                const auto enabled = purchasable && !owned && affordable;
                GameObject::SetActive(this_ptr->fields.PurchasableGO, visible && enabled);
                GameObject::SetActive(this_ptr->fields.NotPurchasableGO, visible && !enabled);
            }

            GameObject::SetActive(this_ptr->fields.CostGO, visible && !owned);
            GameObject::SetActive(this_ptr->fields.SpiritLightGO, visible && !owned);
            GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, owned);
        }
    } // namespace
} // namespace randomizer::game::shops::twillen
