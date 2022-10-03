#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BehaviourSystem::WaitNode {
    IL2CPP_REGISTER_METHOD(0x00CBB5C0, float, get_TimeRemaining, (app::WaitNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB630, float, get_TimeRemainingNormalized, (app::WaitNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB680, void, Awake, (app::WaitNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03014060, void, OnEnter, (app::WaitNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CBB7D0, app::BehaviourStatus__Enum, OnExecute, (app::WaitNode * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x030142A0, void, ctor, (app::WaitNode * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::WaitNode
