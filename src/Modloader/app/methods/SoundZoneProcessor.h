#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioEmitterZone.h>
#include <Modloader/app/structs/AudioEmitterZoneReference.h>
#include <Modloader/app/structs/AudioListenerZone.h>
#include <Modloader/app/structs/AudioListenerZoneReference.h>
#include <Modloader/app/structs/EmitterSoundZoneTaskData.h>
#include <Modloader/app/structs/ListenerSoundZoneTaskData.h>
#include <Modloader/app/structs/PositionSyncTask.h>
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/SoundListener.h>
#include <Modloader/app/structs/SoundZoneProcessor.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterTa_EmitterZo_ListenerSoundZoneTa_EmitterSoundZoneT___A.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterTa_ListenerZo_ListenerSoundZoneT_EmitterSoundZoneT___A.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTa_ListenerZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTas_EmitterZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>

namespace app::classes::SoundZoneProcessor {
    IL2CPP_REGISTER_METHOD(
        0x00EEE370,
        void,
        ProcessZoneTasks,
        app::SoundZoneProcessor* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*
            listener_zone_tasks,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* emitter_zone_tasks,
        app::PositionSyncTask__Array* position_tasks,
        int32_t valid_position_tasks_size
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEEB00,
        bool,
        IsTracked,
        app::SoundZoneProcessor* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEEBD0,
        void,
        Untrack,
        app::SoundZoneProcessor* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        bool force_reset
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEECD0,
        void,
        UpdateTask_1,
        app::SoundZoneProcessor* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::Vector2 distances,
        bool has_position_changed
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEEDC0,
        void,
        UpdateTask_2,
        app::SoundZoneProcessor* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::Vector2 distances,
        bool has_position_changed
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEEE30,
        app::ListenerSoundZoneTaskData,
        InitializeListenerZoneTask,
        app::SoundZoneProcessor* this_ptr,
        app::ListenerSoundZoneTaskData data,
        app::AudioListenerZone* zone
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEF180,
        app::EmitterSoundZoneTaskData,
        InitializeEmitterZoneTask,
        app::SoundZoneProcessor* this_ptr,
        app::EmitterSoundZoneTaskData data,
        app::AudioEmitterZone* zone
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEF4D0,
        void,
        TearDownEmitterZoneTask,
        app::SoundZoneProcessor* this_ptr,
        app::EmitterSoundZoneTaskData data,
        app::AudioEmitterZoneReference zone,
        app::PositionSyncTask__Array* position_tasks,
        int32_t valid_position_tasks_size
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEF6D0,
        void,
        TearDownListenerZoneTask,
        app::SoundZoneProcessor* this_ptr,
        app::ListenerSoundZoneTaskData data,
        app::AudioListenerZoneReference zone,
        app::PositionSyncTask__Array* position_tasks,
        int32_t valid_position_tasks_size
    )
    IL2CPP_REGISTER_METHOD(
        0x00EEF900,
        void,
        ResetListenerTracking,
        app::SoundZoneProcessor* this_ptr,
        app::SoundListener* listener_to_reset,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*
            listener_zone_tasks,
        app::PositionSyncTask__Array* position_tasks
    )
    IL2CPP_REGISTER_METHOD(0x00EEFB40, void, ctor, app::SoundZoneProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EEFBC0, void, cctor, )
} // namespace app::classes::SoundZoneProcessor
