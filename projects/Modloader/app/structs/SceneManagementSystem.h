#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneManagementSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneManagementSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagementSystem_DEFINED)
#include <Modloader/app/structs/SceneManagementSystem__Fields.h>
#if defined(IL2CPP_STRUCT_SceneManagementSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneManagementSystem_DEFINED
struct SceneManagementSystem__Class;
struct SceneManagementSystem {
    struct SceneManagementSystem__Class* klass;
    MonitorData* monitor;
    struct SceneManagementSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneManagementSystem_FWDDECL)
#define IL2CPP_STRUCT_SceneManagementSystem_FWDDECL
#include <Modloader/app/structs/SceneManagementSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneManagementSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneManagementSystem_DEFINED) && !defined(IL2CPP_STRUCT_SceneManagementSystem_FWDDECL)
#include <Modloader/app/structs/SceneManagementSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneManagementSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
