#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application_LogCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application_LogCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_LogCallback_DEFINED)
#include <Modloader/app/structs/Application_LogCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Application_LogCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Application_LogCallback_DEFINED
struct Application_LogCallback__Class;
struct Application_LogCallback {
    struct Application_LogCallback__Class* klass;
    MonitorData* monitor;
    struct Application_LogCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Application_LogCallback_FWDDECL)
#define IL2CPP_STRUCT_Application_LogCallback_FWDDECL
#include <Modloader/app/structs/Application_LogCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Application_LogCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_LogCallback_DEFINED) && !defined(IL2CPP_STRUCT_Application_LogCallback_FWDDECL)
#include <Modloader/app/structs/Application_LogCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application_LogCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
