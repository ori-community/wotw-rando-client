#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LaserShooterIdleBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LaserShooterIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x00F15310, void, OnEnter, app::LaserShooterIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00F15500, void, OnExit, app::LaserShooterIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecute, app::LaserShooterIdleBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00754B80, void, CallEndTask, app::LaserShooterIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F15530, void, StartTimeline, app::LaserShooterIdleBehaviour* this_ptr, app::MoonTimeline* timeline, app::Action* on_stop)
    IL2CPP_REGISTER_METHOD(0x00F15570, void, StopCurrentTimeline, app::LaserShooterIdleBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F155A0, void, ctor, app::LaserShooterIdleBehaviour* this_ptr)
} // namespace app::classes::LaserShooterIdleBehaviour
