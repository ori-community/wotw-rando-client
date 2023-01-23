#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaceContentType__Enum.h>
#include <Modloader/app/structs/RaceSystem_DebugRaceList__Enum.h>
#include <Modloader/app/structs/RaceSystem_PrimaryFilter__Enum.h>
#include <Modloader/app/structs/RaceSystem_SecondaryFilter__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaceSystem_DebugRaceList__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_RaceSystem_PrimaryFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_RaceSystem_SecondaryFilter__Enum_DEFINED) && defined(IL2CPP_STRUCT_RaceContentType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RaceSystem__Fields_DEFINED
struct RaceTimer;
struct RaceLeaderboardUI;
struct SerializedIntUberState;
struct RaceSettings__Array;
struct ActionSequence;
struct MessageProvider;
struct Transform;
struct RaceLeaderboardScreen;
struct RaceStateMachineContext_SequencesConfiguration;
struct RaceStateMachineContext_TimelinesConfiguration;
struct RaceStateMachineContext_MessagesConfiguration;
struct GameObject;
struct OriGhostRigVisuals_GhostVisualSettings__Array;
struct RaceTargetIndicator;
struct RaceSettings;
struct StateMachine_2;
struct GhostService;
struct RaceStateMachineContext;
struct List_1_fsm_IState_;
struct GhostRecorder;
struct SceneMetaData;
struct RaceSystem__Fields {
    struct MonoBehaviour__Fields _;
    RaceSystem_DebugRaceList__Enum CurrentDebugRace;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct RaceTimer* m_timer;
    struct RaceLeaderboardUI* m_raceLeaderboardUi;
    struct SerializedIntUberState* m_leaderboardFilterState;
    struct RaceSettings__Array* m_raceSettings;
    struct ActionSequence* m_showFloatingLeaderboard;
    struct ActionSequence* m_hideFloatingLeaderboard;
    struct MessageProvider* m_helpMessagePedestalInactive;
    struct MessageProvider* m_helpTopMessagePedestal;
    struct MessageProvider* m_helpBottomMessagePedestal;
    struct MessageProvider* m_helpBottomMessagePedestalNoFriends;
    struct MessageProvider* m_activateRaceMessage;
    struct MessageProvider* m_skipFlythroughMessage;
    struct MessageProvider* m_timeoutRaceMessage;
    struct MessageProvider* m_returnRaceMessage;
    struct MessageProvider* m_abandonedRaceMessage;
    struct MessageProvider* m_messageRaceFinishedControlHelp;
    struct MessageProvider* m_messageRaceInterruptedControlHelp;
    struct MessageProvider* m_messageRaceFinishedExitOnlyMessage;
    struct MessageProvider* m_hashcodeMessageProvider;
    struct MessageProvider* m_messageTimeoutControlHelp;
    struct MessageProvider* m_messageOffline;
    struct MessageProvider* m_messageNoToken;
    struct MessageProvider* m_leaderboardFilterFriendsMessageProvider;
    struct MessageProvider* m_leaderboardFilterGlobalMessageProvider;
    struct Transform* m_uiTransform;
    struct RaceLeaderboardScreen* m_leaderboardScreenPrefab;
    struct RaceStateMachineContext_SequencesConfiguration* m_sequencesConfiguration;
    struct RaceStateMachineContext_TimelinesConfiguration* m_timelinesConfiguration;
    struct RaceStateMachineContext_MessagesConfiguration* m_messagesConfiguration;
    struct GameObject* Indicator;
    struct OriGhostRigVisuals_GhostVisualSettings__Array* GhostVisualSettings;
    struct RaceTargetIndicator* m_targetIdicatorPrefab;
    struct RaceSettings* m_startFromMenuRaceSettings;
    bool m_startFromMenuLoading;
    bool m_checkOfflineFiles;
    struct StateMachine_2* m_stateMachine;
    struct GhostService* m_ghostService;
    float m_timeToNextLocalUploadAttempt;
    struct RaceStateMachineContext* _Context_k__BackingField;
    RaceSystem_PrimaryFilter__Enum _CurrentPrimaryFilter_k__BackingField;

    RaceSystem_SecondaryFilter__Enum _CurrentSecondaryFilter_k__BackingField;

    struct List_1_fsm_IState_* m_states;
    struct GhostRecorder* m_recorder;
    RaceContentType__Enum LastRaceType;

    bool m_showingFloatingLeaderboard;
    struct Vector3 PositionPriorToRaceStart;
    struct SceneMetaData* ScenePriorToRaceStart;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceSystem__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostService.h>
#include <Modloader/app/structs/List_1_fsm_IState_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Array.h>
#include <Modloader/app/structs/RaceLeaderboardScreen.h>
#include <Modloader/app/structs/RaceLeaderboardUI.h>
#include <Modloader/app/structs/RaceSettings.h>
#include <Modloader/app/structs/RaceSettings__Array.h>
#include <Modloader/app/structs/RaceStateMachineContext.h>
#include <Modloader/app/structs/RaceStateMachineContext_MessagesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_TimelinesConfiguration.h>
#include <Modloader/app/structs/RaceTargetIndicator.h>
#include <Modloader/app/structs/RaceTimer.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RaceSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceSystem__Fields_FWDDECL)
#include <Modloader/app/structs/RaceSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
