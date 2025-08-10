#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Attribute.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/EventAttribute.h>
#include <Modloader/app/structs/EventChannel__Enum.h>
#include <Modloader/app/structs/EventCommandEventArgs.h>
#include <Modloader/app/structs/EventCommand__Enum.h>
#include <Modloader/app/structs/EventDescriptor.h>
#include <Modloader/app/structs/EventDispatcher.h>
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventListener.h>
#include <Modloader/app/structs/EventManifestOptions__Enum.h>
#include <Modloader/app/structs/EventOpcode__Enum.h>
#include <Modloader/app/structs/EventSource.h>
#include <Modloader/app/structs/EventSourceOptions.h>
#include <Modloader/app/structs/EventSourceSettings__Enum.h>
#include <Modloader/app/structs/EventSource_EventData.h>
#include <Modloader/app/structs/EventSource_EventMetadata.h>
#include <Modloader/app/structs/EventSource_EventMetadata__Array.h>
#include <Modloader/app/structs/EventWrittenEventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/GCHandle.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/ManifestBuilder.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/NameInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/ParameterInfo_1__Array.h>
#include <Modloader/app/structs/SessionMask.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Diagnostics::Tracing::EventSource {
    IL2CPP_REGISTER_METHOD(
        0x01751690,
        void,
        WriteMultiMerge_1,
        app::EventSource* this_ptr,
        app::String* event_name,
        app::EventSourceOptions* options,
        app::TraceLoggingEventTypes* event_types,
        app::Guid* activity_i_d,
        app::Guid* child_activity_i_d,
        app::Object__Array* values
    )
    IL2CPP_REGISTER_METHOD(
        0x01751720,
        void,
        WriteMultiMergeInner,
        app::EventSource* this_ptr,
        app::String* event_name,
        app::EventSourceOptions* options,
        app::TraceLoggingEventTypes* event_types,
        app::Guid* activity_i_d,
        app::Guid* child_activity_i_d,
        app::Object__Array* values
    )
    IL2CPP_REGISTER_METHOD(
        0x01751D50,
        void,
        WriteMultiMerge_2,
        app::EventSource* this_ptr,
        app::String* event_name,
        app::EventSourceOptions* options,
        app::TraceLoggingEventTypes* event_types,
        app::Guid* activity_i_d,
        app::Guid* child_activity_i_d,
        app::EventSource_EventData* data
    )
    IL2CPP_REGISTER_METHOD(0x01752200, void, WriteCleanup, app::EventSource* this_ptr, app::GCHandle* p_pins, int32_t c_pins)
    IL2CPP_REGISTER_METHOD(0x01752300, void, InitializeProviderMetadata, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01752AA0, int32_t, AddValueToMetaData, app::List_1_System_Byte_* meta_data, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01752E40, int32_t, HexDigit, char16_t c)
    IL2CPP_REGISTER_METHOD(
        0x01752F90,
        app::NameInfo_1*,
        UpdateDescriptor,
        app::EventSource* this_ptr,
        app::String* name,
        app::TraceLoggingEventTypes* event_info,
        app::EventSourceOptions* options,
        app::EventDescriptor* descriptor
    )
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017530F0, app::Guid, get_Guid, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, IsEnabled_1, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01753100, bool, IsEnabled_2, app::EventSource* this_ptr, app::EventLevel__Enum level, app::EventKeywords__Enum keywords)
    IL2CPP_REGISTER_METHOD(
        0x01753100,
        bool,
        IsEnabled_3,
        app::EventSource* this_ptr,
        app::EventLevel__Enum level,
        app::EventKeywords__Enum keywords,
        app::EventChannel__Enum channel
    )
    IL2CPP_REGISTER_METHOD(0x01753130, app::Guid, GetGuid, app::Type* event_source_type)
    IL2CPP_REGISTER_METHOD(0x01753480, app::String*, GetName_1, app::Type* event_source_type)
    IL2CPP_REGISTER_METHOD(0x01753520, void, SetCurrentThreadActivityId, app::Guid activity_id)
    IL2CPP_REGISTER_METHOD(0x017538F0, app::Guid, get_CurrentThreadActivityId, )
    IL2CPP_REGISTER_METHOD(0x017539A0, app::Guid, get_InternalCurrentThreadActivityId, )
    IL2CPP_REGISTER_METHOD(0x01753AE0, app::Guid, get_FallbackActivityId, )
    IL2CPP_REGISTER_METHOD(0x01753BD0, app::String*, ToString, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01753D40, void, ctor_1, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01753D50, void, ctor_2, app::EventSource* this_ptr, app::EventSourceSettings__Enum settings)
    IL2CPP_REGISTER_METHOD(0x01753D60, void, ctor_3, app::EventSource* this_ptr, app::EventSourceSettings__Enum settings, app::String__Array* traits)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEventCommand, app::EventSource* this_ptr, app::EventCommandEventArgs* command)
    IL2CPP_REGISTER_METHOD(0x01753FA0, void, WriteEvent_1, app::EventSource* this_ptr, int32_t event_id)
    IL2CPP_REGISTER_METHOD(0x01753FC0, void, WriteEvent_2, app::EventSource* this_ptr, int32_t event_id, int32_t arg1)
    IL2CPP_REGISTER_METHOD(0x01754090, void, WriteEvent_3, app::EventSource* this_ptr, int32_t event_id, int64_t arg1)
    IL2CPP_REGISTER_METHOD(0x01754160, void, WriteEvent_4, app::EventSource* this_ptr, int32_t event_id, app::String* arg1)
    IL2CPP_REGISTER_METHOD(0x01754260, void, WriteEvent_5, app::EventSource* this_ptr, int32_t event_id, app::String* arg1, app::String* arg2)
    IL2CPP_REGISTER_METHOD(
        0x017543A0,
        void,
        WriteEvent_6,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::String* arg1,
        app::String* arg2,
        app::String* arg3
    )
    IL2CPP_REGISTER_METHOD(0x01754520, void, WriteEvent_7, app::EventSource* this_ptr, int32_t event_id, int64_t arg1, app::String* arg2)
    IL2CPP_REGISTER_METHOD(
        0x01754630,
        void,
        WriteEventCore,
        app::EventSource* this_ptr,
        int32_t event_id,
        int32_t event_data_count,
        app::EventSource_EventData* data
    )
    IL2CPP_REGISTER_METHOD(
        0x01754660,
        void,
        WriteEventWithRelatedActivityIdCore,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::Guid* related_activity_id,
        int32_t event_data_count,
        app::EventSource_EventData* data
    )
    IL2CPP_REGISTER_METHOD(0x01755350, void, WriteEvent_8, app::EventSource* this_ptr, int32_t event_id, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01755370, void, Dispose_1, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01755420, void, Dispose_2, app::EventSource* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x017555C0, void, Finalize, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01755640,
        void,
        WriteStringToListener,
        app::EventSource* this_ptr,
        app::EventListener* listener,
        app::String* msg,
        app::SessionMask m
    )
    IL2CPP_REGISTER_METHOD(
        0x017559C0,
        void,
        WriteEventRaw,
        app::EventSource* this_ptr,
        app::String* event_name,
        app::EventDescriptor* event_descriptor,
        app::Guid* activity_i_d,
        app::Guid* related_activity_i_d,
        int32_t data_count,
        void* data
    )
    IL2CPP_REGISTER_METHOD(
        0x01755B00,
        void,
        Initialize,
        app::EventSource* this_ptr,
        app::Guid event_source_guid,
        app::String* event_source_name,
        app::String__Array* traits
    )
    IL2CPP_REGISTER_METHOD(0x01756200, app::String*, GetName_2, app::Type* event_source_type, app::EventManifestOptions__Enum flags)
    IL2CPP_REGISTER_METHOD(0x01756390, app::Guid, GenerateGuidFromName, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x017565F0,
        app::Object*,
        DecodeObject,
        app::EventSource* this_ptr,
        int32_t event_id,
        int32_t parameter_id,
        app::EventSource_EventData** data
    )
    IL2CPP_REGISTER_METHOD(0x01756DF0, app::EventDispatcher*, GetDispatcher, app::EventSource* this_ptr, app::EventListener* listener)
    IL2CPP_REGISTER_METHOD(
        0x01756E20,
        void,
        WriteEventVarargs,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::Guid* child_activity_i_d,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x01757C10, app::Object__Array*, SerializeEventArgs, app::EventSource* this_ptr, int32_t event_id, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01757FC0, void, LogEventArgsMismatches, app::EventSource* this_ptr, app::ParameterInfo_1__Array* infos, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x01758210, int32_t, GetParamLengthIncludingByteArray, app::EventSource* this_ptr, app::ParameterInfo_1__Array* parameters)
    IL2CPP_REGISTER_METHOD(
        0x01758350,
        void,
        WriteToAllListeners_1,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::Guid* child_activity_i_d,
        int32_t event_data_count,
        app::EventSource_EventData* data
    )
    IL2CPP_REGISTER_METHOD(
        0x01758800,
        void,
        WriteToAllListeners_2,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::Guid* child_activity_i_d,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(
        0x01758B00,
        void,
        DispatchToAllListeners,
        app::EventSource* this_ptr,
        int32_t event_id,
        app::Guid* child_activity_i_d,
        app::EventWrittenEventArgs* event_callback_args
    )
    IL2CPP_REGISTER_METHOD(
        0x01758D80,
        void,
        WriteEventString,
        app::EventSource* this_ptr,
        app::EventLevel__Enum level,
        int64_t keywords,
        app::String* msg_string
    )
    IL2CPP_REGISTER_METHOD(0x017594A0, void, WriteStringToAllListeners, app::EventSource* this_ptr, app::String* event_name, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x01759A50, app::SessionMask, GetEtwSessionMask, app::EventSource* this_ptr, int32_t event_id, app::Guid* child_activity_i_d)
    IL2CPP_REGISTER_METHOD(
        0x01759DA0,
        bool,
        IsEnabledByDefault,
        app::EventSource* this_ptr,
        int32_t event_num,
        bool enable,
        app::EventLevel__Enum current_level,
        app::EventKeywords__Enum current_match_any_keyword
    )
    IL2CPP_REGISTER_METHOD(
        0x01759E60,
        bool,
        IsEnabledCommon,
        app::EventSource* this_ptr,
        bool enabled,
        app::EventLevel__Enum current_level,
        app::EventKeywords__Enum current_match_any_keyword,
        app::EventLevel__Enum event_level,
        app::EventKeywords__Enum event_keywords,
        app::EventChannel__Enum event_channel
    )
    IL2CPP_REGISTER_METHOD(0x01759E90, void, ThrowEventSourceException, app::EventSource* this_ptr, app::String* event_name, app::Exception* inner_ex)
    IL2CPP_REGISTER_METHOD(
        0x0175A520,
        void,
        ValidateEventOpcodeForTransfer,
        app::EventSource* this_ptr,
        app::EventSource_EventMetadata* event_data,
        app::String* event_name
    )
    IL2CPP_REGISTER_METHOD(0x0175A550, app::EventOpcode__Enum, GetOpcodeWithDefault, app::EventOpcode__Enum opcode, app::String* event_name)
    IL2CPP_REGISTER_METHOD(
        0x0175A630,
        void,
        SendCommand,
        app::EventSource* this_ptr,
        app::EventListener* listener,
        int32_t per_event_source_session_id,
        int32_t etw_session_id,
        app::EventCommand__Enum command,
        bool enable,
        app::EventLevel__Enum level,
        app::EventKeywords__Enum match_any_keyword,
        app::IDictionary_2_System_String_System_String_* command_arguments
    )
    IL2CPP_REGISTER_METHOD(0x0175A970, void, DoCommand, app::EventSource* this_ptr, app::EventCommandEventArgs* command_args)
    IL2CPP_REGISTER_METHOD(
        0x0175B580,
        void,
        UpdateEtwSession,
        app::EventSource* this_ptr,
        int32_t session_id_bit,
        int32_t etw_session_id,
        bool b_enable,
        app::String* activity_filters,
        bool participate_in_sampling
    )
    IL2CPP_REGISTER_METHOD(
        0x0175B9F0,
        bool,
        ParseCommandArgs,
        app::IDictionary_2_System_String_System_String_* command_arguments,
        bool* participate_in_sampling,
        app::String** activity_filters,
        int32_t* session_id_bit
    )
    IL2CPP_REGISTER_METHOD(0x0175BC90, void, UpdateKwdTriggers, app::EventSource* this_ptr, bool enable)
    IL2CPP_REGISTER_METHOD(
        0x0175BD60,
        bool,
        EnableEventForDispatcher,
        app::EventSource* this_ptr,
        app::EventDispatcher* dispatcher,
        int32_t event_id,
        bool value
    )
    IL2CPP_REGISTER_METHOD(0x0175BE70, bool, AnyEventEnabled, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0175BF20, bool, get_IsDisposed, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0175BF60, void, EnsureDescriptorsInitialized, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0175C390, bool, SendManifest, app::EventSource* this_ptr, app::Byte__Array* raw_manifest)
    IL2CPP_REGISTER_METHOD(
        0x0175C6B0,
        app::Attribute*,
        GetCustomAttributeHelper,
        app::MemberInfo_1* member,
        app::Type* attribute_type,
        app::EventManifestOptions__Enum flags
    )
    IL2CPP_REGISTER_METHOD(0x0175CDF0, bool, AttributeTypeNamesMatch, app::Type* attribute_type, app::Type* reflected_attribute_type)
    IL2CPP_REGISTER_METHOD(0x0175D0B0, app::Type*, GetEventSourceBaseType, app::Type* event_source_type, bool allow_event_source_override, bool reflection_only)
    IL2CPP_REGISTER_METHOD(
        0x0175D320,
        app::Byte__Array*,
        CreateManifestAndDescriptors,
        app::Type* event_source_type,
        app::String* event_source_dll_name,
        app::EventSource* source,
        app::EventManifestOptions__Enum flags
    )
    IL2CPP_REGISTER_METHOD(0x0175ED10, bool, RemoveFirstArgIfRelatedActivityId, app::ParameterInfo_1__Array** args)
    IL2CPP_REGISTER_METHOD(
        0x0175EFE0,
        void,
        AddProviderEnumKind,
        app::ManifestBuilder* manifest,
        app::FieldInfo_1* static_field,
        app::String* provider_enum_kind
    )
    IL2CPP_REGISTER_METHOD(
        0x0175F680,
        void,
        AddEventDescriptor,
        app::EventSource_EventMetadata__Array** event_data,
        app::String* event_name,
        app::EventAttribute* event_attribute,
        app::ParameterInfo_1__Array* event_parameters,
        bool has_related_activity_i_d
    )
    IL2CPP_REGISTER_METHOD(0x0175F9D0, void, TrimEventDescriptors, app::EventSource_EventMetadata__Array** event_data)
    IL2CPP_REGISTER_METHOD(0x0175FAE0, void, AddListener, app::EventSource* this_ptr, app::EventListener* listener)
    IL2CPP_REGISTER_METHOD(
        0x0175FDB0,
        void,
        DebugCheckEvent,
        app::Dictionary_2_System_String_System_String_** events_by_name,
        app::EventSource_EventMetadata__Array* event_data,
        app::MethodInfo_1* method_1,
        app::EventAttribute* event_attribute,
        app::ManifestBuilder* manifest,
        app::EventManifestOptions__Enum options
    )
    IL2CPP_REGISTER_METHOD(0x01760730, int32_t, GetHelperCallFirstArg, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x01760A00, void, ReportOutOfBandMessage, app::EventSource* this_ptr, app::String* msg, bool flush)
    IL2CPP_REGISTER_METHOD(0x01760B30, app::EventSourceSettings__Enum, ValidateSettings, app::EventSource* this_ptr, app::EventSourceSettings__Enum settings)
    IL2CPP_REGISTER_METHOD(0x01760C10, bool, get_ThrowOnEventWriteErrors, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01760C20, bool, get_SelfDescribingEvents, app::EventSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01760C30, void, ReportActivitySamplingInfo, app::EventSource* this_ptr, app::EventListener* listener, app::SessionMask sessions)
    IL2CPP_REGISTER_METHOD(0x017610A0, void, cctor, )
} // namespace app::classes::System::Diagnostics::Tracing::EventSource
