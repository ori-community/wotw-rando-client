#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioZoneShape2D__Enum.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/List_1_SoundZoneProcessor_Job_PositionZoneEvent_.h>
#include <Modloader/app/structs/List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array.h>
#include <Modloader/app/structs/PositionSyncTask.h>
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job__Boxed.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterTa_EmitterZo_ListenerSoundZoneTa_EmitterSoundZoneT___A.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterTa_ListenerZo_ListenerSoundZoneT_EmitterSoundZoneT___A.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTa_ListenerZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTas_TEmitterTas_EmitterZo_ListenerSoundZoneTa_EmitterSoundZoneTa_.h>

namespace app::classes::SoundZoneProcessor_Job {
    IL2CPP_REGISTER_METHOD(0x00EEFC40, app::PositionSyncTask__Array*, get_PositionTasks, )
    IL2CPP_REGISTER_METHOD(0x00EEFD10, int32_t, get_PositionTasksCount, )
    IL2CPP_REGISTER_METHOD(0x00EEFDE0, void, set_PositionTasksCount, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x00EEFEB0,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*,
        get_ListenerZoneTasks,
    )
    IL2CPP_REGISTER_METHOD(0x00EEFF80, int32_t, get_ListenerZoneTasksCount, )
    IL2CPP_REGISTER_METHOD(0x00EF0050, void, set_ListenerZoneTasksCount, int32_t value)
    IL2CPP_REGISTER_METHOD(
        0x00EF0120,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*,
        get_EmitterZoneTasks,
    )
    IL2CPP_REGISTER_METHOD(0x00EF01F0, int32_t, get_EmitterZoneTasksCount, )
    IL2CPP_REGISTER_METHOD(0x00EF02C0, void, set_EmitterZoneTasksCount, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00EF0390, app::List_1_SoundZoneProcessor_Job_PositionZoneEvent___Array*, get_Events, )
    IL2CPP_REGISTER_METHOD(0x00120BA0, void, ctor, app::SoundZoneProcessor_Job__Boxed* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x00EF0470,
        void,
        Execute_1,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*
            listener_zone_tasks,
        int32_t valid_listener_zone_tasks_size,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* emitter_zone_tasks,
        int32_t valid_emitter_zone_tasks_size,
        app::PositionSyncTask__Array* position_tasks,
        int32_t valid_position_tasks_size
    )
    IL2CPP_REGISTER_METHOD(
        0x00120BC0,
        app::JobHandle,
        ExecuteInternal,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*
            listener_zone_tasks,
        int32_t valid_listener_zone_tasks_size,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* emitter_zone_tasks,
        int32_t valid_emitter_zone_tasks_size,
        app::PositionSyncTask__Array* position_tasks,
        int32_t valid_position_tasks_size
    )
    IL2CPP_REGISTER_METHOD(0x00120C20, void, Execute_2, app::SoundZoneProcessor_Job__Boxed* this_ptr, int32_t position_index)
    IL2CPP_REGISTER_METHOD(
        0x00120C30,
        bool,
        IsTracked_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120C40,
        bool,
        IsTracked_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120C50,
        bool,
        IsTrackable_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120C60,
        bool,
        IsTrackable_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120C70,
        bool,
        IsPointInZone,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::AudioZoneShape2D__Enum zone_shape,
        app::Bounds zone_data,
        app::Vector3 point
    )
    IL2CPP_REGISTER_METHOD(
        0x00120CB0,
        app::Vector2,
        GetTrackableDistances_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120CC0,
        app::Vector2,
        GetTrackableDistances_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos
    )
    IL2CPP_REGISTER_METHOD(
        0x00120CD0,
        void,
        Track_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(
        0x00120CE0,
        void,
        Track_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(
        0x00120CF0,
        void,
        Untrack_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(
        0x00120D00,
        void,
        Untrack_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(
        0x00120D10,
        void,
        UntrackIfPossible_1,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(
        0x00120D20,
        void,
        UntrackIfPossible_2,
        app::SoundZoneProcessor_Job__Boxed* this_ptr,
        app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData_* task,
        app::PositionSyncTask* pos,
        app::List_1_SoundZoneProcessor_Job_PositionZoneEvent_* events,
        int32_t zone_index
    )
    IL2CPP_REGISTER_METHOD(0x00EF3530, void, cctor, )
} // namespace app::classes::SoundZoneProcessor_Job
