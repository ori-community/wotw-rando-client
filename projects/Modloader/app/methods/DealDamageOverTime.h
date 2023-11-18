#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::DealDamageOverTime {
    IL2CPP_REGISTER_METHOD(0x00DDD550, void, OnDisable, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDD5F0, void, Awake, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDD700, void, OnDestroy, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDD7A0, void, Start, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDD7B0, void, FixedUpdate, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDDB70, void, ResetRemainingTime, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (app::DealDamageOverTime * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::DealDamageOverTime * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDDB80, void, set_Mask, (app::DealDamageOverTime * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00DDDC30, void, ctor, (app::DealDamageOverTime * this_ptr))
} // namespace app::classes::DealDamageOverTime
