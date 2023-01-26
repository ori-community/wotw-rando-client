#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SwarmFollowPathBehaviour {
    IL2CPP_REGISTER_METHOD(0x01820FB0, void, SetPatrolNodes, (app::SwarmFollowPathBehaviour * this_ptr, app::List_1_UnityEngine_Vector3_* patrol_nodes))
    IL2CPP_REGISTER_METHOD(0x01821270, void, OnEnter, (app::SwarmFollowPathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01821440, void, AssignLocomotionData, (app::SwarmFollowPathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::BehaviourStatus__Enum, OnExecute, (app::SwarmFollowPathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SwarmFollowPathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01821540, app::Vector3, GetPatrolNodePosition, (app::SwarmFollowPathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018216E0, bool, CheckAndAssignPatrolNode, (app::SwarmFollowPathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2F80, void, ResetPatrol, (app::SwarmFollowPathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01821A50, void, ctor, (app::SwarmFollowPathBehaviour * this_ptr))
} // namespace app::classes::SwarmFollowPathBehaviour
