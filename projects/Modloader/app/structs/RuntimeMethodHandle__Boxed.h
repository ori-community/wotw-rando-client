#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeMethodHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeMethodHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_DEFINED
struct RuntimeMethodHandle__Class;
struct RuntimeMethodHandle__Boxed {
    struct RuntimeMethodHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeMethodHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeMethodHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeMethodHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeMethodHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeMethodHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
