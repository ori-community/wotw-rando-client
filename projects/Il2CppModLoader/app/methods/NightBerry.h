#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NightBerry {
    IL2CPP_REGISTER_METHOD(0x005FF4C0, float, get_SafeFromDamageRadius, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FF4D0, void, SetRespawnPosition, (app::NightBerry * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x005FF510, app::Vector3, get_Position, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FF5A0, void, set_Position, (app::NightBerry * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x005FF620, bool, get_IsCarried, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FF650, void, SetToDropMode, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FF680, void, Awake, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FFB20, void, OnGameReset, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475A060, NightBerry_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005FFC50, void, OnDestroy, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005FFFA0, void, Serialize, (app::NightBerry * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00600010, void, OnReleaseNightberry, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F328, NightBerry_OnReleaseNightberry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006001B0, void, FixedUpdate, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00600ED0, void, ShrinkSpiritRing, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00600FB0, void, GrowSpiritRing, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, (app::NightBerry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFCE0, app::SuspendableMask__Enum, get_Mask, (app::NightBerry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006010A0, void, set_Mask, (app::NightBerry * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00601160, void, ctor, (app::NightBerry * this_ptr))
} // namespace app::classes::NightBerry
