#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AchievementsLogic__Fields_DEFINED
struct List_1_AchievementAsset_;
struct AchievementsStateValidator;
struct AchievementAsset;
struct SerializedBooleanUberState;
struct SerializedIntUberState;
struct ConditionUberState;
struct AchievementsLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_AchievementAsset_* m_cache;
    struct AchievementsStateValidator* m_stateValidator;
    struct AchievementAsset* TestAchievement;
    struct AchievementAsset* A01FendHowlAchievementAsset;
    struct AchievementAsset* A03DefeatHornbugAchievementAsset;
    struct AchievementAsset* A04DefeatLaserShooterAchievementAsset;
    struct AchievementAsset* A07ReachWellspringGladesAchievementAsset;
    struct AchievementAsset* A08CompleteWatermillEscapeAchievementAsset;
    struct AchievementAsset* A09CompleteAvalancheEscapeAchievementAsset;
    struct AchievementAsset* A10DefeatMoraAchievementAsset;
    struct AchievementAsset* A11DefeatKwolokAchievementAsset;
    struct AchievementAsset* A12CompleteDesertEscapeAchievementAsset;
    struct AchievementAsset* A13DefeatShriekAchievementAsset;
    struct AchievementAsset* A14CompleteTheGameAchievementAsset;
    struct AchievementAsset* A15CompleteNGPlusAchievementAsset;
    struct AchievementAsset* B01UnlcokAllSkillsAchievementAsset;
    struct AchievementAsset* B02UpgradeAllSkillsAchievementAsset;
    struct AchievementAsset* B03UpgadeShardSlotsAchievementAsset;
    struct AchievementAsset* B04UnlockAllShardsAchievementAsset;
    struct AchievementAsset* B05UpgradeAllShardsAchievementAsset;
    struct AchievementAsset* B06MaxOutHealthAchievementAsset;
    struct AchievementAsset* B07MaxOutEnergyAchievementAsset;
    struct AchievementAsset* B08BuyAllMapsAchievementAsset;
    struct AchievementAsset* B09CompleteAllShrinesAchievementAsset;
    struct AchievementAsset* B10FoundAllPickupsAchievementAsset;
    struct AchievementAsset* B11CompleteTradeSequenceQuestAchievementAsset;
    struct AchievementAsset* B12CompleteAllSideQuestsAchievementAsset;
    struct AchievementAsset* B13CompleteAllWellspringProjectsAchievementAsset;
    struct AchievementAsset* B14BeatEveryGhostInEveryRaceAchievementAsset;
    struct AchievementAsset* C01DefeatBossWithoutTakingDamageAchievementAsset;
    struct AchievementAsset* C02DefeatBossUnderXMinutesAchievementAsset;
    struct AchievementAsset* C03Juggle3OrMoreProjectilesFor5SecAchievementAsset;
    struct AchievementAsset* C05DefeatXEnemiesWithoutTouchingGroundAchievementAsset;
    struct AchievementAsset* C07NeverTouchedCorruptedWaterAchievementAsset;
    struct AchievementAsset* C10PiercedXEnemiesWithSpearAchievementAsset;
    struct AchievementAsset* C11DefeatXEnemiesUsingHazardsAchievementAsset;
    struct AchievementAsset* C13BeatGameWithoutEquippingShardAchievementAsset;
    struct AchievementAsset* C14GeatGameWithoutSpendingSpiritLightAchievementAsset;
    struct AchievementAsset* C15CompleteGameUnderXHoursAchievementAsset;
    struct AchievementAsset* C16CompleteGameWithoutDyingAchievementAsset;
    SuspendableMask__Enum m_suspendableMask;

    bool _IsSuspended_k__BackingField;
    float m_commitPickupCollectionProgressCooldown;
    bool m_grantedJuggleProjectileAchievement;
    bool m_shouldGrantAchievements;
    bool m_delegatesAssigned;
    struct SerializedBooleanUberState* PoisonousWaterTouched;
    struct SerializedBooleanUberState* ShardEverEquipped;
    struct SerializedBooleanUberState* SpiritLightEverSpent;
    struct SerializedIntUberState* SpiritLightEverGainedCounter;
    struct SerializedIntUberState* CollectablesCounterState;
    struct SerializedIntUberState* EnemiesKilledByHazardsState;
    struct SerializedBooleanUberState* GotHitBySpider;
    struct SerializedIntUberState* HealthContainersCounterState;
    struct SerializedIntUberState* EnergyContainersCounterState;
    struct ConditionUberState* BoughtAllMapsState;
    bool m_spiderBossFightIsOn;
    float m_bossFightTimer;
    int32_t m_projectilesJuggled;
    float m_inAirTime;
    int32_t m_enemiesKilledInAir;
    int32_t m_enemiesKilledBySpear;
    double m_lastTotalPlaytime;
    int32_t m_lastCollectedPickupProggresion;
    int32_t m_lastSentCollectedPickupProggresion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsLogic__Fields_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/AchievementsStateValidator.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/List_1_AchievementAsset_.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_AchievementsLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsLogic__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementsLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
