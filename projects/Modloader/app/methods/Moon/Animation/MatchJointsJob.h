#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchJointsJob__Boxed.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/AnimationStream.h>

namespace app::classes::Moon::Animation::MatchJointsJob {
    IL2CPP_REGISTER_METHOD(0x001B4E10, void, Setup, (app::MatchJointsJob__Boxed * this_ptr, app::MoonAnimator* animator, app::Transform* source_joint, app::Transform* target_joint))
    IL2CPP_REGISTER_METHOD(0x001B4E20, void, ProcessAnimation, (app::MatchJointsJob__Boxed * this_ptr, app::AnimationStream stream))
    IL2CPP_REGISTER_METHOD(0x00002890, void, ProcessRootMotion, (app::MatchJointsJob__Boxed * this_ptr, app::AnimationStream stream))
} // namespace app::classes::Moon::Animation::MatchJointsJob
