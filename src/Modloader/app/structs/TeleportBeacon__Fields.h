#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeleportBeacon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeleportBeacon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportBeacon__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TeleportBeacon_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_TeleportBeacon_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_TeleportBeacon__Fields_DEFINED
struct GameObject;
struct Rigidbody;
struct IAttackable;
struct TeleportBeacon__Fields {
    struct MonoBehaviour__Fields _;
    float Gravity;
    struct GameObject* Explosion;
    struct Rect BoundingBox;
    float Duration;
    bool HommingToTargets;
    float HomingDelay;
    float HomingDistance;
    float HomingMinSpeed;
    float InstantExplodeDistance;
    float m_time;
    struct Rigidbody* m_rigidbody;
    bool Bashable;
    TeleportBeacon_State__Enum m_currentState;

    float m_homingTime;
    float m_homingSpeed;
    float m_homingDuration;
    struct Vector3 m_homingStart;
    struct IAttackable* m_lockOnTarget;
    bool m_insideFrustum;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TeleportBeacon__Fields_FWDDECL)
#define IL2CPP_STRUCT_TeleportBeacon__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_TeleportBeacon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeleportBeacon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TeleportBeacon__Fields_FWDDECL)
#include <Modloader/app/structs/TeleportBeacon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeleportBeacon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
