#include <interception_macros.h>
#include <dll_main.h>
#include <Common/ext.h>
#include <common.h>
#include <csharp_bridge.h>
#include <features/input_poller.h>
#include <features/messages.h>

namespace {
    IL2CPP_BINDING(, GameWorld, app::GameWorldArea*, GetArea, (app::GameWorld* thisPtr, int32_t areaID))
    IL2CPP_BINDING(, GameWorld, app::RuntimeGameWorldArea*, FindRuntimeArea, (app::GameWorld* thisPtr, app::GameWorldArea* area));
    IL2CPP_BINDING(, RuntimeGameWorldArea, void, DiscoverAllAreas, (app::RuntimeGameWorldArea* thisPtr));

    app::GameWorld* game_world_instance = 0;

    bool found_game_world()
    {
	    return game_world_instance != 0;
    }

    IL2CPP_INTERCEPT(, GameWorld, void, Awake, (app::GameWorld* thisPtr)) {
	    if (game_world_instance != thisPtr)
	    {
            trace(MessageType::Debug, 5, "game", "Found GameWorld instance!");
		    game_world_instance = thisPtr;
	    }
	    GameWorld::Awake(thisPtr);
    }

    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, IsVisible, (app::RuntimeWorldMapIcon* thisPtr, app::AreaMapUI* areaMap)) {
        return true;
    }

    IL2CPP_INTERCEPT(, RuntimeWorldMapIcon, bool, CanBeTeleportedTo, (app::RuntimeWorldMapIcon* thisPtr)) {
        return RuntimeWorldMapIcon::CanBeTeleportedTo(thisPtr) || csharp_bridge::tp_to_any_pickup();
    }

    extern "C" __declspec(dllexport)
    bool discover_everything() {
	    if (game_world_instance)
	    {
		    for (int32_t i = 0; i <= 15; i++)
		    {
			    auto area = GameWorld::GetArea(game_world_instance, i);
			    if (!area) {
				    //Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				    continue;
			    }

			    auto runtimeArea = GameWorld::FindRuntimeArea(game_world_instance, area);
			    if (!runtimeArea)
				    continue;

                RuntimeGameWorldArea::DiscoverAllAreas(runtimeArea);
            }

            trace(MessageType::Debug, 5, "game", "Map revealed");
		    return true;
	    }
	    else {
            trace(MessageType::Warning, 3, "game", "Tried to discover all, but haven't found the GameWorld Instance yet :(");
		    return false;
	    }
    }

    constexpr InputButton FOCUS_BUTTON = InputButton::Ability3;
    void update_map_focus(InputState const& state);
    app::AreaMapNavigation* cached = nullptr;
    app::GameWorldAreaID__Enum area_id = app::GameWorldAreaID__Enum_None;


    IL2CPP_BINDING(, GameMapUI, app::RuntimeGameWorldArea*, get_CurrentHighlightedArea, (app::GameMapUI* this_ptr));
    IL2CPP_INTERCEPT(, GameMapUI, void, FixedUpdate, (app::GameMapUI* this_ptr)) {
      GameMapUI::FixedUpdate(this_ptr);
      auto area = GameMapUI::get_CurrentHighlightedArea(this_ptr);
      auto aid = area->fields.Area->fields.WorldMapAreaUniqueID;
      if (aid != area_id) {
        area_id = aid;
        csharp_bridge::on_map_pan(area_id);
      }

    }
    IL2CPP_INTERCEPT(, AreaMapUI, void, Show, (app::AreaMapUI* this_ptr, bool set_menu_audio_state)) {
        AreaMapUI::Show(this_ptr, set_menu_audio_state);
        area_id = app::GameWorldAreaID__Enum_None;
        if (csharp_bridge::check_ini("QuestFocusOnAbility3"))
        {
            cached = this_ptr->fields._Navigation_k__BackingField;
            register_input_callback(FOCUS_BUTTON, update_map_focus);
        }
    }
        
    IL2CPP_INTERCEPT(, AreaMapUI, void, Hide, (app::AreaMapUI* this_ptr)) {
        AreaMapUI::Hide(this_ptr);
        hide_below_hint();
        if (cached != nullptr)
        {
            if (!unregister_input_callback(FOCUS_BUTTON, update_map_focus))
                trace(MessageType::Error, 2, "game", "Failed to unregister map focus callback.");
            cached = nullptr;
        }
    }

    app::Quest* quest_cache;
    bool disable_next_update_map_target = false;
    IL2CPP_INTERCEPT(, AreaMapNavigation, void, SetTarget, (app::AreaMapNavigation* this_ptr, app::Quest* quest)) {
        if (csharp_bridge::check_ini("QuestFocusOnAbility3"))
        {
            quest_cache = quest;
            disable_next_update_map_target = true;
        }
        else
            AreaMapNavigation::SetTarget(this_ptr, quest);
    }

    IL2CPP_INTERCEPT(, AreaMapNavigation, void, UpdateMapTarget, (app::AreaMapNavigation* this_ptr)) {
        if (!disable_next_update_map_target)
            AreaMapNavigation::UpdateMapTarget(this_ptr);

        disable_next_update_map_target = false;
    }

    void update_map_focus(InputState const& state)
    {
        if (cached == nullptr)
        {
            unregister_input_callback(FOCUS_BUTTON, update_map_focus);
            trace(MessageType::Error, 2, "game", "Unregistering callback now, registration order may have been bad.");
            return;
        }

        if (get_input_state(FOCUS_BUTTON).just_pressed && quest_cache != nullptr)
        {
            AreaMapNavigation::SetTarget(cached, quest_cache);
            AreaMapNavigation::UpdateMapTarget(cached);
            //quest_cache = nullptr;
        }
    }
}
