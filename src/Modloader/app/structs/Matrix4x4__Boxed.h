#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Matrix4x4__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Matrix4x4__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4__Boxed_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#if defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_Matrix4x4__Boxed_DEFINED
struct Matrix4x4__Class;
struct Matrix4x4__Boxed {
    struct Matrix4x4__Class* klass;
    MonitorData* monitor;
    struct Matrix4x4 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Matrix4x4__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Matrix4x4__Boxed_FWDDECL
#include <Modloader/app/structs/Matrix4x4__Class.h>
#endif
#undef IL2CPP_STRUCT_Matrix4x4__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Matrix4x4__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Matrix4x4__Boxed_FWDDECL)
#include <Modloader/app/structs/Matrix4x4__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Matrix4x4__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
