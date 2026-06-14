#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTime__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTime__Boxed_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_DateTime__Boxed_DEFINED
struct DateTime__Class;
struct DateTime__Boxed {
    struct DateTime__Class* klass;
    MonitorData* monitor;
    struct DateTime fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTime__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DateTime__Boxed_FWDDECL
#include <Modloader/app/structs/DateTime__Class.h>
#endif
#undef IL2CPP_STRUCT_DateTime__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTime__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DateTime__Boxed_FWDDECL)
#include <Modloader/app/structs/DateTime__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTime__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
