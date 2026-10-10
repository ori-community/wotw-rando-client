#include <Randomizer/game/shops/shop.h>

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/MapmakerItem.h>
#include <Modloader/app/methods/MapmakerScreen.h>
#include <Modloader/app/methods/MapmakerScreen___c.h>
#include <Modloader/app/methods/MapmakerUIDetails.h>
#include <Modloader/app/methods/MapmakerUIItem.h>
#include <Modloader/app/methods/MapmakerUISubItem.h>
#include <Modloader/app/methods/MenuScreen.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/SpellUIExperience.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/CleverMenuItem.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/MapmakerUISubItem.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/SpellUIExperience.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Core/api/game/ui.h>
#include <Core/api/system/message_provider.h>
#include <Modloader/app/types/WeaponmasterScreen.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

#include "shared_grom_opher_tuley.h"

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace app::classes::UnityEngine;
    using namespace app::classes::CatlikeCoding::TextBox;
    using namespace randomizer::game::shops;

    ShopSlot::is_purchased_state_id_t get_state_id_from_vanilla_uber_state(const app::SerializedByteUberState* vanilla_uber_state) {
        switch (vanilla_uber_state->fields._.m_id->fields.m_id) {
            case 19396:
                return randomizer::uber_states::state<"lupoShop", "hcMapIcons">();
            case 41666:
                return randomizer::uber_states::state<"lupoShop", "shardMapIcons">();
            case 57987:
                return randomizer::uber_states::state<"lupoShop", "ecMapIcons">();
            default:
                throw std::runtime_error(std::format("Invalid Lupo shop slot vanilla state: {}", vanilla_uber_state->fields._.m_id->fields.m_id));
        }
    }

    ShopCollection::lupo_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state) {
        const auto slot = shops()->lupo_shop().slot(get_state_id_from_vanilla_uber_state(vanilla_state));

        if (!slot.has_value()) {
            throw std::exception("Missing Lupo shop slot");
        }

        return slot.value().get();
    }

    ShopCollection::lupo_shop_t::slot_t& get_slot(const app::MapmakerItem* mapmaker_item) {
        return get_slot(mapmaker_item->fields.UberState);
    }

    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::lupo_shop_t::slot_t& slot) {
        const auto cost = slot.cost.get();
        return {
            .visibility = slot.visibility(),
            .is_affordable = core::api::game::player::spirit_light().get() >= cost,
            .is_owned = is_owned(slot),
            .cost = cost,
            .name_message_provider = core::api::system::create_message_provider(slot.name),
            .description_message_provider = core::api::system::create_message_provider(slot.description),
            .shop_type = ShopType::Lupo,
        };
    }

    const std::unordered_map<int, int> LUPO_SHOP_ORDER = {
        {19396, 0},  // ecMapIcons
        {57987, 1},  // hcMapIcons
        {41666, 2},  // shardMapIcons
    };

    // Prevent Lupo from cleaning up (sorting) his shop
    IL2CPP_INTERCEPT(int32_t, MapmakerScreen___c, _PopulateInventoryCanvasWithUpgrades_b__59_0, app::MapmakerScreen_c * this_ptr, app::Object* a, app::Object* b) {
        const auto item_a = reinterpret_cast<app::MapmakerItem*>(a);
        const auto item_b = reinterpret_cast<app::MapmakerItem*>(b);

        return LUPO_SHOP_ORDER.at(item_a->fields.UberState->fields._.m_id->fields.m_id) - LUPO_SHOP_ORDER.at(item_b->fields.UberState->fields._.m_id->fields.m_id);
    }

    IL2CPP_INTERCEPT(void, MapmakerUIItem, UpdateIconsFromShard, app::MapmakerUIItem* this_ptr, app::MapmakerItem* upgrade_item, bool initialize) {
        // NOOP
    }

    IL2CPP_INTERCEPT(void, MapmakerUISubItem, UpdateItem, app::MapmakerUISubItem* this_ptr) {
        // NOOP
    }

    IL2CPP_INTERCEPT(void, MapmakerUISubItem, SetItemContext, app::MapmakerUISubItem* this_ptr, app::Object* context, app::Object* grid_context) {
        this_ptr->fields.m_upgradeItem = reinterpret_cast<app::MapmakerItem*>(context);
    }

    IL2CPP_INTERCEPT(void, MapmakerUISubItem, UpdateUpgradeIcon, app::MapmakerUISubItem* this_ptr) {
        // NOOP
    }

    IL2CPP_INTERCEPT(void, MapmakerUISubItem, SetUpgradeItem, app::MapmakerUISubItem* this_ptr, app::MapmakerItem* upgrade_item, app::Object* grid_context) {
        // NOOP
    }

    void apply_icon_to_sub_item(app::GameObject* sub_item_go, const core::api::graphics::textures::Texture::ptr_t& icon) {
        const auto sub_item = il2cpp::unity::get_component<app::MapmakerUISubItem>(sub_item_go, types::MapmakerUISubItem::get_class());
        const auto renderer = il2cpp::unity::get_component<app::Renderer>(sub_item->fields.IconGO, types::Renderer::get_class());
        icon->apply_to(renderer);
    }

    IL2CPP_INTERCEPT(void, MapmakerUIItem, UpdateMapmakerItem, app::MapmakerUIItem* this_ptr, app::MapmakerItem* upgrade_item) {
        auto& slot = get_slot(upgrade_item);
        const auto attributes = get_slot_attributes(slot);

        // We need Opher's screen to steal the Locked and Unknown game objects that Lupo doesn't have.
        const auto weaponmaster_screen = types::WeaponmasterScreen::get_class()->static_fields->_Instance_k__BackingField;

        if (weaponmaster_screen == nullptr) {
            // Opher wasn't home yet, try again later
            return;
        }

        // Vanilla is missing a Lock icon, so we yoink it from Opher
        auto randomizer_lock_icon = il2cpp::unity::find_child(this_ptr, "RandoLocked");
        if (randomizer_lock_icon == nullptr) {
            randomizer_lock_icon = il2cpp::unity::instantiate_object(il2cpp::unity::find_child(weaponmaster_screen->fields._.ItemPrefab, {"spiritShardUIItem", "locked"}));
            il2cpp::unity::set_object_name(randomizer_lock_icon, "RandoLocked");
            il2cpp::unity::set_parent(randomizer_lock_icon, this_ptr, true);
        }

        // Vanilla has a broken Unknown icon, so we yoink it from Opher and delete the vanilla one
        auto randomizer_unknown_icon = il2cpp::unity::find_child(this_ptr->fields.LockedGO, "RandoUnknown");
        if (randomizer_unknown_icon == nullptr) {
            randomizer_unknown_icon = il2cpp::unity::instantiate_object(il2cpp::unity::find_child(weaponmaster_screen->fields._.ItemPrefab, {"Locked", "unknown"}));
            il2cpp::unity::set_object_name(randomizer_unknown_icon, "RandoUnknown");
            il2cpp::unity::set_parent(randomizer_unknown_icon, this_ptr->fields.LockedGO, true);

            const auto vanilla_locked_icon = il2cpp::unity::find_child(this_ptr->fields.LockedGO, {"icon"});
            il2cpp::unity::destroy_object(vanilla_locked_icon);
        }

        // LockedGO is actually used for the Hidden state
        il2cpp::unity::set_active(this_ptr->fields.LockedGO, false);
        il2cpp::unity::set_active(this_ptr->fields.AlreadyOwnedGO, false);
        il2cpp::unity::set_active(this_ptr->fields.AvailableToBuyGO, false);
        il2cpp::unity::set_active(this_ptr->fields.TooExpensiveGO, false);
        il2cpp::unity::set_active(randomizer_lock_icon, false);

        if (attributes.visibility == SlotVisibility::Hidden) {
            il2cpp::unity::set_active(this_ptr->fields.LockedGO, true);
            return;
        }

        const auto icon = slot.icon();
        apply_icon_to_sub_item(this_ptr->fields.AlreadyOwnedGO, icon);
        apply_icon_to_sub_item(this_ptr->fields.AvailableToBuyGO, icon);
        apply_icon_to_sub_item(this_ptr->fields.TooExpensiveGO, icon);

        if (attributes.visibility == SlotVisibility::Locked) {
            il2cpp::unity::set_active(randomizer_lock_icon, true);
        }

        if (attributes.is_owned) {
            il2cpp::unity::set_active(this_ptr->fields.AlreadyOwnedGO, true);
        } else if (attributes.is_affordable && attributes.visibility != SlotVisibility::Locked) {
            il2cpp::unity::set_active(this_ptr->fields.AvailableToBuyGO, true);
        } else {
            il2cpp::unity::set_active(this_ptr->fields.TooExpensiveGO, true);
        }
    }

    IL2CPP_INTERCEPT(void, MapmakerUISubItem, UpdateUpgradeItemProperties, app::MapmakerUISubItem* this_ptr, app::Object* grid_context, bool initialize) {
        const auto attributes = get_slot_attributes(get_slot(this_ptr->fields.m_upgradeItem));

        const auto clever_menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(
            il2cpp::unity::get_game_object(this_ptr), types::CleverMenuItem::get_class()
        );
        CleverMenuItem::set_IsDisabled(clever_menu_item, !attributes.can_purchase());

        if (this_ptr->fields.CostGO != nullptr) {
            const auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, types::TextBox::get_class());
            TextBox::SetText_2(
                text_box,
                il2cpp::string_new(std::to_string(attributes.cost))
            );
            TextBox::RefreshText(text_box);
        }
    }

    IL2CPP_INTERCEPT(bool, MapmakerScreen, CanPurchase, app::MapmakerScreen* this_ptr) {
        const auto item = MapmakerScreen::get_SelectedUpgradeItem(this_ptr);
        const auto attributes = get_slot_attributes(get_slot(item));
        return attributes.can_purchase();
    }

    IL2CPP_INTERCEPT(void, MapmakerScreen, CompletePurchase, app::MapmakerScreen *this_ptr) {
        const auto item = MapmakerScreen::get_SelectedUpgradeItem(this_ptr);
        auto& slot = get_slot(item);

        const auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
            il2cpp::unity::get_game_object(core::api::game::ui::get()->static_fields->SeinUI),
            types::SpellUIExperience::get_class()
        );

        SpellUIExperience::Spend(ui_experience, slot.cost.get());
        buy_item(slot);

        const auto sound = MapmakerScreen::get_PurchaseCompleteSound(this_ptr);
        MenuScreen::PlaySoundEvent(reinterpret_cast<app::MenuScreen*>(this_ptr), sound);
        this_ptr->fields._PurchasedSkillUpgrade_k__BackingField = true;
        MapmakerScreen::UpdateContextCanvasShards(this_ptr);
    }

    IL2CPP_INTERCEPT(void, MapmakerUIDetails, UpdateDetails, app::MapmakerUIDetails * this_ptr) {
        const auto item = this_ptr->fields.m_item;
        const auto icon_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());

        auto& slot = get_slot(item->fields.UberState);
        const auto attributes = get_slot_attributes(slot);

        const auto icon = slot.icon();
        if (icon != nullptr) {
            icon->apply_to(icon_renderer);
        }

        const auto can_purchase = attributes.can_purchase();
        const auto icon_color = can_purchase ? this_ptr->fields.PurchasableColor : this_ptr->fields.NotPurchasableColor;
        UberShaderAPI::SetColor_1(icon_renderer, app::UberShaderProperty_Color__Enum::MainColor, icon_color);

        const auto name_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
        const auto description_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());

        name_message_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
        name_message_box->fields.TextBox->fields.maxHeight = 8.f;

        description_message_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
        description_message_box->fields.TextBox->fields.maxHeight = 8.f;

        name_message_box->fields.MessageProvider = attributes.name_message_provider;
        description_message_box->fields.MessageProvider = attributes.description_message_provider;

        MessageBox::RefreshText_1(name_message_box);

        const auto name_message_box_position = il2cpp::unity::get_local_position(name_message_box);
        il2cpp::unity::set_local_position(
            description_message_box,
            // 0.4f is the in-game scaling factor of the name box, 0.2f for margin between the two boxes
            {name_message_box_position.x, name_message_box_position.y + name_message_box->fields.TextBox->fields.boundsBottom * 0.4f - 0.2f, 0.f}
        );

        MessageBox::RefreshText_1(description_message_box);

        GameObject::SetActive(this_ptr->fields.PurchasableGO, can_purchase);
        // TooExpensiveGO just shows a "Not enough Spirit Light" message at the bottom that we don't need.
        // OwnedGO just has the grey ring around the icon.
        GameObject::SetActive(this_ptr->fields.TooExpensiveGO, false);
        GameObject::SetActive(this_ptr->fields.OwnedGO, !can_purchase);
    }
} // namespace
