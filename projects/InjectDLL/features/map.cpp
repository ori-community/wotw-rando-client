#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>

BINDING(4091744, GameWorldArea_o*, GameWorld__GetArea, (GameWorld_o* thisPtr, int32_t areaID)) 
BINDING(4084240, RuntimeGameWorldArea_o*, GameWorld__FindRuntimeArea, (GameWorld_o* thisPtr, GameWorldArea_o* area));
BINDING(12643712, void, RuntimeGameWorldArea__DiscoverAllAreas, (RuntimeGameWorldArea_o* thisPtr));

GameWorld_o* game_world_instance = 0;

bool found_game_world() {
	return game_world_instance != 0;
}

INTERCEPT(4084560, void, GameWorld__Awake, (GameWorld_o* thisPtr), {
	if (game_world_instance != thisPtr)
	{
		debug("Found GameWorld instance!");
		game_world_instance = thisPtr;
	}
	GameWorld__Awake(thisPtr);
});

INTERCEPT(12666400, bool, RuntimeWorldMapIcon__IsVisible, (RuntimeWorldMapIcon_o* thisPtr, AreaMapUI_o* areaMap), {
  return true;
});

INTERCEPT(12673168, bool, RuntimeWorldMapIcon__CanBeTeleportedTo, (RuntimeWorldMapIcon_o* thisPtr), {
  return RuntimeWorldMapIcon__CanBeTeleportedTo(thisPtr) || csharp_lib->call<bool>("TPToAnyPickup");
});

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
		debug("Map revealed");
		return true;
	}
	else {
		log("Tried to discover all, but haven't found the GameWorld Instance yet :(");
		return false;
	}
}
