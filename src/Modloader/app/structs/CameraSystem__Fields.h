#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSystem__Fields_DEFINED
struct CameraCrossFadeManager;
struct UberPostProcessingCrossFade;
struct GUICamera;
struct CameraSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraCrossFadeManager* CrossFadeManager;
    struct UberPostProcessingCrossFade* UberPostProcessingCrossFade;
    struct GUICamera* GUICamera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSystem__Fields_FWDDECL
#include <Modloader/app/structs/CameraCrossFadeManager.h>
#include <Modloader/app/structs/GUICamera.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade.h>
#endif
#undef IL2CPP_STRUCT_CameraSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSystem__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
