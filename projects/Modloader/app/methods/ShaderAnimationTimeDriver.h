#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShaderAnimationTimeDriver.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::ShaderAnimationTimeDriver {
    IL2CPP_REGISTER_METHOD(0x005A60E0, app::ShaderAnimationTimeDriver*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_GameTime, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A6160, void, Awake, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A6210, void, OnDestroy, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A62B0, void, FixedUpdate, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, app::ShaderAnimationTimeDriver* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::SuspendableMask__Enum, get_Mask, app::ShaderAnimationTimeDriver* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Mask, app::ShaderAnimationTimeDriver* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x005A6500, void, ctor, app::ShaderAnimationTimeDriver* this_ptr)
} // namespace app::classes::ShaderAnimationTimeDriver
