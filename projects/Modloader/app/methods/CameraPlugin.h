#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraPlugin.h>

namespace app::classes::CameraPlugin {
    IL2CPP_REGISTER_METHOD(0x0169F350, void, Awake, (app::CameraPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169F410, void, PlayCycle, (app::CameraPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x0169F480, void, RecordCycle, (app::CameraPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x0169F540, void, Exit, (app::CameraPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraPlugin * this_ptr))
} // namespace app::classes::CameraPlugin
