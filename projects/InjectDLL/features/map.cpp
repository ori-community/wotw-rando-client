#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>

BINDING(4091744, __int64, getAreaFromId, (__int64, unsigned __int8)) //GameWorld$$GetArea
BINDING(4084240, __int64, getRuntimeArea, (__int64, __int64)) //GameWorld$$FindRuntimeArea
BINDING(12643712, void, discoverAllAreas, (__int64)) //RuntimeGameWorldArea$$DiscoverAllAreas

__int64 game_world_instance = 0;

bool found_game_world() {
	return game_world_instance != 0;
}

INTERCEPT(4084560, void, GameWorld__Awake, (__int64 thisPtr), {
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
		for (unsigned __int8 i = 0; i <= 15; i++)
		{
			auto area = getAreaFromId(game_world_instance, i);
			if (!area)
			{
				//Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				continue;
			}
			auto runtimeArea = getRuntimeArea(game_world_instance, area);
			if (!runtimeArea)
			{
				continue;
			}
			discoverAllAreas(runtimeArea);
		}
		debug("Map revealed");
		return true;
	}
	else {
		log("Tried to discover all, but haven't found the GameWorld Instance yet :(");
		return false;
	}
}
