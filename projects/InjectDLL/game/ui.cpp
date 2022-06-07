#include <game/game.h>
#include <game/pickups/pickups.h>
#include <game/ui.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/Game/UI.h>
#include <Il2CppModLoader/app/methods/MenuScreenManager.h>
#include <Il2CppModLoader/app/methods/SeinUI.h>

using namespace modloader;
using namespace app::methods;

namespace game {
    namespace ui {
        namespace {
            bool is_area_map_open = false;

            void on_area_map_open(GameEvent game_event, EventTiming timing) {
                is_area_map_open = timing == EventTiming::Start;
            }

            void initialize() {
                game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::Start, &on_area_map_open);
                game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::End, &on_area_map_open);
            }

            CALL_ON_INIT(initialize);
        } // namespace

        app::UI__Class *get() {
            return il2cpp::get_class<app::UI__Class>("Game", "UI");
        }

        bool area_map_open() {
            return is_area_map_open;
        }

        bool world_map_open() {
            return Game::UI::get_WorldMapVisible();
        }

        bool menu_open() {
            auto ui = get();
            if (MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::WorldMap) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::EquipmentWheel) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::ShardsShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::BuilderProjects) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::GardenerProjects) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::Loremaster) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::RaceScreen) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::MapmakerShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu,
                                             app::MenuScreenManager_Screens__Enum::ShardUpgradeShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum::Stats))
                return true;

            if (Game::UI::get_MainMenuVisible() ||
                area_map_open() ||
                world_map_open() ||
                shop_open())
                return true;

            return false;
        }

        bool shop_open() {
            return Game::UI::get_ShardShopVisible() ||
                   Game::UI::get_WeaponmasterScreenVisible() ||
                   Game::UI::get_BuilderScreenVisible() ||
                   Game::UI::get_GardenerScreenVisible();
        }

        void shake_spiritlight() {
            auto setter(pickups::scoped_not_collecting_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeSpiritLight_1(game::ui::get()->static_fields->SeinUI);
        }

        void shake_keystone() {
            auto setter(pickups::scoped_not_collecting_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeKeystones(game::ui::get()->static_fields->SeinUI);
        }

        void shake_ore() {
            auto setter(pickups::scoped_not_collecting_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeSeeds_1(game::ui::get()->static_fields->SeinUI);
        }
    } // namespace ui
} // namespace game

INJECT_C_DLLEXPORT void shake_spiritlight() {
    game::ui::shake_spiritlight();
}

INJECT_C_DLLEXPORT void shake_keystone() {
    game::ui::shake_keystone();
}

INJECT_C_DLLEXPORT void shake_ore() {
    game::ui::shake_ore();
}
