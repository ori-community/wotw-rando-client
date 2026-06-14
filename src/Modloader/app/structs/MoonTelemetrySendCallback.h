#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySendCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySendCallback__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySendCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback_DEFINED
struct MoonTelemetrySendCallback__Class;
struct MoonTelemetrySendCallback {
    struct MoonTelemetrySendCallback__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetrySendCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySendCallback_FWDDECL
#include <Modloader/app/structs/MoonTelemetrySendCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySendCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySendCallback_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySendCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySendCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
