#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadLoadingDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_DEFINED)
#include <Modloader/app/structs/MainThreadLoadingDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_DEFINED
struct MainThreadLoadingDebugger__Class;
struct MainThreadLoadingDebugger {
    struct MainThreadLoadingDebugger__Class* klass;
    MonitorData* monitor;
    struct MainThreadLoadingDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_FWDDECL)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger_FWDDECL
#include <Modloader/app/structs/MainThreadLoadingDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadLoadingDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger_FWDDECL)
#include <Modloader/app/structs/MainThreadLoadingDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadLoadingDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
