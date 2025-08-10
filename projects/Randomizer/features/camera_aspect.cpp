#include <Core/api/game/game.h>
#include <Modloader/app/methods/MaintainAspectRatio.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/methods/UnityEngine/Screen.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

namespace {
    using namespace app::classes;

    constexpr auto ASPECT_16_BY_9 = 16.f / 9.f;

    auto aspect_compensation_scale = 1.f;

    float get_aspect_compensation_scale() {
        const auto width = UnityEngine::Screen::get_width();
        const auto height = UnityEngine::Screen::get_height();
        const auto screen_aspect = static_cast<float>(width) / static_cast<float>(height);

        if (screen_aspect < ASPECT_16_BY_9) {
            return screen_aspect / ASPECT_16_BY_9;
        }

        return 1.f;
    }

    void set_x_position(void* game_object, float x_position) {
        auto position = il2cpp::unity::get_local_position(game_object);
        position.x = x_position;
        il2cpp::unity::set_local_position(game_object, position);
    }

    void apply_screen_aspect_scaling(app::MenuScreenManager_Screens__Enum screen) {
        switch (screen) {
            case app::MenuScreenManager_Screens__Enum::Pause: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::Pause);
                if (screen_instance != nullptr) {
                    il2cpp::unity::set_local_scale(screen_instance, {aspect_compensation_scale, aspect_compensation_scale, 1.f});
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::Options: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::Options);
                if (screen_instance != nullptr) {
                    il2cpp::unity::set_local_scale(screen_instance, {aspect_compensation_scale, aspect_compensation_scale, 1.f});
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::ShardsShop: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::ShardsShop);
                if (screen_instance != nullptr) {
                    const auto offset = (aspect_compensation_scale - 1.f) * -7.f;
                    set_x_position(screen_instance, offset);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legend"), -offset - 1.f);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legendTop"), -offset);
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::SkillUpgrade: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::SkillUpgrade);
                if (screen_instance != nullptr) {
                    set_x_position(screen_instance, (aspect_compensation_scale - 1.f) * -7.f);
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::BuilderProjects: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::BuilderProjects);
                if (screen_instance != nullptr) {
                    const auto offset = (aspect_compensation_scale - 1.f) * -7.f;
                    set_x_position(screen_instance, offset);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legend"), -offset - 1.f);
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::GardenerProjects: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::GardenerProjects);
                if (screen_instance != nullptr) {
                    const auto offset = (aspect_compensation_scale - 1.f) * -7.f;
                    set_x_position(screen_instance, offset);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legend"), -offset - 1.f);
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::MapmakerShop: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::MapmakerShop);
                if (screen_instance != nullptr) {
                    const auto offset = (aspect_compensation_scale - 1.f) * -7.f;
                    set_x_position(screen_instance, offset);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legend"), -offset - 1.f);
                }
            } break;
            case app::MenuScreenManager_Screens__Enum::ShardUpgradeShop: {
                const auto screen_instance = MenuScreenManager::GetScreenInstance(types::UI::get_class()->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::ShardUpgradeShop);
                if (screen_instance != nullptr) {
                    const auto offset = (aspect_compensation_scale - 1.f) * -7.f;
                    set_x_position(screen_instance, offset);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legend"), -offset - 1.f);
                    set_x_position(il2cpp::unity::find_child(screen_instance, "legendTop"), -offset);
                }
            } break;
            default:
        }
    }

    IL2CPP_INTERCEPT(void, MaintainAspectRatio, LateUpdate, app::MaintainAspectRatio* this_ptr) {
        UnityEngine::Camera::set_rect(this_ptr->fields.m_camera, app::Rect(0.f, 0.f, 1.f, 1.f));

        const auto current_aspect_compensation_scale = get_aspect_compensation_scale();

        if (current_aspect_compensation_scale != aspect_compensation_scale) {
            aspect_compensation_scale = current_aspect_compensation_scale;
            apply_screen_aspect_scaling(types::UI::get_class()->static_fields->m_sMenu->fields.CurrentScreen);
        }
    }

    IL2CPP_INTERCEPT_WITH_ORDER(0, void, MenuScreenManager, ShowMenuScreen, app::MenuScreenManager * this_ptr, app::MenuScreenManager_Screens__Enum screen, bool immediate, bool play_sound, bool pause) {
        next::MenuScreenManager::ShowMenuScreen(this_ptr, screen, immediate, play_sound, pause);
        apply_screen_aspect_scaling(screen);
    }

    IL2CPP_INTERCEPT(void, MenuScreenManager, ChangeScreen, app::MenuScreenManager * this_ptr, app::MenuScreenManager_Screens__Enum screen) {
        next::MenuScreenManager::ChangeScreen(this_ptr, screen);
        apply_screen_aspect_scaling(screen);
    }
}
