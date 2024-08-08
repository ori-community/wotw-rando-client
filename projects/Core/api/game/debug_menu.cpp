#include <Core/api/game/debug_menu.h>
#include <Core/api/graphics/textures.h>
#include <Modloader/app/methods/CheatsHandler.h>
#include <Modloader/app/methods/DebugMenu.h>
#include <Modloader/app/methods/HierarchyDebugMenu.h>
#include <Modloader/app/methods/UnityEngine/GUILayout.h>
#include <Modloader/app/methods/UnityEngine/GUIStyle.h>
#include <Modloader/app/methods/UnityEngine/GUIStyleState.h>
#include <Modloader/app/methods/UnityEngine/Texture.h>
#include <Modloader/app/methods/UnityEngine/Texture2D.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/UberStateVisualizationView.h>
#include <Modloader/app/methods/Moon/UberStateVisualization/ListView.h>
#include <Modloader/app/types/CheatsHandler.h>
#include <Modloader/app/types/DebugValues.h>
#include <Modloader/app/types/Texture2D.h>
#include <Modloader/modloader.h>
#include <optional>

using namespace app::classes;

namespace core::api::game::debug_menu {
    /**
     * This flag is true if Debug Controls have been enabled
     * at any point since the game started or the debug
     * menu has been opened at least once.
     */
    bool debug_was_active_this_session = false;

    /**
     * If true, prevents enabling debug mode
     */
    bool prevent_cheats = false;

    std::optional<bool> was_debug_enabled_initially = std::nullopt;

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebug, (app::CheatsHandler* this_ptr)) {
        if (prevent_cheats) {
            return;
        }

        debug_was_active_this_session = true;
        next::CheatsHandler::ActivateDebug(this_ptr);
    }

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebugMenu, (app::CheatsHandler* this_ptr)) {
        if (prevent_cheats) {
            return;
        }

        debug_was_active_this_session = true;
        next::CheatsHandler::ActivateDebugMenu(this_ptr);
    }

    auto draw_gui_area_without_style = false;
    IL2CPP_INTERCEPT(UnityEngine::GUILayout, void, BeginArea_4, (app::Rect screen_rect, app::GUIStyle* style)) {
        if (draw_gui_area_without_style) {
            UnityEngine::GUILayout::BeginArea_1(screen_rect);
            return;
        }

        next::UnityEngine::GUILayout::BeginArea_4(screen_rect, style);
    }

    IL2CPP_INTERCEPT(HierarchyDebugMenu, bool, Draw, (app::HierarchyDebugMenu * this_ptr, app::Rect rect, bool is_selected)) {
        modloader::ScopedSetter _(draw_gui_area_without_style, true);
        return next::HierarchyDebugMenu::Draw(this_ptr, rect, is_selected);
    }

    IL2CPP_INTERCEPT(DebugMenu, void, Awake, (app::DebugMenu* this_ptr)) {
        next::DebugMenu::Awake(this_ptr);

        const auto texture = types::Texture2D::create();
        UnityEngine::Texture2D::ctor_5(texture, 1, 1, app::TextureFormat__Enum::RGBA32, false);
        UnityEngine::Texture2D::SetPixel(texture, 0, 0, app::Color{0.f, 0.f, 0.f, 0.4f});
        UnityEngine::Texture2D::Compress(texture, false);
        UnityEngine::Texture::set_wrapMode(reinterpret_cast<app::Texture*>(texture), app::TextureWrapMode__Enum::Repeat);
        UnityEngine::Texture2D::Apply_1(texture, true, true);
        graphics::textures::dont_unload_texture(reinterpret_cast<app::Texture*>(texture));

        const auto normal = UnityEngine::GUIStyle::get_normal(this_ptr->fields.Skin->fields.m_CustomStyles->vector[9]);
        UnityEngine::GUIStyleState::set_background(normal, texture);
    }

    void set_should_prevent_cheats(bool prevent) {
        if (!was_debug_enabled_initially.has_value()) {
            was_debug_enabled_initially = is_debug_enabled();
        }

        if (prevent && is_debug_enabled()) {
            set_debug_enabled(false);
        } else if (!prevent && was_debug_enabled_initially.has_value() && *was_debug_enabled_initially) {
            set_debug_enabled(true);
        }

        prevent_cheats = prevent;
    }

    bool should_prevent_cheats() {
        return prevent_cheats;
    }

    void set_debug_enabled(bool enable) {
        if (enable && prevent_cheats) {
            return;
        }

        if (enable) {
            debug_was_active_this_session = true;
        }

        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        if (cheats->Instance->fields.DebugEnabled != enable) {
            cheats->Instance->fields.DebugEnabled = enable;
            cheats->DebugWasEnabled = cheats->DebugWasEnabled || enable;
            cheats->DebugAlwaysEnabled = enable;
            types::DebugValues::get_class()->static_fields->DebugControlsEnabled = enable;
        }
    }

    bool is_debug_enabled() {
        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        return cheats->Instance->fields.DebugEnabled;
    }

    bool was_debug_active_this_session() {
        return debug_was_active_this_session;
    }

    namespace better_uber_state_menu {
        auto is_building_list = false;
        auto selected_group_index = 0;
        std::unordered_map<int, int> last_selected_state_index_per_group;

        void restore_state_selection(const app::UberStateVisualizationView* view) {
            Moon::UberStateVisualization::ListView::SelectItem_1(view->fields.m_statesListView, last_selected_state_index_per_group[selected_group_index]);
        }

        void restore_group_selection(const app::UberStateVisualizationView* view) {
            Moon::UberStateVisualization::ListView::SelectItem_1(view->fields.m_groupsListView, selected_group_index);
            restore_state_selection(view);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::UberStateVisualizationView, void, UpdateWithModel, (app::UberStateVisualizationView * this_ptr, app::UberStateValueStore* uber_state_value_store)) {
            {
                modloader::ScopedSetter _(is_building_list, true);
                next::Moon::UberStateVisualization::UberStateVisualizationView::UpdateWithModel(this_ptr, uber_state_value_store);
            }

            restore_group_selection(this_ptr);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::UberStateVisualizationView, void, OnGroupsListViewSelectionChanged, (app::UberStateVisualizationView * this_ptr, app::ListViewItem* selected_item)) {
            {
                modloader::ScopedSetter _(is_building_list, true);
                next::Moon::UberStateVisualization::UberStateVisualizationView::OnGroupsListViewSelectionChanged(this_ptr, selected_item);
            }

            if (is_building_list) {
                return;
            }

            auto index = 0;
            for (const auto& item: il2cpp::ListIterator(this_ptr->fields.m_groupsListView->fields.m_items)) {
                if (item == selected_item) {
                    selected_group_index = index;
                    break;
                }

                ++index;
            }

            restore_state_selection(this_ptr);
        }

        IL2CPP_INTERCEPT(Moon::UberStateVisualization::UberStateVisualizationView, void, OnStatesListViewSelectionChanged, (app::UberStateVisualizationView * this_ptr, app::ListViewItem* selected_item)) {
            next::Moon::UberStateVisualization::UberStateVisualizationView::OnStatesListViewSelectionChanged(this_ptr, selected_item);

            if (is_building_list) {
                return;
            }

            auto index = 0;
            for (const auto& item: il2cpp::ListIterator(this_ptr->fields.m_statesListView->fields.m_items)) {
                if (item == selected_item) {
                    last_selected_state_index_per_group[selected_group_index] = index;
                    break;
                }

                ++index;
            }
        }
    }
}
