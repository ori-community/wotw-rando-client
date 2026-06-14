#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppContextSwitches_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppContextSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppContextSwitches_DEFINED)
#define IL2CPP_STRUCT_AppContextSwitches_DEFINED
struct AppContextSwitches__Class;
struct AppContextSwitches {
    struct AppContextSwitches__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AppContextSwitches_FWDDECL)
#define IL2CPP_STRUCT_AppContextSwitches_FWDDECL
#include <Modloader/app/structs/AppContextSwitches__Class.h>
#endif
#undef IL2CPP_STRUCT_AppContextSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppContextSwitches_DEFINED) && !defined(IL2CPP_STRUCT_AppContextSwitches_FWDDECL)
#include <Modloader/app/structs/AppContextSwitches.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppContextSwitches.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
