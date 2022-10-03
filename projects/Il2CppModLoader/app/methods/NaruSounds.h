#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NaruSounds {
    IL2CPP_REGISTER_METHOD(0x00886490, app::PlatformMovement*, get_PlatformMovement, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008864C0, app::SurfaceMaterialType__Enum, get_GroundSurfaceType, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886510, void, Awake, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886580, void, OnJump, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886950, void, OnLand, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00886BF0, void, HandleFootstepEvents, (app::NaruSounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NaruSounds * this_ptr))
} // namespace app::classes::NaruSounds
