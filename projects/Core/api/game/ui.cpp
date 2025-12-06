#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>
#include <Core/events/action.h>

#include <Modloader/app/methods/Game/UI.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/SeinUI.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace core::api::game::ui {
    namespace {
        bool is_area_map_open = false;
        bool manually_shaking_resource_ui = false;

        auto on_after_open_area_map = game::event_bus().register_handler(
            GameEvent::OpenAreaMap,
            EventTiming::After,
            [](auto game_event, auto timing) {
                is_area_map_open = true;
            }
        );

        auto on_after_close_area_map = game::event_bus().register_handler(
            GameEvent::CloseAreaMap,
            EventTiming::After,
            [](auto game_event, auto timing) {
                is_area_map_open = false;
            }
        );

        common::Droppable::ptr_t on_after_faderb_fade_out_finished;
        IL2CPP_INTERCEPT(void, TitleScreenManager, Start, app::TitleScreenManager * this_ptr) {
            game::event_bus().trigger_event(GameEvent::TitleScreenStartup, EventTiming::Before);
            next::TitleScreenManager::Start(this_ptr);
            on_after_faderb_fade_out_finished = game::event_bus().register_handler(
                GameEvent::FaderBFadeOutFinished,
                EventTiming::After,
                [](auto, auto) {
                    on_after_faderb_fade_out_finished = nullptr;
                    game::event_bus().trigger_event(GameEvent::TitleScreenStartup, EventTiming::After);
                }
            );
        }

        IL2CPP_INTERCEPT(void, AreaMapUI, OnDestroy, app::AreaMapUI * this_ptr) {
            event_bus().trigger_event(GameEvent::DestroyAreaMap, EventTiming::Before);
            next::AreaMapUI::OnDestroy(this_ptr);
            event_bus().trigger_event(GameEvent::DestroyAreaMap, EventTiming::After);
        }
    } // namespace

    bool is_manually_shaking_resource_ui() {
        return manually_shaking_resource_ui;
    }

    app::UI__Class* get() {
        return types::UI::get_class();
    }

    app::AreaMapUI* area_map() {
        return types::AreaMapUI::get_class()->static_fields->Instance;
    }

    bool area_map_open() {
        return is_area_map_open;
    }

    bool world_map_open() {
        return Game::UI::get_WorldMapVisible();
    }

    bool menu_open() {
        auto ui = get();
        if (MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::WorldMap) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::EquipmentWheel) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::ShardsShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::BuilderProjects) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::GardenerProjects) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::Loremaster) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::RaceScreen) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::MapmakerShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::ShardUpgradeShop) ||
            MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::Stats)) {
            return true;
        }

        if (Game::UI::get_MainMenuVisible() ||
            area_map_open() ||
            world_map_open() ||
            shop_open()) {
            return true;
        }

        return false;
    }

    bool shop_open() {
        return Game::UI::get_ShardShopVisible() ||
            Game::UI::get_WeaponmasterScreenVisible() ||
            Game::UI::get_BuilderScreenVisible() ||
            Game::UI::get_GardenerScreenVisible();
    }

    void shake_spirit_light() {
        ScopedSetter setter(manually_shaking_resource_ui, true);
        if (get()->static_fields->SeinUI == nullptr) {
            error("game", "SeinUI is invalid!");
        } else {
            SeinUI::ShakeSpiritLight_1(game::ui::get()->static_fields->SeinUI);
        }
    }

    void shake_keystone() {
        ScopedSetter setter(manually_shaking_resource_ui, true);
        if (game::ui::get()->static_fields->SeinUI == nullptr) {
            error("game", "SeinUI is invalid!");
        } else {
            SeinUI::ShakeKeystones(game::ui::get()->static_fields->SeinUI);
        }
    }

    void shake_ore() {
        ScopedSetter setter(manually_shaking_resource_ui, true);
        if (game::ui::get()->static_fields->SeinUI == nullptr) {
            error("game", "SeinUI is invalid!");
        } else {
            SeinUI::ShakeSeeds_1(game::ui::get()->static_fields->SeinUI);
        }
    }
} // namespace core::api::game::ui
