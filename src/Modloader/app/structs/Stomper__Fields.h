#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stomper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stomper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Stomper_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Stomper_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Stomper__Fields_DEFINED
struct SoundSource;
struct GameObject;
struct Transform;
struct DamageDealer;
struct AnimatingFloat;
struct Rigidbody;
struct AnimationCurve;
struct Stomper__Fields {
    struct MonoBehaviour__Fields _;
    float StartFallSpeed;
    float FallGravity;
    float RiseDeccleration;
    float RiseSpeed;
    float DelayTillRise;
    float ShakeTime;
    struct SoundSource* StompSound;
    struct SoundSource* StompStartSound;
    struct SoundSource* StompResetSound;
    struct SoundSource* ReelInSound;
    struct GameObject* StompImpactDust;
    struct Transform* StompDustSpawnTransform;
    struct DamageDealer* DamageDealer;
    struct Vector3 m_fallDirection;
    Stomper_State__Enum m_state;

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
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stomper__Fields_FWDDECL)
#define IL2CPP_STRUCT_Stomper__Fields_FWDDECL
#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Stomper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stomper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Stomper__Fields_FWDDECL)
#include <Modloader/app/structs/Stomper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stomper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
