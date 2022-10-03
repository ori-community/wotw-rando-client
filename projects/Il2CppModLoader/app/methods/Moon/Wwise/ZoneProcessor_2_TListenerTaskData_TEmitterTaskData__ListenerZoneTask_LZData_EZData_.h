#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__ListenerZoneTask_LZData_EZData_ {
    IL2CPP_REGISTER_METHOD(0x00724AE0, app::LZData, get_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, app::LZData value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AF4D60, void, ctor, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02AF5130, bool, get_IsValid, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AF4E80, bool, get_ShouldBeUpdatedThisFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF5140, void, Reset, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF51E0, void, Bind, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData_ * this_ptr, app::AudioListenerZoneReference zone, int32_t frame_quantinization, app::LZData data))
} // namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__ListenerZoneTask_LZData_EZData_
