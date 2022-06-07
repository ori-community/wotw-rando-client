namespace app {
struct ScenariosRecorder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData DoStrip;
};

struct ScenariosRecorder__StaticFields {
    ScenarioRecorderState__Enum m_state;
    
    struct String *m_scenarioName;
};

struct ScenariosRecorder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ScenariosRecorder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ScenariosRecorder__VTable vtable;
};

struct GhostReplaysOverview__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_GhostReplayMetaData_ *GhostReplays;
};

struct GhostReplaysOverview {
    struct GhostReplaysOverview__Class *klass;
    MonitorData *monitor;
    struct GhostReplaysOverview__Fields fields;
};

struct GhostReplaysOverview__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GhostReplaysOverview__StaticFields {
};

struct GhostReplaysOverview__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostReplaysOverview__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostReplaysOverview__VTable vtable;
};

struct GhostReplayTimelinePreview__Fields {
    struct MonoBehaviour__Fields _;
    struct GhostReplayMetaData *GhostReplayMetaData;
};

struct GhostReplayTimelinePreview {
    struct GhostReplayTimelinePreview__Class *klass;
    MonitorData *monitor;
    struct GhostReplayTimelinePreview__Fields fields;
};

struct GhostReplayTimelinePreview__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GhostReplayTimelinePreview__StaticFields {
};

struct GhostReplayTimelinePreview__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GhostReplayTimelinePreview__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GhostReplayTimelinePreview__VTable vtable;
};

struct HealthController_c {
    struct HealthController_c__Class *klass;
    MonitorData *monitor;
};

struct HealthController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HealthController_c__StaticFields {
    struct HealthController_c *__9;
    struct Action *__9__5_0;
};

struct HealthController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HealthController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HealthController_c__VTable vtable;
};

struct __declspec(align(8)) OrbSpawnerSettingsOverride__Fields {
    bool OverrideHorizontalSpeedCurve;
    struct AnimationCurve *HorizontalSpeedCurve;
    bool OverrideVerticalSpeedCurve;
    struct AnimationCurve *VerticalSpeedCurve;
    bool OverrideGravity;
    struct Vector3 GravityOverride;
    bool OverrideInitialDropPickupState;
    DropPickup_State__Enum InitialDropPickupState;
    
};

struct OrbSpawnerSettingsOverride {
    struct OrbSpawnerSettingsOverride__Class *klass;
    MonitorData *monitor;
    struct OrbSpawnerSettingsOverride__Fields fields;
};

struct OrbSpawnerSettingsOverride__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OrbSpawnerSettingsOverride__StaticFields {
};

struct OrbSpawnerSettingsOverride__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrbSpawnerSettingsOverride__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrbSpawnerSettingsOverride__VTable vtable;
};

struct __declspec(align(8)) SpawnOrbsContext__Fields {
    bool SpawnFromEnemy;
};

struct SpawnOrbsContext {
    struct SpawnOrbsContext__Class *klass;
    MonitorData *monitor;
    struct SpawnOrbsContext__Fields fields;
};

struct SpawnOrbsContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SpawnOrbsContext__StaticFields {
};

struct SpawnOrbsContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpawnOrbsContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpawnOrbsContext__VTable vtable;
};

enum class OrbSpawnerManager_ItemType__Enum : int32_t {
    SmallExpOrb = 0x00000000,
    MediumExpOrb = 0x00000001,
    LargeExpOrb = 0x00000002,
    Deprecated = 0x00000003,
    Energy = 0x00000004,
    Health = 0x00000005,
};

struct OrbSpawnerManager_ItemType__Enum__Boxed {
    struct OrbSpawnerManager_ItemType__Enum__Class *klass;
    MonitorData *monitor;
    OrbSpawnerManager_ItemType__Enum value;
    
};

struct OrbSpawnerManager_ItemType__Enum__VTable {
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

struct OrbSpawnerManager_ItemType__Enum__StaticFields {
};

struct OrbSpawnerManager_ItemType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrbSpawnerManager_ItemType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrbSpawnerManager_ItemType__Enum__VTable vtable;
};

struct OrbSpawnerManager__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *SmallExpOrb;
    struct GameObject *MediumExpOrb;
    struct GameObject *LargeExpOrb;
    struct GameObject *EnergyPickup;
    struct GameObject *HealthPickup;
    struct OrbSpawnerSettingsOverride *GlobalEnemySettings;
    int32_t m_smallOrbXPAmount;
    int32_t m_mediumOrbXPAmount;
    int32_t m_largeOrbXPAmount;
    struct Queue_1_OrbSpawnerManager_ItemToSpawn_ *Items;
};

struct OrbSpawnerManager {
    struct OrbSpawnerManager__Class *klass;
    MonitorData *monitor;
    struct OrbSpawnerManager__Fields fields;
};

struct __declspec(align(8)) Queue_1_OrbSpawnerManager_ItemToSpawn___Fields {
    struct OrbSpawnerManager_ItemToSpawn__Array *_array;
    int32_t _head;
    int32_t _tail;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Queue_1_OrbSpawnerManager_ItemToSpawn_ {
    struct Queue_1_OrbSpawnerManager_ItemToSpawn___Class *klass;
    MonitorData *monitor;
    struct Queue_1_OrbSpawnerManager_ItemToSpawn___Fields fields;
};

struct OrbSpawnerManager_ItemToSpawn {
    OrbSpawnerManager_ItemType__Enum ItemType;
    
    struct Vector2 Position;
    struct Vector2 Velocity;
    DropPickup_State__Enum InitialState;
    
    bool OverrideGravity;
    struct Vector3 GravityOverride;
    struct Transform *TransformSource;
    int32_t OverrideValue;
};

struct OrbSpawnerManager_ItemToSpawn__Boxed {
    struct OrbSpawnerManager_ItemToSpawn__Class *klass;
    MonitorData *monitor;
    struct OrbSpawnerManager_ItemToSpawn fields;
};

struct OrbSpawnerManager_ItemToSpawn__Array {
    struct OrbSpawnerManager_ItemToSpawn__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct OrbSpawnerManager_ItemToSpawn vector[32];
};

struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn_ {
    struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___Class *klass;
    MonitorData *monitor;
};

struct OrbSpawnerManager_ItemToSpawn__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OrbSpawnerManager_ItemToSpawn__StaticFields {
};

struct OrbSpawnerManager_ItemToSpawn__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrbSpawnerManager_ItemToSpawn__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrbSpawnerManager_ItemToSpawn__VTable vtable;
};

struct OrbSpawnerManager_ItemToSpawn__Array__VTable {
};

struct OrbSpawnerManager_ItemToSpawn__Array__StaticFields {
};

struct OrbSpawnerManager_ItemToSpawn__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrbSpawnerManager_ItemToSpawn__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrbSpawnerManager_ItemToSpawn__Array__VTable vtable;
};

struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___StaticFields {
};

struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_OrbSpawnerManager_ItemToSpawn___VTable vtable;
};

struct Queue_1_OrbSpawnerManager_ItemToSpawn___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_1;
};

struct Queue_1_OrbSpawnerManager_ItemToSpawn___StaticFields {
};

struct Queue_1_OrbSpawnerManager_ItemToSpawn___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Queue_1_OrbSpawnerManager_ItemToSpawn___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Queue_1_OrbSpawnerManager_ItemToSpawn___VTable vtable;
};

struct OrbSpawnerManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OrbSpawnerManager__StaticFields {
    struct OrbSpawnerManager *Instance;
};

struct OrbSpawnerManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OrbSpawnerManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OrbSpawnerManager__VTable vtable;
};

struct SpawnOrbsAction__Fields {
    struct ActionMethod__Fields _;
    struct OrbSpawner *OrbSpawner;
};

struct SpawnOrbsAction {
    struct SpawnOrbsAction__Class *klass;
    MonitorData *monitor;
    struct SpawnOrbsAction__Fields fields;
};

struct SpawnOrbsAction__VTable {
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

struct SpawnOrbsAction__StaticFields {
};

struct SpawnOrbsAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpawnOrbsAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpawnOrbsAction__VTable vtable;
};

struct HoloLensController__Fields {
    struct MonoBehaviour__Fields _;
    float m_writeTelemetryTimer;
    int64_t m_updateID;
    struct IAsyncResult *m_IAsyncResult;
    int32_t m_fileCount;
};

struct HoloLensController {
    struct HoloLensController__Class *klass;
    MonitorData *monitor;
    struct HoloLensController__Fields fields;
};

struct HoloLensController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HoloLensController__StaticFields {
    struct String *OUTPUT_FOLDER;
    struct String *TELEMETRY_FILE_NAME;
};

struct HoloLensController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HoloLensController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HoloLensController__VTable vtable;
};

struct __declspec(align(8)) HoloLensFileWriteState__Fields {
    struct FileStream *_Stream_k__BackingField;
};

struct HoloLensFileWriteState {
    struct HoloLensFileWriteState__Class *klass;
    MonitorData *monitor;
    struct HoloLensFileWriteState__Fields fields;
};

struct HoloLensFileWriteState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct HoloLensFileWriteState__StaticFields {
};

struct HoloLensFileWriteState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HoloLensFileWriteState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HoloLensFileWriteState__VTable vtable;
};

struct __declspec(align(8)) UserLicenseInformation__Fields {
    bool m_isActive;
    bool m_isTrial;
};

struct UserLicenseInformation {
    struct UserLicenseInformation__Class *klass;
    MonitorData *monitor;
    struct UserLicenseInformation__Fields fields;
};

struct UserLicenseInformation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UserLicenseInformation__StaticFields {
    struct UserLicenseInformation *Instance;
};

struct UserLicenseInformation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserLicenseInformation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserLicenseInformation__VTable vtable;
};

struct LoreNodeWisps__Fields {
    struct InteractionNode__Fields _;
    struct MoonTimeline *TalkTimeline;
    struct List_1_LoreNodeWisps_LoreStep_ *Steps;
    int32_t m_retalkCounter;
    struct MoonTimeline *m_currentTimeline;
    int32_t m_updatedUberState;
};

struct LoreNodeWisps {
    struct LoreNodeWisps__Class *klass;
    MonitorData *monitor;
    struct LoreNodeWisps__Fields fields;
};

struct __declspec(align(8)) List_1_LoreNodeWisps_LoreStep___Fields {
    struct LoreNodeWisps_LoreStep__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LoreNodeWisps_LoreStep_ {
    struct List_1_LoreNodeWisps_LoreStep___Class *klass;
    MonitorData *monitor;
    struct List_1_LoreNodeWisps_LoreStep___Fields fields;
};

struct __declspec(align(8)) LoreNodeWisps_LoreStep__Fields {
    struct List_1_MessageProvider_ *RetalkMessages;
    struct MessageProvider *IntroMessage;
    struct Condition_1 *CanPlay;
    struct SerializedBooleanUberState *PlayedOutIntro;
};

struct LoreNodeWisps_LoreStep {
    struct LoreNodeWisps_LoreStep__Class *klass;
    MonitorData *monitor;
    struct LoreNodeWisps_LoreStep__Fields fields;
};

struct LoreNodeWisps_LoreStep__Array {
    struct LoreNodeWisps_LoreStep__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LoreNodeWisps_LoreStep *vector[32];
};

struct IEnumerator_1_LoreNodeWisps_LoreStep_ {
    struct IEnumerator_1_LoreNodeWisps_LoreStep___Class *klass;
    MonitorData *monitor;
};

struct LoreNodeWisps_LoreStep__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LoreNodeWisps_LoreStep__StaticFields {
};

struct LoreNodeWisps_LoreStep__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoreNodeWisps_LoreStep__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoreNodeWisps_LoreStep__VTable vtable;
};

struct LoreNodeWisps_LoreStep__Array__VTable {
};

struct LoreNodeWisps_LoreStep__Array__StaticFields {
};

struct LoreNodeWisps_LoreStep__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoreNodeWisps_LoreStep__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoreNodeWisps_LoreStep__Array__VTable vtable;
};

struct IEnumerator_1_LoreNodeWisps_LoreStep___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LoreNodeWisps_LoreStep___StaticFields {
};

struct IEnumerator_1_LoreNodeWisps_LoreStep___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LoreNodeWisps_LoreStep___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LoreNodeWisps_LoreStep___VTable vtable;
};

struct List_1_LoreNodeWisps_LoreStep___VTable {
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

struct List_1_LoreNodeWisps_LoreStep___StaticFields {
    struct LoreNodeWisps_LoreStep__Array *_emptyArray;
};

struct List_1_LoreNodeWisps_LoreStep___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LoreNodeWisps_LoreStep___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LoreNodeWisps_LoreStep___VTable vtable;
};

struct LoreNodeWisps__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_InteractionNodeStatus;
    VirtualInvokeData get_InteractionSettings;
    VirtualInvokeData get_HasInputTransitions;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_OnActivated;
    VirtualInvokeData set_OnActivated;
    VirtualInvokeData get_OnFinished;
    VirtualInvokeData set_OnFinished;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData get_CurrentLine;
};

struct LoreNodeWisps__StaticFields {
    struct LoreNodeWisps *Instance;
};

struct LoreNodeWisps__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LoreNodeWisps__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LoreNodeWisps__VTable vtable;
};

struct QuestNodeWisps__Fields {
    struct InteractionNode__Fields _;
    struct QuestNodeSetup *QuestSetup;
    struct MoonTimeline *_IntroTimeline_k__BackingField;
    struct MoonTimeline *_TalkTimeline_k__BackingField;
    struct MoonTimeline *_RewardTimeline_k__BackingField;
    struct NPCEventTriggerAnimator *_ShowRewardTrigger_k__BackingField;
    struct NPCEventTriggerAnimator *_ThrowRewardTrigger_k__BackingField;
    struct NPCEventTriggerAnimator *_CollectRewardTrigger_k__BackingField;
    struct NPCEntity *_NpcEntity_k__BackingField;
    struct MoonTimeline *m_currentTimeline;
    struct QuestNodeSetup_QuestInteractionSetup *m_currentQuestInteractionSetup;
    struct QuestNodeSetup_QuestInteractionSet *m_currentQuestInteractionSet;
    struct QuestNodeSetup_QuestInteraction *m_currentQuestInteraction;
    bool m_hasReward;
    struct QuestReward *m_selectedQuestReward;
    struct QuestNodeSetup_QuestInteractionSetup *m_selectedQuestInteractionSetup;
    struct QuestNodeSetup_QuestInteraction *m_selectedQuestInteraction;
    struct QuestNodeSetup_QuestInteraction *m_previousQuestInteraction;
    bool m_waitingForRewardMessage;
};

struct QuestNodeWisps {
    struct QuestNodeWisps__Class *klass;
    MonitorData *monitor;
    struct QuestNodeWisps__Fields fields;
};

enum class NPCEventType__Enum : int32_t {
    ShowReward = 0x00000000,
    ThrowReward = 0x00000001,
    CollectReward = 0x00000002,
};

struct NPCEventType__Enum__Boxed {
    struct NPCEventType__Enum__Class *klass;
    MonitorData *monitor;
    NPCEventType__Enum value;
    
};

struct NPCEventTriggerAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    NPCEventType__Enum EventType;
    
};

struct NPCEventTriggerAnimator {
    struct NPCEventTriggerAnimator__Class *klass;
    MonitorData *monitor;
    struct NPCEventTriggerAnimator__Fields fields;
};

struct NPCEventType__Enum__VTable {
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

struct NPCEventType__Enum__StaticFields {
};

struct NPCEventType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NPCEventType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NPCEventType__Enum__VTable vtable;
};

struct NPCEventTriggerAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData get_IsOn;
    VirtualInvokeData Validate;
};

struct NPCEventTriggerAnimator__StaticFields {
};

struct NPCEventTriggerAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NPCEventTriggerAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NPCEventTriggerAnimator__VTable vtable;
};

struct QuestNodeWisps__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_InteractionNodeStatus;
    VirtualInvokeData get_InteractionSettings;
    VirtualInvokeData get_HasInputTransitions;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_OnActivated;
    VirtualInvokeData set_OnActivated;
    VirtualInvokeData get_OnFinished;
    VirtualInvokeData set_OnFinished;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
    VirtualInvokeData get_CurrentLine;
};

struct QuestNodeWisps__StaticFields {
    struct QuestNodeWisps *Instance;
};

struct QuestNodeWisps__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct QuestNodeWisps__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct QuestNodeWisps__VTable vtable;
};

struct UiNodeWisps__Fields {
    struct InteractionNode__Fields _;
    bool Pause;
    MenuScreenManager_Screens__Enum Screen;
    
};

struct UiNodeWisps {
    struct UiNodeWisps__Class *klass;
    MonitorData *monitor;
    struct UiNodeWisps__Fields fields;
};

struct UiNodeWisps__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Initialize;
    VirtualInvokeData get_Actor;
    VirtualInvokeData get_Transitions;
    VirtualInvokeData get_Decorators;
    VirtualInvokeData get_InteractionNodeStatus;
    VirtualInvokeData get_InteractionSettings;
    VirtualInvokeData get_HasInputTransitions;
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
    VirtualInvokeData get_OnActivated;
    VirtualInvokeData set_OnActivated;
    VirtualInvokeData get_OnFinished;
    VirtualInvokeData set_OnFinished;
    VirtualInvokeData Initialize_1;
    VirtualInvokeData UpdateState_1;
    VirtualInvokeData OnEnter_1;
    VirtualInvokeData OnExit_1;
};

struct UiNodeWisps__StaticFields {
};

struct UiNodeWisps__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UiNodeWisps__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UiNodeWisps__VTable vtable;
};

struct AbilityUpgradeSettings__Fields {
    struct MonoBehaviour__Fields _;
    float IncreasePercentPerLevel;
    struct MessageProvider *AlreadyOwnedText;
    struct List_1_UpgradableAbility_ *Abilities;
    struct Dictionary_2_AbilityType_UpgradableAbility_ *m_abilities;
};

struct AbilityUpgradeSettings {
    struct AbilityUpgradeSettings__Class *klass;
    MonitorData *monitor;
    struct AbilityUpgradeSettings__Fields fields;
};

struct __declspec(align(8)) List_1_UpgradableAbility___Fields {
    struct UpgradableAbility__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UpgradableAbility_ {
    struct List_1_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct List_1_UpgradableAbility___Fields fields;
};

struct __declspec(align(8)) UpgradableAbility__Fields {
    AbilityType__Enum AbilityType;
    
    struct List_1_UpgradablePropertyLevel_ *UpgradablePropertyLevels;
};

struct UpgradableAbility {
    struct UpgradableAbility__Class *klass;
    MonitorData *monitor;
    struct UpgradableAbility__Fields fields;
};

struct __declspec(align(8)) List_1_UpgradablePropertyLevel___Fields {
    struct UpgradablePropertyLevel__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

}
