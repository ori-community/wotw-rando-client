#include <interception_macros.h>
#include <dll_main.h>

#include <csharp_bridge.h>
#include <features/input_poller.h>

namespace {
    BINDING(4091744, GameWorldArea_o*, GameWorld__GetArea, (GameWorld_o* thisPtr, int32_t areaID)) 
    BINDING(4084240, RuntimeGameWorldArea_o*, GameWorld__FindRuntimeArea, (GameWorld_o* thisPtr, GameWorldArea_o* area));
    BINDING(12643712, void, RuntimeGameWorldArea__DiscoverAllAreas, (RuntimeGameWorldArea_o* thisPtr));

    GameWorld_o* game_world_instance = 0;

    bool found_game_world()
    {
	    return game_world_instance != 0;
    }

    INTERCEPT(4084560, void, GameWorld__Awake, (GameWorld_o* thisPtr)) {
	    if (game_world_instance != thisPtr)
	    {
            trace(MessageType::Debug, 5, "game", "Found GameWorld instance!");
		    game_world_instance = thisPtr;
	    }
	    GameWorld__Awake(thisPtr);
    }

    INTERCEPT(12666400, bool, RuntimeWorldMapIcon__IsVisible, (RuntimeWorldMapIcon_o* thisPtr, AreaMapUI_o* areaMap)) {
        return true;
    }

    INTERCEPT(12673168, bool, RuntimeWorldMapIcon__CanBeTeleportedTo, (RuntimeWorldMapIcon_o* thisPtr)) {
        return RuntimeWorldMapIcon__CanBeTeleportedTo(thisPtr) || csharp_bridge::tp_to_any_pickup();
    }

    extern "C" __declspec(dllexport)
    bool discover_everything() {
	    if (game_world_instance)
	    {
		    for (int32_t i = 0; i <= 15; i++)
		    {
			    auto area = GameWorld__GetArea(game_world_instance, i);
			    if (!area) {
				    //Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				    continue;
			    }

			    auto runtimeArea = GameWorld__FindRuntimeArea(game_world_instance, area);
			    if (!runtimeArea)
				    continue;

                RuntimeGameWorldArea__DiscoverAllAreas(runtimeArea);
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

    AreaMapNavigation_o* cached = nullptr;
    INTERCEPT(4840480, void, AreaMapUI__Show, (AreaMapUI_o* this_ptr)) {
        AreaMapUI__Show(this_ptr);
        if (csharp_bridge::check_ini("QuestFocusOnAbility3"))
        {
            cached = this_ptr->_Navigation_k__BackingField;
            register_input_callback(FOCUS_BUTTON, update_map_focus);
        }
    }
        
    INTERCEPT(4839760, void, AreaMapUI__Hide, (AreaMapUI_o* this_ptr)) {
        AreaMapUI__Hide(this_ptr);
        if (cached != nullptr)
        {
            if (!unregister_input_callback(FOCUS_BUTTON, update_map_focus))
                trace(MessageType::Error, 2, "game", "Failed to unregister map focus callback.");

            cached = nullptr;
        }
    }

    Quest_o* quest_cache;
    bool disable_next_update_map_target = false;
    INTERCEPT(5384784, void, AreaMapNavigation__SetTarget, (AreaMapNavigation_o* this_ptr, Quest_o* quest)) {
        if (csharp_bridge::check_ini("QuestFocusOnAbility3"))
        {
            quest_cache = quest;
            disable_next_update_map_target = true;
        }
        else
            AreaMapNavigation__SetTarget(this_ptr, quest);
    }

    INTERCEPT(5385552, void, AreaMapNavigation__UpdateMapTarget, (AreaMapNavigation_o* this_ptr)) {
        if (!disable_next_update_map_target)
            AreaMapNavigation__UpdateMapTarget(this_ptr);

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
            AreaMapNavigation__SetTarget(cached, quest_cache);
            AreaMapNavigation__UpdateMapTarget(cached);
            //quest_cache = nullptr;
        }
    }
}
