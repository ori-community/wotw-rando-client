#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushPullBlockTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushPullBlockTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_PushPullBlockTest__Fields_DEFINED
struct LegacyAnimator__Array;
struct SoundSource;
struct PhysicMaterial;
struct PlatformMovement;
struct Rigidbody;
struct Transform;
struct List_1_UnityEngine_Collider_;
struct IPressurePlate;
struct PushPullBlockTest__Fields {
    struct MonoBehaviour__Fields _;
    struct LegacyAnimator__Array* HighlightAnimators;
    struct SoundSource* HighlightSound;
    struct SoundSource* DehighlightSound;
    float MoveSpeedMultiplier;
    bool KeepAwake;
    bool IsBashable;
    bool StrongFrictionWhenReleased;
    bool CanBeGrabbed;
    struct PhysicMaterial* PushPullMaterial;
    struct PhysicMaterial* PushPullMaterialMoving;
    struct PlatformMovement* PlatformMovement;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
    struct List_1_UnityEngine_Collider_* m_colliders;
    struct Vector3 m_originalPosition;
    float m_ignoreCollisionRemainingTime;
    int32_t m_angleFixHack;
    bool _IsGrabbed_k__BackingField;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IPressurePlate* m_pressurePlate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushPullBlockTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_PushPullBlockTest__Fields_FWDDECL
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PushPullBlockTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PushPullBlockTest__Fields_FWDDECL)
#include <Modloader/app/structs/PushPullBlockTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushPullBlockTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
