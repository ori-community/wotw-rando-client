#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeStructs_MonoError.h>
#if defined(IL2CPP_STRUCT_RuntimeStructs_MonoError_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_DEFINED
struct RuntimeStructs_MonoError__Class;
struct RuntimeStructs_MonoError__Boxed {
    struct RuntimeStructs_MonoError__Class* klass;
    MonitorData* monitor;
    struct RuntimeStructs_MonoError fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoError__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_MonoError__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_MonoError__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_MonoError__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
