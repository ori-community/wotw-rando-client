#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_DEFINED
struct String;
struct Byte__Array;
struct MoonTelemetrySendRequest__Fields {
    struct MoonTelemetryRequest_1_MoonTelemetrySendCallback___Fields _;
    struct String* PATH;
    struct Byte__Array* m_events;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySendRequest__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySendRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySendRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
