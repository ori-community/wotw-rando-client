#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossAttackBite__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossAttackBite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAttackBite__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossAttackBite_State__Enum.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossAttackBite_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossAttackBite__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Transform;
struct PrefabSpawner;
struct GameObject;
struct SpiderBossAttackBite__Fields {
    struct SpiderBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* BiteTrigger;
    struct Transform* BitePoint;
    bool ShouldSpawnProjectiles;
    struct PrefabSpawner* ProjectileSpawner;
    struct Vector2 ProjectileSpeedRange;
    float ProjectileGravity;
    float ProjectileDamage;
    float SpawnVerticalOffset;
    struct Vector2 ProjectileAngleRange;
    bool ShouldSpawnAcid;
    float AcidTime;
    float AcidDamage;
    struct GameObject* AcidPrefab;
    struct GameObject* AcidBigPrefab;
    SpiderBossAttackBite_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossAttackBite__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossAttackBite__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossAttackBite__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAttackBite__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossAttackBite__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossAttackBite__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossAttackBite__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
