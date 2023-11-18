#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_DEFINED)
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_DEFINED
struct String;
struct MoonTelemetryClientBaseEvent__StaticFields {
    struct Guid SESSION_ID;
    struct String* CachedUserID;
    struct String* CachedClientHardwareID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryClientBaseEvent__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
