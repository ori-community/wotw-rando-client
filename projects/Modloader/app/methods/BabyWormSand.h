#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BabyWormSand.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BabyWormSand {
    IL2CPP_REGISTER_METHOD(0x00F7FED0, void, Awake, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FEF0, void, OnPoolSpawned, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F7FF00, void, ResetCollisionWithSandState, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80240, bool, DigEdgeZoneEdgeAhead, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80290, void, SetDigZoneIntersectingPoint, (app::BabyWormSand * this_ptr, app::Vector3 center))
    IL2CPP_REGISTER_METHOD(0x009C0FE0, bool, IsDigZoneValid, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80360, void, SpawnTrailEffect, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80580, void, RefreshTrailEffectPosition, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F80880, void, StopTrailEffect, (app::BabyWormSand * this_ptr, int32_t frame_delay))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplySpeedModifiers, (app::BabyWormSand * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F809A0, void, ctor, (app::BabyWormSand * this_ptr))
} // namespace app::classes::BabyWormSand
