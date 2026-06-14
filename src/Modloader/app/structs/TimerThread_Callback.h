#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerThread_Callback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerThread_Callback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Callback_DEFINED)
#include <Modloader/app/structs/TimerThread_Callback__Fields.h>
#if defined(IL2CPP_STRUCT_TimerThread_Callback__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerThread_Callback_DEFINED
struct TimerThread_Callback__Class;
struct TimerThread_Callback {
    struct TimerThread_Callback__Class* klass;
    MonitorData* monitor;
    struct TimerThread_Callback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerThread_Callback_FWDDECL)
#define IL2CPP_STRUCT_TimerThread_Callback_FWDDECL
#include <Modloader/app/structs/TimerThread_Callback__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerThread_Callback_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerThread_Callback_DEFINED) && !defined(IL2CPP_STRUCT_TimerThread_Callback_FWDDECL)
#include <Modloader/app/structs/TimerThread_Callback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerThread_Callback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
