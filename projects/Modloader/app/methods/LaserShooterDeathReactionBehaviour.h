#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LaserShooterDeathReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LaserShooterDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F134D0, void, OnInitializeTask, app::LaserShooterDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00F13520, void, OnEnterTask, app::LaserShooterDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, app::LaserShooterDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00F13730,
        void,
        StartTimeline,
        app::LaserShooterDeathReactionBehaviour* this_ptr,
        app::MoonTimeline* timeline,
        app::Action* on_finnished
    )
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::LaserShooterDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, _OnEnterTask_b__4_0, app::LaserShooterDeathReactionBehaviour* this_ptr)
} // namespace app::classes::LaserShooterDeathReactionBehaviour
