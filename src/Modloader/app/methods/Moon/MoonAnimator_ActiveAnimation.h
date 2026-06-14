#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>

namespace app::classes::Moon::MoonAnimator_ActiveAnimation {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::IAnimation*, get_Animation, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Priority, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_Speed, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E2A0, void, set_Speed, app::MoonAnimator_ActiveAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0210E2C0, float, get_Time, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E2E0, void, set_Time, app::MoonAnimator_ActiveAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0210E300, float, get_NormalizedTime, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E320, void, set_NormalizedTime, app::MoonAnimator_ActiveAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_StartedPlaying, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E480, bool, get_IsPlaying, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E4C0, bool, get_IsScheduled, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E510, bool, get_IsScheduledOrPlaying, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsFinished, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Func_1_Boolean_*, get_ContinueCondition, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ContinueCondition, app::MoonAnimator_ActiveAnimation* this_ptr, app::Func_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Action*, get_OnStartedPlaying, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_OnStartedPlaying, app::MoonAnimator_ActiveAnimation* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Action*, get_OnStoppedPlaying, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_OnStoppedPlaying, app::MoonAnimator_ActiveAnimation* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00444DC0, bool, get_StopRequested, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Nullable_1_Single_, get_CroffadeTimeOverride, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_CroffadeTimeOverride, app::MoonAnimator_ActiveAnimation* this_ptr, app::Nullable_1_Single_ value)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_Weight, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682B0, void, set_Weight, app::MoonAnimator_ActiveAnimation* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsAllocated, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_Version, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0210E520,
        void,
        OnAllocated,
        app::MoonAnimator_ActiveAnimation* this_ptr,
        app::IAnimation* animation,
        int32_t priority,
        app::MoonAnimator* animator
    )
    IL2CPP_REGISTER_METHOD(0x0210E540, void, OnDeallocated, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E580, bool, ShouldContinue, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E620, void, RequestStop, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0210E630,
        app::MoonAnimator_AnimationInstance*,
        InstantiateAnimation,
        app::MoonAnimator_ActiveAnimation* this_ptr,
        app::MoonAnimator* animator
    )
    IL2CPP_REGISTER_METHOD(0x0210E6C0, void, InvalidateAnimationInstance, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E6D0, void, OnRemovedFromAnimator, app::MoonAnimator_ActiveAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0210E920, void, ctor, app::MoonAnimator_ActiveAnimation* this_ptr)
} // namespace app::classes::Moon::MoonAnimator_ActiveAnimation
