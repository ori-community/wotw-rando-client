#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::GuardDecorator {
    IL2CPP_REGISTER_METHOD(0x0300DE30, app::List_1_Moon_BehaviourSystem_GuardDecorator_ *, AgentGuards, (app::Component_1 * agent))
    IL2CPP_REGISTER_METHOD(0x0300DF60, app::String *, get_TokenString, (app::GuardDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300DF90, app::BehaviourStatus__Enum, OnExecute, (app::GuardDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnReset, (app::GuardDecorator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0300E2C0, void, SetGuards, (app::GuardDecorator * this_ptr, app::Component_1 * guard_agent))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::GuardDecorator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300E620, void, cctor, ())
}
