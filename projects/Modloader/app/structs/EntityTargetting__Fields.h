#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTargetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTargetting__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EntityTargetting__Fields_DEFINED
struct Action;
struct LegacyEntity;
struct Entity;
struct Component_1__Array;
struct Vitals;
struct GameObject;
struct SpiritFlameProjectileOffsetGenerator;
struct TargetSpheres;
struct Transform;
struct Func_2_ArrowHitData_Boolean_;
struct InterfaceCache;
struct EntityTargetting__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* OnBashEnter;
    struct LegacyEntity* LegacyEntity;
    struct Entity* Entity;
    struct Component_1__Array* m_highlightColors;
    struct Vitals* m_vitals;
    bool Activated;
    bool CanSpiritFlame;
    bool CanBash;
    bool CanChargeFlame;
    bool CanStomp;
    bool CanLevelUpBlast;
    bool Trappable;
    bool CanMeleeHit;
    bool CanBowHit;
    bool SearchHiglightsOnSelf;
    bool CanBeLeashed;
    bool CanFireShardAttack;
    bool CanDigDash;
    bool CanTeleport;
    bool CanGlowHit;
    bool SpiritSentryTarget;
    bool CanBeTargettedBySpear;
    bool UsesTargettingProxyForSpear;
    struct GameObject* SpearTargettingProxy;
    int32_t SpiritFlamePriorityNumber;
    struct SpiritFlameProjectileOffsetGenerator* SpiritFlameProjectileOffsetGenerator;
    struct TargetSpheres* BashTargetSpheres;
    struct TargetSpheres* LeashTargetSpheres;
    bool _IsSpiritFlameHighlighted_k__BackingField;
    bool _IsSpiritSlashHighlighted_k__BackingField;
    bool _IsHeavySpiritSlashHighlighted_k__BackingField;
    bool _IsBashHighlighted_k__BackingField;
    bool _IsChargeDashHighlighted_k__BackingField;
    struct Vector3 m_previousPos;
    struct Vector3 m_velocity;
    int32_t _HeavySpiritSlashPriority_k__BackingField;
    int32_t m_spiritSlashPriority;
    int32_t m_bowPriority;
    struct Transform* BowAttackTarget;
    struct Transform* LeashAttackTarget;
    bool m_bowEnableAutoTarget;
    bool ShouldReflectArrows;
    struct Func_2_ArrowHitData_Boolean_* ShouldReflectArrowsOverride;
    bool m_grenadeEnableAutoTarget;
    int32_t m_hammerPriority;
    bool m_hammerEnableAutoTarget;
    bool m_isRegistered;
    bool m_isFrustumSuspended;
    struct InterfaceCache* m_damageReceivers;
    bool m_componentsCached;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTargetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityTargetting__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Func_2_ArrowHitData_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/SpiritFlameProjectileOffsetGenerator.h>
#include <Modloader/app/structs/TargetSpheres.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_EntityTargetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTargetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityTargetting__Fields_FWDDECL)
#include <Modloader/app/structs/EntityTargetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTargetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
