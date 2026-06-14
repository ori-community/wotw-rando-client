#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneWarningManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneWarningManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarningManager_DEFINED)
#define IL2CPP_STRUCT_SceneWarningManager_DEFINED
struct SceneWarningManager__Class;
struct SceneWarningManager {
    struct SceneWarningManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneWarningManager_FWDDECL)
#define IL2CPP_STRUCT_SceneWarningManager_FWDDECL
#include <Modloader/app/structs/SceneWarningManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneWarningManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneWarningManager_DEFINED) && !defined(IL2CPP_STRUCT_SceneWarningManager_FWDDECL)
#include <Modloader/app/structs/SceneWarningManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneWarningManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
