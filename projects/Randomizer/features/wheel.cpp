#include <Common/ext.h>
#include <Core/api/graphics/shaders.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/system/message_provider.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/CleverMenuItem.h>
#include <Modloader/app/methods/CleverMenuItemSelectionManager.h>
#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/app/methods/EquipmentRadialSelection.h>
#include <Modloader/app/methods/EquipmentWheel.h>
#include <Modloader/app/methods/EquipmentWheelUIDetails.h>
#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MoonMath_Line.h>
#include <Modloader/app/methods/MoonTimelineUiFader.h>
#include <Modloader/app/methods/SpellUIItem.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/app/types/EquipmentWheel.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/SpellSettings.h>
#include <Modloader/app/types/TextBox.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/input/rando_bindings.h>
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace modloader;
using namespace app::classes;

enum class WheelBehavior { Standalone, Toggle };

WheelBehavior wheel_behavior = WheelBehavior::Standalone;

void refresh_wheel();

extern bool disable_has_ability_overwrite;
extern bool is_in_trial;

namespace randomizer::features::wheel {

    namespace {
        struct CustomWheelEntry {
            using binding_action = void (*)(CustomWheelEntry const& entry, app::SpellUIItem* item, app::SpellInventory_Binding__Enum binding);

            std::string name = "";
            std::string description = "";
            std::shared_ptr<core::api::graphics::textures::TextureData> texture_data = nullptr;
            app::Color color = {1.0f, 1.0f, 1.0f, 1.0f};
            binding_action action = nullptr;
            std::array<wheel_callback, 3> callbacks = {nullptr, nullptr, nullptr};
            bool enabled = true;
        };

        struct CustomWheel {
            std::unordered_map<WheelItemPosition, CustomWheelEntry> entries;
            bool sticky = false;
        };

        app::EquipmentRadialSelection* radial_selection = nullptr;
        app::CleverMenuItemSelectionManager* wheel_selection_manager = nullptr;

        bool is_wheel_visible = false;
        bool custom_wheel_input = false;
        bool custom_wheel_on = false;
        int wheel_index = 0;
        std::unordered_map<int, CustomWheel> wheels;

        CustomWheelEntry* get_wheel_entry(const WheelItemPosition index) {
            const auto it = wheels.find(wheel_index);
            if (it == wheels.end()) {
                return nullptr;
            }

            const auto entry = it->second.entries.find(index);
            if (entry == it->second.entries.end()) {
                return nullptr;
            }

            return &entry->second;
        }

        CustomWheelEntry* get_wheel_entry(const app::EquipmentType__Enum type) {
            const auto index = EquipmentRadialSelection::GetWheelIndex(type);
            return get_wheel_entry(static_cast<WheelItemPosition>(index));
        }

        bool dont_fade = false;
        IL2CPP_INTERCEPT(MoonTimelineUiFader, void, FadeIn, (app::MoonTimelineUiFader * this_ptr)) {
            if (!dont_fade) {
                next::MoonTimelineUiFader::FadeIn(this_ptr);
            }
        }

        void update_wheel_position();

        IL2CPP_INTERCEPT(EquipmentWheel, void, Show, (app::EquipmentWheel * this_ptr)) {
            is_wheel_visible = true;
            next::EquipmentWheel::Show(this_ptr);
            update_wheel_position();
        }

        IL2CPP_INTERCEPT(EquipmentWheel, void, ShowImmediate, (app::EquipmentWheel * this_ptr)) {
            is_wheel_visible = true;
            next::EquipmentWheel::ShowImmediate(this_ptr);
            update_wheel_position();
        }

        IL2CPP_INTERCEPT(EquipmentWheel, void, Hide, (app::EquipmentWheel * this_ptr, bool change)) {
            next::EquipmentWheel::Hide(this_ptr, change);
            is_wheel_visible = false;
            custom_wheel_on = false;
        }

        IL2CPP_INTERCEPT(EquipmentWheel, void, HideImmediate, (app::EquipmentWheel * this_ptr)) {
            next::EquipmentWheel::HideImmediate(this_ptr);
            is_wheel_visible = false;
            custom_wheel_on = false;
        }

        IL2CPP_INTERCEPT(MenuScreenManager, void, HideEquipmentWhell, (app::MenuScreenManager * this_ptr)) {
            if (wheel_behavior == WheelBehavior::Standalone && custom_wheel_input) {
                return;
            }

            return next::MenuScreenManager::HideEquipmentWhell(this_ptr);
        }

        bool can_show_wheel() {
            if (wheels.empty() || wheels[wheel_index].entries.empty()) {
                return false;
            }

            if (!is_wheel_visible &&
                (Game::UI::get_MainMenuVisible() || Game::UI::get_WorldMapVisible() || Game::UI::get_ShardShopVisible() || Game::UI::IsInventoryVisible())) {
                return false;
            }

            return !is_in_trial;
        }

        void handle_custom_wheel(bool pressed) {
            if (pressed) {
                if (!can_show_wheel()) {
                    return;
                }

                // auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
                switch (wheel_behavior) {
                    case WheelBehavior::Standalone:
                        custom_wheel_input = true;
                        if (is_wheel_visible) {
                            refresh_wheel();
                        } else {
                            auto* msm = types::UI::get_class()->static_fields->m_sMenu;
                            MenuScreenManager::ShowEquipmentWheel(msm);
                        }

                        break;
                    case WheelBehavior::Toggle:
                        // TODO: implement toggle behavior
                        break;
                }
            } else {
                if (wheels.empty() || wheels[wheel_index].entries.empty())
                    return;

                // auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
                switch (wheel_behavior) {
                    case WheelBehavior::Standalone: {
                        custom_wheel_input = false;
                        if (!types::Input_Cmd::get_class()->static_fields->OpenWeaponWheel->fields.IsPressed) {
                            auto* msm = types::UI::get_class()->static_fields->m_sMenu;
                            MenuScreenManager::HideEquipmentWhell(msm);
                        } else {
                            refresh_wheel();
                        }

                        if (!wheels[wheel_index].sticky) {
                            wheel_index = 0;
                        }

                        break;
                    }
                    case WheelBehavior::Toggle:
                        // TODO: implement toggle behavior
                        break;
                }
            }
        }

        auto on_open_rando_wheel_before = randomizer::input::single_input_bus().register_handler(Action::OpenRandoWheel, EventTiming::Before, [](auto, auto) {
            handle_custom_wheel(true);
        });

        auto on_open_rando_wheel_after = randomizer::input::single_input_bus().register_handler(Action::OpenRandoWheel, EventTiming::After, [](auto, auto) {
            handle_custom_wheel(false);
        });

        bool override_set_active = false;
        bool override_set_active_value = false;
        IL2CPP_INTERCEPT(CleverMenuItem, void, RefreshVisible, (app::CleverMenuItem * this_ptr)) {
            if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager) {
                override_set_active = true;
                override_set_active_value = true;
            }

            next::CleverMenuItem::RefreshVisible(this_ptr);
            override_set_active = false;
        }

        IL2CPP_INTERCEPT(
            EquipmentRadialSelection,
            void,
            Populate,
            (app::EquipmentRadialSelection * this_ptr, app::List_1_System_Object_* inventory_items, app::Object* grid_context)
        ) {
            wheel_selection_manager = this_ptr->fields.m_navigationManager;
            custom_wheel_on = !wheels.empty() && custom_wheel_input;
            if (custom_wheel_on) {
                // Cache the selection manager and its items so we can modify their behavior later.
                radial_selection = this_ptr;
                wheel_selection_manager->fields.KeepSelectedItemActiveWhenInactive = false;
                wheel_selection_manager->fields.KeepMouseInteractionsWhenInactive = false;
                wheel_selection_manager->fields.AlwaysHighlightCurrentMenuItem = false;
                wheel_selection_manager->fields.CheckIfActiveWhenSettingIndexToFirst = true;
            }

            next::EquipmentRadialSelection::Populate(this_ptr, inventory_items, grid_context);

            const auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
            EquipmentWheelUIDetails::UpdateContext(wheel->fields.EquipmentDetailsCanvas, false);
            const int count = CleverMenuItemSelectionManager::get_MenuItemsCount(wheel_selection_manager);
            if (custom_wheel_on) {
                for (int i = 0; i < count; ++i) {
                    auto* menu_item = CleverMenuItemSelectionManager::GetMenuItem(wheel_selection_manager, i);
                    menu_item->fields.m_selectionManager = wheel_selection_manager;
                }
            }
        }

        IL2CPP_INTERCEPT(UnityEngine::GameObject, void, SetActive, (app::GameObject * this_ptr, bool value)) {
            if (override_set_active) {
                value = override_set_active_value;
            }

            next::UnityEngine::GameObject::SetActive(this_ptr, value);
        }

        IL2CPP_INTERCEPT(CleverMenuItem, bool, get_IsVisible, (app::CleverMenuItem * this_ptr)) {
            if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager) {
                return true;
            }

            return next::CleverMenuItem::get_IsVisible(this_ptr);
        }

        IL2CPP_INTERCEPT(CleverMenuItem, bool, get_IsActivated, (app::CleverMenuItem * this_ptr)) {
            if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager) {
                return true;
            }

            return next::CleverMenuItem::get_IsActivated(this_ptr);
        }

        // Only used the first time you use the wheel.
        IL2CPP_INTERCEPT(EquipmentWheel, bool, HasElement, (app::EquipmentType__Enum type)) {
            if (custom_wheel_on) {
                const auto* entry = get_wheel_entry(type);
                return entry != nullptr && entry->enabled;
            }

            return next::EquipmentWheel::HasElement(type);
        }

        IL2CPP_INTERCEPT(
            CleverMenuItemSelectionManager,
            app::CleverMenuItem*,
            get_CleverMenuItemUnderCursor,
            (app::CleverMenuItemSelectionManager * this_ptr)
        ) {
            disable_has_ability_overwrite = true;
            const int count = CleverMenuItemSelectionManager::get_MenuItemsCount(this_ptr);
            const auto cursor = Core::Input::get_CursorPositionUI();
            app::CleverMenuItem* item = nullptr;
            float distance = INFINITY;

            for (int i = 0; i < count; ++i) {
                auto* current_item = CleverMenuItemSelectionManager::GetMenuItem(this_ptr, i);
                // This is the only meaningful change, we use get_IsActivated instead of calling the Activated delegate directly.
                if (!CleverMenuItem::get_IsVisible(current_item) || !CleverMenuItem::get_IsActivated(current_item))
                    continue;

                const auto item_bounds = CleverMenuItem::get_Bounds(current_item);
                if ((item_bounds.m_XMin > cursor.x) || (cursor.x >= item_bounds.m_Width + item_bounds.m_XMin) || (item_bounds.m_YMin > cursor.y) ||
                    (cursor.y >= item_bounds.m_YMin + item_bounds.m_Height))
                    continue;

                const app::Vector3 cursor_v3{cursor.x, cursor.y, 0.0f};
                const app::Vector3 center_v3{item_bounds.m_XMin + item_bounds.m_Width / 2.0f, item_bounds.m_YMin + item_bounds.m_Height / 2.0f, 0.0f};
                const float new_distance = UnityEngine::Vector3::Distance(center_v3, cursor_v3);
                if (new_distance < distance) {
                    item = current_item;
                    distance = new_distance;
                }
            }

            disable_has_ability_overwrite = false;
            return item;
        }

        IL2CPP_INTERCEPT(EquipmentWheelUIDetails, void, UpdateContext, (app::EquipmentWheelUIDetails * this_ptr, bool to_right)) {
            if (custom_wheel_on) {
                auto* name_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
                auto* description_message_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());
                auto* description_text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.DescriptionGO, types::TextBox::get_class());
                description_text_box->fields.maxHeight = 4.00000000;

                const CustomWheelEntry* entry = nullptr;
                if (this_ptr->fields.m_item != nullptr) {
                    entry = get_wheel_entry(this_ptr->fields.m_item->fields.m_type);
                }

                if (entry != nullptr) {
                    name_message_box->fields.MessageProvider = core::api::system::create_message_provider(entry->name);
                    description_message_box->fields.MessageProvider = core::api::system::create_message_provider(entry->description);
                } else {
                    name_message_box->fields.MessageProvider = core::text::get_provider(*static_text_entry::EmptyName);
                    description_message_box->fields.MessageProvider = core::text::get_provider(*static_text_entry::Empty);
                }

                UnityEngine::GameObject::SetActive(this_ptr->fields.UsesEnergyGO, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.DrainsEnergyGO, false);
                MessageBox::RefreshText_1(name_message_box);
                MessageBox::RefreshText_1(description_message_box);
            } else {
                next::EquipmentWheelUIDetails::UpdateContext(this_ptr, to_right);
            }
        }

        IL2CPP_INTERCEPT(SpellUIItem, void, UpdateSpellIcon, (app::SpellUIItem * this_ptr)) {
            auto* renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            if (custom_wheel_on) {
                CustomWheelEntry* entry = this_ptr->fields.m_spell != nullptr ? get_wheel_entry(this_ptr->fields.m_spell->fields.m_type) : nullptr;
                if (entry == nullptr) {
                    core::api::graphics::textures::apply_default(renderer);
                    next::SpellUIItem::UpdateSpellIcon(this_ptr);
                    return;
                }

                if (entry->texture_data == nullptr) {
                    entry->texture_data = core::api::graphics::textures::create_texture();
                    const auto* spell_settings = types::SpellSettings::get_class();
                    const auto* icons = spell_settings->static_fields->Instance->fields.Icons;
                    entry->texture_data->set_texture(reinterpret_cast<app::Texture*>(icons->fields._.Missing.InventoryIcon));
                }

                entry->texture_data->apply(renderer);
            } else {
                core::api::graphics::textures::apply_default(renderer);
                next::SpellUIItem::UpdateSpellIcon(this_ptr);
            }
        }

        IL2CPP_INTERCEPT(SpellUIItem, void, UpdateSpellProperties, (app::SpellUIItem * this_ptr, bool initialize)) {
            // CustomWheelEntry* entry = this_ptr->fields.m_spell != nullptr ? get_wheel_entry(this_ptr->fields.m_spell->fields.m_type) : nullptr;
            if (custom_wheel_on) {
                UnityEngine::GameObject::SetActive(this_ptr->fields.EquippedGOB, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.EquippedGOX, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.EquippedGOY, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.EquippedShared, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.EnergyGO, false);
                UnityEngine::GameObject::SetActive(this_ptr->fields.NewGO, false);
            } else {
                next::SpellUIItem::UpdateSpellProperties(this_ptr, initialize);
            }
        }

        IL2CPP_INTERCEPT(EquipmentWheel, void, OnPressButton, (app::EquipmentWheel * this_ptr, app::SpellInventory_Binding__Enum binding)) {
            if (custom_wheel_on) {
                auto* item = EquipmentWheel::get_SelectedSpellUIItem(this_ptr);
                if (item != nullptr && item->fields.m_spell != nullptr) {
                    const auto* entry = get_wheel_entry(item->fields.m_spell->fields.m_type);
                    if (entry != nullptr && entry->action != nullptr) {
                        entry->action(*entry, item, binding);
                    }
                }
            } else {
                next::EquipmentWheel::OnPressButton(this_ptr, binding);
            }
        }

        // Could technically add a 4th button here.
        // IL2CPP_INTERCEPT(, CleverMenuItem, void, OnPressed, (app::CleverMenuItem* this_ptr)) {
        //    CleverMenuItem::OnPressed(this_ptr);
        //    if (custom_wheel_on && this_ptr->fields.m_selectionManager == wheel_selection_manager)
        //    {
        //        auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
        //        auto* item = EquipmentWheel::get_SelectedSpellUIItem(wheel);
        //        if (item != nullptr && item->fields.m_spell != nullptr)
        //        {
        //            auto* entry = get_wheel_entry(item->fields.m_spell->fields.m_type);
        //            if (entry != nullptr && entry->action != nullptr)
        //                entry->action(*entry, item, 3);
        //        }
        //    }
        //}

        void binding_callback(CustomWheelEntry const& entry, app::SpellUIItem* item, app::SpellInventory_Binding__Enum binding) {
            const auto index = EquipmentRadialSelection::GetWheelIndex(item->fields.m_spell->fields.m_type);
            const auto callback = entry.callbacks[static_cast<int>(binding)];
            if (callback == nullptr) {
                return;
            }

            callback(wheel_index, static_cast<WheelItemPosition>(index), binding);

            // Refresh things.
            const auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
            EquipmentWheelUIDetails::UpdateContext(wheel->fields.EquipmentDetailsCanvas, false);
            SpellUIItem::UpdateSpellIcon(item);
        }

        bool is_valid_wheel_index(const int wheel, const WheelItemPosition item) {
            return wheel >= 0 && static_cast<int>(item) >= 0 && static_cast<int>(item) < 12;
        }

        void select_closest(app::CleverMenuItemSelectionManager* manager, const app::Vector2& axis) {
            const auto magnitude = sqrtf(axis.x * axis.x + axis.y * axis.y);
            if (magnitude < 0.2f) {
                return;
            }

            const auto manager_go = il2cpp::unity::get_game_object(manager);
            if (manager_go == nullptr) {
                return;
            }

            const auto line_p1 = UnityEngine::Transform::get_position(il2cpp::unity::get_transform(manager));
            const app::Vector3 line_p2{line_p1.x + axis.x / magnitude, line_p1.y + axis.y / magnitude, 0.0f};
            float distance = INFINITY;
            auto closest = -1;
            auto i = 0;

            for (; i < manager->fields.m_menuItems->fields._size; ++i) {
                const auto item = manager->fields.m_menuItems->fields._items->vector[i];
                const auto item_bounds = CleverMenuItem::get_Bounds(item);
                const app::Vector3 center_v3{item_bounds.m_XMin + item_bounds.m_Width / 2.0f, item_bounds.m_YMin + item_bounds.m_Height / 2.0f, 0.0f};
                const auto i_distance = MoonMath_Line::DistancePointToLine2D(line_p1, line_p2, center_v3);
                if (i_distance < distance) {
                    closest = i;
                    distance = i_distance;
                }
            }

            CleverMenuItemSelectionManager::set_IsHighlightVisible(manager, closest != -1);
            CleverMenuItemSelectionManager::SetCurrentItem(manager, closest, closest != -1);
            il2cpp::invoke(manager->fields.OnRadialItemChanged, "Invoke");
        }

        IL2CPP_INTERCEPT(CleverMenuItemSelectionManager, void, RefreshVisible, (app::CleverMenuItemSelectionManager * this_ptr)) {
            next::CleverMenuItemSelectionManager::RefreshVisible(this_ptr);
            // This is stupid but required because this function is called in a lambda.
            if (is_wheel_visible) {
                update_wheel_position();
            }
        }

        void update_wheel_position() {
            const auto wheel = types::EquipmentWheel::get_class()->static_fields->Instance;
            auto* manager = wheel->fields.RadialSelection->fields.m_navigationManager;

            // Trigger movement so wheel updates selection after refresh.
            switch (types::GameSettings::get_class()->static_fields->Instance->fields.m_currentControlSchemes) {
                case app::ControlScheme__Enum::Switch:
                case app::ControlScheme__Enum::Controller:
                case app::ControlScheme__Enum::Keyboard:
                    select_closest(manager, manager->fields.m_lastMenuAxis);
                    break;
                case app::ControlScheme__Enum::KeyboardAndMouse:
                    const auto item = CleverMenuItemSelectionManager::get_CleverMenuItemUnderCursor(manager);
                    if (il2cpp::unity::is_valid(item)) {
                        CleverMenuItemSelectionManager::SetCurrentMenuItem(manager, item, true);
                        CleverMenuItem::OnHighlight(item, true);
                    }
                    break;
            }
        }
    } // namespace

    bool set_wheel_item_name(const int wheel, const WheelItemPosition item, std::string const& name) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        wheels[wheel].entries[item].name = name;
        refresh_wheel();
        return true;
    }

    bool set_wheel_item_description(const int wheel, const WheelItemPosition item, std::string const& description) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        wheels[wheel].entries[item].description = description;
        refresh_wheel();
        return true;
    }

    bool set_wheel_item_texture(const int wheel, const WheelItemPosition item, std::string const& texture) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        auto& entry = wheels[wheel].entries[item];
        if (texture.empty()) {
            entry.texture_data = nullptr;
        } else {
            entry.texture_data = core::api::graphics::textures::get_texture(texture);
            if (entry.texture_data == nullptr) {
                warn("wheel", std::format("failed to find texture {}", texture));
                return false;
            }

            entry.texture_data->set_color(entry.color);
        }

        refresh_wheel();
        return true;
    }

    bool set_wheel_item_color(const int wheel, const WheelItemPosition item, int r, int g, int b, int a) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        if (r < 0 || 255 < r || g < 0 || 255 < g || b < 0 || 255 < b || a < 0 || 255 < a) {
            warn("wheel", std::format("invalid color passed to wheel [{}, {}]: ({}, {}, {}, {})", wheel, static_cast<int>(item), r, g, b, a));
            r = std::max(std::min(r, 255), 0);
            g = std::max(std::min(g, 255), 0);
            b = std::max(std::min(b, 255), 0);
            a = std::max(std::min(a, 255), 0);
        }

        auto& entry = wheels[wheel].entries[item];
        entry.color = app::Color{r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f};
        if (entry.texture_data != nullptr) {
            entry.texture_data->set_color(entry.color);
        }

        refresh_wheel();
        return true;
    }

    bool set_wheel_item_enabled(const int wheel, const WheelItemPosition item, const bool enabled) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        wheels[wheel].entries[item].enabled = enabled;
        return true;
    }

    bool set_wheel_item_callback(
        const int wheel,
        const WheelItemPosition item,
        const app::SpellInventory_Binding__Enum binding,
        const wheel_callback& callback
    ) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        auto& entry = wheels[wheel].entries[item];
        entry.action = binding_callback;
        entry.callbacks[static_cast<int>(binding)] = callback;
        return true;
    }

    bool clear_wheel_item(const int wheel, const WheelItemPosition item) {
        if (!is_valid_wheel_index(wheel, item)) {
            warn("wheel", std::format("invalid wheel index [{}, {}] in command", wheel, static_cast<int>(item)));
            return false;
        }

        wheels[wheel].entries.erase(item);
        return true;
    }

    void refresh_wheel() {
        if (is_wheel_visible) {
            dont_fade = true;
            const auto wheel_class = types::EquipmentWheel::get_class();
            if (!il2cpp::unity::is_valid(wheel_class)) {
                return;
            }

            const auto wheel = wheel_class->static_fields->Instance;
            if (!il2cpp::unity::is_valid(wheel)) {
                return;
            }

            EquipmentWheel::ShowImmediate(wheel);
            dont_fade = false;
        }
    }

    bool set_active_wheel(const int wheel) {
        const auto it = wheels.find(wheel);
        if (it == wheels.end()) {
            warn("wheel", std::format("Wheel [{}] does not exist", wheel));
            return false;
        }

        wheel_index = wheel;
        refresh_wheel();
        return true;
    }

    void set_wheel_sticky(const int wheel, const bool value) { wheels[wheel].sticky = value; }

    void set_wheel_behavior(const int behavior) { wheel_behavior = static_cast<WheelBehavior>(behavior); }

    // For cleanup.
    void clear_wheels() {
        custom_wheel_input = false;
        custom_wheel_on = false;
        wheel_index = 0;
        wheels.clear();
        refresh_wheel();
    }
} // namespace randomizer::features::wheel
