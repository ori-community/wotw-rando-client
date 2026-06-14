#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTransition_DEFINED)
#include <Modloader/app/structs/TimerTransition__Fields.h>
#if defined(IL2CPP_STRUCT_TimerTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerTransition_DEFINED
struct TimerTransition__Class;
struct TimerTransition {
    struct TimerTransition__Class* klass;
    MonitorData* monitor;
    struct TimerTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerTransition_FWDDECL)
#define IL2CPP_STRUCT_TimerTransition_FWDDECL
#include <Modloader/app/structs/TimerTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTransition_DEFINED) && !defined(IL2CPP_STRUCT_TimerTransition_FWDDECL)
#include <Modloader/app/structs/TimerTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
