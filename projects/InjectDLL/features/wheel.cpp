#include <macros.h>
#include <csharp_bridge.h>
#include <input/rando_bindings.h>
#include <uber_states/uber_state_manager.h>
#include <utils/messaging.h>
#include <utils/shaders.h>

#include <Common/ext.cpp>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <unordered_map>
#include <unordered_set>
#include <system\textures.h>

using namespace modloader;

enum class WheelBehavior
{
    Modifier,
    Standalone,
    Toggle
};

WheelBehavior wheel_behavior = WheelBehavior::Modifier;

INJECT_C_DLLEXPORT void refresh_wheel();

namespace
{
    struct CustomWheelEntry
    {
        using binding_action = void(*)(CustomWheelEntry const& entry, app::SpellUIItem* item, int binding);
        using csharp_callback = void(*)(int wheel, int item, int binding);

        std::wstring name = L"";
        std::wstring description = L"";
        app::Texture* texture = nullptr;
        app::Color color{ 0.0f, 0.0f, 0.0f, 0.0f };
        binding_action action = nullptr;
        csharp_callback callback = nullptr;
        bool enabled = false;
    };

    struct CustomWheel
    {
        std::unordered_map<int, CustomWheelEntry> entries;
    };

    app::EquipmentRadialSelection* radial_selection = nullptr;
    app::CleverMenuItemSelectionManager* wheel_selection_manager = nullptr;
    std::unordered_map<app::CleverMenuItem*, int> menu_item_to_index;
    std::unordered_map<int, app::CleverMenuItem*> index_to_menu_item;

    bool sticky_wheel = false;
    bool is_wheel_visible = false;
    bool custom_wheel_input = false;
    bool custom_wheel_on = false;
    int wheel_index = 0;
    std::unordered_map<int, CustomWheel> wheels;

    IL2CPP_BINDING(, CleverMenuItemSelectionManager, int, get_MenuItemsCount, (app::CleverMenuItemSelectionManager* this_ptr));
    IL2CPP_BINDING(, CleverMenuItemSelectionManager, app::CleverMenuItem*, GetMenuItem, (app::CleverMenuItemSelectionManager* this_ptr, int index));
    STATIC_IL2CPP_BINDING(, EquipmentRadialSelection, int, GetWheelIndex, (app::EquipmentType__Enum type));
    CustomWheelEntry* get_wheel_entry(app::EquipmentType__Enum type)
    {
        auto index = EquipmentRadialSelection::GetWheelIndex(type);
        auto it = wheels.find(wheel_index);
        if (it == wheels.end())
            return nullptr;

        auto entry = it->second.entries.find(index);
        if (entry == it->second.entries.end())
            return nullptr;

        return &entry->second;
    }

    bool dont_fade = false;
    IL2CPP_INTERCEPT(, MoonTimelineUiFader, void, FadeIn, (app::MoonTimelineUiFader* this_ptr)) {
        if (!dont_fade)
            MoonTimelineUiFader::FadeIn(this_ptr);
    }

    IL2CPP_INTERCEPT(, EquipmentWheel, void, Show, (app::EquipmentWheel* this_ptr)) {
        is_wheel_visible = true;
        EquipmentWheel::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(, EquipmentWheel, void, ShowImmediate, (app::EquipmentWheel* this_ptr)) {
        is_wheel_visible = true;
        EquipmentWheel::ShowImmediate(this_ptr);
    }

    IL2CPP_INTERCEPT(, EquipmentWheel, void, Hide, (app::EquipmentWheel* this_ptr, bool change)) {
        EquipmentWheel::Hide(this_ptr, change);
        is_wheel_visible = false;
        custom_wheel_on = false;
    }

    IL2CPP_INTERCEPT(, EquipmentWheel, void, HideImmediate, (app::EquipmentWheel* this_ptr)) {
        EquipmentWheel::HideImmediate(this_ptr);
        is_wheel_visible = false;
        custom_wheel_on = false;
    }

    IL2CPP_BINDING(, MenuScreenManager, void, ShowEquipmentWheel, (app::MenuScreenManager* this_ptr));
    IL2CPP_INTERCEPT(, MenuScreenManager, void, HideEquipmentWhell, (app::MenuScreenManager* this_ptr)) {
        if (wheel_behavior == WheelBehavior::Standalone && custom_wheel_input)
            return;

        return MenuScreenManager::HideEquipmentWhell(this_ptr);
    }

    void show_custom_wheel()
    {
        auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
        switch (wheel_behavior)
        {
        case WheelBehavior::Standalone:
        case WheelBehavior::Modifier:
            custom_wheel_input = true;
            if (is_wheel_visible)
                refresh_wheel();
            else if (wheel_behavior == WheelBehavior::Standalone)
            {
                auto* msm = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->m_sMenu;
                MenuScreenManager::ShowEquipmentWheel(msm);
            }
            break;
        case WheelBehavior::Toggle:
            // TODO: implement toggle behavior
            break;
        }
    }

    void hide_custom_wheel()
    {
        auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
        switch (wheel_behavior)
        {
        case WheelBehavior::Modifier:
            custom_wheel_input = false;
            if (is_wheel_visible)
                refresh_wheel();

            if (!sticky_wheel)
                wheel_index = 0;

            break;
        case WheelBehavior::Standalone:
        {
            custom_wheel_input = false;
            auto* msm = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->m_sMenu;
            MenuScreenManager::HideEquipmentWhell(msm);
            break;
        }
        case WheelBehavior::Toggle:
            // TODO: implement toggle behavior
            break;
        }

    }

    uint32_t empty_name = 0;
    uint32_t empty_description = 0;
    void initialize_wheel()
    {
        empty_name = il2cpp::gchandle_new(utils::create_message_provider(il2cpp::string_new("Empty")), false);
        empty_description = il2cpp::gchandle_new(utils::create_message_provider(il2cpp::string_new(" ")), false);

        input::add_on_pressed_callback(input::Action::OpenRandoWheel, show_custom_wheel);
        input::add_on_released_callback(input::Action::OpenRandoWheel, hide_custom_wheel);
    }

    DECLARE_INTERCEPT(, CleverMenuItem, void, RefreshVisible, (app::CleverMenuItem* this_ptr));
    DECLARE_INTERCEPT(, EquipmentWheelUIDetails, void, UpdateContext, (app::EquipmentWheelUIDetails* this_ptr, bool to_right));
    IL2CPP_INTERCEPT(, EquipmentRadialSelection, void, Populate, (app::EquipmentRadialSelection* this_ptr, app::List_1_System_Object_ inventory_items, app::Object* grid_context)) {
        wheel_selection_manager = this_ptr->fields.m_navigationManager;
        custom_wheel_on = !wheels.empty() && custom_wheel_input;
        if (custom_wheel_on)
        {
            // Cache the selection manager and its items so we can modify their behavior later.
            radial_selection = this_ptr;
            wheel_selection_manager->fields.KeepSelectedItemActiveWhenInactive = false;
            wheel_selection_manager->fields.KeepMouseInteractionsWhenInactive = false;
            wheel_selection_manager->fields.AlwaysHighlightCurrentMenuItem = false;
            wheel_selection_manager->fields.CheckIfActiveWhenSettingIndexToFirst = true;
            menu_item_to_index.clear();
            index_to_menu_item.clear();
        }

        EquipmentRadialSelection::Populate(this_ptr, inventory_items, grid_context);

        auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
        EquipmentWheelUIDetails::UpdateContext_intercept(wheel->fields.EquipmentDetailsCanvas, false);
        const int count = CleverMenuItemSelectionManager::get_MenuItemsCount(wheel_selection_manager);
        if (custom_wheel_on)
        {
            for (int i = 0; i < count; ++i)
            {
                auto* menu_item = CleverMenuItemSelectionManager::GetMenuItem(wheel_selection_manager, i);
                menu_item_to_index[menu_item] = i;
                index_to_menu_item[i] = menu_item;
                menu_item->fields.m_selectionManager = wheel_selection_manager;
            }
        }

        for (int i = 0; i < count; ++i)
        {
            auto* menu_item = CleverMenuItemSelectionManager::GetMenuItem(wheel_selection_manager, i);
            CleverMenuItem::RefreshVisible_intercept(menu_item);
        }
    }

    bool override_set_active = false;
    bool override_set_active_value = false;
    IL2CPP_INTERCEPT(, CleverMenuItem, void, RefreshVisible, (app::CleverMenuItem* this_ptr)) {
        if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager)
        {
            override_set_active = true;
            override_set_active_value = true;
        }

        CleverMenuItem::RefreshVisible(this_ptr);
        override_set_active = false;
    }

    IL2CPP_INTERCEPT(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value)) {
        if (override_set_active)
            value = override_set_active_value;

        GameObject::SetActive(this_ptr, value);
    }

    IL2CPP_INTERCEPT(, CleverMenuItem, bool, get_IsVisible, (app::CleverMenuItem* this_ptr)) {
        if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager)
            return true;

        return CleverMenuItem::get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT(, CleverMenuItem, bool, get_IsActivated, (app::CleverMenuItem* this_ptr)) {
        if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager)
            return true;
    
        return CleverMenuItem::get_IsActivated(this_ptr);
    }

    // Only used the first time you use the wheel.
    STATIC_IL2CPP_INTERCEPT(, EquipmentWheel, bool, HasElement, (app::EquipmentType__Enum type)) {
        if (custom_wheel_on)
        {
            auto* entry = get_wheel_entry(type);
            return entry != nullptr;
        }

        return EquipmentWheel::HasElement(type);
    }

    STATIC_IL2CPP_BINDING(UnityEngine, Vector3, float, Distance, (app::Vector3* a, app::Vector3* b));
    STATIC_IL2CPP_BINDING(Core, Input, app::Vector2, get_CursorPositionUI, ());
    IL2CPP_BINDING(, CleverMenuItem, app::Rect, get_Bounds, (app::CleverMenuItem* this_ptr));
    IL2CPP_INTERCEPT(, CleverMenuItemSelectionManager, app::CleverMenuItem*, get_CleverMenuItemUnderCursor, (app::CleverMenuItemSelectionManager* this_ptr)) {
        const int count = CleverMenuItemSelectionManager::get_MenuItemsCount(this_ptr);
        auto cursor = Input::get_CursorPositionUI();
        app::CleverMenuItem* item = nullptr;
        float distance = INFINITY;

        for (int i = 0; i < count; ++i)
        {
            auto* current_item = CleverMenuItemSelectionManager::GetMenuItem(this_ptr, i);
            // This is the only meaningful change, we use get_IsActivated instead of calling the Activated delegate directly.
            if (!CleverMenuItem::get_IsVisible_intercept(current_item) || !CleverMenuItem::get_IsActivated_intercept(current_item))
                continue;

            auto item_bounds = CleverMenuItem::get_Bounds(current_item);
            if ((item_bounds.m_XMin > cursor.x) ||
                (cursor.x >= item_bounds.m_Width + item_bounds.m_XMin) ||
                (item_bounds.m_YMin > cursor.y) ||
                (cursor.y >= item_bounds.m_YMin + item_bounds.m_Height))
                continue;
            
            app::Vector3 cursor_v3{ cursor.x, cursor.y, 0.0f };
            app::Vector3 center_v3{ item_bounds.m_XMin + item_bounds.m_Width / 2.0f, item_bounds.m_YMin + item_bounds.m_Height / 2.0f, 0.0f };
            float new_distance = Vector3::Distance(&center_v3, &cursor_v3);
            if (new_distance < distance) {
                item = current_item;
                distance = new_distance;
            }
        }

        return item;
    }

    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr));
    IL2CPP_INTERCEPT(, EquipmentWheelUIDetails, void, UpdateContext, (app::EquipmentWheelUIDetails* this_ptr, bool to_right)) {
        if (custom_wheel_on)
        {
            auto* name_message_box = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox")[0];
            auto* description_message_box = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox")[0];
            auto* description_text_box = il2cpp::unity::get_components<app::TextBox>(this_ptr->fields.DescriptionGO, "CatlikeCoding.TextBox", "TextBox")[0];
            description_text_box->fields.maxHeight = 4.00000000;

            CustomWheelEntry* entry = nullptr;
            if (this_ptr->fields.m_item != nullptr)
                entry = get_wheel_entry(this_ptr->fields.m_item->fields.m_type);

            if (entry != nullptr)
            {
                name_message_box->fields.MessageProvider = utils::create_message_provider(il2cpp::string_new(entry->name));
                description_message_box->fields.MessageProvider = utils::create_message_provider(il2cpp::string_new(entry->description));
            }
            else
            {
                name_message_box->fields.MessageProvider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(empty_name));
                description_message_box->fields.MessageProvider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(empty_description));
            }

            GameObject::SetActive(this_ptr->fields.UsesEnergyGO, false);
            GameObject::SetActive(this_ptr->fields.DrainsEnergyGO, false);
            MessageBox::RefreshText(name_message_box);
            MessageBox::RefreshText(description_message_box);
        }
        else
            EquipmentWheelUIDetails::UpdateContext(this_ptr, to_right);
    }

    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetColor, (app::Renderer* renderer, app::UberShaderProperty_Color__Enum prop, app::Color* color));
    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Texture* texture));
    IL2CPP_INTERCEPT(, SpellUIItem, void, UpdateSpellIcon, (app::SpellUIItem* this_ptr)) {
        if (custom_wheel_on)
        {
            CustomWheelEntry* entry = this_ptr->fields.m_spell != nullptr ? get_wheel_entry(this_ptr->fields.m_spell->fields.m_type) : nullptr;
            auto* renderer = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer")[0];
            auto* spell_settings = il2cpp::get_class<app::SpellSettings__Class>("", "SpellSettings");
            auto* icons = spell_settings->static_fields->Instance->fields.Icons;
            auto* default_texture = reinterpret_cast<app::Texture*>(icons->fields._.Missing.InventoryIcon);

            auto texture = entry == nullptr || entry->texture == nullptr ? default_texture : entry->texture;
            app::Color color = entry == nullptr ? app::Color{ 1.0f, 1.0f, 1.0f, 1.0f } : entry->color;

            try
            {
                UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, texture);
            }
            catch (std::exception e) { warn("wheel", format("Unable to set texture of wheel icon (%s)", e.what())); }
            UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
        }
        else
        {
            auto* renderer = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer")[0];
            app::Color color{ 1.0f, 1.0f, 1.0f, 1.0f };
            UberShaderAPI::SetColor(renderer, app::UberShaderProperty_Color__Enum_MainColor, &color);
            SpellUIItem::UpdateSpellIcon(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(, SpellUIItem, void, UpdateSpellProperties, (app::SpellUIItem* this_ptr, bool initialize)) {
        //CustomWheelEntry* entry = this_ptr->fields.m_spell != nullptr ? get_wheel_entry(this_ptr->fields.m_spell->fields.m_type) : nullptr;
        if (custom_wheel_on)
        {
            GameObject::SetActive(this_ptr->fields.EquippedGOB, false);
            GameObject::SetActive(this_ptr->fields.EquippedGOX, false);
            GameObject::SetActive(this_ptr->fields.EquippedGOY, false);
            GameObject::SetActive(this_ptr->fields.EquippedShared, false);
            GameObject::SetActive(this_ptr->fields.EnergyGO, false);
            GameObject::SetActive(this_ptr->fields.NewGO, false);
        }
        else
            SpellUIItem::UpdateSpellProperties(this_ptr, initialize);
    }

    IL2CPP_BINDING(, EquipmentWheel, app::SpellUIItem*, get_SelectedSpellUIItem, (app::EquipmentWheel* this_ptr));
    IL2CPP_INTERCEPT(, EquipmentWheel, void, OnPressButton, (app::EquipmentWheel* this_ptr, app::SpellInventory_Binding__Enum binding)) {
        if (custom_wheel_on)
        {
            auto* item = EquipmentWheel::get_SelectedSpellUIItem(this_ptr);
            if (item != nullptr && item->fields.m_spell != nullptr)
            {
                auto* entry = get_wheel_entry(item->fields.m_spell->fields.m_type);
                if (entry != nullptr && entry->action != nullptr)
                    entry->action(*entry, item, binding);
            }
        }
        else
            EquipmentWheel::OnPressButton(this_ptr, binding);
    }

    // Could technically add a 4th button here.
    //IL2CPP_INTERCEPT(, CleverMenuItem, void, OnPressed, (app::CleverMenuItem* this_ptr)) {
    //    CleverMenuItem::OnPressed(this_ptr);
    //    if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager)
    //    {
    //        auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
    //        auto* item = EquipmentWheel::get_SelectedSpellUIItem(wheel);
    //        if (item != nullptr && item->fields.m_spell != nullptr)
    //        {
    //            auto* entry = get_wheel_entry(item->fields.m_spell->fields.m_type);
    //            if (entry != nullptr && entry->action != nullptr)
    //                entry->action(*entry, item, 3);
    //        }
    //    }
    //}

    void csharp_action(CustomWheelEntry const& entry, app::SpellUIItem* item, int binding) {
        auto index = EquipmentRadialSelection::GetWheelIndex(item->fields.m_spell->fields.m_type);
        entry.callback(wheel_index, index, binding);

        // Refresh things.
        auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
        EquipmentWheelUIDetails::UpdateContext_intercept(wheel->fields.EquipmentDetailsCanvas, false);
        SpellUIItem::UpdateSpellIcon_intercept(item);
    }
    
    bool is_valid_wheel_index(int wheel, int item)
    {
        return wheel >= 0 && item >= 0 && item < 12;
    }

    CALL_ON_INIT(initialize_wheel);
}

INJECT_C_DLLEXPORT bool set_wheel_item_name(int wheel, int item, const wchar_t* name)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    wheels[wheel].entries[item].name = name;
    return true;
}

INJECT_C_DLLEXPORT bool set_wheel_item_description(int wheel, int item, const wchar_t* description)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    wheels[wheel].entries[item].description = description;
    return true;
}

INJECT_C_DLLEXPORT bool set_wheel_item_texture(int wheel, int item, const wchar_t* texture)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    std::wstring texture_name(texture);
    auto& entry = wheels[wheel].entries[item];
    if (texture_name.empty())
        entry.texture = nullptr;
    else
    {
        auto* actual_texture = reinterpret_cast<app::Texture*>(textures::get_texture(texture));
        if (!is_valid_wheel_index(wheel, item))
        {
            warn("wheel", format("failed to find texture"));
            return false;
        }

        entry.texture = actual_texture;
    }

    return true;
}

INJECT_C_DLLEXPORT bool set_wheel_item_color(int wheel, int item, int r, int g, int b, int a)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    if (0 < r || r > 255 || 0 < g || g > 255 || 0 < b || b > 255 || 0 < a || a > 255)
    {
        warn("wheel", format("invalid color passed to wheel [%d, %d]: (%d, %d, %d, %d)", wheel, item, r, g, b, a));
        r = std::max(std::min(r, 255), 0);
        g = std::max(std::min(g, 255), 0);
        b = std::max(std::min(b, 255), 0);
        a = std::max(std::min(a, 255), 0);
    }

    wheels[wheel].entries[item].color = app::Color{ r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f };
    return true;
}

INJECT_C_DLLEXPORT bool set_wheel_item_enabled(int wheel, int item, bool enabled)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    wheels[wheel].entries[item].enabled = enabled;
    return true;
}

INJECT_C_DLLEXPORT bool set_wheel_item_callback(int wheel, int item, uint64_t callback)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    auto& entry = wheels[wheel].entries[item];
    entry.action = csharp_action;
    entry.callback = reinterpret_cast<CustomWheelEntry::csharp_callback>(callback);
    return true;
}

INJECT_C_DLLEXPORT bool clear_wheel_item(int wheel, int item)
{
    if (!is_valid_wheel_index(wheel, item))
    {
        warn("wheel", format("invalid wheel index [%d, %d] in command", wheel, item));
        return false;
    }

    wheels[wheel].entries.erase(item);
    return true;
}

INJECT_C_DLLEXPORT bool set_active_wheel(int wheel)
{
    auto it = wheels.find(wheel);
    if (it == wheels.end())
    {
        warn("wheel", format("Wheel [%d] does not exist", wheel));
        return false;
    }

    sticky_wheel = false;
    wheel_index = wheel;
    return true;
}

INJECT_C_DLLEXPORT void set_active_wheel_sticky(bool value)
{
    sticky_wheel = value;
}

INJECT_C_DLLEXPORT void refresh_wheel()
{
    auto wheel = il2cpp::get_class<app::EquipmentWheel__Class>("", "EquipmentWheel")->static_fields->Instance;
    if (is_wheel_visible)
    {
        dont_fade = true;
        EquipmentWheel::ShowImmediate_intercept(wheel);
        dont_fade = false;
    }
}

INJECT_C_DLLEXPORT void set_wheel_behavior(int behavior)
{
    wheel_behavior = static_cast<WheelBehavior>(behavior);
}

// For cleanup.
INJECT_C_DLLEXPORT void clear_wheels()
{
    sticky_wheel = false;
    custom_wheel_input = false;
    custom_wheel_on = false;
    wheel_index = 0;
    wheels.clear();
}
