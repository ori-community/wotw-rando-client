#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Quaternion__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Quaternion__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quaternion__Boxed_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_Quaternion__Boxed_DEFINED
struct Quaternion__Class;
struct Quaternion__Boxed {
    struct Quaternion__Class* klass;
    MonitorData* monitor;
    struct Quaternion fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Quaternion__Boxed_FWDDECL)
#define IL2CPP_STRUCT_Quaternion__Boxed_FWDDECL
#include <Modloader/app/structs/Quaternion__Class.h>
#endif
#undef IL2CPP_STRUCT_Quaternion__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_Quaternion__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_Quaternion__Boxed_FWDDECL)
#include <Modloader/app/structs/Quaternion__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Quaternion__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
