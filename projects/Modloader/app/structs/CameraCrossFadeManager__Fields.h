#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraCrossFadeManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraCrossFadeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraCrossFadeManager__Fields_DEFINED
struct CameraController_1;
struct AnimationCurve;
struct UberPostProcessingCrossFade;
struct CameraCrossFadeManager__Fields {
    struct MonoBehaviour__Fields _;
    bool m_isCrossFading;
    struct CameraController_1* CameraControllerEnd;
    struct CameraController_1* CameraControllerStart;
    float m_crossFadeTime;
    float m_crossFadeDuration;
    struct AnimationCurve* TweenCurve;
    struct UberPostProcessingCrossFade* UberPostProcessingCrossFade;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraCrossFadeManager__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/UberPostProcessingCrossFade.h>
#endif
#undef IL2CPP_STRUCT_CameraCrossFadeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraCrossFadeManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraCrossFadeManager__Fields_FWDDECL)
#include <Modloader/app/structs/CameraCrossFadeManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraCrossFadeManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
