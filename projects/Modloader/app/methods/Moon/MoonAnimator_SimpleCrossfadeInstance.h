#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstanceType__Enum.h>
#include <Modloader/app/structs/MoonAnimator_SimpleCrossfadeInstance.h>
#include <Modloader/app/structs/Playable.h>

namespace app::classes::Moon::MoonAnimator_SimpleCrossfadeInstance {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance*, get_MainAnimationInstance, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211A980, app::Playable, get_Playable, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210E950, bool, get_IsDone, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210E980, float, get_Speed, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210E9B0, void, set_Speed, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0210E9E0, float, get_Duration, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210EA10, float, get_SingleLoopDuration, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210EA40, float, get_Time, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210EA70, void, set_Time, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0210EAA0, float, get_NormalizedTime, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210EAD0, void, set_NormalizedTime, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::MoonAnimator_AnimationInstance*, get_SourceAnimationInstance, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MoonAnimator_AnimationInstance*, get_TargetAnimationInstance, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211AA40, float, get_TargetWeight, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211AB10, float, get_SourceWeight, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00938890, bool, get_IsCrossFading, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::MoonAnimator_AnimationInstanceType__Enum, get_Type, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211AB30, void, ShiftTime, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211AC30, void, ReturnToPool, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0210EB00, bool, FinishedPlaying, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float tolerance))
    IL2CPP_REGISTER_METHOD(0x0211ACD0, void, OnRetrievedFromPool, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x0211B180, void, OnRetunedToPool, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0211B400, void, OnPrepare, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0211B650, void, OnPostPrepare, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x0211B6E0, void, OnProcessEvents, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimator_SimpleCrossfadeInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_SimpleCrossfadeInstance
