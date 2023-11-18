#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySendRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySendRequest__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest_DEFINED
struct MoonTelemetrySendRequest__Class;
struct MoonTelemetrySendRequest {
    struct MoonTelemetrySendRequest__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetrySendRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySendRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySendRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySendRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySendRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
