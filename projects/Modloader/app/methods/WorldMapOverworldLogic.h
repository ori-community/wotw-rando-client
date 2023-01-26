#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldMapOverworldLogic.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::WorldMapOverworldLogic {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameReset, (app::WorldMapOverworldLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00584920, void, Awake, (app::WorldMapOverworldLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00584AC0, void, OnDestroy, (app::WorldMapOverworldLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00584C50, app::Vector3, WorldToOverworld, (app::WorldMapOverworldLogic * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00584FA0, float, GetWorldToOverworldDepth, (app::WorldMapOverworldLogic * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WorldMapOverworldLogic * this_ptr))
} // namespace app::classes::WorldMapOverworldLogic
