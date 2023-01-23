#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoAssemblyName__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoAssemblyName__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyName__Boxed_DEFINED)
#include <Modloader/app/structs/MonoAssemblyName.h>
#if defined(IL2CPP_STRUCT_MonoAssemblyName_DEFINED)
#define IL2CPP_STRUCT_MonoAssemblyName__Boxed_DEFINED
struct MonoAssemblyName__Class;
struct MonoAssemblyName__Boxed {
    struct MonoAssemblyName__Class* klass;
    MonitorData* monitor;
    struct MonoAssemblyName fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoAssemblyName__Boxed_FWDDECL)
#define IL2CPP_STRUCT_MonoAssemblyName__Boxed_FWDDECL
#include <Modloader/app/structs/MonoAssemblyName__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoAssemblyName__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyName__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_MonoAssemblyName__Boxed_FWDDECL)
#include <Modloader/app/structs/MonoAssemblyName__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoAssemblyName__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
