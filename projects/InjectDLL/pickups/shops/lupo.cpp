#include <Common/ext.h>
#include <csharp_bridge.h>
#include <pickups/shops/general.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>
#include <system/text_database.h>
#include <utils/messaging.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

using namespace modloader;

namespace
{
    IL2CPP_INTERCEPT(, MapmakerItem, int32_t, GetCost, (app::MapmakerItem* this_ptr))
    {
        return csharp_bridge::lupo_upgrade_cost(this_ptr->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool prevent_map_safeguard = false;

    IL2CPP_INTERCEPT(, MapmakerScreen, void, Show, (app::MapmakerScreen* this_ptr))
    {
        prevent_map_safeguard = true;
        csharp_bridge::update_shop_data();
        MapmakerScreen::Show(this_ptr);
        prevent_map_safeguard = false;
    }

    IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, bool, get_Value, (app::SerializedBooleanUberState* this_ptr))
    {
        if (prevent_map_safeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return SerializedBooleanUberState::get_Value(this_ptr);
    }

    std::unordered_map<uint64_t, shops::ShopItem> lupo_overrides;

    uint64_t get_key(app::MapmakerItem* item)
    {
        const auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        const auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        return static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    }

    IL2CPP_INTERCEPT(, MapmakerUISubItem, void, UpdateUpgradeIcon, (app::MapmakerUISubItem* this_ptr)) {
        const auto key = get_key(this_ptr->fields.m_upgradeItem);
        const auto it = lupo_overrides.find(key);
        auto texture = shops::get_icon(shops::ShopType::Lupo, this_ptr->fields.m_upgradeItem);
        if (it != lupo_overrides.end() && !it->second.is_visible)
            texture = shops::get_icon(shops::ShopType::Lupo, nullptr);

        auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        if (texture != nullptr)
            texture->apply(renderer);
        else
        {
            textures::apply_default(renderer);
            shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture,
                reinterpret_cast<app::Texture*>(this_ptr->fields.m_upgradeItem->fields.Icon));
        }
    }

    IL2CPP_BINDING(, MapmakerScreen, void, ShowHint, (app::MapmakerScreen* this_ptr, app::MessageProvider* provider));
    bool show_hint(app::MapmakerScreen* screen, app::MessageProvider* provider)
    {
        auto klass = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
        auto selected = klass->static_fields->MenuSelect;
        if (!(selected->fields.IsPressed == false
            || selected->fields.WasPressed != false
            || selected->fields.Used != false))
        {
            selected->fields.Used = true;
            MapmakerScreen::ShowHint(screen, provider);
            il2cpp::invoke(screen, "PlaySoundEvent", screen->fields._._._.Sounds->fields.InvalidItem);
        }

        return false;
    }

    IL2CPP_BINDING(, MapmakerScreen, app::MapmakerItem*, get_SelectedUpgradeItem, (app::MapmakerScreen* this_ptr));
    IL2CPP_INTERCEPT(, MapmakerScreen, bool, CanPurchase, (app::MapmakerScreen* this_ptr)) {
        auto item = MapmakerScreen::get_SelectedUpgradeItem(this_ptr);
        if (!il2cpp::unity::is_valid(item))
            return false;

        const auto key = get_key(item);
        const auto it = lupo_overrides.find(key);
        if (it == lupo_overrides.end() || !it->second.is_visible)
            return show_hint(this_ptr, text_database::get_provider(*static_text_entries::Undiscovered));

        if (it->second.is_locked)
            return show_hint(this_ptr, text_database::get_provider(*static_text_entries::Locked));

        if (item->fields.UberState->fields.m_value >= item->fields.MaxLevel)
            return show_hint(this_ptr, this_ptr->fields.Hints.MaxedOut);

        if (MapmakerItem::GetCost_intercept(item) > get_experience())
            return show_hint(this_ptr, this_ptr->fields.Hints.NotEnoughSpiritLight);

        return true;
    }

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(, CleverMenuItem, void, set_IsDisabled, (app::CleverMenuItem* this_ptr, bool disabled));
    IL2CPP_BINDING(CatlikeCoding.TextBox, TextBox, void, RenderText, (app::TextBox* this_ptr));
    IL2CPP_BINDING_OVERLOAD(CatlikeCoding.TextBox, TextBox, void, SetText, (app::TextBox* this_ptr, app::String* text), (System:String));
    IL2CPP_INTERCEPT(, MapmakerUISubItem, void, UpdateItem, (app::MapmakerUISubItem* this_ptr)) {
        MapmakerUISubItem::UpdateUpgradeIcon_intercept(this_ptr);

        auto visible = false;
        auto locked = true;
        const auto key = get_key(this_ptr->fields.m_upgradeItem);
        const auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            visible = it->second.is_visible;
            locked = it->second.is_locked;
        }

        auto state = this_ptr->fields.m_upgradeItem->fields.UberState;
        auto owned = state->fields.m_value >= this_ptr->fields.m_upgradeItem->fields.MaxLevel;
        auto cost = MapmakerItem::GetCost_intercept(this_ptr->fields.m_upgradeItem);
        auto can_afford = get_experience() >= cost;
        auto can_purchase = !(owned || !can_afford || !visible || locked);

        auto show_cost = cost != 0 && visible;
        GameObject::SetActive(this_ptr->fields.CostGO, show_cost);
        if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
            GameObject::SetActive(this_ptr->fields.SpiritLightGO, show_cost);

        if (show_cost)
        {
            auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, "CatlikeCoding.TextBox", "TextBox");

            if (owned)
                TextBox::SetText(text_box, il2cpp::string_new(""));
            else
            {
                if (can_purchase)
                    text_box->fields.color = this_ptr->fields.PurchasableColor;
                else
                    text_box->fields.color = this_ptr->fields.UnpurchaseableColor;
            
                TextBox::SetText(text_box, il2cpp::string_new(std::to_string(cost)));
            }

            TextBox::RenderText(text_box);
        }

        auto menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, "", "CleverMenuItem");
        CleverMenuItem::set_IsDisabled(menu_item, !can_purchase);
    }

    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr));
    IL2CPP_INTERCEPT(, MapmakerUIDetails, void, UpdateDetails, (app::MapmakerUIDetails* this_ptr)) {
        auto item = this_ptr->fields.m_item;
        auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");

        const auto key = get_key(item);
        const auto it = lupo_overrides.find(key);

        //shaders::UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, item->fields.Icon);
        auto icon = shops::get_icon(shops::ShopType::Lupo, item);
        icon->apply(renderer);

        auto can_afford = false;
        auto owned = item->fields.MaxLevel >= uber_states::get_uber_state_value(item->fields.UberState);
        if (il2cpp::unity::is_valid(item->fields.UberState) && !owned)
            can_afford = MapmakerItem::GetCost_intercept(item) <= get_experience();

        auto can_purchase = can_afford && (it != lupo_overrides.end() && !it->second.is_locked && it->second.is_visible);
        auto color = can_purchase ? this_ptr->fields.PurchasableColor : this_ptr->fields.NotPurchasableColor;
        shaders::UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);

        app::MessageProvider* name = nullptr;
        app::MessageProvider* description = nullptr;

        if (it != lupo_overrides.end())
        {
            if (it->second.name != 0)
                name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            if (it->second.description != 0)
                description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));

            if (!il2cpp::unity::is_valid(name))
            {
                if (!it->second.is_visible)
                    name = text_database::get_provider(*static_text_entries::Undiscovered);
                else if (it->second.is_locked)
                    name = text_database::get_provider(*static_text_entries::Locked);
                else
                    name = text_database::get_provider(*static_text_entries::Empty);
            }

            if (!il2cpp::unity::is_valid(description))
            {
                if (!it->second.is_visible)
                    description = text_database::get_provider(*static_text_entries::UndiscoveredDescription);
                else
                    description = text_database::get_provider(*static_text_entries::Empty);
            }
        }
        else
        {
            name = text_database::get_provider(*static_text_entries::Empty);
            description = text_database::get_provider(*static_text_entries::Empty);
        }

        auto name_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
        auto name_text_component = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.NameGO, "CatlikeCoding.TextBox", "TextBox");
        name_text_component->fields.color = color;
        name_message_box->fields.MessageProvider = name;
        MessageBox::RefreshText(name_message_box);

        auto description_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
        auto description_text_component = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.DescriptionGO, "CatlikeCoding.TextBox", "TextBox");
        description_text_component->fields.color = color;
        description_message_box->fields.MessageProvider = description;
        MessageBox::RefreshText(description_message_box);

        GameObject::SetActive(this_ptr->fields.PurchasableGO, !owned && can_purchase);
        GameObject::SetActive(this_ptr->fields.TooExpensiveGO, !owned && !can_purchase);
        GameObject::SetActive(this_ptr->fields.OwnedGO, owned);
    }

    IL2CPP_BINDING(, MapmakerUISubItem, void, SetUpgradeItem, (app::MapmakerUISubItem* this_ptr, app::MapmakerItem* item, app::Object* grid_context));
    IL2CPP_INTERCEPT(, MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem* this_ptr, app::MapmakerItem* item)) {
        const auto key = get_key(item);
        const auto it = lupo_overrides.find(key);

        auto value = uber_states::get_uber_state_value(this_ptr->fields.m_upgradeItem->fields.UberState);
        auto can_afford = il2cpp::unity::is_valid(item) && get_experience() >= MapmakerItem::GetCost_intercept(item);

        auto is_locked = it == lupo_overrides.end() || it->second.is_locked;
        auto is_visible = it != lupo_overrides.end() && it->second.is_visible;

        if (it != lupo_overrides.end())
        {
            if (it->second.name != 0)
                item->fields.Name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            if (it->second.description != 0)
                item->fields.Description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));

            if (il2cpp::unity::is_valid(item->fields.Name))
            {
                if (!is_visible)
                    item->fields.Name = text_database::get_provider(*static_text_entries::Undiscovered);
                else if (is_locked)
                    item->fields.Name = text_database::get_provider(*static_text_entries::Locked);
                else
                    item->fields.Name = text_database::get_provider(*static_text_entries::Empty);
            }

            if (il2cpp::unity::is_valid(item->fields.Description))
            {
                if (!is_visible)
                    item->fields.Description = text_database::get_provider(*static_text_entries::UndiscoveredDescription);
                else
                    item->fields.Description = text_database::get_provider(*static_text_entries::Empty);
            }
        }

        auto is_available = value < item->fields.MaxLevel && can_afford;
        GameObject::SetActive(this_ptr->fields.AvailableToBuyGO, is_visible && !is_locked && is_available);
        GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, is_visible && !is_locked && item->fields.MaxLevel <= value);
        GameObject::SetActive(this_ptr->fields.TooExpensiveGO, is_visible && !is_locked && !can_afford);
        GameObject::SetActive(this_ptr->fields.LockedGO, !is_visible || is_locked);

        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.AvailableToBuyGO, "", "MapmakerUISubItem"), item, nullptr);
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.AlreadyOwnedGO, "", "MapmakerUISubItem"), item, nullptr);
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.TooExpensiveGO, "", "MapmakerUISubItem"), item, nullptr);
        MapmakerUISubItem::SetUpgradeItem(
            il2cpp::unity::get_component<app::MapmakerUISubItem>(this_ptr->fields.LockedGO, "", "MapmakerUISubItem"), item, nullptr);
    }
}


namespace shops
{
    std::shared_ptr<textures::TextureData> get_lupo_icon(app::MapmakerItem* shop_item)
    {
        const auto state_id = shop_item->fields.UberState->fields._.m_id->fields.m_id;
        const auto group_id = shop_item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        const auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            if (it->second.is_locked || !it->second.is_visible)
                return nullptr;

            if (it->second.texture_data != nullptr)
                return it->second.texture_data;
        }

        return nullptr;
    }
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool is_locked, bool is_visible)
{
    const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    const auto it = lupo_overrides.find(key);
    auto& item = lupo_overrides[key];
    set_item(item, name, description, texture, false, is_locked, is_visible);
}
