#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED
enum class ScenesManager_SceneManagementMode__Enum : int32_t {
    Gameplay = 0x00000000,
    Cinematic = 0x00000001,
    Explicit = 0x00000002,
    Legacy = 0x00000003,
    GameplayUtility = 0x00000004,
    Static = 0x00000005,
    Count = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_FWDDECL)
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
