#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SwarmAgent.h>
#include <Modloader/app/structs/SwarmMinigunAttackBehaviour.h>

namespace app::classes::SwarmMinigunAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01821C70, void, Initialize, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01821FB0, void, OnEnter, app::SwarmMinigunAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x018220E0, app::BehaviourStatus__Enum, OnExecute, app::SwarmMinigunAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01822B50, void, LaunchBulletAgent, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01822DF0, void, OnExit, app::SwarmMinigunAttackBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01822E00, void, LockTarget, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01822F80, void, GetAttackingAgents, app::SwarmMinigunAttackBehaviour* this_ptr, int32_t n)
    IL2CPP_REGISTER_METHOD(0x01823110, app::SwarmAgent*, GetLaunchAttackingAgent, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018232D0, void, ShuffleAgentsList, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01823490, void, EndAttack, app::SwarmMinigunAttackBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01823680, void, ctor, app::SwarmMinigunAttackBehaviour* this_ptr)
} // namespace app::classes::SwarmMinigunAttackBehaviour
