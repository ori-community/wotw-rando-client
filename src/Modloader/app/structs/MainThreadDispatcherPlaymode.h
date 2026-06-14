#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadDispatcherPlaymode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode_DEFINED)
#include <Modloader/app/structs/MainThreadDispatcherPlaymode__Fields.h>
#if defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode_DEFINED
struct MainThreadDispatcherPlaymode__Class;
struct MainThreadDispatcherPlaymode {
    struct MainThreadDispatcherPlaymode__Class* klass;
    MonitorData* monitor;
    struct MainThreadDispatcherPlaymode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode_FWDDECL)
#define IL2CPP_STRUCT_MainThreadDispatcherPlaymode_FWDDECL
#include <Modloader/app/structs/MainThreadDispatcherPlaymode__Class.h>
#endif
#undef IL2CPP_STRUCT_MainThreadDispatcherPlaymode_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadDispatcherPlaymode_FWDDECL)
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadDispatcherPlaymode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
