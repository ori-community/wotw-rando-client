#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StomperVisuals {
    IL2CPP_REGISTER_METHOD(0x0065C4A0, void, Start, (app::StomperVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065C530, void, PlaySound, (app::StomperVisuals * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event))
    IL2CPP_REGISTER_METHOD(0x0065C750, void, StopSound, (app::StomperVisuals * this_ptr, app::StomperVisuals_SoundEvent__Enum sound_event))
    IL2CPP_REGISTER_METHOD(0x0065C790, void, SpawnStompDust, (app::StomperVisuals * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0065C8B0, void, SetFixedJointRigidbody, (app::StomperVisuals * this_ptr, app::Rigidbody * body))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StomperVisuals * this_ptr))
}
