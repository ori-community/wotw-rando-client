#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoAssemblyNamePtr_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoAssemblyNamePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyNamePtr_DEFINED)
#define IL2CPP_STRUCT_MonoAssemblyNamePtr_DEFINED
struct MonoAssemblyNamePtr__Class;
struct MonoAssemblyNamePtr {
    struct MonoAssemblyNamePtr__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoAssemblyNamePtr_FWDDECL)
#define IL2CPP_STRUCT_MonoAssemblyNamePtr_FWDDECL
#include <Modloader/app/structs/MonoAssemblyNamePtr__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoAssemblyNamePtr_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoAssemblyNamePtr_DEFINED) && !defined(IL2CPP_STRUCT_MonoAssemblyNamePtr_FWDDECL)
#include <Modloader/app/structs/MonoAssemblyNamePtr.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoAssemblyNamePtr.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
