#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindZoneVisualizer.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::WindZoneVisualizer {
    IL2CPP_REGISTER_METHOD(0x0057A6A0, void, Awake, (app::WindZoneVisualizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A770, void, OnDestroy, (app::WindZoneVisualizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057A810, void, FixedUpdate, (app::WindZoneVisualizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsSuspended, (app::WindZoneVisualizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_IsSuspended, (app::WindZoneVisualizer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, app::SuspendableMask__Enum, get_Mask, (app::WindZoneVisualizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057AAD0, void, set_Mask, (app::WindZoneVisualizer * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0057AB80, void, ctor, (app::WindZoneVisualizer * this_ptr))
} // namespace app::classes::WindZoneVisualizer
