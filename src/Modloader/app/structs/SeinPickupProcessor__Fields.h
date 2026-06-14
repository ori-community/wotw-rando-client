#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPickupProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPickupProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SeinPickupProcessor_PickupProcessorState__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinPickupProcessor_PickupProcessorState__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinPickupProcessor__Fields_DEFINED
struct MoonTimeline;
struct ShowInteractiveTextEntity;
struct WWiseSoundAnimatorEntity;
struct EventTriggerAnimator;
struct SeinOnGroundCondition;
struct SeinPickupProcessor_CollectableInfo;
struct ExpText;
struct SeinCharacter;
struct IContext;
struct Action;
struct SpiritShardPickupContext;
struct SeinPickupProcessor__Fields {
    struct SaveSerialize__Fields _;
    struct MoonTimeline* PickupTimeline;
    struct ShowInteractiveTextEntity* InteractiveTextEntity;
    struct WWiseSoundAnimatorEntity* SoundAnimatorEntity;
    struct EventTriggerAnimator* ShowItemTrigger;
    struct SeinOnGroundCondition* OnGroundCondition;
    struct SeinPickupProcessor_CollectableInfo* OreInfo;
    struct SeinPickupProcessor_CollectableInfo* ExpOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* KeystoneInfo;
    struct SeinPickupProcessor_CollectableInfo* EyestoneInfo;
    struct SeinPickupProcessor_CollectableInfo* EnergyOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* HealthOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* SmallExpOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* MediumExpOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* LargeExpOrbInfo;
    struct SeinPickupProcessor_CollectableInfo* HeartContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* HeartHalfContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* HeartSecondHalfContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* SkillPointInfo;
    struct SeinPickupProcessor_CollectableInfo* EnergyContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* EnergyHalfContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* EnergySecondHalfContainerInfo;
    struct SeinPickupProcessor_CollectableInfo* MapStoneInfo;
    struct SeinPickupProcessor_CollectableInfo* SpiritShardInfo;
    struct SeinPickupProcessor_CollectableInfo* QuestItemInfo;
    struct SeinPickupProcessor_CollectableInfo* ShardSlotUpgradeInfo;
    struct ExpText* m_expText;
    struct SeinCharacter* m_sein;
    SeinPickupProcessor_PickupProcessorState__Enum m_state;

    struct SeinPickupProcessor_CollectableInfo* m_currentCollectableInfo;
    struct IContext* m_pickupContext;
    float m_timer;
    struct Action* FinishReadingAction;
    struct SpiritShardPickupContext* pickupContext;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinPickupProcessor__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/ExpText.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SeinOnGroundCondition.h>
#include <Modloader/app/structs/SeinPickupProcessor_CollectableInfo.h>
#include <Modloader/app/structs/ShowInteractiveTextEntity.h>
#include <Modloader/app/structs/SpiritShardPickupContext.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity.h>
#endif
#undef IL2CPP_STRUCT_SeinPickupProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPickupProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinPickupProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/SeinPickupProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPickupProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
