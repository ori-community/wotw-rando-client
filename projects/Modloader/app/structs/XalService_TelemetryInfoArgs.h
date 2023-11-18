#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_TelemetryInfoArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_TelemetryInfoArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_TelemetryInfoArgs_DEFINED)
#define IL2CPP_STRUCT_XalService_TelemetryInfoArgs_DEFINED
struct String;
struct XalService_TelemetryInfoArgs {
    struct String* ApplicationId;
    struct String* ApplicationVersion;
    struct String* OsName;
    struct String* OsVersion;
    struct String* OsLocale;
    struct String* DeviceClass;
    struct String* DeviceId;
};
#endif
#if !defined(IL2CPP_STRUCT_XalService_TelemetryInfoArgs_FWDDECL)
#define IL2CPP_STRUCT_XalService_TelemetryInfoArgs_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XalService_TelemetryInfoArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_TelemetryInfoArgs_DEFINED) && !defined(IL2CPP_STRUCT_XalService_TelemetryInfoArgs_FWDDECL)
#include <Modloader/app/structs/XalService_TelemetryInfoArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_TelemetryInfoArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
