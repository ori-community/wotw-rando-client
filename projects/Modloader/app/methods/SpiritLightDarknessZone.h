#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/SpiritLightDarknessZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritLightDarknessZone {
    IL2CPP_REGISTER_METHOD(0x00D619D0, app::Bounds, get_WorldSpaceBoundingBox, (app::SpiritLightDarknessZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D61BE0, bool, IsInsideDarknessZone, (app::Vector3 world_position))
    IL2CPP_REGISTER_METHOD(0x00D61DC0, void, OnEnable, (app::SpiritLightDarknessZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D61E80, void, OnDisable, (app::SpiritLightDarknessZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritLightDarknessZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D61F40, void, cctor, ())
} // namespace app::classes::SpiritLightDarknessZone
