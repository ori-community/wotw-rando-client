#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimatedCrossfadeInstance_State__Enum.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::Moon::MoonAnimator_AnimatedCrossfadeInstance {
    IL2CPP_REGISTER_METHOD(0x0210E940, bool, get_IsCrossFading, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance*, get_MainAnimationInstance, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::Playable, get_Playable, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E950, bool, get_IsDone, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E980, float, get_Speed, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E9B0, void, set_Speed, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0210E9E0, float, get_Duration, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EA10, float, get_SingleLoopDuration, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EA40, float, get_Time, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EA70, void, set_Time, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0210EAA0, float, get_NormalizedTime, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EAD0, void, set_NormalizedTime, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0210EB00, bool, FinishedPlaying, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float tolerance)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::MoonAnimator_AnimationInstance*, get_SourceAnimationInstance, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance*, get_TargetAnimationInstance, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FBB40,
        app::MoonAnimator_AnimationInstance*,
        get_TransitionAnimationInstance,
        app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0210EB30, float, get_TargetWeight, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EC30, float, get_TransitionWeight, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EE20, float, get_SourceWeight, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008E77B0, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EF20, void, ReturnToPool, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210EFC0, void, ShiftTime, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0210F0D0, void, OnRetrievedFromPool, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, app::IAnimation* animation)
    IL2CPP_REGISTER_METHOD(0x0210F780, void, OnRetunedToPool, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210FA40, void, OnPrepare, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0210FE50, void, OnPostPrepare, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(
        0x02110040,
        void,
        SetState,
        app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr,
        app::MoonAnimator_AnimatedCrossfadeInstance_State__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonAnimator_AnimatedCrossfadeInstance* this_ptr)
} // namespace app::classes::Moon::MoonAnimator_AnimatedCrossfadeInstance
