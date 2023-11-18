#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_DEFINED
enum class SceneDataCaptureAgent_SceneLoadingStates__Enum : int32_t {
    LoadedScenes = 0x00000000,
    DisabledScenes = 0x00000001,
    DisablingScenes = 0x00000002,
    LoadingScenes = 0x00000003,
    LoadingCancelledScenes = 0x00000004,
    EnablingScenes = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneDataCaptureAgent_SceneLoadingStates__Enum_FWDDECL)
#include <Modloader/app/structs/SceneDataCaptureAgent_SceneLoadingStates__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDataCaptureAgent_SceneLoadingStates__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
