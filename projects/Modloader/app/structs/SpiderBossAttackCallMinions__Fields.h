#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossAttackCallMinions_State__Enum.h>
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossAttackCallMinions_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct EntityPlaceholder__Array;
struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_;
struct SpiderBossAttackCallMinions__Fields {
    struct SpiderBossBaseBehaviour__Fields _;
    struct MoonTimeline* Timeline;
    struct EventTriggerAnimator* SpawnMinionsTrigger;
    uint32_t AmountToSpawn;
    struct Vector2 RandomDelayBetweenSpawns;
    float minDistanceFromOri;
    struct GameObject* ParentObjectWithPlaceholders;
    SpiderBossAttackCallMinions_State__Enum m_state;

    struct EntityPlaceholder__Array* m_spawners;
    struct List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_* m_delayedSpawns;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_FWDDECL
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_SpiderBossAttackCallMinions_DelayedSpawnInfo_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossAttackCallMinions__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossAttackCallMinions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossAttackCallMinions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
