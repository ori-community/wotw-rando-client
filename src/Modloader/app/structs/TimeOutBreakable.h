#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeOutBreakable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeOutBreakable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeOutBreakable_DEFINED)
#include <Modloader/app/structs/TimeOutBreakable__Fields.h>
#if defined(IL2CPP_STRUCT_TimeOutBreakable__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeOutBreakable_DEFINED
struct TimeOutBreakable__Class;
struct TimeOutBreakable {
    struct TimeOutBreakable__Class* klass;
    MonitorData* monitor;
    struct TimeOutBreakable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeOutBreakable_FWDDECL)
#define IL2CPP_STRUCT_TimeOutBreakable_FWDDECL
#include <Modloader/app/structs/TimeOutBreakable__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeOutBreakable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeOutBreakable_DEFINED) && !defined(IL2CPP_STRUCT_TimeOutBreakable_FWDDECL)
#include <Modloader/app/structs/TimeOutBreakable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeOutBreakable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
