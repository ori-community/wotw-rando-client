#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageReceiverCondition {
    IL2CPP_REGISTER_METHOD(0x00DC85E0, app::IDamageNotifier *, get_ResolvedDamageNotifier, (app::DamageReceiverCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC86A0, void, OnEnable, (app::DamageReceiverCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC8870, void, OnDisable, (app::DamageReceiverCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, LateUpdate, (app::DamageReceiverCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC8A40, void, OnDamageNotificationReceived, (app::DamageReceiverCondition * this_ptr, app::Damage * obj))
    IL2CPP_REGISTER_METHODINFO(0x0473FDD8, DamageReceiverCondition_OnDamageNotificationReceived__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, Validate, (app::DamageReceiverCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageReceiverCondition * this_ptr))
}
