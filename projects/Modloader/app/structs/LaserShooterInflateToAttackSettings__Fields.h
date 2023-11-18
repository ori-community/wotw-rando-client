#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_DEFINED
struct MoonTimeline;
struct AnimationCurve;
struct LaserShooterInflateToAttackSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* AnticTimeline;
    struct MoonTimeline* ShootingTimeline;
    struct Vector3 InflateOffset;
    float FirstInflateTime;
    float InflateTime;
    struct AnimationCurve* InflateCurve;
    struct Vector3 DeflateOffset;
    float DeflateTime;
    struct AnimationCurve* DeflateCurve;
    float ResolveTime;
    struct AnimationCurve* ResolveCurve;
    struct MoonTimeline* ResolveTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterInflateToAttackSettings__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterInflateToAttackSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterInflateToAttackSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
