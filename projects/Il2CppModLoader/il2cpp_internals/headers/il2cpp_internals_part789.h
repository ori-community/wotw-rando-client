namespace app {
struct PostStateDefinition_PostState__Array {
  struct PostStateDefinition_PostState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PostStateDefinition_PostState * vector[32];
};
struct IEnumerator_1_PostStateDefinition_PostState_ {
  struct IEnumerator_1_PostStateDefinition_PostState___Class *klass;
  struct MonitorData *monitor;
};
struct PostStateDefinition_PostState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_SceneRoot;
  VirtualInvokeData get_Settings;
  VirtualInvokeData get_Weight;
  VirtualInvokeData get_PostInfluenceApplyOrder;
  VirtualInvokeData get_SettingsAssetForDebug;
};
struct PostStateDefinition_PostState__StaticFields {
};
struct PostStateDefinition_PostState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PostStateDefinition_PostState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PostStateDefinition_PostState__VTable vtable;
};
struct IEnumerator_1_PostStateDefinition_PostState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_PostStateDefinition_PostState___StaticFields {
};
struct IEnumerator_1_PostStateDefinition_PostState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_PostStateDefinition_PostState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_PostStateDefinition_PostState___VTable vtable;
};
struct List_1_PostStateDefinition_PostState___VTable {
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
struct List_1_PostStateDefinition_PostState___StaticFields {
  struct PostStateDefinition_PostState__Array * _emptyArray;
};
struct List_1_PostStateDefinition_PostState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_PostStateDefinition_PostState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_PostStateDefinition_PostState___VTable vtable;
};
struct PostStateDefinition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ApplyKnownState;
  VirtualInvokeData GetStateName;
  VirtualInvokeData GetAllStateGUIDs;
  VirtualInvokeData HasStateGUID;
  VirtualInvokeData get_IsPassiveStateDescriptorValid;
  VirtualInvokeData get_CurrentPassiveStateApplied;
  VirtualInvokeData get_FallbackPassiveState;
};
struct PostStateDefinition__StaticFields {
};
struct PostStateDefinition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PostStateDefinition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PostStateDefinition__VTable vtable;
};

struct PreserveParticleDampening__Fields {
  struct MonoBehaviour__Fields _;
};
struct PreserveParticleDampening {
  struct PreserveParticleDampening__Class *klass;
  struct MonitorData *monitor;
  struct PreserveParticleDampening__Fields fields;
};
struct PreserveParticleDampening__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PreserveParticleDampening__StaticFields {
};
struct PreserveParticleDampening__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreserveParticleDampening__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreserveParticleDampening__VTable vtable;
};

struct RandomAnimationPlayer__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * m_spriteAnimator;
  float m_time;
  struct RandomAnimationPlayer_WeightedAnimation__Array * Animations;
  float m_totalWeight;
};
struct RandomAnimationPlayer {
  struct RandomAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct RandomAnimationPlayer__Fields fields;
};
struct __declspec(align(8)) RandomAnimationPlayer_WeightedAnimation__Fields {
  struct TextureAnimation * Animation;
  float Weight;
};
struct RandomAnimationPlayer_WeightedAnimation {
  struct RandomAnimationPlayer_WeightedAnimation__Class *klass;
  struct MonitorData *monitor;
  struct RandomAnimationPlayer_WeightedAnimation__Fields fields;
};
struct RandomAnimationPlayer_WeightedAnimation__Array {
  struct RandomAnimationPlayer_WeightedAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RandomAnimationPlayer_WeightedAnimation * vector[32];
};
struct RandomAnimationPlayer_WeightedAnimation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RandomAnimationPlayer_WeightedAnimation__StaticFields {
};
struct RandomAnimationPlayer_WeightedAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RandomAnimationPlayer_WeightedAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RandomAnimationPlayer_WeightedAnimation__VTable vtable;
};
struct RandomAnimationPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RandomAnimationPlayer__StaticFields {
};
struct RandomAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RandomAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RandomAnimationPlayer__VTable vtable;
};

struct RenameBasedOnText__Fields {
  struct MonoBehaviour__Fields _;
  struct TextMesh * m_textMesh;
  struct String * m_lastText;
};
struct RenameBasedOnText {
  struct RenameBasedOnText__Class *klass;
  struct MonitorData *monitor;
  struct RenameBasedOnText__Fields fields;
};
struct RenameBasedOnText__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RenameBasedOnText__StaticFields {
};
struct RenameBasedOnText__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RenameBasedOnText__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RenameBasedOnText__VTable vtable;
};

struct ResetTriggerOnCheckpoint__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTrigger * m_trigger;
};
struct ResetTriggerOnCheckpoint {
  struct ResetTriggerOnCheckpoint__Class *klass;
  struct MonitorData *monitor;
  struct ResetTriggerOnCheckpoint__Fields fields;
};
struct ResetTriggerOnCheckpoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ResetTriggerOnCheckpoint__StaticFields {
};
struct ResetTriggerOnCheckpoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ResetTriggerOnCheckpoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ResetTriggerOnCheckpoint__VTable vtable;
};

struct __declspec(align(8)) RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Fields {
  int32_t __1__state;
  struct Object * __2__current;
};
struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1 {
  struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class *klass;
  struct MonitorData *monitor;
  struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Fields fields;
};
struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__VTable {
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
struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__StaticFields {
};
struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RestoreCheckpointController_MoveCameraInstantlyAgain_d_1__VTable vtable;
};

struct RotateRoomAction__Fields {
  struct ActionMethod__Fields _;
  float TurnSpeed;
  float Degrees;
  struct RotatingRoomController * Room;
};
struct RotateRoomAction {
  struct RotateRoomAction__Class *klass;
  struct MonitorData *monitor;
  struct RotateRoomAction__Fields fields;
};
struct RotatingRoomController__Fields {
  struct SaveSerialize__Fields _;
  float TurnSpeed;
  float AngleTarget;
  float m_currentAngle;
};
struct RotatingRoomController {
  struct RotatingRoomController__Class *klass;
  struct MonitorData *monitor;
  struct RotatingRoomController__Fields fields;
};
struct RotatingRoomController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct RotatingRoomController__StaticFields {
};
struct RotatingRoomController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotatingRoomController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotatingRoomController__VTable vtable;
};
struct RotateRoomAction__VTable {
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
struct RotateRoomAction__StaticFields {
};
struct RotateRoomAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotateRoomAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotateRoomAction__VTable vtable;
};

struct RotateToPlayerInput__Fields {
  struct MonoBehaviour__Fields _;
  struct PlayerInput * PlayerInput;
};
struct RotateToPlayerInput {
  struct RotateToPlayerInput__Class *klass;
  struct MonitorData *monitor;
  struct RotateToPlayerInput__Fields fields;
};
struct RotateToPlayerInput__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RotateToPlayerInput__StaticFields {
};
struct RotateToPlayerInput__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotateToPlayerInput__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotateToPlayerInput__VTable vtable;
};

struct __declspec(align(8)) SaveFileInfo__Fields {
  struct String * m_folderPath;
  struct String * m_fileName;
  struct String * m_backupFileName;
  int32_t m_slotIndex;
  int32_t m_backupSlotIndex;
  struct String * m_FullSaveFilePath;
  struct String * m_FullBackupSaveFilePath;
};
struct SaveFileInfo {
  struct SaveFileInfo__Class *klass;
  struct MonitorData *monitor;
  struct SaveFileInfo__Fields fields;
};
struct SaveFileInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveFileInfo__StaticFields {
};
struct SaveFileInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveFileInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveFileInfo__VTable vtable;
};

struct SaveSystemDebuger {
  struct SaveSystemDebuger__Class *klass;
  struct MonitorData *monitor;
};
struct SaveSystemDebuger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SaveSystemDebuger__StaticFields {
  bool _SaveSystemDebugEnabled_k__BackingField;
  struct List_1_System_String_ * m_saveControllerLog;
  float m_timer;
};
struct SaveSystemDebuger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SaveSystemDebuger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SaveSystemDebuger__VTable vtable;
};

struct SeinPositionAndDirectionTracker__Fields {
  struct MonoBehaviour__Fields _;
  float SpeedSmoothingFactor;
  float SpeedLimit;
  float SeinColorHighlightFactor;
  struct Vector3 m_smoothSpeed;
  float m_currentSeinSpeed;
  float m_currentDirection;
};
struct SeinPositionAndDirectionTracker {
  struct SeinPositionAndDirectionTracker__Class *klass;
  struct MonitorData *monitor;
  struct SeinPositionAndDirectionTracker__Fields fields;
};
struct SeinPositionAndDirectionTracker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinPositionAndDirectionTracker__StaticFields {
};
struct SeinPositionAndDirectionTracker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinPositionAndDirectionTracker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinPositionAndDirectionTracker__VTable vtable;
};

struct SeinWorldState__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * ForlornRuinsKey;
  struct SerializedBooleanUberState * GinsoTreeKey;
  struct SerializedBooleanUberState * MountHoruKey;
  struct SerializedBooleanUberState * WaterPurified;
  struct SerializedBooleanUberState * WarmthReturned;
  struct SerializedBooleanUberState * GinsoTreeEntered;
  struct SerializedBooleanUberState * MistLifted;
  struct SerializedBooleanUberState * WindRestored;
  struct SerializedBooleanUberState * GumoFree;
  struct SerializedBooleanUberState * GravityActivated;
  struct SerializedBooleanUberState * SpiritTreeReached;
  struct SerializedBooleanUberState * DarknessLifted;
  struct SerializedBooleanUberState * KwolokDead;
  struct SerializedIntUberState * FindKuQuest;
  struct SerializedIntUberState * WatermillQuest;
  struct SerializedIntUberState * KwolokNpc;
  struct SerializedBooleanUberState * SwampIntroVignetteFinished;
  struct SerializedIntUberState * TheElderQuest;
  struct SerializedIntUberState * MouldwoodWispQuest;
  struct SerializedIntUberState * LagoonWispQuest;
  struct SerializedIntUberState * DesertWispQuest;
  struct SerializedIntUberState * WinterForestWispQuest;
  struct SerializedIntUberState * BaurNpc;
  struct IUberState__Array * m_affectingUberStates;
};
struct SeinWorldState {
  struct SeinWorldState__Class *klass;
  struct MonitorData *monitor;
  struct SeinWorldState__Fields fields;
};
struct SeinWorldState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct SeinWorldState__StaticFields {
  struct SeinWorldState * Instance;
};
struct SeinWorldState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWorldState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWorldState__VTable vtable;
};

enum WorldState__Enum : int32_t {
  WorldState__Enum_WaterPurified = 0,
  WorldState__Enum_GumoFree = 1,
  WorldState__Enum_SpiritTreeReached = 2,
  WorldState__Enum_GinsoTreeKey = 3,
  WorldState__Enum_GinsoTreeEntered = 5,
  WorldState__Enum_WindRestored = 7,
  WorldState__Enum_GravityActivated = 8,
  WorldState__Enum_MistLifted = 9,
  WorldState__Enum_ForlornRuinsKey = 10,
  WorldState__Enum_MountHoruKey = 11,
  WorldState__Enum_WarmthReturned = 12,
  WorldState__Enum_DarknessLifted = 13,
  WorldState__Enum_KwolokDead = 14,
};
struct WorldState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WorldState__Enum value;
};
struct SeinWorldStateCondition__Fields {
  struct Condition_1__Fields _;
  enum WorldState__Enum State;
  bool IsTrue;
};
struct SeinWorldStateCondition {
  struct SeinWorldStateCondition__Class *klass;
  struct MonitorData *monitor;
  struct SeinWorldStateCondition__Fields fields;
};
struct SeinWorldStateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct SeinWorldStateCondition__StaticFields {
};
struct SeinWorldStateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinWorldStateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinWorldStateCondition__VTable vtable;
};

struct SetSeinWorldStateAction__Fields {
  struct ActionMethod__Fields _;
  enum WorldState__Enum State;
  bool IsTrue;
};
struct SetSeinWorldStateAction {
  struct SetSeinWorldStateAction__Class *klass;
  struct MonitorData *monitor;
  struct SetSeinWorldStateAction__Fields fields;
};
struct SetSeinWorldStateAction__VTable {
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
struct SetSeinWorldStateAction__StaticFields {
};
struct SetSeinWorldStateAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetSeinWorldStateAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetSeinWorldStateAction__VTable vtable;
};

struct SetupGameplayOnTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct EventTriggerAnimator * SetupGameplayEventTrigger;
};
struct SetupGameplayOnTrigger {
  struct SetupGameplayOnTrigger__Class *klass;
  struct MonitorData *monitor;
  struct SetupGameplayOnTrigger__Fields fields;
};
struct SetupGameplayOnTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetupGameplayOnTrigger__StaticFields {
};
struct SetupGameplayOnTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetupGameplayOnTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetupGameplayOnTrigger__VTable vtable;
};

struct SpecialAbilityZone__Fields {
  struct MonoBehaviour__Fields _;
  bool m_inside;
  struct Rect m_bounds;
  bool IsRainbowZone;
};
struct SpecialAbilityZone {
  struct SpecialAbilityZone__Class *klass;
  struct MonitorData *monitor;
  struct SpecialAbilityZone__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_SpecialAbilityZone___Fields {
  struct List_1_SpecialAbilityZone_ * m_objects;
};
struct AllContainer_1_SpecialAbilityZone_ {
  struct AllContainer_1_SpecialAbilityZone___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_SpecialAbilityZone___Fields fields;
};
struct __declspec(align(8)) List_1_SpecialAbilityZone___Fields {
  struct SpecialAbilityZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpecialAbilityZone_ {
  struct List_1_SpecialAbilityZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpecialAbilityZone___Fields fields;
};
struct SpecialAbilityZone__Array {
  struct SpecialAbilityZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpecialAbilityZone * vector[32];
};
struct IEnumerator_1_SpecialAbilityZone_ {
  struct IEnumerator_1_SpecialAbilityZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SpecialAbilityZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpecialAbilityZone___StaticFields {
};
struct IEnumerator_1_SpecialAbilityZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpecialAbilityZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpecialAbilityZone___VTable vtable;
};
struct List_1_SpecialAbilityZone___VTable {
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
struct List_1_SpecialAbilityZone___StaticFields {
  struct SpecialAbilityZone__Array * _emptyArray;
};
struct List_1_SpecialAbilityZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpecialAbilityZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpecialAbilityZone___VTable vtable;
};
struct AllContainer_1_SpecialAbilityZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_SpecialAbilityZone___StaticFields {
};
struct AllContainer_1_SpecialAbilityZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_SpecialAbilityZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_SpecialAbilityZone___VTable vtable;
};
struct SpecialAbilityZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpecialAbilityZone__StaticFields {
  struct AllContainer_1_SpecialAbilityZone_ * All;
};
struct SpecialAbilityZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpecialAbilityZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpecialAbilityZone__VTable vtable;
};

struct SpeedBasedEmissionRateMultiplier__Fields {
  struct MonoBehaviour__Fields _;
  float SpeedToEmissionRelation;
  float MinRatio;
  float MaxRatio;
  float MaxAllowedSpeedOverAFrame;
  float EmissionBoostAfterUnhalt;
  struct Vector3 m_previousPosition;
  float m_originalMinEmission;
  float m_originalMaxEmission;
  float m_origianlEmission;
  struct ParticleSystem * m_particleSystem;
  bool m_shouldHaltEmission;
  float m_emissionRateBumpMultiplier;
};
struct SpeedBasedEmissionRateMultiplier {
  struct SpeedBasedEmissionRateMultiplier__Class *klass;
  struct MonitorData *monitor;
  struct SpeedBasedEmissionRateMultiplier__Fields fields;
};
struct SpeedBasedEmissionRateMultiplier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct SpeedBasedEmissionRateMultiplier__StaticFields {
};
struct SpeedBasedEmissionRateMultiplier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpeedBasedEmissionRateMultiplier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpeedBasedEmissionRateMultiplier__VTable vtable;
};

struct StateCondition__Fields {
  struct Condition_1__Fields _;
  struct StateCondition_StateConditionSetupHolder * Condition;
  struct DesiredUberStateComposite * DesiredState;
  bool m_evaluatedAtLeastOnce;
  bool m_validateResult;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct StateCondition {
  struct StateCondition__Class *klass;
  struct MonitorData *monitor;
  struct StateCondition__Fields fields;
};
struct StateHolder_1_StateCondition_StateConditionSetupData___Fields {
  struct StateHolder__Fields _;
  struct List_1_StateCondition_StateConditionSetupData_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_StateCondition_StateConditionSetupData_ {
  struct StateHolder_1_StateCondition_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_StateCondition_StateConditionSetupData___Fields fields;
};
struct StateCondition_StateConditionSetupHolder__Fields {
  struct StateHolder_1_StateCondition_StateConditionSetupData___Fields _;
};
struct StateCondition_StateConditionSetupHolder {
  struct StateCondition_StateConditionSetupHolder__Class *klass;
  struct MonitorData *monitor;
  struct StateCondition_StateConditionSetupHolder__Fields fields;
};
struct __declspec(align(8)) List_1_StateCondition_StateConditionSetupData___Fields {
  struct StateCondition_StateConditionSetupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_StateCondition_StateConditionSetupData_ {
  struct List_1_StateCondition_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_StateCondition_StateConditionSetupData___Fields fields;
};
struct StateCondition_StateConditionSetupData {
  struct StateCondition_StateConditionSetupData__Class *klass;
  struct MonitorData *monitor;
};
struct StateCondition_StateConditionSetupData__Array {
  struct StateCondition_StateConditionSetupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StateCondition_StateConditionSetupData * vector[32];
};
struct IEnumerator_1_StateCondition_StateConditionSetupData_ {
  struct IEnumerator_1_StateCondition_StateConditionSetupData___Class *klass;
  struct MonitorData *monitor;
};
struct StateCondition_StateConditionSetupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StateCondition_StateConditionSetupData__StaticFields {
};
struct StateCondition_StateConditionSetupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateCondition_StateConditionSetupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateCondition_StateConditionSetupData__VTable vtable;
};
struct IEnumerator_1_StateCondition_StateConditionSetupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_StateCondition_StateConditionSetupData___StaticFields {
};
struct IEnumerator_1_StateCondition_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_StateCondition_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_StateCondition_StateConditionSetupData___VTable vtable;
};
struct List_1_StateCondition_StateConditionSetupData___VTable {
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
struct List_1_StateCondition_StateConditionSetupData___StaticFields {
  struct StateCondition_StateConditionSetupData__Array * _emptyArray;
};
struct List_1_StateCondition_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_StateCondition_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_StateCondition_StateConditionSetupData___VTable vtable;
};
struct StateHolder_1_StateCondition_StateConditionSetupData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateHolder_1_StateCondition_StateConditionSetupData___StaticFields {
};
struct StateHolder_1_StateCondition_StateConditionSetupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_StateCondition_StateConditionSetupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_StateCondition_StateConditionSetupData___VTable vtable;
};
struct StateCondition_StateConditionSetupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
  VirtualInvokeData CacheSetupStates;
};
struct StateCondition_StateConditionSetupHolder__StaticFields {
};
struct StateCondition_StateConditionSetupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateCondition_StateConditionSetupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateCondition_StateConditionSetupHolder__VTable vtable;
};
struct StateCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
};
struct StateCondition__StaticFields {
};
struct StateCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateCondition__VTable vtable;
};}