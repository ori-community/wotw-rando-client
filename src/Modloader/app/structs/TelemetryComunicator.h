#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryComunicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryComunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryComunicator_DEFINED)
#define IL2CPP_STRUCT_TelemetryComunicator_DEFINED
struct TelemetryComunicator__Class;
struct TelemetryComunicator {
    struct TelemetryComunicator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TelemetryComunicator_FWDDECL)
#define IL2CPP_STRUCT_TelemetryComunicator_FWDDECL
#include <Modloader/app/structs/TelemetryComunicator__Class.h>
#endif
#undef IL2CPP_STRUCT_TelemetryComunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryComunicator_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryComunicator_FWDDECL)
#include <Modloader/app/structs/TelemetryComunicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryComunicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
