#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BashAttackCritical {
    IL2CPP_REGISTER_METHOD(0x00F8CC30, void, OnPoolSpawned, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CC40, void, ChangeState, (app::BashAttackCritical * this_ptr, app::BashAttackCritical_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F8CC50, void, UpdateState, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CCF0, void, UpdateFailedState, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8CEE0, void, UpdateCriticalState, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8D210, void, UpdateChargingState, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8D420, void, Awake, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (app::BashAttackCritical * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F8D510, void, FixedUpdate, (app::BashAttackCritical * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8D5C0, void, ctor, (app::BashAttackCritical * this_ptr))
} // namespace app::classes::BashAttackCritical
