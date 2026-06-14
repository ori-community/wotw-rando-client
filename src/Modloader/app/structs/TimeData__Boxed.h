#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeData__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeData__Boxed_DEFINED)
#include <Modloader/app/structs/TimeData.h>
#if defined(IL2CPP_STRUCT_TimeData_DEFINED)
#define IL2CPP_STRUCT_TimeData__Boxed_DEFINED
struct TimeData__Class;
struct TimeData__Boxed {
    struct TimeData__Class* klass;
    MonitorData* monitor;
    struct TimeData fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeData__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TimeData__Boxed_FWDDECL
#include <Modloader/app/structs/TimeData__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeData__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeData__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TimeData__Boxed_FWDDECL)
#include <Modloader/app/structs/TimeData__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeData__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
