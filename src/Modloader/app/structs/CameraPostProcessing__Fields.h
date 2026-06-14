#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPostProcessing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPostProcessing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPostProcessing__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPostProcessing__Fields_DEFINED
struct CameraController_1;
struct UberPostProcess;
struct CameraAdditiveSettings;
struct SceneDefaultSettingsHelper;
struct CameraSettings;
struct __declspec(align(8)) CameraPostProcessing__Fields {
    struct CameraController_1* CameraController;
    struct UberPostProcess* UberPostProcess;
    struct CameraAdditiveSettings* AdditiveSettings;
    struct SceneDefaultSettingsHelper* m_defaultSettingsHelper;
    struct CameraSettings* m_currentCameraSettings;
    struct CameraSettings* m_transitionSceneSettings;
    bool m_applySettings;
    bool m_cameraSettingsZoneTransition;
    struct CameraSettings* m_currentZoneSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_CameraPostProcessing__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraPostProcessing__Fields_FWDDECL
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/UberPostProcess.h>
#endif
#undef IL2CPP_STRUCT_CameraPostProcessing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPostProcessing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraPostProcessing__Fields_FWDDECL)
#include <Modloader/app/structs/CameraPostProcessing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPostProcessing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
