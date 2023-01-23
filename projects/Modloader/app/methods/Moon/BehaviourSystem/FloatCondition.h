#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/FloatCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::BehaviourSystem::FloatCondition {
    IL2CPP_REGISTER_METHOD(0x0300DCA0, app::String*, get_Info, (app::FloatCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300DD60, bool, OnCheck, (app::FloatCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0300DDD0, void, ctor, (app::FloatCondition * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::FloatCondition
