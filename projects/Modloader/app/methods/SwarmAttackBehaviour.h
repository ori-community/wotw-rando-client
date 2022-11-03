#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SwarmAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x01814510, void, OnEnter, (app::SwarmAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01814660, app::BehaviourStatus__Enum, OnExecute, (app::SwarmAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01814C30, void, OnExit, (app::SwarmAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01814D20, void, LockTarget, (app::SwarmAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01814EA0, app::Vector3, GetAfterAttackPosition, (app::SwarmAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (app::SwarmAttackBehaviour * this_ptr, app::Vector3 point, app::Color color))
    IL2CPP_REGISTER_METHOD(0x01815F70, void, SetAfterAttackTarget, (app::SwarmAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01816120, bool, LaunchAttackingAgents, (app::SwarmAttackBehaviour * this_ptr, int32_t n))
    IL2CPP_REGISTER_METHOD(0x018168A0, bool, LaunchAttackingAgent, (app::SwarmAttackBehaviour * this_ptr, app::Vector3 raycast_point, bool allow_overshoot))
    IL2CPP_REGISTER_METHOD(0x01816C10, void, EndAttack, (app::SwarmAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01816D80, void, ctor, (app::SwarmAttackBehaviour * this_ptr))
} // namespace app::classes::SwarmAttackBehaviour
