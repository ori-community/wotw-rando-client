#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::XR::XRDevice {
    IL2CPP_REGISTER_METHOD(0x031C38C0, void, InvokeDeviceLoaded, app::String* loaded_device_name)
    IL2CPP_REGISTER_METHOD(0x031C39B0, void, cctor, )
} // namespace app::classes::UnityEngine::XR::XRDevice
