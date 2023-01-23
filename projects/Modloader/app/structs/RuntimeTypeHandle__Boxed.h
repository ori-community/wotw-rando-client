#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#if defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_DEFINED
struct RuntimeTypeHandle__Class;
struct RuntimeTypeHandle__Boxed {
    struct RuntimeTypeHandle__Class* klass;
    MonitorData* monitor;
    struct RuntimeTypeHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeTypeHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeTypeHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeTypeHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeTypeHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
