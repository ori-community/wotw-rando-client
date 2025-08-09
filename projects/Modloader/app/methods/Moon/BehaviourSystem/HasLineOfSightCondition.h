#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasLineOfSightCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::BehaviourSystem::HasLineOfSightCondition {
    IL2CPP_REGISTER_METHOD(0x00CB90A0, app::String*, get_Info, app::HasLineOfSightCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB9140, bool, OnCheck, app::HasLineOfSightCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00CB9840, void, ctor, app::HasLineOfSightCondition* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::HasLineOfSightCondition
