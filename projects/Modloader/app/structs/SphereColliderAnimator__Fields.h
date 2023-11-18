#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SphereColliderAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SphereColliderAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator__Fields_DEFINED)
#include <Modloader/app/structs/SphereColliderAnimator_AnimationMode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SphereColliderAnimator_AnimationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SphereColliderAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_SphereCollider_;
struct AnimationCurve;
struct SphereCollider;
struct SphereColliderAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_SphereCollider_* Collider;
    struct AnimationCurve* RadiusCurve;
    SphereColliderAnimator_AnimationMode__Enum Mode;

    struct SphereCollider* m_collider;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SphereColliderAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_SphereCollider_.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_SphereColliderAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereColliderAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SphereColliderAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SphereColliderAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SphereColliderAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
