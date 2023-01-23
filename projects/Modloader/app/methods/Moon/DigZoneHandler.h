#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DigZoneHandler.h>
#include <Modloader/app/structs/DigZone.h>

namespace app::classes::Moon::DigZoneHandler {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_PassThroughDigZones, (app::DigZoneHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201430, void, SetPassThroughDigZones, (app::DigZoneHandler * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012016D0, void, IgnoreDigZone, (app::DigZoneHandler * this_ptr, app::DigZone* dig_zone, bool ignore))
    IL2CPP_REGISTER_METHOD(0x012018D0, void, FixedUpdate, (app::DigZoneHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201A80, void, Awake, (app::DigZoneHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201B10, void, OnDestroy, (app::DigZoneHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201BE0, void, ctor, (app::DigZoneHandler * this_ptr))
} // namespace app::classes::Moon::DigZoneHandler
