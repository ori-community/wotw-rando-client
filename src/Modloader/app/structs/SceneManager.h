#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManager_DEFINED)
#define IL2CPP_STRUCT_SceneManager_DEFINED
struct SceneManager__Class;
struct SceneManager {
    struct SceneManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneManager_FWDDECL)
#define IL2CPP_STRUCT_SceneManager_FWDDECL
#include <Modloader/app/structs/SceneManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManager_DEFINED) && !defined(IL2CPP_STRUCT_SceneManager_FWDDECL)
#include <Modloader/app/structs/SceneManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
