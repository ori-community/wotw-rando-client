#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RisingWater {
    IL2CPP_REGISTER_METHOD(0x01357920, app::RisingWater*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x013579C0, void, SetProperties, (float speed))
    IL2CPP_REGISTER_METHOD(0x01357AD0, bool, get_Available, ())
    IL2CPP_REGISTER_METHOD(0x01357B90, app::Vector2, get_Position, ())
    IL2CPP_REGISTER_METHOD(0x01357D20, void, Awake, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01357E00, void, OnDestroy, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01357EA0, void, FixedUpdate, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013582A0, void, Serialize, (app::RisingWater * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (app::RisingWater * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF3C0, app::SuspendableMask__Enum, get_Mask, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013584B0, void, set_Mask, (app::RisingWater * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x01358560, void, ctor, (app::RisingWater * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::RisingWater
