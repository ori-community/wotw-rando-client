#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneState__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneState__Enum_DEFINED
enum class SceneState__Enum : int32_t {
    Loading = 0x00000000,
    LoadingCancelled = 0x00000001,
    Loaded = 0x00000002,
    Enabling = 0x00000003,
    Enabled = 0x00000004,
    WaitingToDisable = 0x00000005,
    Disabling = 0x00000006,
    Disabled = 0x00000007,
    Unloading = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneState__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneState__Enum_FWDDECL)
#include <Modloader/app/structs/SceneState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
