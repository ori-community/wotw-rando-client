#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_Transform_;
struct Transform;
struct MoveCameraToPointAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_* Target;
    float AutoDistance;
    float ZoomOffset;
    bool IgnoreScrollLock;
    float WideScreenAdjustment;
    float duration;
    struct Transform* m_targetTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoveCameraToPointAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MoveCameraToPointAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveCameraToPointAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
