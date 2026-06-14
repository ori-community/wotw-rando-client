#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/SplitTurnAnimationMoonTimeline.h>

namespace app::classes::SplitTurnAnimationMoonTimeline {
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsDone, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A3B40, void, AllowCancel, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A3B50, void, DisallowCancel, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsCancelable, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A3B60, app::CancelableAnimator*, get_Cancelable, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x009A3C40,
        void,
        Play,
        app::SplitTurnAnimationMoonTimeline* this_ptr,
        app::ILocomotionTurningHandler* locomotion,
        float target_look_direction
    )
    IL2CPP_REGISTER_METHOD(0x009A42A0, void, OnAnimationEnd, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A4650, void, Flip, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Step, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A4700, void, Stop, app::SplitTurnAnimationMoonTimeline* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009A4A40, void, ctor, app::SplitTurnAnimationMoonTimeline* this_ptr)
} // namespace app::classes::SplitTurnAnimationMoonTimeline
