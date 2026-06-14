#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_DEFINED)
#include <Modloader/app/structs/RuntimeStructs_MonoClass.h>
#if defined(IL2CPP_STRUCT_RuntimeStructs_MonoClass_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_DEFINED
struct RuntimeStructs_MonoClass__Class;
struct RuntimeStructs_MonoClass__Boxed {
    struct RuntimeStructs_MonoClass__Class* klass;
    MonitorData* monitor;
    struct RuntimeStructs_MonoClass fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClass__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClass__Boxed_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_MonoClass__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_MonoClass__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
