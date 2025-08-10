#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeKind__Enum.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_TimeType_.h>
#include <Modloader/app/structs/Int64__Array.h>
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_DateTime_System_TimeType_.h>
#include <Modloader/app/structs/List_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/List_1_System_TimeZoneInfo_AdjustmentRule_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeZoneInfo.h>
#include <Modloader/app/structs/TimeZoneInfoOptions__Enum.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Array.h>
#include <Modloader/app/structs/TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION.h>
#include <Modloader/app/structs/TimeZoneInfo_TIME_ZONE_INFORMATION.h>
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>

namespace app::classes::System::TimeZoneInfo {
    IL2CPP_REGISTER_METHOD(0x027AE7B0, bool, UtcOffsetOutOfRange, app::TimeSpan offset)
    IL2CPP_REGISTER_METHOD(
        0x027AE7E0,
        app::List_1_System_TimeZoneInfo_AdjustmentRule_*,
        CreateAdjustmentRule,
        int32_t year,
        app::Int64__Array** data,
        app::String__Array** names,
        app::String* standard_name_current_year,
        app::String* daylight_name_current_year
    )
    IL2CPP_REGISTER_METHOD(0x027AED10, app::TimeZoneInfo*, CreateLocalUnity, )
    IL2CPP_REGISTER_METHOD(
        0x027AEE70,
        uint32_t,
        EnumDynamicTimeZoneInformation,
        uint32_t dw_index,
        app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* lp_time_zone_information
    )
    IL2CPP_REGISTER_METHOD(0x027AEFA0, uint32_t, GetDynamicTimeZoneInformation, app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* p_time_zone_information)
    IL2CPP_REGISTER_METHOD(0x027AF0C0, uint32_t, GetDynamicTimeZoneInformationWin32, app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* p_time_zone_information)
    IL2CPP_REGISTER_METHOD(
        0x027AF1E0,
        uint32_t,
        GetDynamicTimeZoneInformationEffectiveYears,
        app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* lp_time_zone_information,
        uint32_t* first_year,
        uint32_t* last_year
    )
    IL2CPP_REGISTER_METHOD(
        0x027AF330,
        bool,
        GetTimeZoneInformationForYear,
        uint16_t w_year,
        app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* pdtzi,
        app::TimeZoneInfo_TIME_ZONE_INFORMATION* ptzi
    )
    IL2CPP_REGISTER_METHOD(
        0x027AF510,
        app::TimeZoneInfo_AdjustmentRule*,
        CreateAdjustmentRuleFromTimeZoneInformation,
        app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION* time_zone_information,
        app::DateTime start_date,
        app::DateTime end_date,
        int32_t default_base_utc_offset
    )
    IL2CPP_REGISTER_METHOD(
        0x027AFAA0,
        bool,
        TransitionTimeFromTimeZoneInformation,
        app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION time_zone_information,
        app::TimeZoneInfo_TransitionTime* transition_time,
        bool read_start_date
    )
    IL2CPP_REGISTER_METHOD(0x027AFC90, app::TimeZoneInfo*, TryCreateTimeZone, app::TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION time_zone_information)
    IL2CPP_REGISTER_METHOD(0x027B04A0, app::TimeZoneInfo*, GetLocalTimeZoneInfoWinRTFallback, )
    IL2CPP_REGISTER_METHOD(0x027B0670, app::String*, GetLocalTimeZoneKeyNameWin32Fallback, )
    IL2CPP_REGISTER_METHOD(0x027B0800, app::TimeZoneInfo*, FindSystemTimeZoneByIdWinRTFallback, app::String* id)
    IL2CPP_REGISTER_METHOD(0x027B0B10, app::List_1_System_TimeZoneInfo_*, GetSystemTimeZonesWinRTFallback, )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::TimeSpan, get_BaseUtcOffset, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_DisplayName, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Id, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027B0E20, app::TimeZoneInfo*, get_Local, )
    IL2CPP_REGISTER_METHOD(0x027B0F10, int32_t, readlink_1, app::String* path, app::Byte__Array* buffer, int32_t buflen)
    IL2CPP_REGISTER_METHOD(0x027B10B0, app::String*, readlink_2, app::String* path)
    IL2CPP_REGISTER_METHOD(0x027B1360, bool, TryGetNameFromPath, app::String* path, app::String** name)
    IL2CPP_REGISTER_METHOD(0x027B1600, app::TimeZoneInfo*, CreateLocal, )
    IL2CPP_REGISTER_METHOD(0x027B1B80, app::TimeZoneInfo*, FindSystemTimeZoneByIdCore, app::String* id)
    IL2CPP_REGISTER_METHOD(0x027B1C40, void, GetSystemTimeZonesCore, app::List_1_System_TimeZoneInfo_* system_time_zones)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_SupportsDaylightSavingTime, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027B2790, app::TimeZoneInfo*, get_Utc, )
    IL2CPP_REGISTER_METHOD(0x027B2860, app::String*, get_TimeZoneDirectory, )
    IL2CPP_REGISTER_METHOD(0x027B2910, bool, get_IsWindows, )
    IL2CPP_REGISTER_METHOD(0x027B2950, app::String*, TrimSpecial, app::String* str)
    IL2CPP_REGISTER_METHOD(0x027B2AB0, app::RegistryKey*, get_TimeZoneKey, )
    IL2CPP_REGISTER_METHOD(0x027B2BF0, app::RegistryKey*, get_LocalZoneKey, )
    IL2CPP_REGISTER_METHOD(0x027B2D30, bool, TryAddTicks, app::DateTime date, int64_t ticks, app::DateTime* result, app::DateTimeKind__Enum kind)
    IL2CPP_REGISTER_METHOD(
        0x027B2EF0,
        app::DateTime,
        ConvertTime,
        app::DateTime date_time,
        app::TimeZoneInfo* source_time_zone,
        app::TimeZoneInfo* destination_time_zone
    )
    IL2CPP_REGISTER_METHOD(0x027B31F0, app::DateTime, ConvertTimeFromUtc_1, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B33D0, app::DateTime, ConvertTimeFromUtc_2, app::DateTime date_time, app::TimeZoneInfo* destination_time_zone)
    IL2CPP_REGISTER_METHOD(0x027B3490, app::DateTime, ConvertTimeToUtc_1, app::DateTime date_time, app::TimeZoneInfoOptions__Enum flags)
    IL2CPP_REGISTER_METHOD(0x027B34D0, app::DateTime, ConvertTimeToUtc_2, app::DateTime date_time, app::TimeZoneInfo* source_time_zone)
    IL2CPP_REGISTER_METHOD(
        0x027B34E0,
        app::DateTime,
        ConvertTimeToUtc_3,
        app::DateTime date_time,
        app::TimeZoneInfo* source_time_zone,
        app::TimeZoneInfoOptions__Enum flags
    )
    IL2CPP_REGISTER_METHOD(0x027B3710, app::TimeSpan, GetDateTimeNowUtcOffsetFromUtc, app::DateTime time, bool* is_ambiguous_local_dst)
    IL2CPP_REGISTER_METHOD(
        0x027B3780,
        app::TimeZoneInfo*,
        CreateCustomTimeZone_1,
        app::String* id,
        app::TimeSpan base_utc_offset,
        app::String* display_name,
        app::String* standard_display_name
    )
    IL2CPP_REGISTER_METHOD(
        0x027B37B0,
        app::TimeZoneInfo*,
        CreateCustomTimeZone_2,
        app::String* id,
        app::TimeSpan base_utc_offset,
        app::String* display_name,
        app::String* standard_display_name,
        app::String* daylight_display_name,
        app::TimeZoneInfo_AdjustmentRule__Array* adjustment_rules
    )
    IL2CPP_REGISTER_METHOD(
        0x027B37E0,
        app::TimeZoneInfo*,
        CreateCustomTimeZone_3,
        app::String* id,
        app::TimeSpan base_utc_offset,
        app::String* display_name,
        app::String* standard_display_name,
        app::String* daylight_display_name,
        app::TimeZoneInfo_AdjustmentRule__Array* adjustment_rules,
        bool disable_daylight_saving_time
    )
    IL2CPP_REGISTER_METHOD(0x027B3980, bool, Equals_1, app::TimeZoneInfo* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x027B3A70, bool, Equals_2, app::TimeZoneInfo* this_ptr, app::TimeZoneInfo* other)
    IL2CPP_REGISTER_METHOD(0x027B3AE0, app::TimeZoneInfo*, FindSystemTimeZoneById, app::String* id)
    IL2CPP_REGISTER_METHOD(0x027B3D60, app::TimeZoneInfo*, FindSystemTimeZoneByFileName, app::String* id, app::String* filepath)
    IL2CPP_REGISTER_METHOD(0x027B3EF0, app::TimeZoneInfo*, FromRegistryKey, app::String* id, app::RegistryKey* key)
    IL2CPP_REGISTER_METHOD(
        0x027B43B0,
        void,
        ParseRegTzi,
        app::List_1_System_TimeZoneInfo_AdjustmentRule_* adjustment_rules,
        int32_t start_year,
        int32_t end_year,
        app::Byte__Array* buffer
    )
    IL2CPP_REGISTER_METHOD(0x027B4780, app::TimeZoneInfo_AdjustmentRule__Array*, GetAdjustmentRules, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027B48E0, int32_t, GetHashCode, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x027B4AD0,
        void,
        ISerializable_GetObjectData,
        app::TimeZoneInfo* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x027B4C40, app::ReadOnlyCollection_1_System_TimeZoneInfo_*, GetSystemTimeZones, )
    IL2CPP_REGISTER_METHOD(0x027B4EB0, app::TimeSpan, GetUtcOffset_1, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B4ED0, app::TimeSpan, GetUtcOffset_2, app::TimeZoneInfo* this_ptr, app::DateTime date_time, bool* is_d_s_t)
    IL2CPP_REGISTER_METHOD(0x027B4FD0, app::TimeSpan, GetUtcOffsetHelper, app::DateTime date_time, app::TimeZoneInfo* tz, bool* is_d_s_t)
    IL2CPP_REGISTER_METHOD(0x027B52D0, bool, HasSameRules, app::TimeZoneInfo* this_ptr, app::TimeZoneInfo* other)
    IL2CPP_REGISTER_METHOD(0x027B56A0, bool, IsAmbiguousTime, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B58E0, bool, IsInDST, app::TimeZoneInfo* this_ptr, app::TimeZoneInfo_AdjustmentRule* rule, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(
        0x027B59A0,
        bool,
        IsInDSTForYear,
        app::TimeZoneInfo* this_ptr,
        app::TimeZoneInfo_AdjustmentRule* rule,
        app::DateTime date_time,
        int32_t year
    )
    IL2CPP_REGISTER_METHOD(0x027B5BD0, bool, IsDaylightSavingTime_1, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B5BD0, bool, IsDaylightSavingTime_2, app::TimeZoneInfo* this_ptr, app::DateTime date_time, app::TimeZoneInfoOptions__Enum flags)
    IL2CPP_REGISTER_METHOD(0x027B5CF0, bool, IsInvalidTime, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B5EA0, void, IDeserializationCallback_OnDeserialization, app::TimeZoneInfo* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(
        0x027B5F70,
        void,
        Validate,
        app::String* id,
        app::TimeSpan base_utc_offset,
        app::TimeZoneInfo_AdjustmentRule__Array* adjustment_rules
    )
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, ToString, app::TimeZoneInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027B64C0, void, ctor_1, app::TimeZoneInfo* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x027B6800,
        void,
        ctor_2,
        app::TimeZoneInfo* this_ptr,
        app::String* id,
        app::TimeSpan base_utc_offset,
        app::String* display_name,
        app::String* standard_display_name,
        app::String* daylight_display_name,
        app::TimeZoneInfo_AdjustmentRule__Array* adjustment_rules,
        bool disable_daylight_saving_time
    )
    IL2CPP_REGISTER_METHOD(0x027B6DE0, app::TimeZoneInfo_AdjustmentRule*, GetApplicableRule, app::TimeZoneInfo* this_ptr, app::DateTime date_time)
    IL2CPP_REGISTER_METHOD(0x027B7010, bool, TryGetTransitionOffset, app::TimeZoneInfo* this_ptr, app::DateTime date_time, app::TimeSpan* offset, bool* is_dst)
    IL2CPP_REGISTER_METHOD(0x027B72E0, app::DateTime, TransitionPoint, app::TimeZoneInfo_TransitionTime transition, int32_t year)
    IL2CPP_REGISTER_METHOD(
        0x027B74E0,
        app::TimeZoneInfo_AdjustmentRule__Array*,
        ValidateRules,
        app::List_1_System_TimeZoneInfo_AdjustmentRule_* adjustment_rules
    )
    IL2CPP_REGISTER_METHOD(0x027B7670, app::TimeZoneInfo*, BuildFromStream, app::String* id, app::Stream* stream)
    IL2CPP_REGISTER_METHOD(0x027B77F0, bool, ValidTZFile, app::Byte__Array* buffer, int32_t length)
    IL2CPP_REGISTER_METHOD(0x027B7B70, int32_t, SwapInt32, int32_t i)
    IL2CPP_REGISTER_METHOD(0x027B7BA0, int32_t, ReadBigEndianInt32, app::Byte__Array* buffer, int32_t start)
    IL2CPP_REGISTER_METHOD(0x027B7C90, app::TimeZoneInfo*, ParseTZBuffer, app::String* id, app::Byte__Array* buffer, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x027B8850,
        app::Dictionary_2_System_Int32_System_String_*,
        ParseAbbreviations,
        app::Byte__Array* buffer,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x027B8C60,
        app::Dictionary_2_System_Int32_System_TimeType_*,
        ParseTimesTypes,
        app::Byte__Array* buffer,
        int32_t index,
        int32_t count,
        app::Dictionary_2_System_Int32_System_String_* abbreviations
    )
    IL2CPP_REGISTER_METHOD(
        0x027B9010,
        app::List_1_KeyValuePair_2_System_DateTime_System_TimeType_*,
        ParseTransitions,
        app::Byte__Array* buffer,
        int32_t index,
        int32_t count,
        app::Dictionary_2_System_Int32_System_TimeType_* time_types
    )
    IL2CPP_REGISTER_METHOD(0x027B9440, app::DateTime, DateTimeFromUnixTime, int64_t unix_time)
    IL2CPP_REGISTER_METHOD(0x027B9510, app::TimeSpan, GetLocalUtcOffset, app::DateTime date_time, app::TimeZoneInfoOptions__Enum flags)
    IL2CPP_REGISTER_METHOD(
        0x027B4EB0,
        app::TimeSpan,
        GetUtcOffset_3,
        app::TimeZoneInfo* this_ptr,
        app::DateTime date_time,
        app::TimeZoneInfoOptions__Enum flags
    )
    IL2CPP_REGISTER_METHOD(
        0x027B9550,
        app::TimeSpan,
        GetUtcOffsetFromUtc,
        app::DateTime time,
        app::TimeZoneInfo* zone,
        bool* is_daylight_savings,
        bool* is_ambiguous_local_dst
    )
    IL2CPP_REGISTER_METHOD(0x027B95C0, void, ctor_3, app::TimeZoneInfo* this_ptr)
} // namespace app::classes::System::TimeZoneInfo
