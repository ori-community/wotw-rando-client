#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer_2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_2_DEFINED)
#define IL2CPP_STRUCT_Timer_2_DEFINED
struct Timer_2__Class;
struct Timer_2 {
    struct Timer_2__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Timer_2_FWDDECL)
#define IL2CPP_STRUCT_Timer_2_FWDDECL
#include <Modloader/app/structs/Timer_2__Class.h>
#endif
#undef IL2CPP_STRUCT_Timer_2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer_2_DEFINED) && !defined(IL2CPP_STRUCT_Timer_2_FWDDECL)
#include <Modloader/app/structs/Timer_2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer_2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
