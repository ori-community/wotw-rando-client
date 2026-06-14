#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringContext__Boxed_DEFINED)
#include <Modloader/app/structs/SpringContext.h>
#if defined(IL2CPP_STRUCT_SpringContext_DEFINED)
#define IL2CPP_STRUCT_SpringContext__Boxed_DEFINED
struct SpringContext__Class;
struct SpringContext__Boxed {
    struct SpringContext__Class* klass;
    MonitorData* monitor;
    struct SpringContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SpringContext__Boxed_FWDDECL
#include <Modloader/app/structs/SpringContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SpringContext__Boxed_FWDDECL)
#include <Modloader/app/structs/SpringContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
