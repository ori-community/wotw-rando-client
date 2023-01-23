#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Osub__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Osub__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Osub__Boxed_DEFINED)
#include <Modloader/app/structs/Osub.h>
#if defined(IL2CPP_STRUCT_Osub_DEFINED)
#define IL2CPP_STRUCT_Osub__Boxed_DEFINED
struct Osub__Class;
struct Osub__Boxed {
    struct Osub__Class* klass;
    MonitorData* monitor;
    struct Osub fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Osub__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Osub__Boxed_FWDDECL
#include <Modloader/app/structs/Osub__Class.h>
#endif
#undef IL2CPP_STRUCT_Osub__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Osub__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Osub__Boxed_FWDDECL)
#include <Modloader/app/structs/Osub__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Osub__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
