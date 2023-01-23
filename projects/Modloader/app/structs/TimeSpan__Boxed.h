#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpan__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpan__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan__Boxed_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_TimeSpan__Boxed_DEFINED
struct TimeSpan__Class;
struct TimeSpan__Boxed {
    struct TimeSpan__Class* klass;
    MonitorData* monitor;
    struct TimeSpan fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpan__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TimeSpan__Boxed_FWDDECL
#include <Modloader/app/structs/TimeSpan__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSpan__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpan__Boxed_FWDDECL)
#include <Modloader/app/structs/TimeSpan__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpan__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
