#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberExplosionAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberExplosionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberExplosionAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/UberExplosionAnimator_AnimatorType__Enum.h>
#include <Modloader/app/structs/UberExplosionAnimator_ExplosionType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_UberExplosionAnimator_AnimatorType__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberExplosionAnimator_ExplosionType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberExplosionAnimator__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct UberExplosionAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve* WeightCurve;
    float OutwardSpeed;
    float Radius;
    struct Vector4 ExplodeStrength;
    UberExplosionAnimator_AnimatorType__Enum Type;

    UberExplosionAnimator_ExplosionType__Enum ExplosionMode;

    float Angle;
    float Direction;
    struct Vector3 m_directionVector;
    float m_time;
    struct Transform* m_actor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberExplosionAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberExplosionAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberExplosionAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberExplosionAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberExplosionAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberExplosionAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberExplosionAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
