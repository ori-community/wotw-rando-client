#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/system/message_provider.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/utils/misc.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards_Shard.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/SpellUIExperience.h>
#include <Modloader/app/methods/SpellUIShardEquipStatus.h>
#include <Modloader/app/methods/SpiritShardDescription.h>
#include <Modloader/app/methods/MenuScreen.h>
#include <Modloader/app/methods/SpiritShardShopUIItem.h>
#include <Modloader/app/methods/SpiritShardUIItem.h>
#include <Modloader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/methods/SpiritShardUIShardDetails.h>
#include <Modloader/app/methods/SpiritShardsShopScreen.h>
#include <Modloader/app/methods/SpiritShardsShopScreen___c.h>
#include <Modloader/app/methods/System/String.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Boxed.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/SpellUIExperience.h>
#include <Modloader/app/types/SpiritShardSettings.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/shops/twillen.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <frozen/unordered_map.h>
#include <set>


namespace randomizer::game::shops::twillen {
    std::optional<ShopSlot::is_purchased_state_id_t> get_state_id_optional_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type) {
        switch (spirit_shard_type) {
            case app::SpiritShardType__Enum::GlassCannon:
                return uber_states::state<"twillenShop", "overcharge">();
            case app::SpiritShardType__Enum::TripleJump:
                return uber_states::state<"twillenShop", "tripleJump">();
            case app::SpiritShardType__Enum::AntiAir:
                return uber_states::state<"twillenShop", "wingclip">();
            case app::SpiritShardType__Enum::Swap:
                return uber_states::state<"twillenShop", "swap">();
            case app::SpiritShardType__Enum::SpiritLightLuck:
                return uber_states::state<"twillenShop", "lightHarvest">();
            case app::SpiritShardType__Enum::Vitality:
                return uber_states::state<"twillenShop", "vitality">();
            case app::SpiritShardType__Enum::Energy:
                return uber_states::state<"twillenShop", "energy">();
            case app::SpiritShardType__Enum::CombatLuck:
                return uber_states::state<"twillenShop", "finesse">();
            default:
                return std::nullopt;
        }
    }

    ShopSlot::is_purchased_state_id_t get_state_id_for_spirit_shard_type(app::SpiritShardType__Enum spirit_shard_type) {
        const auto state = get_state_id_optional_for_spirit_shard_type(spirit_shard_type);
        if (!state.has_value()) {
            throw std::runtime_error(std::format("Invalid Twillen shop slot shard type: {}", static_cast<int>(spirit_shard_type)));
        }

        return *state;
    }

    ShopCollection::twillen_shop_t::slot_t& get_slot(app::SpiritShardType__Enum spirit_shard_type) {
        const auto slot = shops()->twillen_shop().slot(get_state_id_for_spirit_shard_type(spirit_shard_type));

        if (!slot.has_value()) {
            throw std::exception("Missing Twillen shop slot");
        }

        return slot.value().get();
    }

    ShopCollection::twillen_shop_t::slot_t& get_slot(const app::PlayerUberStateShards_Shard* upgradable_shard_item) {
        return get_slot(upgradable_shard_item->fields.m_type);
    }

    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::twillen_shop_t::slot_t& slot) {
        const auto cost = slot.cost.get();
        return {
            .visibility = slot.visibility(),
            .is_affordable = core::api::game::player::spirit_light().get() >= cost,
            .is_owned = is_owned(slot),
            .cost = cost,
            .name_message_provider = core::api::system::create_message_provider(slot.name),
            .description_message_provider = core::api::system::create_message_provider(slot.description),
            .shop_type = ShopType::Twillen,
        };
    }

    std::optional<std::reference_wrapper<ShopCollection::twillen_shop_t::slot_t>> get_slot_optional(app::SpiritShardType__Enum spirit_shard_type) {
        const auto state_id = get_state_id_optional_for_spirit_shard_type(spirit_shard_type);

        if (!state_id.has_value()) {
            return std::nullopt;
        }

        return shops()->twillen_shop().slot(*state_id);
    }

    namespace {
        using namespace modloader;
        using namespace app::classes;
        using namespace app::classes::UnityEngine;
        using namespace randomizer::game::shops;

        constexpr frozen::unordered_map<app::SpiritShardType__Enum, int, 8> TWILLEN_SHOP_ORDER = {
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

        IL2CPP_INTERCEPT(void, SpiritShardShopUIItem, Update, app::SpiritShardShopUIItem* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, SpiritShardShopUIItem, UpdateShard, app::SpiritShardShopUIItem* this_ptr, app::PlayerUberStateShards_Shard* shard) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, SpiritShardShopUIItem, SetItemContext, app::SpiritShardShopUIItem* this_ptr, app::Object* context, app::Object* grid_context) {
            const auto shard = reinterpret_cast<app::PlayerUberStateShards_Shard*>(context);

            if (shard == nullptr) {
                return;
            }

            this_ptr->fields.m_spiritShard = shard;

            auto& slot = get_slot(shard);
            const auto attributes = get_slot_attributes(slot);

            // Vanilla is missing a Lock icon, so we copy it from the disabled spiritShardUIItem game object
            auto randomizer_lock_icon = il2cpp::unity::find_child(this_ptr, "RandoLocked");
            if (randomizer_lock_icon == nullptr) {
                randomizer_lock_icon = il2cpp::unity::instantiate_object(il2cpp::unity::find_child(this_ptr, {"spiritShardUIItem", "locked"}));
                il2cpp::unity::set_object_name(randomizer_lock_icon, "RandoLocked");
                il2cpp::unity::set_parent(randomizer_lock_icon, this_ptr, true);
            }

            // LockedGO is actually used for the Hidden state
            il2cpp::unity::set_active(this_ptr->fields.SpiritLightGO, false);
            il2cpp::unity::set_active(this_ptr->fields.AlreadyOwnedGO, false);
            il2cpp::unity::set_active(this_ptr->fields.CostGO, false);
            il2cpp::unity::set_active(this_ptr->fields.PurchasableGO, false);
            il2cpp::unity::set_active(this_ptr->fields.NotPurchasableGO, false);
            il2cpp::unity::set_active(this_ptr->fields.Shard->fields.Background, false);
            il2cpp::unity::set_active(this_ptr->fields.Shard->fields.UnknownGO, false);
            il2cpp::unity::set_active(randomizer_lock_icon, false);

            const auto can_purchase = attributes.can_purchase();
            const auto background = this_ptr->fields.Shard->fields.Background;
            const auto icon_go = this_ptr->fields.Shard->fields.IconGO;

            utils::set_color(il2cpp::unity::get_game_object(background), can_purchase ? this_ptr->fields.PurchasableColor : this_ptr->fields.UnpurchaseableColor);
            utils::set_color(icon_go, can_purchase ? this_ptr->fields.PurchasableColor : this_ptr->fields.UnpurchaseableColor);

            if (attributes.visibility == SlotVisibility::Hidden) {
                il2cpp::unity::set_active(this_ptr->fields.Shard->fields.UnknownGO, true);
                return;
            }

            il2cpp::unity::set_active(this_ptr->fields.Shard->fields.IconGO, true);
            il2cpp::unity::set_active(this_ptr->fields.Shard->fields.NotUpgradableGO, true);
            il2cpp::unity::set_active(this_ptr->fields.Shard->fields.Background, true);

            const auto icon_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.IconGO, types::Renderer::get_class());
            slot.icon()->apply_to(icon_renderer);

            if (attributes.is_owned) {
                il2cpp::unity::set_active(this_ptr->fields.AlreadyOwnedGO, true);
            } else {
                il2cpp::unity::set_active(this_ptr->fields.CostGO, true);
                il2cpp::unity::set_active(this_ptr->fields.SpiritLightGO, true);
                const auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, types::TextBox::get_class());
                CatlikeCoding::TextBox::TextBox::SetText_2(
                    text_box,
                    il2cpp::string_new(std::to_string(attributes.cost))
                );
                CatlikeCoding::TextBox::TextBox::RefreshText(text_box);
            }

            if (attributes.visibility == SlotVisibility::Locked) {
                il2cpp::unity::set_active(randomizer_lock_icon, true);
            }

            if (attributes.is_affordable) {
                il2cpp::unity::set_active(this_ptr->fields.PurchasableGO, true);
            } else {
                il2cpp::unity::set_active(this_ptr->fields.NotPurchasableGO, true);
            }
        }

        IL2CPP_INTERCEPT(bool, SpiritShardsShopScreen, CanPurchase, app::SpiritShardsShopScreen* this_ptr) {
            const auto shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
            const auto attributes = get_slot_attributes(get_slot(shard));
            return attributes.can_purchase();
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, CompletePurchase, app::SpiritShardsShopScreen* this_ptr) {
            const auto shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
            auto& slot = get_slot(shard);

            const auto sound = SpiritShardsShopScreen::get_PurchaseCompleteSound(this_ptr);
            MenuScreen::PlaySoundEvent(reinterpret_cast<app::MenuScreen*>(this_ptr), sound);

            const auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
                il2cpp::unity::get_game_object(types::UI::get_class()->static_fields->SeinUI), types::SpellUIExperience::get_class()
            );
            SpellUIExperience::Spend(ui_experience, slot.cost.get());

            buy_item(slot);
            SpiritShardsShopScreen::UpdateContextCanvasShards(this_ptr);
        }

        auto is_updating_shop_screen = false;
        IL2CPP_INTERCEPT(void, SpiritShardUIShardDetails, UpdateDetails, app::SpiritShardUIShardDetails* this_ptr) {
            if (!is_updating_shop_screen) {
                next::SpiritShardUIShardDetails::UpdateDetails(this_ptr);
                return;
            }

            auto& slot = get_slot(this_ptr->fields.m_item->fields.m_type);
            auto* const icon_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());

            const auto& icon = slot.icon();
            if (icon != nullptr) {
                icon->apply_to(icon_renderer);
            }

            auto* const name_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
            auto* const description_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());

            name_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
            name_box->fields.TextBox->fields.maxHeight = 8.f;

            description_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
            description_box->fields.TextBox->fields.maxHeight = 8.f;
            name_box->fields.MessageProvider = core::api::system::create_message_provider(slot.name);
            description_box->fields.MessageProvider = core::api::system::create_message_provider(slot.description);

            MessageBox::RefreshText_1(name_box);

            const auto name_box_position = il2cpp::unity::get_local_position(name_box);
            il2cpp::unity::set_local_position(
                description_box,
                // 0.4f is the in-game scaling factor of the name box, 0.2f for margin between the two boxes
                {name_box_position.x, name_box_position.y + name_box->fields.TextBox->fields.boundsBottom * 0.4f - 0.2f, 0.f}
            );

            MessageBox::RefreshText_1(description_box);
            SpiritShardUIShardDetails::UpdateUpgradeDetails(this_ptr);

            il2cpp::unity::set_active(this_ptr->fields.LevelNextGO, false);
            il2cpp::unity::set_active(this_ptr->fields.LevelNextDescriptionGO, false);
            SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Background, 0, 0);
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, OnNewItemHighlighted, app::SpiritShardsShopScreen* this_ptr, bool first_after_populating) {
            const auto selected_shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);

            if (this_ptr->fields.m_shardDetailsCanvas->fields.m_item != selected_shard) {
                this_ptr->fields.m_shardDetailsCanvas->fields.m_item = selected_shard;
                common::ScopedSetter _(is_updating_shop_screen, true);
                SpiritShardUIShardDetails::UpdateDetails(this_ptr->fields.m_shardDetailsCanvas);
            }
        }

        IL2CPP_INTERCEPT(void, SpiritShardsShopScreen, UpdateContextCanvasShards, app::SpiritShardsShopScreen* this_ptr) {
            const auto selected_shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);

            if (this_ptr->fields.m_shardDetailsCanvas->fields.m_item != selected_shard) {
                this_ptr->fields.m_shardDetailsCanvas->fields.m_item = selected_shard;
                common::ScopedSetter _(is_updating_shop_screen, true);
                SpiritShardUIShardDetails::UpdateDetails(this_ptr->fields.m_shardDetailsCanvas);
            }
        }
    } // namespace
} // namespace randomizer::game::shops::twillen
