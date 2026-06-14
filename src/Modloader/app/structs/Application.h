#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_DEFINED)
#define IL2CPP_STRUCT_Application_DEFINED
struct Application__Class;
struct Application {
    struct Application__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Application_FWDDECL)
#define IL2CPP_STRUCT_Application_FWDDECL
#include <Modloader/app/structs/Application__Class.h>
#endif
#undef IL2CPP_STRUCT_Application_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_DEFINED) && !defined(IL2CPP_STRUCT_Application_FWDDECL)
#include <Modloader/app/structs/Application.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
