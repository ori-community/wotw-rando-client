#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimePropertyHandle.h>
#if defined(IL2CPP_STRUCT_RuntimePropertyHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_DEFINED
struct RuntimePropertyHandle__Class;
struct RuntimePropertyHandle__Boxed {
    struct RuntimePropertyHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimePropertyHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimePropertyHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimePropertyHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimePropertyHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimePropertyHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
