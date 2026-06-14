#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TentacleAggroBehaviour.h>

namespace app::classes::Moon::TentacleAggroBehaviour {
    IL2CPP_REGISTER_METHOD(0x010AB560, void, OnEnter, app::TentacleAggroBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010AB6A0, app::BehaviourStatus__Enum, OnExecute, app::TentacleAggroBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010AB8D0, void, OnExit, app::TentacleAggroBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::TentacleAggroBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010AB9C0, void, ctor, app::TentacleAggroBehaviour* this_ptr)
} // namespace app::classes::Moon::TentacleAggroBehaviour
