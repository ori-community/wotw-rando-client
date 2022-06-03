#include <game/game.h>
#include <game/pickups/pickups.h>
#include <game/ui.h>
#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace game {
    namespace ui {
        namespace {
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());
            IL2CPP_BINDING(, MenuScreenManager, bool, IsVisible, (app::MenuScreenManager * this_ptr, app::MenuScreenManager_Screens__Enum screen));
            IL2CPP_BINDING(, SeinUI, void, ShakeSpiritLight, (app::SeinUI * this_ptr));
            IL2CPP_BINDING(, SeinUI, void, ShakeKeystones, (app::SeinUI * this_ptr));
            IL2CPP_BINDING(, SeinUI, void, ShakeSeeds, (app::SeinUI * this_ptr));

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

        app::UI__Class* get() {
            return il2cpp::get_class<app::UI__Class>("Game", "UI");
        }

        bool area_map_open() {
            return is_area_map_open;
        }
        bool world_map_open() {
            return UI::get_WorldMapVisible();
        }
        bool menu_open() {
            auto ui = get();
            if (MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_WorldMap) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_EquipmentWheel) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardsShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_BuilderProjects) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_GardenerProjects) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Loremaster) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_RaceScreen) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_MapmakerShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_ShardUpgradeShop) ||
                MenuScreenManager::IsVisible(ui->static_fields->m_sMenu, app::MenuScreenManager_Screens__Enum_Stats))
                return true;

            if (UI::get_MainMenuVisible() ||
                area_map_open() ||
                world_map_open() ||
                shop_open())
                return true;

            return false;
        }

        bool shop_open() {
            return UI::get_ShardShopVisible() ||
                    UI::get_WeaponmasterScreenVisible() ||
                    UI::get_BuilderScreenVisible() ||
                    UI::get_GardenerScreenVisible();
        }

        void shake_spiritlight() {
            auto setter(pickups::collect_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeSpiritLight(game::ui::get()->static_fields->SeinUI);
        }

        void shake_keystone() {
            auto setter(pickups::collect_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeKeystones(game::ui::get()->static_fields->SeinUI);
        }

        void shake_ore() {
            auto setter(pickups::collect_pickup());
            if (game::ui::get()->static_fields->SeinUI == nullptr)
                trace(MessageType::Error, 2, "game", "SeinUI is invalid!");
            else
                SeinUI::ShakeSeeds(game::ui::get()->static_fields->SeinUI);
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
