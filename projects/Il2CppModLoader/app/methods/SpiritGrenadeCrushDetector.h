#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpiritGrenadeCrushDetector {
    IL2CPP_REGISTER_METHOD(0x00D58D80, void, OnTriggerEnter, (app::SpiritGrenadeCrushDetector * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritGrenadeCrushDetector * this_ptr))
}
