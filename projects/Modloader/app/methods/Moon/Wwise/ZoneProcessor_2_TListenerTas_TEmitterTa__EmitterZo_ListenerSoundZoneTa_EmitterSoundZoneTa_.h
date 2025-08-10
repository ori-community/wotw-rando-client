#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioEmitterZoneReference.h>
#include <Modloader/app/structs/EmitterSoundZoneTaskData.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTas_EmitterZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>

namespace app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_ {
    IL2CPP_REGISTER_METHOD(
        0x02AF4A10,
        bool,
        get_IsValid,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4970,
        app::AudioEmitterZoneReference,
        get_Zone,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x008C5DB0,
        bool,
        get_ForceFirstFrame,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4930,
        app::EmitterSoundZoneTaskData,
        get_Data,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4950,
        void,
        set_Data,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        app::EmitterSoundZoneTaskData value
    )
    IL2CPP_REGISTER_METHOD(
        0x00654950,
        int32_t,
        get_FrameQuantinization,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00654960,
        void,
        set_FrameQuantinization,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        int32_t value
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4990,
        void,
        set_Zone,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        app::AudioEmitterZoneReference value
    )
    IL2CPP_REGISTER_METHOD(
        0x004430B0,
        bool,
        get_IsBound,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0058ED80,
        void,
        set_IsBound,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        bool value
    )
    IL2CPP_REGISTER_METHOD(
        0x008C5DC0,
        void,
        set_ForceFirstFrame,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        bool value
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF49B0,
        void,
        ctor,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        int32_t i
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4A60,
        bool,
        get_ShouldBeUpdatedThisFrame,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4B60,
        void,
        Reset,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02AF4C20,
        void,
        Bind,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* this_ptr,
        app::AudioEmitterZoneReference zone,
        int32_t frame_quantinization,
        app::EmitterSoundZoneTaskData data
    )
} // namespace
  // app::classes::Moon::Wwise::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData__EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_
