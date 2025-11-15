#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/BuilderItem.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/ShopkeeperScreen___c.h>
#include <Modloader/app/methods/ShopkeeperUIDetails.h>
#include <Modloader/app/methods/ShopkeeperUIItem.h>
#include <Modloader/app/methods/ShopkeeperUISubItem.h>
#include <Modloader/app/methods/SpellUIShardEquipStatus.h>
#include <Modloader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/structs/Int32__Boxed.h>
#include <Modloader/app/types/BuilderItem.h>
#include <Modloader/app/types/CleverMenuItem.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/ShardUpgradeScreen.h>
#include <Modloader/app/types/ShopkeeperUISubItem.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/app/types/WeaponmasterItem.h>
#include <Modloader/app/types/WeaponmasterScreen.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include "opher.h"

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace app::classes::UnityEngine;
    using namespace app::classes::CatlikeCoding::TextBox;
    using namespace randomizer::game::shops;

    // Generic --------------------------------

    // All of this code is horrendous.
    // ---------------------------------------------------
    bool stop_shop_overwrite = false;
    bool should_shop_overwrite = false;
    IL2CPP_INTERCEPT(void, ShopkeeperScreen, Show, app::ShopkeeperScreen * this_ptr) {
        if (il2cpp::is_assignable(this_ptr, types::WeaponmasterScreen::get_class()) || il2cpp::is_assignable(this_ptr, types::ShardUpgradeScreen::get_class())) {
            stop_shop_overwrite = false;
            should_shop_overwrite = true;
        }

        // csharp_bridge::update_shop_data();
        next::ShopkeeperScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(void, ShopkeeperScreen, PopulateInventoryCanvasWithUpgrades, app::ShopkeeperScreen * this_ptr) {
        if (!il2cpp::is_assignable(this_ptr, types::WeaponmasterScreen::get_class())) {
            this_ptr->fields.SortedByCost = true; // This is needed to run the sort, but we override it with our custom sort function
        }

        next::ShopkeeperScreen::PopulateInventoryCanvasWithUpgrades(this_ptr);
    }

    float stop_overwrite_time = 4.0f;

    [[maybe_unused]]
    auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (stop_shop_overwrite) {
            stop_overwrite_time -= TimeUtility::get_fixedDeltaTime();
            if (stop_overwrite_time < 0.0f) {
                stop_shop_overwrite = false;
                should_shop_overwrite = false;
            }
        }
    });

    IL2CPP_INTERCEPT(void, ShopkeeperScreen, Hide, app::ShopkeeperScreen * this_ptr, bool change) {
        next::ShopkeeperScreen::Hide(this_ptr, change);
        stop_overwrite_time = 1.0f;
        stop_shop_overwrite = true;
    }

    app::ShopkeeperItem* selected_item;
    IL2CPP_INTERCEPT(void, ShopkeeperScreen, UpdateContextCanvasShards, app::ShopkeeperScreen * this_ptr) {
        selected_item = ShopkeeperScreen::get_SelectedUpgradeItem(this_ptr);
        next::ShopkeeperScreen::UpdateContextCanvasShards(this_ptr);
    }

    bool locked_shop_overwrite = false;
    IL2CPP_INTERCEPT(void, ShopkeeperUIDetails, ShowEmptyDetails, app::ShopkeeperUIDetails * this_ptr) {
        if (should_shop_overwrite && selected_item != nullptr) {
            modloader::ScopedSetter set(locked_shop_overwrite, true);
            ShopkeeperUIDetails::UpdateDetails(this_ptr);
        } else {
            next::ShopkeeperUIDetails::ShowEmptyDetails(this_ptr);
        }
    }
    // ---------------------------------------------------

    std::shared_ptr<core::api::graphics::textures::TextureData> shop_icon(app::ShopkeeperItem* item) {
        if (is_in_shop(ShopType::Opher)) {
            auto opher_item = reinterpret_cast<app::WeaponmasterItem*>(item);
            auto& slot = opher::get_slot(opher_item->fields.Upgrade->fields.AcquiredAbilityType, opher_item->fields.Upgrade->fields.RequiredAbility);
            return slot.icon();
        }

        // Grom
        auto grom_item = reinterpret_cast<app::BuilderItem*>(item);
        return shops().grom_shop().slot(grom_item->fields.Project->fields.UberState).value().get().icon();
    }

    IL2CPP_INTERCEPT(void, ShopkeeperUIDetails, UpdateDetails2, app::ShopkeeperUIDetails * this_ptr) {
        // TODO: Fix details panel on ophers shop.
        next::ShopkeeperUIDetails::UpdateDetails2(this_ptr);
        if (is_in_shop(ShopType::Opher) || is_in_shop(ShopType::Grom)) {
            const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            const auto texture_data = shop_icon(this_ptr->fields.m_item);
            texture_data->apply(renderer);
            GameObject::SetActive(this_ptr->fields.IconGO, this_ptr->fields.m_item != nullptr);
        }
    }

    void set_message_providers(app::ShopkeeperItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider) {
        const auto apply_providers = [&](const ShopUIShopSlot& slot) {
            name_provider = slot.name.get_provider();
            description_provider = slot.description.get_provider();
        };

        if (is_in_shop(ShopType::Opher)) {
            const auto opher_item = reinterpret_cast<app::WeaponmasterItem*>(item);
            const auto& slot = opher::get_slot(opher_item->fields.Upgrade->fields.AcquiredAbilityType, opher_item->fields.Upgrade->fields.RequiredAbility);
            apply_providers(slot);
        } else {
            // Grom
            const auto grom_item = reinterpret_cast<app::BuilderItem*>(item);
            const auto& slot = shops().grom_shop().slot(grom_item->fields.Project->fields.UberState);
            apply_providers(slot.value().get());
        }
    }

    IL2CPP_INTERCEPT(void, ShopkeeperUIDetails, UpdateDetails, app::ShopkeeperUIDetails * this_ptr) {
        if (!is_in_shop(ShopType::Opher) && !is_in_shop(ShopType::Grom)) {
            next::ShopkeeperUIDetails::UpdateDetails(this_ptr);
            return;
        }

        if (this_ptr->fields.m_item == nullptr) {
            return;
        }

        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        set_message_providers(this_ptr->fields.m_item, name_provider, description_provider);

        auto* const name_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
        auto* const description_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());
        const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;

        name_box->fields.MessageProvider = name_provider;
        description_box->fields.MessageProvider = description_provider;

        MessageBox::RefreshText_1(name_box);
        MessageBox::RefreshText_1(description_box);

        // Need to do this as UpdateDetails2 overwrites the messageprovider.
        auto* const temp = this_ptr->fields.LockedDescription;
        if (is_locked || locked_shop_overwrite) {
            this_ptr->fields.LockedDescription = description_box->fields.MessageProvider;
        }

        ShopkeeperUIDetails::UpdateDetails2(this_ptr);
        description_box->fields.MessageProvider = temp;

        if (this_ptr->fields.ShowEquipStatus) {
            SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum::None);
        }
    }

    IL2CPP_INTERCEPT(void, ShopkeeperUISubItem, UpdateItem, app::ShopkeeperUISubItem * this_ptr) {
        if (is_in_shop(ShopType::Opher) || is_in_shop(ShopType::Grom)) {
            const auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsVisible")->fields;
            const auto is_owned = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsOwned")->fields;
            const auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsAffordable")->fields;
            // const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;
            const auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsMaxLevel")->fields;

            auto menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, types::CleverMenuItem::get_class());
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            auto texture_data = shop_icon(this_ptr->fields.m_item);
            texture_data->apply(renderer);
            if (this_ptr->fields.m_item == nullptr) {
                CleverMenuItem::set_IsDisabled(menu_item, true);
                return;
            }

            if (!is_visible || is_max_level) {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO)) {
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, false);
                }

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO)) {
                    GameObject::SetActive(this_ptr->fields.OreGO, false);
                }
            }

            auto value = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemCurrentLevel")->fields;
            auto max_level = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemMaxLevel")->fields;
            if (max_level < value) {
                value = max_level;
            }

            if (il2cpp::unity::is_valid(this_ptr->fields.Backdrop)) {
                SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, 0, 0);
                // SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, value, max_level);
            }

            if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO)) {
                GameObject::SetActive(this_ptr->fields.SpiritLightGO, !this_ptr->fields.ShowOre);
            }

            if (il2cpp::unity::is_valid(this_ptr->fields.OreGO)) {
                GameObject::SetActive(this_ptr->fields.OreGO, this_ptr->fields.ShowOre);
            }

            const auto cost = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "GetCostForLevel", &value)->fields;
            if (il2cpp::unity::is_valid(this_ptr->fields.CostGO) && GameObject::get_activeSelf(this_ptr->fields.CostGO)) {
                const auto text = il2cpp::string_new(std::to_string(cost));
                const auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, types::TextBox::get_class());
                TextBox::SetText_2(text_box, text);
                TextBox::RenderText(text_box);
            }

            CleverMenuItem::set_IsDisabled(menu_item, is_owned || is_max_level || !is_affordable);
        } else {
            next::ShopkeeperUISubItem::UpdateItem(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(void, ShopkeeperUIItem, UpdateItem, app::ShopkeeperUIItem * this_ptr, app::ShopkeeperItem* item) {
        if (is_in_shop(ShopType::Opher) || is_in_shop(ShopType::Grom)) {
            const auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsVisible")->fields;
            const auto is_owned = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsOwned")->fields;
            const auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsAffordable")->fields;
            const auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsLocked")->fields;
            const auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(item, "get_IsMaxLevel")->fields;

            auto available = !is_locked && !is_max_level;
            GameObject::SetActive(this_ptr->fields.LockedGO, !is_visible);
            GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, is_visible && is_owned); // !(available && is_affordable) || (!is_locked && is_max_level));
            GameObject::SetActive(this_ptr->fields.AvailableToBuyGO, is_visible && available && is_affordable);
            GameObject::SetActive(this_ptr->fields.TooExpensiveGO, is_visible && !is_max_level && (!is_affordable || is_locked));

            auto ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.LockedGO, types::ShopkeeperUISubItem::get_class());
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AlreadyOwnedGO, types::ShopkeeperUISubItem::get_class());
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AvailableToBuyGO, types::ShopkeeperUISubItem::get_class());
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.TooExpensiveGO, types::ShopkeeperUISubItem::get_class());
            ui_sub_item->fields.m_item = item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);
        } else {
            next::ShopkeeperUIItem::UpdateItem(this_ptr, item);
        }
    }
} // namespace
