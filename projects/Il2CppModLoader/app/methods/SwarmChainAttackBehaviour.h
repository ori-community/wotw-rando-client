#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SwarmChainAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::SwarmChainAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01816E30, void, OnEnter, (app::SwarmChainAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01816FE0, app::BehaviourStatus__Enum, OnExecute, (app::SwarmChainAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01817630, void, OnChainAttack, (app::SwarmChainAttackBehaviour * this_ptr, app::SwarmAgent * agent))
    IL2CPP_REGISTER_METHODINFO(0x04793040, SwarmChainAttackBehaviour_OnChainAttack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018177D0, void, OnExit, (app::SwarmChainAttackBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x018179B0, app::Vector3, GetAfterAttackPosition, (app::SwarmChainAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugTempMarkPoint, (app::SwarmChainAttackBehaviour * this_ptr, app::Vector3 point, app::Color color))
    IL2CPP_REGISTER_METHOD(0x01818B70, void, LockTarget, (app::SwarmChainAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01818F70, void, SetAfterAttackTarget, (app::SwarmChainAttackBehaviour * this_ptr, bool set_spin))
    IL2CPP_REGISTER_METHOD(0x01819130, void, ctor, (app::SwarmChainAttackBehaviour * this_ptr))
}
