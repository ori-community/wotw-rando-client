#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StomperLogic_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_StomperLogic_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_StomperLogic__Fields_DEFINED
struct Transform;
struct DamageDealer;
struct AnimatingFloat;
struct Rigidbody;
struct AnimationCurve;
struct StomperAnimator;
struct StomperLogic__Fields {
    struct MonoBehaviour__Fields _;
    float StartFallSpeed;
    float FallGravity;
    float RiseDeccleration;
    float RiseSpeed;
    float DelayTillRise;
    float ShakeTime;
    struct Transform* StompDustSpawnTransform;
    struct DamageDealer* DamageDealer;
    bool m_initialized;
    struct Vector3 m_fallDirection;
    StomperLogic_State__Enum m_state;

    float m_time;
    struct AnimatingFloat* m_fall;
    bool m_hasPlayedResetSound;
    struct Vector3 m_originalLocalPosition;
    struct Transform* m_transform;
    struct Rigidbody* m_rigidbody;
    struct AnimationCurve* OnTriggerDecorationCurve;
    float Distance;
    bool DistanceSet;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct StomperAnimator* Animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_StomperLogic__Fields_FWDDECL
#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/StomperAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_StomperLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StomperLogic__Fields_FWDDECL)
#include <Modloader/app/structs/StomperLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
