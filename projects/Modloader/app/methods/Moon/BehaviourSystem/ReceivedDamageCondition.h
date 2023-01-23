#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ReceivedDamageCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::Moon::BehaviourSystem::ReceivedDamageCondition {
    IL2CPP_REGISTER_METHOD(0x00CBB040, app::String*, get_Info, (app::ReceivedDamageCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB0C0, bool, OnCheck, (app::ReceivedDamageCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CBB3A0, void, OnDisable, (app::ReceivedDamageCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBB5A0, void, OnDamageReceived, (app::ReceivedDamageCondition * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHODINFO(0x04745D18, ReceivedDamageCondition_OnDamageReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::ReceivedDamageCondition * this_ptr))
} // namespace app::classes::Moon::BehaviourSystem::ReceivedDamageCondition
