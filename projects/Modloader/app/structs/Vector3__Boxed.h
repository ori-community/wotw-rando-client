#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector3__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector3__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3__Boxed_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Vector3__Boxed_DEFINED
struct Vector3__Class;
struct Vector3__Boxed {
    struct Vector3__Class* klass;
    MonitorData* monitor;
    struct Vector3 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector3__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Vector3__Boxed_FWDDECL
#include <Modloader/app/structs/Vector3__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector3__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector3__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Vector3__Boxed_FWDDECL)
#include <Modloader/app/structs/Vector3__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector3__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
