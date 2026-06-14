#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_Mode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CameraOffsetAnimationZone_Mode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_DEFINED
struct CameraOffsetAnimationZone_OffsetBlend__Array;
struct CameraOffsetController_OffsetLayer;
struct Transform;
struct CameraOffsetAnimationZone_OffsetBlend;
struct CameraOffsetAnimationZone__Fields {
    struct MonoBehaviour__Fields _;
    CameraOffsetAnimationZone_Mode__Enum mode;

    struct Vector3 Offset;
    bool UseOffsetX;
    bool UseOffsetY;
    bool UseOffsetZ;
    struct Vector3 Rotation;
    bool UseRotationX;
    bool UseRotationY;
    bool UseRotationZ;
    float Weight;
    float Duration;
    float Time;
    float BlendPointBlendDuration;
    struct CameraOffsetAnimationZone_OffsetBlend__Array* BlendPoints;
    float NormalizedPositionWithinBounds;
    struct Vector3 m_effectiveOffset;
    struct Vector3 m_ffectiveRotation;
    struct CameraOffsetController_OffsetLayer* m_offsetLayer;
    struct Color FillColor;
    struct Color OutlineColor;
    struct Transform* m_transform;
    bool m_isRegistered;
    bool m_dirty;
    struct Rect m_rect;
    float m_currentNormalizedPositionVelocity;
    struct CameraOffsetAnimationZone_OffsetBlend* m_tempOffsetBlend;
    bool _InsideFrustum_k__BackingField;
    struct Bounds m_bounds;
    bool _AllowCacheBounds_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_FWDDECL
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraOffsetAnimationZone__Fields_FWDDECL)
#include <Modloader/app/structs/CameraOffsetAnimationZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraOffsetAnimationZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
