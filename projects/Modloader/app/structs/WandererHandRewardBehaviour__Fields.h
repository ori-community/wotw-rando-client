#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_DEFINED
struct WandererEntity;
struct GroundEntityLocomotion;
struct WandererTurningBehaviour;
struct WandererNPC;
struct MoonTimeline;
struct GameObject;
struct Transform;
struct WandererHandRewardBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct WandererEntity* m_wandererEntity;
    struct GroundEntityLocomotion* m_locomotion;
    struct WandererTurningBehaviour* m_turningBehaviour;
    struct WandererNPC* m_npc;
    struct MoonTimeline* HandItemStart;
    struct MoonTimeline* HandItemIdle;
    struct MoonTimeline* HandItemEnd;
    struct MoonTimeline* m_currentTimeline;
    float MaxPickupTime;
    float m_pickupTimer;
    struct GameObject* RewardPrefab;
    struct Transform* RewardParent;
    struct GameObject* m_reward;
    bool m_rewardReceived;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WandererNPC.h>
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#endif
#undef IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererHandRewardBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/WandererHandRewardBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererHandRewardBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
