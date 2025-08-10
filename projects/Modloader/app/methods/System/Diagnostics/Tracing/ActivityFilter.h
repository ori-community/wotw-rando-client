#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Guid_.h>
#include <Modloader/app/structs/ActivityFilter.h>
#include <Modloader/app/structs/ConcurrentDictionary_2_System_Guid_System_Int32_.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventSource.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IEnumerable_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Diagnostics::Tracing::ActivityFilter {
    IL2CPP_REGISTER_METHOD(0x01742A20, void, DisableFilter, app::ActivityFilter** filter_list, app::EventSource* source)
    IL2CPP_REGISTER_METHOD(
        0x01742E50,
        void,
        UpdateFilter,
        app::ActivityFilter** filter_list,
        app::EventSource* source,
        int32_t per_event_source_session_id,
        app::String* start_events
    )
    IL2CPP_REGISTER_METHOD(
        0x01743340,
        bool,
        PassesActivityFilter,
        app::ActivityFilter* filter_list,
        app::Guid* child_activity_i_d,
        bool triggering_event,
        app::EventSource* source,
        int32_t event_id
    )
    IL2CPP_REGISTER_METHOD(
        0x01743820,
        void,
        FlowActivityIfNeeded,
        app::ActivityFilter* filter_list,
        app::Guid* current_activity_id,
        app::Guid* child_activity_i_d
    )
    IL2CPP_REGISTER_METHOD(
        0x01743A30,
        void,
        UpdateKwdTriggers,
        app::ActivityFilter* activity_filter,
        app::Guid source_guid,
        app::EventSource* source,
        app::EventKeywords__Enum sess_keywords
    )
    IL2CPP_REGISTER_METHOD(0x01743C10, app::IEnumerable_1_System_Tuple_2__1*, GetFilterAsTuple, app::ActivityFilter* this_ptr, app::Guid source_guid)
    IL2CPP_REGISTER_METHOD(0x01743DB0, void, Dispose, app::ActivityFilter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01743EB0,
        void,
        ctor,
        app::ActivityFilter* this_ptr,
        app::EventSource* source,
        int32_t per_event_source_session_id,
        int32_t event_id,
        int32_t sampling_freq,
        app::ActivityFilter* existing_filter
    )
    IL2CPP_REGISTER_METHOD(0x01744360, void, EnsureActivityCleanupDelegate, app::ActivityFilter* filter_list)
    IL2CPP_REGISTER_METHOD(0x017444A0, app::Action_1_Guid_*, GetActivityDyingDelegate, app::ActivityFilter* filter_list)
    IL2CPP_REGISTER_METHOD(
        0x017446C0,
        bool,
        EnableFilter,
        app::ActivityFilter** filter_list,
        app::EventSource* source,
        int32_t per_event_source_session_id,
        int32_t event_id,
        int32_t sampling_freq
    )
    IL2CPP_REGISTER_METHOD(0x017448B0, void, TrimActiveActivityStore, app::ConcurrentDictionary_2_System_Guid_System_Int32_* activities)
    IL2CPP_REGISTER_METHOD(0x01744C90, app::ConcurrentDictionary_2_System_Guid_System_Int32_*, GetActiveActivities, app::ActivityFilter* filter_list)
} // namespace app::classes::System::Diagnostics::Tracing::ActivityFilter
