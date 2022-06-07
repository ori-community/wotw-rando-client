#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::EntityPhysicsAnimator {
    IL2CPP_REGISTER_METHOD(0x00766190, app::CharacterPlatformMovement *, get_Movement, (app::EntityPhysicsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00766270, app::MovementProcessor *, get_MovementProcessor, (app::EntityPhysicsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00766470, void, OnStartPlayback, (app::EntityPhysicsAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00766C90, void, OnStopPlayback, (app::EntityPhysicsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00766DE0, void, UpdateTargetSpeed, (app::EntityPhysicsAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00767340, void, OnUpdateEntity, (app::EntityPhysicsAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x007673C0, void, SynchronizeData, (app::EntityPhysicsAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x00767530, void, ctor, (app::EntityPhysicsAnimator * this_ptr))
}
