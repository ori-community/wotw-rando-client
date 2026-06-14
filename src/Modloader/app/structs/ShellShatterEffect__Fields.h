#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShellShatterEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShellShatterEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellShatterEffect__Fields_DEFINED)
#include <Modloader/app/structs/ForceMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ShellShatterEffect_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ForceMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ShellShatterEffect_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ShellShatterEffect__Fields_DEFINED
struct MoonTimeline;
struct List_1_UnityEngine_Rigidbody_;
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Quaternion_;
struct List_1_UnityEngine_Collider_;
struct Transform;
struct AnimationCurve;
struct ShellShatterEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* ExplodeTimeline;
    struct MoonTimeline* DissolveTimeline;
    struct List_1_UnityEngine_Rigidbody_* Pieces;
    struct List_1_UnityEngine_Vector3_* InitialPositions;
    struct List_1_UnityEngine_Quaternion_* InitialRotations;
    struct List_1_UnityEngine_Collider_* PiecesColliders;
    float LifeTime;
    float Force;
    float ForceRadius;
    float UpwardsModifier;
    struct Transform* ExplosionOriginPoint;
    struct Vector3 ExplosionOriginOffset;
    ForceMode__Enum ExplosionMode;

    float GravitySpeed;
    struct AnimationCurve* GravityMultiplierOverLifetime;
    float HorizontalVelocityDamp;
    bool ExplodeOnEnable;
    float m_timer;
    ShellShatterEffect_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShellShatterEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShellShatterEffect__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rigidbody_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShellShatterEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellShatterEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShellShatterEffect__Fields_FWDDECL)
#include <Modloader/app/structs/ShellShatterEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShellShatterEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
