#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Schedules_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Schedules_INITIALIZING
#if !defined(IL2CPP_STRUCT_Schedules_DEFINED)
#define IL2CPP_STRUCT_Schedules_DEFINED
struct Schedules__Class;
struct Schedules {
    struct Schedules__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Schedules_FWDDECL)
#define IL2CPP_STRUCT_Schedules_FWDDECL
#include <Modloader/app/structs/Schedules__Class.h>
#endif
#undef IL2CPP_STRUCT_Schedules_INITIALIZING
#if !defined(IL2CPP_STRUCT_Schedules_DEFINED) && !defined(IL2CPP_STRUCT_Schedules_FWDDECL)
#include <Modloader/app/structs/Schedules.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Schedules.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
