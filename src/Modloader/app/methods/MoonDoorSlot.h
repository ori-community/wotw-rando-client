#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonDoorSlot.h>

namespace app::classes::MoonDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00F4A030, void, Awake, app::MoonDoorSlot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F4A1D0, void, OnDestroy, app::MoonDoorSlot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F4A360, void, OnGameSerializeLoad, app::MoonDoorSlot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F4A5A0, void, FixedUpdate, app::MoonDoorSlot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MoonDoorSlot* this_ptr)
} // namespace app::classes::MoonDoorSlot
