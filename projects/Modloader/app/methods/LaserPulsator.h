#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LaserPulsator.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::LaserPulsator {
    IL2CPP_REGISTER_METHOD(0x00F08060, void, Awake, (app::LaserPulsator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F08110, void, OnDestroy, (app::LaserPulsator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F081B0, void, FixedUpdate, (app::LaserPulsator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C020, bool, get_IsSuspended, (app::LaserPulsator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C030, void, set_IsSuspended, (app::LaserPulsator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SuspendableMask__Enum, get_Mask, (app::LaserPulsator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Mask, (app::LaserPulsator * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F083D0, void, Serialize, (app::LaserPulsator * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00F08400, void, ctor, (app::LaserPulsator * this_ptr))
} // namespace app::classes::LaserPulsator
