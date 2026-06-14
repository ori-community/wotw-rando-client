#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application_LowMemoryCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application_LowMemoryCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_LowMemoryCallback_DEFINED)
#include <Modloader/app/structs/Application_LowMemoryCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Application_LowMemoryCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Application_LowMemoryCallback_DEFINED
struct Application_LowMemoryCallback__Class;
struct Application_LowMemoryCallback {
    struct Application_LowMemoryCallback__Class* klass;
    MonitorData* monitor;
    struct Application_LowMemoryCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Application_LowMemoryCallback_FWDDECL)
#define IL2CPP_STRUCT_Application_LowMemoryCallback_FWDDECL
#include <Modloader/app/structs/Application_LowMemoryCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Application_LowMemoryCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_LowMemoryCallback_DEFINED) && !defined(IL2CPP_STRUCT_Application_LowMemoryCallback_FWDDECL)
#include <Modloader/app/structs/Application_LowMemoryCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application_LowMemoryCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
