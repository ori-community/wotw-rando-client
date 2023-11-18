#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartSet.h>

namespace app::classes::CartSet {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSpawningLocked, (app::CartSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSpawningLocked, (app::CartSet * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B3E700, void, Awake, (app::CartSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3E810, void, Update, (app::CartSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B3E820, void, CheckForSpawnLocking, (app::CartSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CartSet * this_ptr))
} // namespace app::classes::CartSet
