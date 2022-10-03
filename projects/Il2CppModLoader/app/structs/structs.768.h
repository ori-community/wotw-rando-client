namespace app {
    struct RaceData_RaceStartFaceDirection__Enum__StaticFields {
    };

    struct RaceData_RaceStartFaceDirection__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceData_RaceStartFaceDirection__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceData_RaceStartFaceDirection__Enum__VTable vtable;
    };

    struct BossRaceData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_RaceName;
        VirtualInvokeData get_RequiredScenes;
        VirtualInvokeData get_StartLinePosition;
        VirtualInvokeData get_EndPosition;
        VirtualInvokeData get_FlythroughTimeline;
        VirtualInvokeData get_RaceSettings;
        VirtualInvokeData get_TimeLimit;
        VirtualInvokeData get_GetReadyCondition;
        VirtualInvokeData get_PostFinishCondition;
        VirtualInvokeData get_IsBeaten;
        VirtualInvokeData get_ShouldPlayEndingAnimation;
        VirtualInvokeData get_StateOverride;
        VirtualInvokeData get_DisabledAbilities;
        VirtualInvokeData get_RaceSyncables;
    };

    struct BossRaceData__StaticFields {
    };

    struct BossRaceData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossRaceData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossRaceData__VTable vtable;
    };

    struct BossRaceHandler__Fields {
        struct MonoBehaviour__Fields _;
        struct BossRaceData* Data;
        bool m_inProgress;
        bool m_startRaceOnEnable;
        struct Action* m_onStartRaceAction;
        struct Vector3 m_oriStartRacePosition;
        struct HashSet_1_Moon_ISuspendable_* m_suspendables;
        bool m_alreadySuspended;
    };

    struct BossRaceHandler {
        struct BossRaceHandler__Class* klass;
        MonitorData* monitor;
        struct BossRaceHandler__Fields fields;
    };

    enum class RaceStopReason__Enum : int32_t {
        None = 0x00000000,
        Finished = 0x00000001,
        Timeout = 0x00000002,
        Death = 0x00000003,
        SpectatingFinished = 0x00000004,
        TechnicalFailure = 0x00000005,
        UserAction = 0x00000006,
    };

    struct RaceStopReason__Enum__Boxed {
        struct RaceStopReason__Enum__Class* klass;
        MonitorData* monitor;
        RaceStopReason__Enum value;
    };

    enum class ScoreResult__Enum : int32_t {
        Regular = 0x00000000,
        NewPersonalBest = 0x00000001,
        NewBest = 0x00000002,
    };

    struct ScoreResult__Enum__Boxed {
        struct ScoreResult__Enum__Class* klass;
        MonitorData* monitor;
        ScoreResult__Enum value;
    };

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

    struct RaceStateMachineContext {
        struct RaceStateMachineContext__Class* klass;
        MonitorData* monitor;
        struct RaceStateMachineContext__Fields fields;
    };

    struct __declspec(align(8)) RaceConfiguration__Fields {
        bool ShouldSpectate;
        bool ShowLeaderboard;
        struct ITrialData* Race;
        struct ITrialHandler* Handler;
    };

    struct RaceConfiguration {
        struct RaceConfiguration__Class* klass;
        MonitorData* monitor;
        struct RaceConfiguration__Fields fields;
    };

    struct ITrialData {
        struct ITrialData__Class* klass;
        MonitorData* monitor;
    };

    struct ITrialHandler {
        struct ITrialHandler__Class* klass;
        MonitorData* monitor;
    };

    struct RaceLeaderboardUI__Fields {
        struct MonoBehaviour__Fields _;
        struct Color LocalPlayerNameColor;
        struct Color DefaultNameColor;
        struct List_1_Moon_Race_RaceLeaderboardUI_Entry_* m_entries;
    };

    struct RaceLeaderboardUI {
        struct RaceLeaderboardUI__Class* klass;
        MonitorData* monitor;
        struct RaceLeaderboardUI__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Race_RaceLeaderboardUI_Entry___Fields {
        struct RaceLeaderboardUI_Entry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Race_RaceLeaderboardUI_Entry_ {
        struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Fields fields;
    };

    struct __declspec(align(8)) RaceLeaderboardUI_Entry__Fields {
        struct GameObject* EntryGameObject;
        struct MessageBox* Rank;
        struct MessageBox* Name;
        struct MessageBox* Time;
    };

    struct RaceLeaderboardUI_Entry {
        struct RaceLeaderboardUI_Entry__Class* klass;
        MonitorData* monitor;
        struct RaceLeaderboardUI_Entry__Fields fields;
    };

    struct RaceLeaderboardUI_Entry__Array {
        struct RaceLeaderboardUI_Entry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RaceLeaderboardUI_Entry* vector[32];
    };

    struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry_ {
        struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) GhostIndicatorManager__Fields {
        struct GameObject* m_indicator;
        struct GameObject__Array* m_indicatorInstances;
    };

    struct GhostIndicatorManager {
        struct GhostIndicatorManager__Class* klass;
        MonitorData* monitor;
        struct GhostIndicatorManager__Fields fields;
    };

    struct __declspec(align(8)) FinishHandlerService__Fields {
        struct Action* GhostArrived;
        struct List_1_GhostPlayer_* m_ghosts;
        struct Boolean__Array* m_arrivals;
        int32_t m_totalArrived;
    };

    struct FinishHandlerService {
        struct FinishHandlerService__Class* klass;
        MonitorData* monitor;
        struct FinishHandlerService__Fields fields;
    };

    struct __declspec(align(8)) List_1_GhostPlayer___Fields {
        struct GhostPlayer__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GhostPlayer_ {
        struct List_1_GhostPlayer___Class* klass;
        MonitorData* monitor;
        struct List_1_GhostPlayer___Fields fields;
    };

    struct GhostPlayer__Array {
        struct GhostPlayer__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GhostPlayer* vector[32];
    };

    struct IEnumerator_1_GhostPlayer_ {
        struct IEnumerator_1_GhostPlayer___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) RacesUiService__Fields {
        float m_defaultHudFadeTime;
        bool m_gameLockedByUi;
        bool m_hidingSeinUi;
        struct MessageBox* m_startPedestalBottomHint;
        bool m_showingOfflineMessage;
        struct MessageBox* m_raceLeaveHint;
    };

    struct RacesUiService {
        struct RacesUiService__Class* klass;
        MonitorData* monitor;
        struct RacesUiService__Fields fields;
    };

    struct __declspec(align(8)) RaceStateMachineContext_SequencesConfiguration__Fields {
        struct ActionMethod* OutcomeTimeout;
        struct ActionMethod* OutcomeRegular;
        struct ActionMethod* OutcomeHighScore;
        struct ActionMethod* OutcomeGlobalHighScore;
    };

    struct RaceStateMachineContext_SequencesConfiguration {
        struct RaceStateMachineContext_SequencesConfiguration__Class* klass;
        MonitorData* monitor;
        struct RaceStateMachineContext_SequencesConfiguration__Fields fields;
    };

    struct __declspec(align(8)) RaceStateMachineContext_TimelinesConfiguration__Fields {
        struct MoonTimeline* OutcomeTimeout;
        struct MoonTimeline* OutcomeRegular;
        struct MoonTimeline* OutcomeHighScore;
        struct MoonTimeline* OutcomeGlobalHighScore;
    };

    struct RaceStateMachineContext_TimelinesConfiguration {
        struct RaceStateMachineContext_TimelinesConfiguration__Class* klass;
        MonitorData* monitor;
        struct RaceStateMachineContext_TimelinesConfiguration__Fields fields;
    };

    struct __declspec(align(8)) RaceStateMachineContext_MessagesConfiguration__Fields {
        struct MessageProvider* OutcomeRegular;
        struct MessageProvider* OutcomeHighScore;
        struct MessageProvider* OutcomeGlobalHighScore;
    };

    struct RaceStateMachineContext_MessagesConfiguration {
        struct RaceStateMachineContext_MessagesConfiguration__Class* klass;
        MonitorData* monitor;
        struct RaceStateMachineContext_MessagesConfiguration__Fields fields;
    };

    struct __declspec(align(8)) List_1_MessageBox___Fields {
        struct MessageBox__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MessageBox_ {
        struct List_1_MessageBox___Class* klass;
        MonitorData* monitor;
        struct List_1_MessageBox___Fields fields;
    };

    struct IEnumerator_1_MessageBox_ {
        struct IEnumerator_1_MessageBox___Class* klass;
        MonitorData* monitor;
    };

    struct BossRaceHandler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnGhostFinished;
        VirtualInvokeData OnPlayerFinished;
        VirtualInvokeData OnRaceFinished;
        VirtualInvokeData OnRaceFailed;
        VirtualInvokeData SetRaceInProgressState;
        VirtualInvokeData IsInsideRaceArea;
        VirtualInvokeData StartMenuRace;
        VirtualInvokeData PlaceOriAtStart;
    };

    struct BossRaceHandler__StaticFields {
    };

    struct BossRaceHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossRaceHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossRaceHandler__VTable vtable;
    };

    struct ITrialData__VTable {
        VirtualInvokeData get_RaceName;
        VirtualInvokeData get_RequiredScenes;
        VirtualInvokeData get_StartLinePosition;
        VirtualInvokeData get_EndPosition;
        VirtualInvokeData get_FlythroughTimeline;
        VirtualInvokeData get_RaceSettings;
        VirtualInvokeData get_TimeLimit;
        VirtualInvokeData get_GetReadyCondition;
        VirtualInvokeData get_PostFinishCondition;
        VirtualInvokeData get_IsBeaten;
        VirtualInvokeData get_ShouldPlayEndingAnimation;
        VirtualInvokeData get_StateOverride;
        VirtualInvokeData get_DisabledAbilities;
        VirtualInvokeData get_RaceSyncables;
    };

    struct ITrialData__StaticFields {
    };

    struct ITrialData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITrialData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITrialData__VTable vtable;
    };

    struct ITrialHandler__VTable {
        VirtualInvokeData OnGhostFinished;
        VirtualInvokeData OnPlayerFinished;
        VirtualInvokeData OnRaceFinished;
        VirtualInvokeData OnRaceFailed;
        VirtualInvokeData SetRaceInProgressState;
        VirtualInvokeData IsInsideRaceArea;
        VirtualInvokeData StartMenuRace;
        VirtualInvokeData PlaceOriAtStart;
    };

    struct ITrialHandler__StaticFields {
    };

    struct ITrialHandler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ITrialHandler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ITrialHandler__VTable vtable;
    };

    struct RaceConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceConfiguration__StaticFields {
    };

    struct RaceConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceConfiguration__VTable vtable;
    };

    struct RaceLeaderboardUI_Entry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceLeaderboardUI_Entry__StaticFields {
    };

    struct RaceLeaderboardUI_Entry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceLeaderboardUI_Entry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceLeaderboardUI_Entry__VTable vtable;
    };

    struct RaceLeaderboardUI_Entry__Array__VTable {
    };

    struct RaceLeaderboardUI_Entry__Array__StaticFields {
    };

    struct RaceLeaderboardUI_Entry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceLeaderboardUI_Entry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceLeaderboardUI_Entry__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields {
    };

    struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Race_RaceLeaderboardUI_Entry___VTable vtable;
    };

    struct List_1_Moon_Race_RaceLeaderboardUI_Entry___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields {
        struct RaceLeaderboardUI_Entry__Array* _emptyArray;
    };

    struct List_1_Moon_Race_RaceLeaderboardUI_Entry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_Race_RaceLeaderboardUI_Entry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_Race_RaceLeaderboardUI_Entry___VTable vtable;
    };

    struct RaceLeaderboardUI__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceLeaderboardUI__StaticFields {
    };

    struct RaceLeaderboardUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceLeaderboardUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceLeaderboardUI__VTable vtable;
    };

    struct RaceStopReason__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct RaceStopReason__Enum__StaticFields {
    };

    struct RaceStopReason__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStopReason__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStopReason__Enum__VTable vtable;
    };

    struct GhostIndicatorManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GhostIndicatorManager__StaticFields {
    };

    struct GhostIndicatorManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GhostIndicatorManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GhostIndicatorManager__VTable vtable;
    };

    struct GhostPlayer__Array__VTable {
    };

    struct GhostPlayer__Array__StaticFields {
    };

    struct GhostPlayer__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GhostPlayer__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GhostPlayer__Array__VTable vtable;
    };

    struct IEnumerator_1_GhostPlayer___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_GhostPlayer___StaticFields {
    };

    struct IEnumerator_1_GhostPlayer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_GhostPlayer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_GhostPlayer___VTable vtable;
    };

    struct List_1_GhostPlayer___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_GhostPlayer___StaticFields {
        struct GhostPlayer__Array* _emptyArray;
    };

    struct List_1_GhostPlayer___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_GhostPlayer___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_GhostPlayer___VTable vtable;
    };

    struct FinishHandlerService__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FinishHandlerService__StaticFields {
    };

    struct FinishHandlerService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FinishHandlerService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FinishHandlerService__VTable vtable;
    };

    struct RacesUiService__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RacesUiService__StaticFields {
    };

    struct RacesUiService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RacesUiService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RacesUiService__VTable vtable;
    };

    struct RaceStateMachineContext_SequencesConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceStateMachineContext_SequencesConfiguration__StaticFields {
    };

    struct RaceStateMachineContext_SequencesConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStateMachineContext_SequencesConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStateMachineContext_SequencesConfiguration__VTable vtable;
    };

    struct RaceStateMachineContext_TimelinesConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceStateMachineContext_TimelinesConfiguration__StaticFields {
    };

    struct RaceStateMachineContext_TimelinesConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStateMachineContext_TimelinesConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStateMachineContext_TimelinesConfiguration__VTable vtable;
    };

    struct RaceStateMachineContext_MessagesConfiguration__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceStateMachineContext_MessagesConfiguration__StaticFields {
    };

    struct RaceStateMachineContext_MessagesConfiguration__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStateMachineContext_MessagesConfiguration__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStateMachineContext_MessagesConfiguration__VTable vtable;
    };

    struct IEnumerator_1_MessageBox___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_MessageBox___StaticFields {
    };

    struct IEnumerator_1_MessageBox___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_MessageBox___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_MessageBox___VTable vtable;
    };

    struct List_1_MessageBox___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Item;
        VirtualInvokeData set_Item;
        VirtualInvokeData IndexOf;
        VirtualInvokeData Insert;
        VirtualInvokeData RemoveAt;
        VirtualInvokeData get_Count;
        VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
        VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_IList_get_Item;
        VirtualInvokeData System_Collections_IList_set_Item;
        VirtualInvokeData System_Collections_IList_Add;
        VirtualInvokeData System_Collections_IList_Contains;
        VirtualInvokeData Clear_1;
        VirtualInvokeData System_Collections_IList_get_IsReadOnly;
        VirtualInvokeData System_Collections_IList_get_IsFixedSize;
        VirtualInvokeData System_Collections_IList_IndexOf;
        VirtualInvokeData System_Collections_IList_Insert;
        VirtualInvokeData System_Collections_IList_Remove;
        VirtualInvokeData RemoveAt_1;
        VirtualInvokeData System_Collections_ICollection_CopyTo;
        VirtualInvokeData get_Count_1;
        VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
        VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
        VirtualInvokeData get_Item_1;
        VirtualInvokeData get_Count_2;
    };

    struct List_1_MessageBox___StaticFields {
        struct MessageBox__Array* _emptyArray;
    };

    struct List_1_MessageBox___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_MessageBox___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_MessageBox___VTable vtable;
    };

    struct ScoreResult__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct ScoreResult__Enum__StaticFields {
    };

    struct ScoreResult__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScoreResult__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScoreResult__Enum__VTable vtable;
    };

    struct RaceStateMachineContext__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaceStateMachineContext__StaticFields {
        bool EnableOfflineRaceStorage;
        bool DebugSaveAllRacesAsOffline;
    };

    struct RaceStateMachineContext__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaceStateMachineContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaceStateMachineContext__VTable vtable;
    };

    struct __declspec(align(8)) BossRaceHandler_ChallengeFailedFade_d_15__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct BossRaceHandler* __4__this;
    };

    struct BossRaceHandler_ChallengeFailedFade_d_15 {
        struct BossRaceHandler_ChallengeFailedFade_d_15__Class* klass;
        MonitorData* monitor;
        struct BossRaceHandler_ChallengeFailedFade_d_15__Fields fields;
    };

    struct BossRaceHandler_ChallengeFailedFade_d_15__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct BossRaceHandler_ChallengeFailedFade_d_15__StaticFields {
    };

    struct BossRaceHandler_ChallengeFailedFade_d_15__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossRaceHandler_ChallengeFailedFade_d_15__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossRaceHandler_ChallengeFailedFade_d_15__VTable vtable;
    };

    struct __declspec(align(8)) BossRaceHandler_StartMenuRaceNextFrame_d_20__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct BossRaceHandler* __4__this;
    };

    struct BossRaceHandler_StartMenuRaceNextFrame_d_20 {
        struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Class* klass;
        MonitorData* monitor;
        struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Fields fields;
    };

    struct BossRaceHandler_StartMenuRaceNextFrame_d_20__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct BossRaceHandler_StartMenuRaceNextFrame_d_20__StaticFields {
    };

    struct BossRaceHandler_StartMenuRaceNextFrame_d_20__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BossRaceHandler_StartMenuRaceNextFrame_d_20__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BossRaceHandler_StartMenuRaceNextFrame_d_20__VTable vtable;
    };

    struct CancelRaceAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct CancelRaceAction {
        struct CancelRaceAction__Class* klass;
        MonitorData* monitor;
        struct CancelRaceAction__Fields fields;
    };

    struct CancelRaceAction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Serialize;
        VirtualInvokeData RegisterToSaveSceneManager;
        VirtualInvokeData Serialize_1;
        VirtualInvokeData Perform;
        VirtualInvokeData GetNiceName;
        VirtualInvokeData Perform_1;
    };

} // namespace app
