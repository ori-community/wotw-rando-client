#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_DEFINED)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_DEFINED
struct RuntimeStructs_MonoClassPtr__Class;
struct RuntimeStructs_MonoClassPtr {
    struct RuntimeStructs_MonoClassPtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_FWDDECL)
#define IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_FWDDECL
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtr__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeStructs_MonoClassPtr_FWDDECL)
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeStructs_MonoClassPtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
