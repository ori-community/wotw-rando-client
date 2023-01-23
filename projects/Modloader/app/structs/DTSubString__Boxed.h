#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DTSubString__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DTSubString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DTSubString__Boxed_DEFINED)
#include <Modloader/app/structs/DTSubString.h>
#if defined(IL2CPP_STRUCT_DTSubString_DEFINED)
#define IL2CPP_STRUCT_DTSubString__Boxed_DEFINED
struct DTSubString__Class;
struct DTSubString__Boxed {
    struct DTSubString__Class* klass;
    MonitorData* monitor;
    struct DTSubString fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DTSubString__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DTSubString__Boxed_FWDDECL
#include <Modloader/app/structs/DTSubString__Class.h>
#endif
#undef IL2CPP_STRUCT_DTSubString__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DTSubString__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DTSubString__Boxed_FWDDECL)
#include <Modloader/app/structs/DTSubString__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DTSubString__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
