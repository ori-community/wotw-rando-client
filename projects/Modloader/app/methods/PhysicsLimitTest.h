#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PhysicsLimitTest.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::PhysicsLimitTest {
    IL2CPP_REGISTER_METHOD(0x01152C10, app::String*, get_Path, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Column, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01152C90, void, AddTimeSample, (app::PhysicsLimitTest * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x01152CF0, int32_t, GetFrameCount, (app::PhysicsLimitTest * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x01152D60, void, UpdateMethod, (app::PhysicsLimitTest * this_ptr, float time_span, int32_t min_frames))
    IL2CPP_REGISTER_METHOD(0x01152EE0, void, UpdateMethodOld, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01152F60, void, Update, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153050, void, FixedUpdate, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153060, void, ResetValues, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011530C0, app::String*, get_Name, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153140, app::String*, get_HelpText, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011531C0, app::String__Array*, get_ToggleOptions, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentToggleOptionId, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153480, void, set_CurrentToggleOptionId, (app::PhysicsLimitTest * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01153520, void, Awake, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011535D0, void, OnEnable, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153670, void, OnDestroy, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, get_Active, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153790, void, set_Active, (app::PhysicsLimitTest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x011537F0, bool, get_IsSynced, ())
    IL2CPP_REGISTER_METHOD(0x01153910, void, SetSingleFixedUpdate, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153970, void, SetDoubleFixedUpdate, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011539D0, bool, get_ShouldAllowPhysicsLimiter, ())
    IL2CPP_REGISTER_METHOD(0x01153A70, void, set_ShouldAllowPhysicsLimiter, (bool value))
    IL2CPP_REGISTER_METHOD(0x01153B80, bool, get_ShouldRunPhysicsLimiter, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153D00, void, ctor, (app::PhysicsLimitTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01153DA0, void, cctor, ())
} // namespace app::classes::PhysicsLimitTest
