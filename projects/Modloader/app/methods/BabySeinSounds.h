#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/BabySeinSounds.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::BabySeinSounds {
    IL2CPP_REGISTER_METHOD(0x00F77560, app::PlatformMovement*, get_PlatformMovement, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F77590, app::SurfaceMaterialType__Enum, get_GroundSurfaceType, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008543C0, void, Awake, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F775E0, void, OnJump, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F77880, void, OnLand, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F77B20, void, HandleFootstepEvents, (app::BabySeinSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::BabySeinSounds * this_ptr))
} // namespace app::classes::BabySeinSounds
