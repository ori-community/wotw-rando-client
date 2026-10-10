#include "shared_grom_opher_tuley.h"


#include <Core/api/game/game.h>
#include <Core/api/system/message_provider.h>
#include <Modloader/app/methods/BuilderItem.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/GardenerItem.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/ShopkeeperUIDetails.h>
#include <Modloader/app/methods/ShopkeeperUIItem.h>
#include <Modloader/app/methods/ShopkeeperUISubItem.h>
#include <Modloader/app/methods/SpellUIShardEquipStatus.h>
#include <Modloader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Renderer.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/types/BuilderItem.h>
#include <Modloader/app/types/CleverMenuItem.h>
#include <Modloader/app/types/GardenerItem.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/ShardUpgradeScreen.h>
#include <Modloader/app/types/ShopkeeperUISubItem.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/app/types/UpgradableShardItem.h>
#include <Modloader/app/types/WeaponmasterItem.h>
#include <Modloader/app/types/WeaponmasterScreen.h>
#include <Modloader/app/types/CleverMenuItem.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/game/shops/grom.h>
#include <Randomizer/game/shops/opher.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/shops/tuley.h>
#include <Randomizer/randomizer.h>

#include "twillen.h"

namespace randomizer::game::shops {
    using namespace modloader;
    using namespace app::classes;
    using namespace app::classes::UnityEngine;
    using namespace app::classes::CatlikeCoding::TextBox;
    using namespace randomizer::game::shops;

    namespace {
        IL2CPP_INTERCEPT(void, ShopkeeperScreen, PopulateInventoryCanvasWithUpgrades, app::ShopkeeperScreen * this_ptr) {
            if (!il2cpp::is_assignable(this_ptr, types::WeaponmasterScreen::get_class())) {
                this_ptr->fields.SortedByCost = true; // This is needed to run the sort, but we override it with our custom sort function
            }

            next::ShopkeeperScreen::PopulateInventoryCanvasWithUpgrades(this_ptr);
        }

        ShopkeeperItemRuntimeAttributes get_attributes_for_item(app::ShopkeeperItem* item) {
            if (il2cpp::is_assignable(item, types::BuilderItem::get_class())) {
                return grom::get_slot_attributes(grom::get_slot(reinterpret_cast<app::BuilderItem*>(item)));
            }

            if (il2cpp::is_assignable(item, types::WeaponmasterItem::get_class())) {
                return opher::get_slot_attributes(opher::get_slot(reinterpret_cast<app::WeaponmasterItem*>(item)));
            }

            if (il2cpp::is_assignable(item, types::GardenerItem::get_class())) {
                return tuley::get_slot_attributes(tuley::get_slot(reinterpret_cast<app::GardenerItem*>(item)));
            }

            throw std::runtime_error("Invalid ShopkeeperItem passed to get_attributes_for_item");
        }

        core::api::graphics::textures::Texture::ptr_t get_icon_for_item(app::ShopkeeperItem* item) {
            if (il2cpp::is_assignable(item, types::BuilderItem::get_class())) {
                return grom::get_slot(reinterpret_cast<app::BuilderItem*>(item)).icon();
            }

            if (il2cpp::is_assignable(item, types::WeaponmasterItem::get_class())) {
                return opher::get_slot(reinterpret_cast<app::WeaponmasterItem*>(item)).icon();
            }

            if (il2cpp::is_assignable(item, types::GardenerItem::get_class())) {
                return tuley::get_slot(reinterpret_cast<app::GardenerItem*>(item)).icon();
            }

            throw std::runtime_error("Invalid ShopkeeperItem passed to get_icon_for_item");
        }

        // True if we discovered an UpgradableShardItem in the call stack.
        // This is just an optimization so we don't need to call is_assignable every time.
        auto is_in_stack_of_upgradable_shard_item = false;

        IL2CPP_INTERCEPT(void, ShopkeeperUIItem, UpdateIcons, app::ShopkeeperUIItem* this_ptr, app::ShopkeeperItem* upgrade_item, bool initialize) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(upgrade_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUIItem::UpdateIcons(this_ptr, upgrade_item, initialize);
            }

            // NOOP
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, SetItemContext, app::ShopkeeperUISubItem* this_ptr, app::Object* context, app::Object* grid_context) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(context, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUISubItem::SetItemContext(this_ptr, context, grid_context);
            }

            this_ptr->fields.m_item = reinterpret_cast<app::ShopkeeperItem*>(context);
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, SetItem, app::ShopkeeperUISubItem* this_ptr, app::ShopkeeperItem* upgrade_item, app::Object* grid_context) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(upgrade_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUISubItem::SetItem(this_ptr, upgrade_item, grid_context);
            }

            // NOOP
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, UpdateIcon, app::ShopkeeperUISubItem* this_ptr) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(this_ptr->fields.m_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUISubItem::UpdateIcon(this_ptr);
            }

            // NOOP
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, UpdateItem, app::ShopkeeperUISubItem* this_ptr) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(this_ptr->fields.m_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUISubItem::UpdateItem(this_ptr);
            }

            // NOOP
        }

        void apply_icon_to_sub_item(app::GameObject* sub_item_go, const core::api::graphics::textures::Texture::ptr_t& icon) {
            const auto sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(sub_item_go, types::ShopkeeperUISubItem::get_class());
            const auto renderer = il2cpp::unity::get_component<app::Renderer>(sub_item->fields.IconGO, types::Renderer::get_class());
            icon->apply_to(renderer);
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUIItem, UpdateItem, app::ShopkeeperUIItem* this_ptr, app::ShopkeeperItem* item) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUIItem::UpdateItem(this_ptr, item);
            }

            const auto attributes = get_attributes_for_item(item);

            // Vanilla is missing a Lock icon, so we copy it from the disabled spiritShardUIItem game object
            auto randomizer_lock_icon = il2cpp::unity::find_child(this_ptr, "RandoLocked");
            if (randomizer_lock_icon == nullptr) {
                randomizer_lock_icon = il2cpp::unity::instantiate_object(il2cpp::unity::find_child(this_ptr, {"spiritShardUIItem", "locked"}));
                il2cpp::unity::set_object_name(randomizer_lock_icon, "RandoLocked");
                il2cpp::unity::set_parent(randomizer_lock_icon, this_ptr, true);
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

            const auto icon = get_icon_for_item(item);
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

        IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, UpdateUpgradeItemProperties, app::ShopkeeperUISubItem* this_ptr, app::Object* grid_context, bool initialize) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(this_ptr->fields.m_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUISubItem::UpdateUpgradeItemProperties(this_ptr, grid_context, initialize);
            }

            const auto attributes = get_attributes_for_item(this_ptr->fields.m_item);

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

        IL2CPP_INTERCEPT(bool, ShopkeeperScreen, CanPurchase, app::ShopkeeperScreen* this_ptr) {
            const auto item = ShopkeeperScreen::get_SelectedUpgradeItem(this_ptr);

            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperScreen::CanPurchase(this_ptr);
            }

            const auto attributes = get_attributes_for_item(item);
            return attributes.can_purchase();
        }

        IL2CPP_INTERCEPT(void, ShopkeeperUIDetails, UpdateDetails, app::ShopkeeperUIDetails* this_ptr) {
            // This function is used for Grom, Opher, Tuley and the Twillen Shard Upgrade screen.
            // Because the Twillen Shard Upgrade screen should stay vanilla, filter out UpgradableShardItems.
            if (is_in_stack_of_upgradable_shard_item || il2cpp::is_assignable(this_ptr->fields.m_item, types::UpgradableShardItem::get_class())) {
                common::ScopedSetter _(is_in_stack_of_upgradable_shard_item, true);
                return next::ShopkeeperUIDetails::UpdateDetails(this_ptr);
            }

            if (this_ptr->fields.m_item == nullptr) {
                return;
            }

            const auto attributes = get_attributes_for_item(this_ptr->fields.m_item);

            const auto icon_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            const auto name_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
            const auto description_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());

            const auto icon = get_icon_for_item(this_ptr->fields.m_item);
            if (icon != nullptr) {
                icon->apply_to(icon_renderer);
            }

            name_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
            name_box->fields.TextBox->fields.maxHeight = 8.f;

            description_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Top;
            description_box->fields.TextBox->fields.maxHeight = 8.f;

            name_box->fields.MessageProvider = attributes.name_message_provider;
            description_box->fields.MessageProvider = attributes.description_message_provider;

            MessageBox::RefreshText_1(name_box);

            const auto name_box_position = il2cpp::unity::get_local_position(name_box);
            il2cpp::unity::set_local_position(
                description_box,
                // 0.4f is the in-game scaling factor of the name box, in Opher's shop there's already enough margin between
                // the two boxes so we don't need additional margin. Otherwise 0.2f margin
                {name_box_position.x, name_box_position.y + name_box->fields.TextBox->fields.boundsBottom * 0.4f - (attributes.shop_type == ShopType::Opher ? 0.f : 0.2f), 0.f}
            );

            MessageBox::RefreshText_1(description_box);

            // TooExpensiveGO just shows a "Not enough Spirit Light" message at the bottom that we don't need.
            // UsesEnergyGO is the blue "Uses Energy" label that is present on some Opher weapons.
            il2cpp::unity::set_active(this_ptr->fields.TooExpensiveGO, false);
            if (this_ptr->fields.UsesEnergyGO != nullptr) {
                il2cpp::unity::set_active(this_ptr->fields.UsesEnergyGO, false);
            }

            il2cpp::unity::set_active(this_ptr->fields.NameGO, true);
            il2cpp::unity::set_active(this_ptr->fields.DescriptionGO, true);
            il2cpp::unity::set_active(this_ptr->fields.IconGO, true);
            il2cpp::unity::set_active(this_ptr->fields.Background, true);
        }

        IL2CPP_INTERCEPT(void, ShopkeeperScreen, OnNewItemHighlighted, app::ShopkeeperScreen* this_ptr, bool first_after_populating) {
            const auto selected_item = ShopkeeperScreen::get_SelectedUpgradeItem(this_ptr);

            if (this_ptr->fields.m_detailsCanvas->fields.m_item != selected_item) {
                this_ptr->fields.m_detailsCanvas->fields.m_item = selected_item;
                ShopkeeperUIDetails::UpdateDetails(this_ptr->fields.m_detailsCanvas);
            }
        }

        IL2CPP_INTERCEPT(void, ShopkeeperScreen, UpdateContextCanvasShards, app::ShopkeeperScreen* this_ptr) {
            const auto selected_item = ShopkeeperScreen::get_SelectedUpgradeItem(this_ptr);

            if (this_ptr->fields.m_detailsCanvas->fields.m_item != selected_item) {
                this_ptr->fields.m_detailsCanvas->fields.m_item = selected_item;
                ShopkeeperUIDetails::UpdateDetails(this_ptr->fields.m_detailsCanvas);
            }
        }
    } // namespace
} // namespace randomizer::game::shops
