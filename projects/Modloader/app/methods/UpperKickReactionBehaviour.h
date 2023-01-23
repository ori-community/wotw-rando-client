#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpperKickReactionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::UpperKickReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkipUpdate, (app::UpperKickReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013AF5A0, void, OnInitializeTask, (app::UpperKickReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013AF670, void, OnEnterTask, (app::UpperKickReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013AFCD0, app::BehaviourStatus__Enum, OnExecuteTask, (app::UpperKickReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013B0010, void, EnterEarlyCollision_1, (app::UpperKickReactionBehaviour * this_ptr, app::LegacyTimelineSequence* sequence))
    IL2CPP_REGISTER_METHOD(0x013B0480, void, EnterEarlyCollision_2, (app::UpperKickReactionBehaviour * this_ptr, app::MoonTimeline* sequence))
    IL2CPP_REGISTER_METHOD(0x013B08E0, void, OnAnimationFinished, (app::UpperKickReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04735EA8, UpperKickReactionBehaviour_OnAnimationFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, OnEarlyCollisionAnimationFinished, (app::UpperKickReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712998, UpperKickReactionBehaviour_OnEarlyCollisionAnimationFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013B0C20, void, OnExitTask, (app::UpperKickReactionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013B0C60, void, StopAllSequences, (app::UpperKickReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::UpperKickReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::UpperKickReactionBehaviour * this_ptr))
} // namespace app::classes::UpperKickReactionBehaviour
