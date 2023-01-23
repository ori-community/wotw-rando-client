#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo__Fields_DEFINED
struct String;
struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_;
struct TimeZoneInfo_AdjustmentRule__Array;
struct __declspec(align(8)) TimeZoneInfo__Fields {
    struct TimeSpan baseUtcOffset;
    struct String* daylightDisplayName;
    struct String* displayName;
    struct String* id;
    struct List_1_KeyValuePair_2_System_DateTime_System_TimeType_* transitions;
    struct String* standardDisplayName;
    bool supportsDaylightSavingTime;
    struct TimeZoneInfo_AdjustmentRule__Array* adjustmentRules;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo__Fields_FWDDECL
#include <Modloader/app/structs/List_1_KeyValuePair_2_System_DateTime_System_TimeType_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Array.h>
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
