#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/DebugDecorator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::DebugDecorator {
    IL2CPP_REGISTER_METHOD(0x0300CA40, void, OnEnter, app::DebugDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300CB20, app::BehaviourStatus__Enum, OnExecute, app::DebugDecorator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0300CB70, void, ctor, app::DebugDecorator* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::DebugDecorator
