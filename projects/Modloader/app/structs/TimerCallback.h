#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerCallback_DEFINED)
#include <Modloader/app/structs/TimerCallback__Fields.h>
#if defined(IL2CPP_STRUCT_TimerCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerCallback_DEFINED
struct TimerCallback__Class;
struct TimerCallback {
    struct TimerCallback__Class* klass;
    MonitorData* monitor;
    struct TimerCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerCallback_FWDDECL)
#define IL2CPP_STRUCT_TimerCallback_FWDDECL
#include <Modloader/app/structs/TimerCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerCallback_DEFINED) && !defined(IL2CPP_STRUCT_TimerCallback_FWDDECL)
#include <Modloader/app/structs/TimerCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
