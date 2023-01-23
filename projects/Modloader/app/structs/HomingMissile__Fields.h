#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HomingMissile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HomingMissile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingMissile__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HomingMissile__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct IAttackable;
struct Rigidbody;
struct Transform;
struct DamageOwner;
struct HomingMissile__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* Speed;
    struct GameObject* ExplosionGameObject;
    float DamageAmount;
    struct IAttackable* m_target;
    float m_duration;
    struct Vector3 m_startSpeed;
    float m_currentTime;
    bool m_hitTarget;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HomingMissile__Fields_FWDDECL)
#define IL2CPP_STRUCT_HomingMissile__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HomingMissile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HomingMissile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HomingMissile__Fields_FWDDECL)
#include <Modloader/app/structs/HomingMissile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HomingMissile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
