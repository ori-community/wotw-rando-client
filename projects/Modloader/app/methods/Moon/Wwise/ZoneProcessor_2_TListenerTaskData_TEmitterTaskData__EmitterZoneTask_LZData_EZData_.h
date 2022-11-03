#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__EmitterZoneTask_LZData_EZData_ {
    IL2CPP_REGISTER_METHOD(0x00724AE0, app::EZData, get_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, app::EZData value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02AF4D20, app::AudioEmitterZoneReference, get_Zone, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4D40, void, set_Zone, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, app::AudioEmitterZoneReference value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AF4D60, void, ctor, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02AF4A10, bool, get_IsValid, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4A60, bool, get_ShouldBeUpdatedThisFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4B60, void, Reset, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4D90, void, Bind, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData_ * this_ptr, app::AudioEmitterZoneReference zone, int32_t frame_quantinization, app::EZData data))
} // namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__EmitterZoneTask_LZData_EZData_
