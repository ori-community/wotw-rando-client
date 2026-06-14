#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCallback__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_DEFINED
struct String;
struct MoonTelemetrySendCallback__Fields {
    struct MoonTelemetryCallback__Fields _;
    struct String* Status;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySendCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySendCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
