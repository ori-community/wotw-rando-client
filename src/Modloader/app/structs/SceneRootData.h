#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneRootData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneRootData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRootData_DEFINED)
#include <Modloader/app/structs/SceneRootData__Fields.h>
#if defined(IL2CPP_STRUCT_SceneRootData__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneRootData_DEFINED
struct SceneRootData__Class;
struct SceneRootData {
    struct SceneRootData__Class* klass;
    MonitorData* monitor;
    struct SceneRootData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneRootData_FWDDECL)
#define IL2CPP_STRUCT_SceneRootData_FWDDECL
#include <Modloader/app/structs/SceneRootData__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneRootData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRootData_DEFINED) && !defined(IL2CPP_STRUCT_SceneRootData_FWDDECL)
#include <Modloader/app/structs/SceneRootData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneRootData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
