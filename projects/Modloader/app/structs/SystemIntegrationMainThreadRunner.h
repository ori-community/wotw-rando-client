#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_DEFINED)
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Fields.h>
#if defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_DEFINED
struct SystemIntegrationMainThreadRunner__Class;
struct SystemIntegrationMainThreadRunner {
    struct SystemIntegrationMainThreadRunner__Class* klass;
    MonitorData* monitor;
    struct SystemIntegrationMainThreadRunner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_FWDDECL)
#define IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_FWDDECL
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Class.h>
#endif
#undef IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_DEFINED) && !defined(IL2CPP_STRUCT_SystemIntegrationMainThreadRunner_FWDDECL)
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
