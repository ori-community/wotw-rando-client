#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GuardDecorator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_GuardDecorator_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::GuardDecorator {
    IL2CPP_REGISTER_METHOD(0x0300DE30, app::List_1_Moon_BehaviourSystem_GuardDecorator_*, AgentGuards, app::Component_1* agent)
    IL2CPP_REGISTER_METHOD(0x0300DF60, app::String*, get_TokenString, app::GuardDecorator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300DF90, app::BehaviourStatus__Enum, OnExecute, app::GuardDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnReset, app::GuardDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300E2C0, void, SetGuards, app::GuardDecorator* this_ptr, app::Component_1* guard_agent)
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, app::GuardDecorator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0300E620, void, cctor, )
} // namespace app::classes::Moon::BehaviourSystem::GuardDecorator
