#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTa_ListenerZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>
#include <Modloader/app/structs/AudioListenerZoneReference.h>
#include <Modloader/app/structs/ListenerSoundZoneTaskData.h>

namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ {
    IL2CPP_REGISTER_METHOD(0x02AF4E70, bool, get_IsValid, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4930, app::ListenerSoundZoneTaskData, get_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4950, void, set_Data, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, app::ListenerSoundZoneTaskData value))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_FrameQuantinization, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_ForceFirstFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AF49B0, void, ctor, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsBound, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02AF4E80, bool, get_ShouldBeUpdatedThisFrame, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF4F80, void, Reset, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF5050, void, Bind, (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ * this_ptr, app::AudioListenerZoneReference zone, int32_t frame_quantinization, app::ListenerSoundZoneTaskData data))
} // namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_
