#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::Moon::MoonAnimator_AnimationInstance {
    IL2CPP_REGISTER_METHOD(0x02110310, app::PlayableGraph, get_PlayableGraph, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_IsPreview, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110360, bool, get_IsValid, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::IAnimation*, get_Animation, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110400, bool, get_IsDone, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsCrossFading, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_UserId, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_UserId, (app::MoonAnimator_AnimationInstance * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::MoonAnimator_AnimationInstance*, get_MainAnimationInstance, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MoonAnimator*, get_Animator, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Animator, (app::MoonAnimator_AnimationInstance * this_ptr, app::MoonAnimator* value))
    IL2CPP_REGISTER_METHOD(0x021104A0, bool, FinishedPlaying, (app::MoonAnimator_AnimationInstance * this_ptr, float tolerance))
    IL2CPP_REGISTER_METHOD(0x021105F0, void, OnCreated, (app::MoonAnimator_AnimationInstance * this_ptr, app::MoonAnimator* animator, bool is_preview))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPrepare, (app::MoonAnimator_AnimationInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02110600, void, OnRetrievedFromPool, (app::MoonAnimator_AnimationInstance * this_ptr, app::IAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReset, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110610, void, OnRetunedToPool, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnProcessEvents, (app::MoonAnimator_AnimationInstance * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02110620, void, HandleDisabledGroups, (app::MoonAnimator_AnimationInstance * this_ptr, float weight))
    IL2CPP_REGISTER_METHOD(0x02110650, void, DisablePostprocessGroups, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02110920, void, EnablePostprocessGroups, (app::MoonAnimator_AnimationInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonAnimator_AnimationInstance * this_ptr))
} // namespace app::classes::Moon::MoonAnimator_AnimationInstance
