#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Boxed.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::ActiveAnimationHandle {
    IL2CPP_REGISTER_METHOD(0x001B48E0, void, ctor, app::ActiveAnimationHandle__Boxed* this_ptr, app::IActiveAnimation* active_animation)
    IL2CPP_REGISTER_METHOD(0x0011D890, bool, get_IsInitialized, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B48F0, bool, get_IsValid, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4900, app::IAnimation*, get_Animation, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4910, float, get_Speed, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4920, void, set_Speed, app::ActiveAnimationHandle__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001B4930, float, get_Time, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4940, void, set_Time, app::ActiveAnimationHandle__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001B4950, float, get_NormalizedTime, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4960, void, set_NormalizedTime, app::ActiveAnimationHandle__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001B4970, bool, get_StartedPlaying, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4980, bool, get_IsPlaying, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4990, bool, get_IsScheduledOrPlaying, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B49A0, bool, get_IsFinished, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B49B0, app::Func_1_Boolean_*, get_ContinueCondition, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4A60, void, set_ContinueCondition, app::ActiveAnimationHandle__Boxed* this_ptr, app::Func_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x001B4A70, app::Action*, get_OnStartedPlaying, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4A80, void, set_OnStartedPlaying, app::ActiveAnimationHandle__Boxed* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x001B4A90, app::Action*, get_OnStoppedPlaying, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4AA0, void, set_OnStoppedPlaying, app::ActiveAnimationHandle__Boxed* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x001B4AB0, app::Nullable_1_Single_, get_CroffadeTimeOverride, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4B60, void, set_CroffadeTimeOverride, app::ActiveAnimationHandle__Boxed* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x001B4C10, float, get_Weight, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4C20, void, set_Weight, app::ActiveAnimationHandle__Boxed* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x001B4C30, void, RequestStop, app::ActiveAnimationHandle__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001B4C40, bool, Equals_1, app::ActiveAnimationHandle__Boxed* this_ptr, app::ActiveAnimationHandle other)
    IL2CPP_REGISTER_METHOD(0x001B4C60, bool, Equals_2, app::ActiveAnimationHandle__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x001B4C70, int32_t, GetHashCode, app::ActiveAnimationHandle__Boxed* this_ptr)
} // namespace app::classes::Moon::ActiveAnimationHandle
