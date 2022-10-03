#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00F4A030, void, Awake, (app::MoonDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4A1D0, void, OnDestroy, (app::MoonDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4A360, void, OnGameSerializeLoad, (app::MoonDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04796468, MoonDoorSlot_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F4A5A0, void, FixedUpdate, (app::MoonDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MoonDoorSlot * this_ptr))
} // namespace app::classes::MoonDoorSlot
