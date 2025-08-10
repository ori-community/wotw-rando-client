#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_2_Int32_Int64_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/ControllerCommand__Enum.h>
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventProvider.h>
#include <Modloader/app/structs/EventProvider_EventData.h>
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_.h>
#include <Modloader/app/structs/List_1_System_Tuple_2_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.h>
#include <Modloader/app/structs/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum.h>
#include <Modloader/app/structs/Void.h>
#include <Modloader/app/structs/uint8_t.h>

namespace app::classes::System::Diagnostics::Tracing::EventProvider {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0174D480, void, Register, app::EventProvider* this_ptr, app::Guid provider_guid)
    IL2CPP_REGISTER_METHOD(
        0x0174D720,
        int32_t,
        SetInformation,
        app::EventProvider* this_ptr,
        app::UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS__Enum event_info_class,
        app::Void* data,
        int32_t data_size
    )
    IL2CPP_REGISTER_METHOD(0x0174D8E0, void, Dispose_1, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0174D990, void, Dispose_2, app::EventProvider* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x0174DBC0, void, Finalize, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0174DC40, void, Deregister, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0174DD00,
        void,
        EtwEnableCallBack,
        app::Guid* source_id,
        int32_t control_code,
        uint8_t set_level,
        int64_t any_keyword,
        int64_t all_keyword,
        app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filter_data,
        app::Void* callback_context
    )
    IL2CPP_REGISTER_METHOD(
        0x0174DE60,
        void,
        EtwEnableCallBackImpl,
        app::EventProvider* this_ptr,
        int32_t control_code,
        uint8_t set_level,
        int64_t any_keyword,
        int64_t all_keyword,
        app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filter_data
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        OnControllerCommand,
        app::EventProvider* this_ptr,
        app::ControllerCommand__Enum command,
        app::IDictionary_2_System_String_System_String_* arguments,
        int32_t session_id,
        int32_t etw_session_id
    )
    IL2CPP_REGISTER_METHOD(0x004F4CE0, app::EventLevel__Enum, get_Level, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::EventKeywords__Enum, get_MatchAnyKeyword, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0174E3A0, int32_t, FindNull, app::Byte__Array* buffer, int32_t idx)
    IL2CPP_REGISTER_METHOD(0x0174E3F0, app::List_1_System_Tuple_2_*, GetSessions, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0174ED20,
        void,
        GetSessionInfoCallback,
        int32_t etw_session_id,
        int64_t match_all_keywords,
        app::List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_** session_list
    )
    IL2CPP_REGISTER_METHOD(0x0174F0D0, void, GetSessionInfo, app::EventProvider* this_ptr, app::Action_2_Int32_Int64_* action)
    IL2CPP_REGISTER_METHOD(
        0x0174F330,
        int32_t,
        IndexOfSessionInList,
        app::List_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* sessions,
        int32_t etw_session_id
    )
    IL2CPP_REGISTER_METHOD(
        0x0174F410,
        bool,
        GetDataFromController,
        app::EventProvider* this_ptr,
        int32_t etw_session_id,
        app::UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR* filter_data,
        app::ControllerCommand__Enum* command,
        app::Byte__Array** data,
        int32_t* data_start
    )
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, IsEnabled_1, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0174F540, bool, IsEnabled_2, app::EventProvider* this_ptr, uint8_t level, int64_t keywords)
    IL2CPP_REGISTER_METHOD(0x0174F580, app::EventProvider_WriteEventErrorCode__Enum, GetLastWriteEventError, )
    IL2CPP_REGISTER_METHOD(0x0174F660, void, SetLastError, int32_t error)
    IL2CPP_REGISTER_METHOD(
        0x0174F7C0,
        app::Object*,
        EncodeObject,
        app::Object** data,
        app::EventProvider_EventData** data_descriptor,
        app::uint8_t** data_buffer,
        uint32_t* total_event_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01750370,
        bool,
        WriteEvent_1,
        app::EventProvider* this_ptr,
        app::EventDescriptor* event_descriptor,
        app::Guid* activity_i_d,
        app::Guid* child_activity_i_d,
        app::Object__Array* event_payload
    )
    IL2CPP_REGISTER_METHOD(
        0x01751130,
        bool,
        WriteEvent_2,
        app::EventProvider* this_ptr,
        app::EventDescriptor* event_descriptor,
        app::Guid* activity_i_d,
        app::Guid* child_activity_i_d,
        int32_t data_count,
        void* data
    )
    IL2CPP_REGISTER_METHOD(
        0x01751240,
        bool,
        WriteEventRaw,
        app::EventProvider* this_ptr,
        app::EventDescriptor* event_descriptor,
        app::Guid* activity_i_d,
        app::Guid* related_activity_i_d,
        int32_t data_count,
        void* data
    )
    IL2CPP_REGISTER_METHOD(0x01751350, uint32_t, EventUnregister, app::EventProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01751400, int32_t, bitcount, uint32_t n)
    IL2CPP_REGISTER_METHOD(0x01751500, int32_t, bitindex, uint32_t n)
    IL2CPP_REGISTER_METHOD(0x01751520, void, cctor, )
} // namespace app::classes::System::Diagnostics::Tracing::EventProvider
