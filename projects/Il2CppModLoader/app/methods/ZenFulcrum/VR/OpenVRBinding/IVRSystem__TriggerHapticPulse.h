#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__TriggerHapticPulse {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_TriggerHapticPulse * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CEFCE0, void, Invoke, (app::IVRSystem_TriggerHapticPulse * this_ptr, uint32_t un_controller_device_index, uint32_t un_axis_id, uint16_t us_duration_micro_sec))
    IL2CPP_REGISTER_METHOD(0x02CF0060, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_TriggerHapticPulse * this_ptr, uint32_t un_controller_device_index, uint32_t un_axis_id, uint16_t us_duration_micro_sec, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRSystem_TriggerHapticPulse * this_ptr, app::IAsyncResult * result))
}
