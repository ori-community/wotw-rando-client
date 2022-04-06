#include <game/game.h>
#include <game/ui.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

namespace game
{
    namespace ui
    {
        namespace
        {
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_WeaponmasterScreenVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_BuilderScreenVisible, ());
            STATIC_IL2CPP_BINDING(Game, UI, bool, get_GardenerScreenVisible, ());
            IL2CPP_BINDING(, MenuScreenManager, bool, IsVisible, (app::MenuScreenManager* this_ptr, app::MenuScreenManager_Screens__Enum screen));

            bool is_area_map_open = false;
            void on_area_map_open(GameEvent game_event, EventTiming timing)
            {
                is_area_map_open = timing == EventTiming::Start;
            }

            void initialize()
            {
                game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::Start, &on_area_map_open);
                game::event_bus().register_handler(GameEvent::AreaMap, EventTiming::End, &on_area_map_open);
            }
        }

        app::UI__Class* get() { return il2cpp::get_class<app::UI__Class>("Game", "UI"); }

        bool area_map_open() { return is_area_map_open; }
        bool world_map_open() { return UI::get_WorldMapVisible(); }
        bool menu_open()
        {
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

        bool shop_open()
        {
            return UI::get_ShardShopVisible() ||
                UI::get_WeaponmasterScreenVisible() ||
                UI::get_BuilderScreenVisible() ||
                UI::get_GardenerScreenVisible();
        }
    }
}
