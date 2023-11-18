#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TurtleRollBackBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TurtleRollBackBehaviour {
    IL2CPP_REGISTER_METHOD(0x013D85F0, void, OnEnterTask, (app::TurtleRollBackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006B38C0, void, Finished, (app::TurtleRollBackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::BehaviourStatus__Enum, OnExecuteTask, (app::TurtleRollBackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013D8900, void, OnExitTask, (app::TurtleRollBackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, RootMotionRollBackModifier, (app::TurtleRollBackBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::TurtleRollBackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::TurtleRollBackBehaviour * this_ptr))
} // namespace app::classes::TurtleRollBackBehaviour
