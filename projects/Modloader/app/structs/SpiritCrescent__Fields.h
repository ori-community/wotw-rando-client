#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritCrescent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritCrescent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritCrescent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SpiritCrescent_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritCrescent_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritCrescent__Fields_DEFINED
struct GameObject;
struct SeinSpiritCrescentSpell;
struct Rigidbody;
struct DamageDealer;
struct SpiritCrescent__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* ImpactEffect;
    float TimeBeforeReturning;
    float TurnAroundDuration;
    float MaxReturnOffset;
    float CatchDistance;
    float HomingMinSpeed;
    SpiritCrescent_State__Enum m_State;

    struct SeinSpiritCrescentSpell* m_spell;
    struct Vector3 m_throwPosition;
    struct Vector3 m_velocity;
    bool m_upgraded;
    float m_stateTime;
    bool m_explode;
    float m_homingSpeed;
    float m_homingDuration;
    struct Vector3 m_homingStart;
    struct Rigidbody* m_rigidbody;
    struct DamageDealer* m_damageDealer;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float Radius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritCrescent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritCrescent__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SeinSpiritCrescentSpell.h>
#endif
#undef IL2CPP_STRUCT_SpiritCrescent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritCrescent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritCrescent__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritCrescent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritCrescent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
