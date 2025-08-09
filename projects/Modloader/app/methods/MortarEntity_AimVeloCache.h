#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarEntity.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MortarEntity_AimVeloCache {
    IL2CPP_REGISTER_METHOD(0x01478230, void, ctor, app::MortarEntity_AimVeloCache* this_ptr, app::MortarEntity* entity)
    IL2CPP_REGISTER_METHOD(0x014783A0, void, PrepareForGame, app::MortarEntity_AimVeloCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014783F0, bool, GetTargetVelocity, app::MortarEntity_AimVeloCache* this_ptr, app::Vector3 target_pos, app::Vector3* velocity)
    IL2CPP_REGISTER_METHOD(0x01478460, void, DebugDraw, app::MortarEntity_AimVeloCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01478480, void, Generate, app::MortarEntity_AimVeloCache* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014788F0, float, PointLineDist, app::Vector3 point, app::Vector3 line_from, app::Vector3 line_to)
} // namespace app::classes::MortarEntity_AimVeloCache
