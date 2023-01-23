#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/Locomotion.h>

namespace app::classes::Moon::BehaviourSystem::EntityLocomotionTask {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_DrawGizmos, ())
    IL2CPP_REGISTER_METHOD(0x00CB6490, void, InitFSMState, (app::EntityLocomotionTask * this_ptr, int32_t id, app::StateMachine_2* state_machine, app::Locomotion* locomotion))
    IL2CPP_REGISTER_METHOD(0x00CB64A0, void, UpdateState, (app::EntityLocomotionTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB6510, void, OnEnter, (app::EntityLocomotionTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Locomotion*, get_Parent, (app::EntityLocomotionTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::EntityLocomotionTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, GetStateId, (app::EntityLocomotionTask * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::EntityLocomotionTask * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::EntityLocomotionTask
