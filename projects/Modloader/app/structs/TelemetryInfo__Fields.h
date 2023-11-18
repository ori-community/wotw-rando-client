#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) TelemetryInfo__Fields {
    struct String* _ApplicationId_k__BackingField;
    struct String* _ApplicationVersion_k__BackingField;
    struct String* _OsName_k__BackingField;
    struct String* _OsVersion_k__BackingField;
    struct String* _OsLocale_k__BackingField;
    struct String* _DeviceClass_k__BackingField;
    struct String* _DeviceId_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_TelemetryInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_TelemetryInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TelemetryInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryInfo__Fields_FWDDECL)
#include <Modloader/app/structs/TelemetryInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
