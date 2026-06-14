#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_DEFINED)
#include <Modloader/app/structs/Timer__Fields.h>
#if defined(IL2CPP_STRUCT_Timer__Fields_DEFINED)
#define IL2CPP_STRUCT_Timer_DEFINED
struct Timer__Class;
struct Timer {
    struct Timer__Class* klass;
    MonitorData* monitor;
    struct Timer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Timer_FWDDECL)
#define IL2CPP_STRUCT_Timer_FWDDECL
#include <Modloader/app/structs/Timer__Class.h>
#endif
#undef IL2CPP_STRUCT_Timer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_DEFINED) && !defined(IL2CPP_STRUCT_Timer_FWDDECL)
#include <Modloader/app/structs/Timer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
