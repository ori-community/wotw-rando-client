#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeOffset__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeOffset__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffset__Boxed_DEFINED)
#include <Modloader/app/structs/DateTimeOffset.h>
#if defined(IL2CPP_STRUCT_DateTimeOffset_DEFINED)
#define IL2CPP_STRUCT_DateTimeOffset__Boxed_DEFINED
struct DateTimeOffset__Class;
struct DateTimeOffset__Boxed {
    struct DateTimeOffset__Class* klass;
    MonitorData* monitor;
    struct DateTimeOffset fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeOffset__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DateTimeOffset__Boxed_FWDDECL
#include <Modloader/app/structs/DateTimeOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTimeOffset__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeOffset__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeOffset__Boxed_FWDDECL)
#include <Modloader/app/structs/DateTimeOffset__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeOffset__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
