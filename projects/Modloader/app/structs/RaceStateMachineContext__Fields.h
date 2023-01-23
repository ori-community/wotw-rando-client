#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStateMachineContext__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStateMachineContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext__Fields_DEFINED)
#include <Modloader/app/structs/RaceStopReason__Enum.h>
#include <Modloader/app/structs/ScoreResult__Enum.h>
#if defined(IL2CPP_STRUCT_RaceStopReason__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScoreResult__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceStateMachineContext__Fields_DEFINED
struct LeaderBoardService;
struct RaceConfiguration;
struct MonoBehaviour;
struct Transform;
struct RaceLeaderboardUI;
struct Exception;
struct GhostIndicatorManager;
struct FinishHandlerService;
struct RacesUiService;
struct MessageProvider;
struct List_1_System_String_;
struct RaceStateMachineContext_SequencesConfiguration;
struct RaceStateMachineContext_TimelinesConfiguration;
struct RaceStateMachineContext_MessagesConfiguration;
struct List_1_MessageBox_;
struct __declspec(align(8)) RaceStateMachineContext__Fields {
    struct LeaderBoardService* LeaderBoardService;
    struct RaceConfiguration* Configuration;
    struct MonoBehaviour* CoroutineTarget;
    struct Transform* UiTransform;
    struct RaceLeaderboardUI* LeaderboardUI;
    bool IsNameRequired;
    RaceStopReason__Enum StopReason;

    float DeltaTime;
    struct Exception* TechnicalFailure;
    struct GhostIndicatorManager* GhostIndicatorService;
    struct FinishHandlerService* FinishHandlerService;
    struct RacesUiService* RacesUI;
    struct MessageProvider* HelpTopMessageForPedestal;
    struct MessageProvider* HelpBottomMessageForPedestal;
    struct MessageProvider* HelpBottomMessageForPedestalNoFriends;
    struct MessageProvider* ActivateRaceMessage;
    struct MessageProvider* SkipFlythroughMessage;
    struct MessageProvider* TimeoutRaceMessage;
    struct MessageProvider* ReturnRaceMessage;
    struct MessageProvider* AbandonedRaceMessage;
    struct MessageProvider* HelpBottomMessageForRaceFinished;
    struct MessageProvider* HelpBottomMessageForRaceInterrupted;
    struct MessageProvider* HelpBottomMessageForRaceFinishedExitOnly;
    struct MessageProvider* HelpMiddleHashcodeMessage;
    struct MessageProvider* MessageTimeoutControlHelp;
    struct MessageProvider* OfflineMessage;
    struct MessageProvider* NoTokenMessage;
    bool UserRequestedRetry;
    bool UserRequestedWatchReplay;
    bool UserRequestedLeaderboard;
    struct List_1_System_String_* SelectedPlayerReplays;
    struct RaceStateMachineContext_SequencesConfiguration* Sequences;
    struct RaceStateMachineContext_TimelinesConfiguration* Timelines;
    struct RaceStateMachineContext_MessagesConfiguration* Messages;
    struct List_1_MessageBox_* DisposableMessageBoxes;
    ScoreResult__Enum ScoreResult;

    float LastRaceTime;
    bool JustBeatDevGhost;
    float LastOriPositionX;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceStateMachineContext__Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/FinishHandlerService.h>
#include <Modloader/app/structs/GhostIndicatorManager.h>
#include <Modloader/app/structs/LeaderBoardService.h>
#include <Modloader/app/structs/List_1_MessageBox_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceLeaderboardUI.h>
#include <Modloader/app/structs/RaceStateMachineContext_MessagesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_SequencesConfiguration.h>
#include <Modloader/app/structs/RaceStateMachineContext_TimelinesConfiguration.h>
#include <Modloader/app/structs/RacesUiService.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RaceStateMachineContext__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceStateMachineContext__Fields_FWDDECL)
#include <Modloader/app/structs/RaceStateMachineContext__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStateMachineContext__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
