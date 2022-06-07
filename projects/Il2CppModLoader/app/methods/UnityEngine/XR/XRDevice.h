#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::XR::XRDevice {
    IL2CPP_REGISTER_METHOD(0x031C38C0, void, InvokeDeviceLoaded, (app::String * loaded_device_name))
    IL2CPP_REGISTER_METHOD(0x031C39B0, void, cctor, ())
}
