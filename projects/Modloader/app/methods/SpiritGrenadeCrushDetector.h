#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiritGrenadeCrushDetector.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::SpiritGrenadeCrushDetector {
    IL2CPP_REGISTER_METHOD(0x00D58D80, void, OnTriggerEnter, (app::SpiritGrenadeCrushDetector * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritGrenadeCrushDetector * this_ptr))
} // namespace app::classes::SpiritGrenadeCrushDetector
