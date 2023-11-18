#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeshTrailAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeshTrailAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MeshTrailAnimator__Fields_DEFINED
struct MoonReference_1_MeshTrail_;
struct AnimationCurve;
struct MeshTrail;
struct MeshTrailAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_MeshTrail_* MeshTrailReference;
    struct AnimationCurve* CameraVelocityInheritanceCurve;
    float m_time;
    float m_originalCameraVelocityInheritance;
    struct MeshTrail* m_meshTrail;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeshTrailAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MeshTrail.h>
#include <Modloader/app/structs/MoonReference_1_MeshTrail_.h>
#endif
#undef IL2CPP_STRUCT_MeshTrailAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeshTrailAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeshTrailAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/MeshTrailAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeshTrailAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
