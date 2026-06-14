#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetController__Fields_DEFINED
struct AllContainer_1_CameraOffsetController_OffsetLayer_;
struct List_1_CameraOffsetController_OffsetLayer_;
struct AnimationCurve;
struct SceneDefaultSettingsHelper;
struct CameraOffsetController__Fields {
    struct MonoBehaviour__Fields _;
    struct AllContainer_1_CameraOffsetController_OffsetLayer_* m_offsetLayers;
    struct List_1_CameraOffsetController_OffsetLayer_* m_sortedLayers;
    struct Vector3 AdditiveDefaultOffset;
    struct Vector3 DebugAdditionalZoom;
    bool ApplyExtraZoom;
    bool UseExtraZoomCurve;
    struct AnimationCurve* ExtraZoomCurve;
    struct Vector3 ExtraZoomAmount;
    float _ExtraZoomApplied_k__BackingField;
    float DefaultZoom;
    struct SceneDefaultSettingsHelper* m_defaultSettingsHelper;
    struct AnimationCurve* ZoomCurve;
    float m_characterSpeed;
    struct AnimationCurve* MultipliedBasedOnCharacterSpeedCurve;
    struct Vector3 m_lastOffsetWithoutCamera;
    struct Vector3 m_lastRotationWithoutCamera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetController__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetController__Fields_FWDDECL
#include <Modloader/app/structs/AllContainer_1_CameraOffsetController_OffsetLayer_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_CameraOffsetController_OffsetLayer_.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetController__Fields_FWDDECL)
#include <Modloader/app/structs/CameraOffsetController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
