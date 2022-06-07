#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ChargeFlameBurst {
    IL2CPP_REGISTER_METHOD(0x01318620, void, OnPoolSpawned, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01318630, void, IgnoreOnLastInstance, (app::IAttackable * attackable))
    IL2CPP_REGISTER_METHOD(0x01318740, void, Awake, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013187E0, void, OnDestroy, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01318880, void, OnEnable, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01318910, void, OnDisable, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01318A40, void, Start, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01318A60, void, DealDamage, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013193E0, void, FixedUpdate, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (app::ChargeFlameBurst * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::SuspendableMask__Enum, get_Mask, (app::ChargeFlameBurst * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Mask, (app::ChargeFlameBurst * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x013194C0, void, ctor, (app::ChargeFlameBurst * this_ptr))
}
