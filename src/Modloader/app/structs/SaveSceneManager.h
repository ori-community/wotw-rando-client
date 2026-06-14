#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSceneManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSceneManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSceneManager_DEFINED)
#define IL2CPP_STRUCT_SaveSceneManager_DEFINED
struct SaveSceneManager__Class;
struct SaveSceneManager {
    struct SaveSceneManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSceneManager_FWDDECL)
#define IL2CPP_STRUCT_SaveSceneManager_FWDDECL
#include <Modloader/app/structs/SaveSceneManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSceneManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSceneManager_DEFINED) && !defined(IL2CPP_STRUCT_SaveSceneManager_FWDDECL)
#include <Modloader/app/structs/SaveSceneManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSceneManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
