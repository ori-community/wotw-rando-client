#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetZone__Fields_DEFINED
struct AnimationCurve;
struct CameraOffsetZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Offset;
    int32_t priority;
    struct AnimationCurve* ZoomCurve;
    bool UseOnEnableDamping;
    struct AnimationCurve* ZoomOnEnableRateCurve;
    float LeftMargin;
    float RightMargin;
    float TopMargin;
    float BottomMargin;
    float m_dampingTimer;
    bool m_autoZoomOutAndDisable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetZone__Fields_FWDDECL)
#include <Modloader/app/structs/CameraOffsetZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
