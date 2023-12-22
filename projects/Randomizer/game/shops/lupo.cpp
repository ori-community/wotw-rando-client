#include <Randomizer/game/shops/shop.h>

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/property.h>
#include <Core/text/text_database.h>

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

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace app::classes::UnityEngine;
    using namespace app::classes::CatlikeCoding::TextBox;
    using namespace randomizer::game::shops;

    IL2CPP_INTERCEPT(MapmakerScreen, void, Init, (app::MapmakerScreen * this_ptr)) {
        for (const auto item: il2cpp::ArrayIterator(this_ptr->fields.Purchases)) {
            const auto previous_state_id = item->fields.UberState->fields._.m_id->fields.m_id;
            const auto target_uber_state = core::api::uber_states::UberState(UberStateGroup::LupoShop, previous_state_id);
            item->fields.UberState = reinterpret_cast<app::SerializedByteUberState*>(target_uber_state.ptr());
        }

        next::MapmakerScreen::Init(this_ptr);
    }

    IL2CPP_INTERCEPT(MapmakerItem, int32_t, GetCost, (app::MapmakerItem * this_ptr)) {
        return lupo_shop().slot(this_ptr->fields.UberState)->cost.get<int>();
    }

    IL2CPP_INTERCEPT(MapmakerUISubItem, void, UpdateUpgradeIcon, (app::MapmakerUISubItem * this_ptr)) {
        const auto slot = lupo_shop().slot(this_ptr->fields.m_upgradeItem->fields.UberState);
        const auto& [name, description, icon] = slot->active_info();
        const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
        if (icon != nullptr) {
            icon->apply(renderer);
        } else {
            core::api::graphics::textures::apply_default(renderer);
            UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum::MainTexture, reinterpret_cast<app::Texture*>(this_ptr->fields.m_upgradeItem->fields.Icon));
        }
    }

    const std::unordered_map<int, int> LUPO_SHOP_ORDER = {
        {19396, 0},  // hcMapIcons
        {57987, 1},  // ecMapIcons
        {41666, 2},  // shardMapIcons
    };

    // Prevent Twillen from cleaning up (sorting) his shop
    IL2CPP_INTERCEPT(MapmakerScreen___c, int32_t, _PopulateInventoryCanvasWithUpgrades_b__59_0, (app::MapmakerScreen_c * this_ptr, app::Object* a, app::Object* b)) {
        const auto item_a = reinterpret_cast<app::MapmakerItem*>(a);
        const auto item_b = reinterpret_cast<app::MapmakerItem*>(b);

        return LUPO_SHOP_ORDER.at(item_a->fields.UberState->fields._.m_id->fields.m_id) - LUPO_SHOP_ORDER.at(item_b->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool show_hint(app::MapmakerScreen* screen, app::MessageProvider* provider) {
        const auto klass = types::Input_Cmd::get_class();
        const auto selected = klass->static_fields->MenuSelect;
        if (!selected->fields.IsPressed && selected->fields.WasPressed && selected->fields.Used) {
            selected->fields.Used = true;
            MapmakerScreen::ShowHint(screen, provider);
            il2cpp::invoke(screen, "PlaySoundEvent", screen->fields._._._.Sounds->fields.InvalidItem);
        }

        return false;
    }

    IL2CPP_INTERCEPT(MapmakerScreen, bool, CanPurchase, (app::MapmakerScreen * this_ptr)) {
        const auto item = MapmakerScreen::get_SelectedUpgradeItem(this_ptr);
        if (!il2cpp::unity::is_valid(item)) {
            return false;
        }

        const auto slot = lupo_shop().slot(item->fields.UberState);
        switch (slot->visibility()) {
            case SlotVisibility::Hidden:
            case SlotVisibility::Locked:
                return show_hint(this_ptr, slot->active_info().description.get_provider());
            default:
                if (item->fields.UberState->fields.m_value >= item->fields.MaxLevel) {
                    return show_hint(this_ptr, this_ptr->fields.Hints.MaxedOut);
                }

                if (core::api::game::player::spirit_light().get() < MapmakerItem::GetCost(item)) {
                    return show_hint(this_ptr, this_ptr->fields.Hints.NotEnoughSpiritLight);
                }

                return true;
        }
    }

    IL2CPP_INTERCEPT(MapmakerUISubItem, void, UpdateItem, (app::MapmakerUISubItem * this_ptr)) {
        MapmakerUISubItem::UpdateUpgradeIcon(this_ptr);

        const auto state = this_ptr->fields.m_upgradeItem->fields.UberState;
        const auto slot = lupo_shop().slot(state);
        const auto owned = state->fields.m_value >= this_ptr->fields.m_upgradeItem->fields.MaxLevel;
        const auto cost = MapmakerItem::GetCost(this_ptr->fields.m_upgradeItem);
        const auto can_afford = core::api::game::player::spirit_light().get() >= cost;
        const auto can_purchase = !owned && can_afford && slot->visibility() == SlotVisibility::Visible;

        const auto show_cost = cost != 0 && slot->visibility() == SlotVisibility::Visible;
        GameObject::SetActive(this_ptr->fields.CostGO, show_cost);
        if (this_ptr->fields.SpiritLightGO != nullptr) {
            GameObject::SetActive(this_ptr->fields.SpiritLightGO, show_cost);
        }

        if (show_cost) {
            const auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, types::TextBox::get_class());
            text_box->fields.color = can_purchase
                ? this_ptr->fields.PurchasableColor
                : this_ptr->fields.UnpurchaseableColor;
            TextBox::SetText_2(text_box, il2cpp::string_new(owned ? "" : std::to_string(cost)));
            TextBox::RenderText(text_box);
        }

        auto menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, types::CleverMenuItem::get_class());
        CleverMenuItem::set_IsDisabled(menu_item, !can_purchase);
    }

    IL2CPP_INTERCEPT(MapmakerUIDetails, void, UpdateDetails, (app::MapmakerUIDetails * this_ptr)) {
        const auto item = this_ptr->fields.m_item;
        const auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());

        const auto slot = lupo_shop().slot(item->fields.UberState);
        const auto& [name, description, icon] = slot->active_info();
        icon->apply(renderer);

        auto can_afford = false;
        const auto owned = item->fields.MaxLevel >= core::api::uber_states::UberState(item->fields.UberState).get<int>();
        if (il2cpp::unity::is_valid(item->fields.UberState) && !owned) {
            can_afford = MapmakerItem::GetCost(item) <= core::api::game::player::spirit_light().get();
        }

        const auto can_purchase = can_afford && slot->visibility() == SlotVisibility::Visible;
        const auto color = can_purchase ? this_ptr->fields.PurchasableColor : this_ptr->fields.NotPurchasableColor;
        UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, color);

        const auto name_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
        const auto name_text_component = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.NameGO, types::TextBox::get_class());
        name_text_component->fields.color = color;
        name_message_box->fields.MessageProvider = name.get_provider();
        MessageBox::RefreshText_1(name_message_box);

        const auto description_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());
        const auto description_text_component = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.DescriptionGO, types::TextBox::get_class());
        description_text_component->fields.color = color;
        description_message_box->fields.MessageProvider = description.get_provider();
        MessageBox::RefreshText_1(description_message_box);

        GameObject::SetActive(this_ptr->fields.PurchasableGO, !owned && can_purchase);
        GameObject::SetActive(this_ptr->fields.TooExpensiveGO, !owned && !can_purchase);
        GameObject::SetActive(this_ptr->fields.OwnedGO, owned);
    }

    IL2CPP_INTERCEPT(MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem * this_ptr, app::MapmakerItem* item)) {
        const auto slot = lupo_shop().slot(this_ptr->fields.m_upgradeItem->fields.UberState);
        const auto& [name, description, icon] = slot->active_info();

        const auto value = core::api::uber_states::UberState(this_ptr->fields.m_upgradeItem->fields.UberState).get<int>();
        const auto can_afford = il2cpp::unity::is_valid(item) && core::api::game::player::spirit_light().get() >= MapmakerItem::GetCost(item);

        item->fields.Name = name.get_provider();
        item->fields.Description = description.get_provider();

        const auto is_available = value < item->fields.MaxLevel && can_afford;
        GameObject::SetActive(this_ptr->fields.AvailableToBuyGO, slot->visibility() == SlotVisibility::Visible && is_available);
        GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, slot->visibility() == SlotVisibility::Visible && item->fields.MaxLevel <= value);
        GameObject::SetActive(this_ptr->fields.TooExpensiveGO, slot->visibility() == SlotVisibility::Visible && !can_afford);
        GameObject::SetActive(this_ptr->fields.LockedGO, slot->visibility() == SlotVisibility::Locked);

        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.AvailableToBuyGO, types::MapmakerUISubItem::get_class()),
            item,
            nullptr
        );
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.AlreadyOwnedGO, types::MapmakerUISubItem::get_class()),
            item,
            nullptr
        );
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.TooExpensiveGO, types::MapmakerUISubItem::get_class()),
            item,
            nullptr
        );
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.LockedGO, types::MapmakerUISubItem::get_class()),
            item,
            nullptr
        );
    }

    IL2CPP_INTERCEPT(MapmakerScreen, void, CompletePurchase, (app::MapmakerScreen *this_ptr)) {
        const auto item = MapmakerScreen::get_SelectedUpgradeItem(this_ptr);
        if (!il2cpp::unity::is_valid(item)) {
            return;
        }

        const auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
            il2cpp::unity::get_game_object(core::api::game::ui::get()->static_fields->SeinUI),
            types::SpellUIExperience::get_class()
        );

        SpellUIExperience::Spend(ui_experience, MapmakerItem::GetCost(item));
        const auto state = core::api::uber_states::UberState(item->fields.UberState);
        state.set(state.get<int>() + 1);
        const auto sound = MapmakerScreen::get_PurchaseCompleteSound(this_ptr);
        MenuScreen::PlaySoundEvent(reinterpret_cast<app::MenuScreen*>(this_ptr), sound);
        this_ptr->fields._PurchasedSkillUpgrade_k__BackingField = true;
        MapmakerScreen::UpdateContextCanvasShards(this_ptr);
        // MenuScreenManager::HideMenuScreen(UI::get_Menu(), false, true);
    }
} // namespace
