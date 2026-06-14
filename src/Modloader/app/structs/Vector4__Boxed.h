#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vector4__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vector4__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4__Boxed_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_Vector4__Boxed_DEFINED
struct Vector4__Class;
struct Vector4__Boxed {
    struct Vector4__Class* klass;
    MonitorData* monitor;
    struct Vector4 fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vector4__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Vector4__Boxed_FWDDECL
#include <Modloader/app/structs/Vector4__Class.h>
#endif
#undef IL2CPP_STRUCT_Vector4__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vector4__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Vector4__Boxed_FWDDECL)
#include <Modloader/app/structs/Vector4__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vector4__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
