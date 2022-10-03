#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngineInternal::Input::NativeInputSystem {
    IL2CPP_REGISTER_METHOD(0x031C3320, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x031C3370, void, NotifyBeforeUpdate, (app::NativeInputUpdateType__Enum update_type))
    IL2CPP_REGISTER_METHOD(0x031C3430, void, NotifyUpdate, (app::NativeInputUpdateType__Enum update_type, void* event_buffer))
    IL2CPP_REGISTER_METHOD(0x031C3520, void, NotifyDeviceDiscovered, (int32_t device_id, app::String* device_descriptor))
    IL2CPP_REGISTER_METHOD(0x031C35F0, void, set_hasDeviceDiscoveredCallback, (bool value))
} // namespace app::classes::UnityEngineInternal::Input::NativeInputSystem
