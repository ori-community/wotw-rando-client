#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryCommunicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator_DEFINED
struct MoonTelemetryCommunicator__Class;
struct MoonTelemetryCommunicator {
    struct MoonTelemetryCommunicator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryCommunicator_FWDDECL
#include <Modloader/app/structs/MoonTelemetryCommunicator__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryCommunicator_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryCommunicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryCommunicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
