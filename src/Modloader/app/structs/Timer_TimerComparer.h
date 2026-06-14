#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_TimerComparer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_TimerComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_TimerComparer_DEFINED)
#define IL2CPP_STRUCT_Timer_TimerComparer_DEFINED
struct Timer_TimerComparer__Class;
struct Timer_TimerComparer {
    struct Timer_TimerComparer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Timer_TimerComparer_FWDDECL)
#define IL2CPP_STRUCT_Timer_TimerComparer_FWDDECL
#include <Modloader/app/structs/Timer_TimerComparer__Class.h>
#endif
#undef IL2CPP_STRUCT_Timer_TimerComparer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_TimerComparer_DEFINED) && !defined(IL2CPP_STRUCT_Timer_TimerComparer_FWDDECL)
#include <Modloader/app/structs/Timer_TimerComparer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer_TimerComparer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
