#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo__StaticFields_DEFINED
struct TimeZoneInfo;
struct String;
struct RegistryKey;
struct ReadOnlyCollection_1_System_TimeZoneInfo_;
struct TimeZoneInfo__StaticFields {
    struct TimeZoneInfo* local;
    bool readlinkNotFound;
    struct TimeZoneInfo* utc;
    struct String* timeZoneDirectory;
    struct RegistryKey* timeZoneKey;
    struct RegistryKey* localZoneKey;
    struct ReadOnlyCollection_1_System_TimeZoneInfo_* systemTimeZones;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo__StaticFields_FWDDECL
#include <Modloader/app/structs/ReadOnlyCollection_1_System_TimeZoneInfo_.h>
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeZoneInfo.h>
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
