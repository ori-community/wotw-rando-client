#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabyWormWater.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BabyWormWater {
    IL2CPP_REGISTER_METHOD(0x00F80B90, bool, DigEdgeZoneEdgeAhead, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F80C80, void, SetDigZoneIntersectingPoint, app::BabyWormWater* this_ptr, app::Vector3 center)
    IL2CPP_REGISTER_METHOD(0x00F80EA0, bool, IsDigZoneValid, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SpawnTrailEffect, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F80F50, void, RefreshTrailEffectPosition, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StopTrailEffect, app::BabyWormWater* this_ptr, int32_t frame_delay)
    IL2CPP_REGISTER_METHOD(0x00F810F0, void, OnRecieveBashDamage, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F81290, void, RefreshClosestTarget, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F812A0, void, ApplySpeedModifiers, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F81440, float, get_TurnSpeedModifier, app::BabyWormWater* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F81490, void, ctor, app::BabyWormWater* this_ptr)
} // namespace app::classes::BabyWormWater
