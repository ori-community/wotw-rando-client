#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SandstormZone.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SandstormZone {
    IL2CPP_REGISTER_METHOD(0x008D4DF0, app::Vector2, get_NormalizedStormDirection, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29620, app::Vector2, get_ActualStormSpeed, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29750, float, get_WindCycleFactor, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29840, float, get_ZonePositionFactor, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29920, float, GetZonePositionFactor, (app::SandstormZone * this_ptr, app::Vector3 char_pos))
    IL2CPP_REGISTER_METHOD(0x00C29CD0, void, AwakeInternal, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29DC0, void, OnEnableRuntime, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29E90, void, OnDisableRuntime, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C29F50, bool, InnerBoundContainsPoint, (app::SandstormZone * this_ptr, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x00C2A060, void, OnZoneChange, (app::SandstormZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2A350, void, OnZoneUpdate, (app::SandstormZone * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00C2A4F0, float, GetRtpcValue, (app::SandstormZone * this_ptr, app::Transform* target))
    IL2CPP_REGISTER_METHOD(0x00C2A6E0, void, ctor, (app::SandstormZone * this_ptr))
} // namespace app::classes::SandstormZone
