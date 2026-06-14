#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityEngineModuleAssembly_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityEngineModuleAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEngineModuleAssembly_DEFINED)
#define IL2CPP_STRUCT_UnityEngineModuleAssembly_DEFINED
struct UnityEngineModuleAssembly__Class;
struct UnityEngineModuleAssembly {
    struct UnityEngineModuleAssembly__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityEngineModuleAssembly_FWDDECL)
#define IL2CPP_STRUCT_UnityEngineModuleAssembly_FWDDECL
#include <Modloader/app/structs/UnityEngineModuleAssembly__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityEngineModuleAssembly_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityEngineModuleAssembly_DEFINED) && !defined(IL2CPP_STRUCT_UnityEngineModuleAssembly_FWDDECL)
#include <Modloader/app/structs/UnityEngineModuleAssembly.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityEngineModuleAssembly.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
