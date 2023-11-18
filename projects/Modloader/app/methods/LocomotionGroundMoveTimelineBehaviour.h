#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LocomotionGroundMoveTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FC6960, bool, get_IsAnimationPlaying, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC69B0, void, PauseTimelinePlayback, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC6A00, void, ResumeTimelinePlayback, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00FC6A40, void, PlayAnimation, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC6DE0, void, OnMovementStoppedPlaying, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC6E20, void, OnEnterTask, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC6F80, void, OnExitTask, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC70C0, void, PlayAnimationIfNotPlaying, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7140, void, OnTraversalSpeedChange, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC71E0, float, get_EffectiveMinSpeed, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7200, float, get_EffectiveMaxSpeed, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, (app::LocomotionGroundMoveTimelineBehaviour * this_ptr))
} // namespace app::classes::LocomotionGroundMoveTimelineBehaviour
