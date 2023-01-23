#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTimelineUiFaderOnEnable.h>

namespace app::classes::MoonTimelineUiFaderOnEnable {
    IL2CPP_REGISTER_METHOD(0x01474380, void, OnEnable, (app::MoonTimelineUiFaderOnEnable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014743B0, void, OnDisable, (app::MoonTimelineUiFaderOnEnable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MoonTimelineUiFaderOnEnable * this_ptr))
} // namespace app::classes::MoonTimelineUiFaderOnEnable
