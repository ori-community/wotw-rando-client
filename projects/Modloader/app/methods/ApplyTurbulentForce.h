#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ApplyTurbulentForce {
    IL2CPP_REGISTER_METHOD(0x00507BF0, void, Awake, (app::ApplyTurbulentForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00507D70, void, OnDestroy, (app::ApplyTurbulentForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::ApplyTurbulentForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::ApplyTurbulentForce * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::ApplyTurbulentForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00507E10, void, set_Mask, (app::ApplyTurbulentForce * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00507EC0, void, FixedUpdate, (app::ApplyTurbulentForce * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508280, void, ctor, (app::ApplyTurbulentForce * this_ptr))
} // namespace app::classes::ApplyTurbulentForce
