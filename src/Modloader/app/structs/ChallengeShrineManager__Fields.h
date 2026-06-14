#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChallengeShrineManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChallengeShrineManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ChallengeShrineManager__Fields_DEFINED
struct ChallengeShrineManager_ChallengeWave__Array;
struct ChallengeShrineManager_AddTimeTrigger__Array;
struct MoonReference_1_ColosseumTimer_;
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonReference_1_UnityEngine_Transform_;
struct DesiredUberStateBool;
struct MoonTimeline;
struct MessageProvider;
struct List_1_ChallengeShrineTrigger_;
struct ChallengeShrineManager__Fields {
    struct MonoBehaviour__Fields _;
    struct ChallengeShrineManager_ChallengeWave__Array* ChallengeWaves;
    struct ChallengeShrineManager_AddTimeTrigger__Array* AdditionalTimeEnemyKillTriggers;
    struct MoonReference_1_ColosseumTimer_* ColosseumTimer;
    struct MoonReference_1_UnityEngine_GameObject_* InitialRewardObject;
    struct MoonReference_1_UnityEngine_GameObject_* AlreadyCompletedRewardObject;
    struct MoonReference_1_UnityEngine_GameObject_* ShrineUI;
    struct MoonReference_1_UnityEngine_Transform_* RewardRoomPosition;
    struct MoonReference_1_UnityEngine_Transform_* MainRoomPosition;
    struct DesiredUberStateBool* CollectedShrineRewardUberState;
    struct MoonTimeline* ChallengeFailedTimeline;
    struct MoonTimeline* NextWaveTimeline;
    struct MoonTimeline* ChallengeCompletedTimeline;
    struct MoonTimeline* TimeAddedTimeline;
    struct MoonTimeline* RewardCollectedTimeline;
    struct MessageProvider* WaveCompletedMessage;
    float m_challengeTimer;
    int32_t m_currentWave;
    bool m_challengeOngoing;
    bool m_timerPaused;
    struct List_1_ChallengeShrineTrigger_* m_triggeredTriggers;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChallengeShrineManager__Fields_FWDDECL
#include <Modloader/app/structs/ChallengeShrineManager_AddTimeTrigger__Array.h>
#include <Modloader/app/structs/ChallengeShrineManager_ChallengeWave__Array.h>
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/List_1_ChallengeShrineTrigger_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_ColosseumTimer_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ChallengeShrineManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChallengeShrineManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChallengeShrineManager__Fields_FWDDECL)
#include <Modloader/app/structs/ChallengeShrineManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChallengeShrineManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
