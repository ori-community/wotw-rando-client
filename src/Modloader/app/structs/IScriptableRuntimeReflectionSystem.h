#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_DEFINED)
#define IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_DEFINED
struct IScriptableRuntimeReflectionSystem__Class;
struct IScriptableRuntimeReflectionSystem {
    struct IScriptableRuntimeReflectionSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_FWDDECL)
#define IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_FWDDECL
#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_DEFINED) && !defined(IL2CPP_STRUCT_IScriptableRuntimeReflectionSystem_FWDDECL)
#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScriptableRuntimeReflectionSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
