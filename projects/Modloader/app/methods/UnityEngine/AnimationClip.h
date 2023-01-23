#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationClip.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/WrapMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/AnimationEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AnimationEvent__Array.h>
#include <Modloader/app/structs/Array.h>

namespace app::classes::UnityEngine::AnimationClip {
    IL2CPP_REGISTER_METHOD(0x0307B220, void, ctor, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B2F0, void, Internal_CreateAnimationClip, (app::AnimationClip * self))
    IL2CPP_REGISTER_METHOD(0x0307B340, void, SampleAnimation_1, (app::AnimationClip * this_ptr, app::GameObject* go, float time))
    IL2CPP_REGISTER_METHOD(0x0307B400, void, SampleAnimation_2, (app::GameObject * go, app::AnimationClip* clip, float in_time, app::WrapMode__Enum wrap_mode))
    IL2CPP_REGISTER_METHOD(0x0307B480, float, get_length, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B4D0, float, get_startTime, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B520, float, get_stopTime, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B570, float, get_frameRate, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B5C0, void, set_frameRate, (app::AnimationClip * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0307B620, void, SetCurve, (app::AnimationClip * this_ptr, app::String* relative_path, app::Type* type, app::String* property_name, app::AnimationCurve* curve))
    IL2CPP_REGISTER_METHOD(0x0307B6B0, void, EnsureQuaternionContinuity, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B700, void, ClearCurves, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B750, app::WrapMode__Enum, get_wrapMode, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B7A0, void, set_wrapMode, (app::AnimationClip * this_ptr, app::WrapMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0307B800, app::Bounds, get_localBounds, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B890, void, set_localBounds, (app::AnimationClip * this_ptr, app::Bounds value))
    IL2CPP_REGISTER_METHOD(0x0307B8F0, bool, get_legacy, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B940, void, set_legacy, (app::AnimationClip * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0307B9A0, bool, get_humanMotion, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307B9F0, bool, get_empty, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BA40, bool, get_hasGenericRootTransform, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BA90, bool, get_hasMotionFloatCurves, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BAE0, bool, get_hasMotionCurves, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BB30, bool, get_hasRootCurves, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BB80, bool, get_hasRootMotion, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BBD0, void, AddEvent, (app::AnimationClip * this_ptr, app::AnimationEvent* evt))
    IL2CPP_REGISTER_METHODINFO(0x04706850, AnimationClip_AddEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0307BCD0, void, AddEventInternal, (app::AnimationClip * this_ptr, app::Object* evt))
    IL2CPP_REGISTER_METHOD(0x0307BD30, app::AnimationEvent__Array*, get_events, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BE20, void, set_events, (app::AnimationClip * this_ptr, app::AnimationEvent__Array* value))
    IL2CPP_REGISTER_METHOD(0x0307BE20, void, SetEventsInternal, (app::AnimationClip * this_ptr, app::Array* value))
    IL2CPP_REGISTER_METHOD(0x0307BE80, app::Array*, GetEventsInternal, (app::AnimationClip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0307BED0, void, get_localBounds_Injected, (app::AnimationClip * this_ptr, app::Bounds* ret))
    IL2CPP_REGISTER_METHOD(0x0307BF30, void, set_localBounds_Injected, (app::AnimationClip * this_ptr, app::Bounds* value))
} // namespace app::classes::UnityEngine::AnimationClip
