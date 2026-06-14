#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoRotate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoRotate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRotate__Fields_DEFINED)
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoRotate__Fields_DEFINED
struct AnimationCurve;
struct Condition_1;
struct Rigidbody;
struct TrailRenderer;
struct AutoRotate__Fields {
    struct Suspendable__Fields _;
    float Speed;
    float m_currentTime;
    struct AnimationCurve* Curve;
    bool UseCurve;
    struct Condition_1* Condition;
    float m_rotation;
    struct Rigidbody* m_rigidbody;
    bool m_raceRotationOverride;
    struct TrailRenderer* m_trailRenderer;
    float m_trailRendererTime;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoRotate__Fields_FWDDECL)
#define IL2CPP_STRUCT_AutoRotate__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/TrailRenderer.h>
#endif
#undef IL2CPP_STRUCT_AutoRotate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRotate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AutoRotate__Fields_FWDDECL)
#include <Modloader/app/structs/AutoRotate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoRotate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
