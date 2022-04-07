namespace app {
struct KuAbilities {
  struct KuAbilities__Class *klass;
  struct MonitorData *monitor;
  struct KuAbilities__Fields fields;
};
struct KuIdle__Fields {
  struct KuState__Fields _;
  struct MoonAnimation * IdleAnimation;
  struct FloatAnimationParameter * IdleVerticalParameter;
  float m_lastYPos;
  float m_lastDeltaY;
  float m_accelerationY;
  float m_verticalHandlingDelay;
};
struct KuIdle {
  struct KuIdle__Class *klass;
  struct MonitorData *monitor;
  struct KuIdle__Fields fields;
};
struct KuFall__Fields {
  struct KuState__Fields _;
  struct MoonAnimation * FallBlendAnimation;
  struct FloatAnimationParameter * FallBlendParameter;
  struct CharacterTimelineTurning * FallTurning;
  struct CharacterTimelineTurning * FallIdleTurning;
  struct CharacterTimelineTurning * m_currentTurning;
  bool _WantsToFaceLeft_k__BackingField;
};
struct KuFall {
  struct KuFall__Class *klass;
  struct MonitorData *monitor;
  struct KuFall__Fields fields;
};
struct __declspec(align(8)) CharacterTimelineTurning__Fields {
  struct GenericPuppet * Puppet;
  struct MoonTimeline * TurningAnimation;
  struct EventTriggerAnimator * FlipTrigger;
  struct EventTriggerAnimator * CancellableWindow;
  struct Action * m_onStopEvent;
  bool m_faceLeft;
  struct ICharacter * m_character;
  bool m_isDone;
};
struct CharacterTimelineTurning {
  struct CharacterTimelineTurning__Class *klass;
  struct MonitorData *monitor;
  struct CharacterTimelineTurning__Fields fields;
};
struct GenericPuppet__Fields {
  struct MonoBehaviour__Fields _;
  struct IPuppetBase * m_puppetMaster;
  bool m_isLive;
  struct GhostGenericEventsPlugin * m_ghostGenericEventsPlugin;
  struct GenericPuppet_GhostGenericResourcesReflectionCache * m_attributesCache;
  struct List_1_Moon_ActiveAnimationHandle_ * m_activeAnimations;
  struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_ * m_activeAnimationIndexMap;
  struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_ * m_activeAnimationsMap;
  struct List_1_Moon_Timeline_MoonTimeline_ * m_activeTimelines;
  struct FieldInfo_1__Array * m_fields;
  struct ISoundHost * _SoundHost_k__BackingField;
  struct Dictionary_2_System_Reflection_FieldInfo_System_Object_ * m_fieldInfoAttributeCache;
  struct Dictionary_2_System_Int32_System_Reflection_FieldInfo_ * m_fieldInfoCache;
};
struct GenericPuppet {
  struct GenericPuppet__Class *klass;
  struct MonitorData *monitor;
  struct GenericPuppet__Fields fields;
};
struct IPuppetBase {
  struct IPuppetBase__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) IGhostRecorderPlugin__Fields {
  struct GhostRecorder * m_recorder;
  struct GhostPlayer * m_player;
  int32_t CurrentFrameIndex;
  struct GhostFrame * CurrentFrame;
  int32_t NextFrameIndex;
  struct GhostFrame * NextFrame;
  bool NoMoreFrames;
};
struct IGhostRecorderPlugin {
  struct IGhostRecorderPlugin__Class *klass;
  struct MonitorData *monitor;
  struct IGhostRecorderPlugin__Fields fields;
};
struct GhostGenericEventsPlugin__Fields {
  struct IGhostRecorderPlugin__Fields _;
  struct Dictionary_2_System_Int32_RecordableObjectPuppet_ * RecordableObjects;
  int32_t m_recordableObjectIdCounter;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1_ * SettersFloat;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__1 * SettersInt;
  struct Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2 * SettersBool;
};
struct GhostGenericEventsPlugin {
  struct GhostGenericEventsPlugin__Class *klass;
  struct MonitorData *monitor;
  struct GhostGenericEventsPlugin__Fields fields;
};
struct GhostRecorder__Fields {
  struct MonoBehaviour__Fields _;
  bool Enabled;
  int32_t CurrentFrameIndex;
  float Time;
  struct PreRecordingData * m_preRecordingData;
  struct GlobalRecordingTable * m_globalTable;
  int64_t m_previousCaret;
  float m_previousFrameTime;
  struct GhostRecorderData * GhostRecorderData;
  struct String * m_filePath;
  struct BinaryWriter * m_binaryWriter;
  struct List_1_IGhostRecorderPlugin_ * m_plugins;
  struct GhostCharacterData * PreviousCharacterData;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct GhostRecorder {
  struct GhostRecorder__Class *klass;
  struct MonitorData *monitor;
  struct GhostRecorder__Fields fields;
};
struct __declspec(align(8)) PreRecordingData__Fields {
  struct List_1_PreRecordingInstantiationEntry_ * InstantiationTracking;
  struct List_1_PreRecordingDynamicSceneObjectEntry_ * SceneObjectsTracking;
  struct List_1_PreRecordingUberStateEntry_ * UberStatesTracking;
};
struct PreRecordingData {
  struct PreRecordingData__Class *klass;
  struct MonitorData *monitor;
  struct PreRecordingData__Fields fields;
};
struct __declspec(align(8)) List_1_PreRecordingInstantiationEntry___Fields {
  struct PreRecordingInstantiationEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PreRecordingInstantiationEntry_ {
  struct List_1_PreRecordingInstantiationEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PreRecordingInstantiationEntry___Fields fields;
};
struct PreRecordingInstantiationEntry {
  struct GameObject * Instance;
  struct GameObject * Prefab;
};
struct PreRecordingInstantiationEntry__Boxed {
  struct PreRecordingInstantiationEntry__Class *klass;
  struct MonitorData *monitor;
  struct PreRecordingInstantiationEntry fields;
};
struct PreRecordingInstantiationEntry__Array {
  struct PreRecordingInstantiationEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PreRecordingInstantiationEntry vector[32];
};
struct IEnumerator_1_PreRecordingInstantiationEntry_ {
  struct IEnumerator_1_PreRecordingInstantiationEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PreRecordingDynamicSceneObjectEntry___Fields {
  struct PreRecordingDynamicSceneObjectEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PreRecordingDynamicSceneObjectEntry_ {
  struct List_1_PreRecordingDynamicSceneObjectEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PreRecordingDynamicSceneObjectEntry___Fields fields;
};
struct PreRecordingDynamicSceneObjectEntry {
  struct IRecordable * Object;
};
struct PreRecordingDynamicSceneObjectEntry__Boxed {
  struct PreRecordingDynamicSceneObjectEntry__Class *klass;
  struct MonitorData *monitor;
  struct PreRecordingDynamicSceneObjectEntry fields;
};
struct PreRecordingDynamicSceneObjectEntry__Array {
  struct PreRecordingDynamicSceneObjectEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PreRecordingDynamicSceneObjectEntry vector[32];
};
struct IEnumerator_1_PreRecordingDynamicSceneObjectEntry_ {
  struct IEnumerator_1_PreRecordingDynamicSceneObjectEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_PreRecordingUberStateEntry___Fields {
  struct PreRecordingUberStateEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PreRecordingUberStateEntry_ {
  struct List_1_PreRecordingUberStateEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PreRecordingUberStateEntry___Fields fields;
};
struct PreRecordingUberStateEntry {
  struct IGenericUberState * UberState;
  float Value;
};
struct PreRecordingUberStateEntry__Boxed {
  struct PreRecordingUberStateEntry__Class *klass;
  struct MonitorData *monitor;
  struct PreRecordingUberStateEntry fields;
};
struct PreRecordingUberStateEntry__Array {
  struct PreRecordingUberStateEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PreRecordingUberStateEntry vector[32];
};
struct IEnumerator_1_PreRecordingUberStateEntry_ {
  struct IEnumerator_1_PreRecordingUberStateEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GlobalRecordingTable__Fields {
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ * m_entryMapRecordingId;
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ * m_entryMapInstanceId;
  struct Dictionary_2_System_Int64_EntityPlaceholder_ * m_placeholders;
};
struct GlobalRecordingTable {
  struct GlobalRecordingTable__Class *klass;
  struct MonitorData *monitor;
  struct GlobalRecordingTable__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int64_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GlobalRecordingTable_RecordableEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GlobalRecordingTable_RecordableEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  int32_t hashCode;
  int32_t next;
  int64_t key;
  struct GlobalRecordingTable_RecordableEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_GlobalRecordingTable_RecordableEntry_ vector[32];
};
struct RecordableIdData {
  enum RecordableType__Enum RecordableType;
  int64_t Id;
  struct String * AssetGuid;
};
struct RecordableIdData__Boxed {
  struct RecordableIdData__Class *klass;
  struct MonitorData *monitor;
  struct RecordableIdData fields;
};
struct __declspec(align(8)) GlobalRecordingTable_RecordableEntry__Fields {
  struct RecordableIdData IdData;
  struct Component_1 * Object;
};
struct GlobalRecordingTable_RecordableEntry {
  struct GlobalRecordingTable_RecordableEntry__Class *klass;
  struct MonitorData *monitor;
  struct GlobalRecordingTable_RecordableEntry__Fields fields;
};
struct IEqualityComparer_1_System_Int64_ {
  struct IEqualityComparer_1_System_Int64___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Fields {
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Fields {
  struct Dictionary_2_System_Int64_GlobalRecordingTable_RecordableEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_GlobalRecordingTable_RecordableEntry___Fields fields;
};
struct GlobalRecordingTable_RecordableEntry__Array {
  struct GlobalRecordingTable_RecordableEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GlobalRecordingTable_RecordableEntry * vector[32];
};
struct IEnumerator_1_GlobalRecordingTable_RecordableEntry_ {
  struct IEnumerator_1_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Int64_ {
  struct ICollection_1_System_Int64___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_GlobalRecordingTable_RecordableEntry_ {
  struct ICollection_1_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  int64_t key;
  struct GlobalRecordingTable_RecordableEntry * value;
};
struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry___Boxed {
  struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry_ fields;
};
struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry___Array {
  struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int64_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_GlobalRecordingTable_RecordableEntry_ {
  struct IEnumerable_1_GlobalRecordingTable_RecordableEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int64_EntityPlaceholder___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int64_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_EntityPlaceholder_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_EntityPlaceholder_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int64_EntityPlaceholder_ {
  struct Dictionary_2_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int64_EntityPlaceholder___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder_ {
  int32_t hashCode;
  int32_t next;
  int64_t key;
  struct EntityPlaceholder * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int64_EntityPlaceholder_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int64_EntityPlaceholder___Fields {
  struct Dictionary_2_System_Int64_EntityPlaceholder_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_EntityPlaceholder_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int64_EntityPlaceholder___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int64_EntityPlaceholder___Fields {
  struct Dictionary_2_System_Int64_EntityPlaceholder_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_EntityPlaceholder_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int64_EntityPlaceholder___Fields fields;
};
struct ICollection_1_EntityPlaceholder_ {
  struct ICollection_1_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int64_EntityPlaceholder_ {
  int64_t key;
  struct EntityPlaceholder * value;
};
struct KeyValuePair_2_System_Int64_EntityPlaceholder___Boxed {
  struct KeyValuePair_2_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int64_EntityPlaceholder_ fields;
};
struct KeyValuePair_2_System_Int64_EntityPlaceholder___Array {
  struct KeyValuePair_2_System_Int64_EntityPlaceholder___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int64_EntityPlaceholder_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int64_EntityPlaceholder_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int64_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_EntityPlaceholder_ {
  struct IEnumerable_1_EntityPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GhostRecorderData__Fields {
  struct String * FILE_FORMAT_IDENTIFIER;
  struct String * CurrentFormatIdentifier;
  int32_t CurrentVersion;
  struct List_1_GhostFrame_ * Frames;
  struct String * CurrentReplayPath;
  float Duration;
  int32_t m_flushedFramesCount;
  struct MemoryStream * m_timesliceLoadMemoryStream;
  struct BinaryReader * m_timesliceLoadBinaryReader;
  bool m_timeslicedLoadSucceeded;
  struct Stopwatch * m_timesliceLoadStopwatch;
};
struct GhostRecorderData {
  struct GhostRecorderData__Class *klass;
  struct MonitorData *monitor;
  struct GhostRecorderData__Fields fields;
};
struct __declspec(align(8)) List_1_GhostFrame___Fields {
  struct GhostFrame__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_GhostFrame_ {
  struct List_1_GhostFrame___Class *klass;
  struct MonitorData *monitor;
  struct List_1_GhostFrame___Fields fields;
};
struct __declspec(align(8)) GhostFrame__Fields {
  float Time;
  struct List_1_IGhostFrameData_ * FrameData;
  int32_t FrameDataCount;
  struct IGhostFrameData__Array * FrameDataArray;
  struct IGhostFrameData__Array * m_frameDatasCache;
  int32_t m_frameDatasCacheCount;
};
struct GhostFrame {
  struct GhostFrame__Class *klass;
  struct MonitorData *monitor;
  struct GhostFrame__Fields fields;
};
struct GhostFrame__Array {
  struct GhostFrame__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GhostFrame * vector[32];
};
struct __declspec(align(8)) List_1_IGhostFrameData___Fields {
  struct IGhostFrameData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IGhostFrameData_ {
  struct List_1_IGhostFrameData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IGhostFrameData___Fields fields;
};
struct IGhostFrameData {
  struct IGhostFrameData__Class *klass;
  struct MonitorData *monitor;
};
struct IGhostFrameData__Array {
  struct IGhostFrameData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IGhostFrameData * vector[32];
};
struct IEnumerator_1_IGhostFrameData_ {
  struct IEnumerator_1_IGhostFrameData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_GhostFrame_ {
  struct IEnumerator_1_GhostFrame___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_IGhostRecorderPlugin___Fields {
  struct IGhostRecorderPlugin__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IGhostRecorderPlugin_ {
  struct List_1_IGhostRecorderPlugin___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IGhostRecorderPlugin___Fields fields;
};
struct IGhostRecorderPlugin__Array {
  struct IGhostRecorderPlugin__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IGhostRecorderPlugin * vector[32];
};
struct IEnumerator_1_IGhostRecorderPlugin_ {
  struct IEnumerator_1_IGhostRecorderPlugin___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) GhostCharacterData__Fields {
  struct Vector3 Position;
  bool FaceLeft;
  float FeetAngle;
  struct Vector3 FeetPosition;
  struct Vector2 LocalSpeed;
  struct Quaternion MirrorHolderRotation;
  bool _Executed_k__BackingField;
};
struct GhostCharacterData {
  struct GhostCharacterData__Class *klass;
  struct MonitorData *monitor;
  struct GhostCharacterData__Fields fields;
};
enum GhostFrame_FrameDataTypes__Enum : uint8_t {
  GhostFrame_FrameDataTypes__Enum_None = 0,
  GhostFrame_FrameDataTypes__Enum_Transform = 1,
  GhostFrame_FrameDataTypes__Enum_Animation = 2,
  GhostFrame_FrameDataTypes__Enum_StateMachine = 3,
  GhostFrame_FrameDataTypes__Enum_CharacterData = 4,
  GhostFrame_FrameDataTypes__Enum_CharacterAbilities = 5,
  GhostFrame_FrameDataTypes__Enum_CharacterStates = 6,
  GhostFrame_FrameDataTypes__Enum_GenericEvents = 7,
  GhostFrame_FrameDataTypes__Enum_RecordingMetaDataData = 8,
  GhostFrame_FrameDataTypes__Enum_PhysicaSystemManagerData = 9,
  GhostFrame_FrameDataTypes__Enum_ServerEvents = 10,
  GhostFrame_FrameDataTypes__Enum_WorldEvents = 11,
  GhostFrame_FrameDataTypes__Enum_TimelineEvents = 12,
  GhostFrame_FrameDataTypes__Enum_Camera = 13,
  GhostFrame_FrameDataTypes__Enum_UberState = 14,
  GhostFrame_FrameDataTypes__Enum_SceneTracking = 15,
  GhostFrame_FrameDataTypes__Enum_TimeTracking = 16,
  GhostFrame_FrameDataTypes__Enum_LineRenderer = 17,
  GhostFrame_FrameDataTypes__Enum_AnimationParameters = 18,
};
struct GhostFrame_FrameDataTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GhostFrame_FrameDataTypes__Enum value;
};
struct __declspec(align(8)) HashSet_1_GenericPuppet___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_GenericPuppet___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_GenericPuppet_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_GenericPuppet_ {
  struct HashSet_1_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_GenericPuppet___Fields fields;
};
struct HashSet_1_T_Slot_GenericPuppet_ {
  int32_t hashCode;
  int32_t next;
  struct GenericPuppet * value;
};
struct HashSet_1_T_Slot_GenericPuppet___Boxed {
  struct HashSet_1_T_Slot_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_GenericPuppet_ fields;
};
struct HashSet_1_T_Slot_GenericPuppet___Array {
  struct HashSet_1_T_Slot_GenericPuppet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_GenericPuppet_ vector[32];
};
struct IEqualityComparer_1_GenericPuppet_ {
  struct IEqualityComparer_1_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct GenericPuppet__Array {
  struct GenericPuppet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GenericPuppet * vector[32];
};
struct IEnumerator_1_GenericPuppet_ {
  struct IEnumerator_1_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_GenericPuppet_ {
  struct IEnumerable_1_GenericPuppet___Class *klass;
  struct MonitorData *monitor;
};
struct GhostPlayer__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * OriRig;
  struct Transform * Puppets;
  struct GameObject__Array * PuppetPrefabs;
  struct GameObject__Array * RecordableObjectPuppetPrefabs;
  struct TextBox * Name;
  struct RTPC * GhostFlagRtpc;
  struct ParticleSystem__Array * ParticleSystems;
  struct GameObject * GhostDisappearEffect;
  int32_t Index;
  struct PlayerPuppetAbilities * PlayerPuppetAbilities;
  struct PlayerPuppetCharacterStates * PlayerPuppetCharacterStates;
  struct String * GhostRecordingFilePath;
  struct String * _GhostReplay_k__BackingField;
  struct Transform * MirrorHolder;
  struct OriGhostRigVisuals * RigVisuals;
  float CurrentTime;
  struct GhostRecorderData * GhostRecorderData;
  struct OriGhostRigVisuals_GhostVisualSettings * VisualSettings;
  bool _IsFinished_k__BackingField;
  bool m_isStarted;
  struct List_1_IGhostRecorderPlugin_ * m_plugins;
  struct Dictionary_2_System_Int32_CharacterStatePuppet_ * m_puppets;
  struct List_1_RecordableObjectPuppet_ * m_recordableObjectPuppets;
  struct GhostRecordingMetaDataPlugin * m_metaDataPlugin;
  struct GameObject * m_oriRig;
  struct CharacterAnimationSystem * m_animation;
  struct MoonAnimator * m_animator;
  struct Action * OnFinished;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct GhostCharacterData * m_ghostCharacterData;
  struct SoundHost * m_soundHost;
};
struct GhostPlayer {
  struct GhostPlayer__Class *klass;
  struct MonitorData *monitor;
  struct GhostPlayer__Fields fields;
};
struct RTPC__Fields {
  struct BaseType__Fields _;
};
struct RTPC {
  struct RTPC__Class *klass;
  struct MonitorData *monitor;
  struct RTPC__Fields fields;
};
struct PlayerPuppetAbilities__Fields {
  struct MonoBehaviour__Fields _;
  struct HashSet_1_AbilityType_ * m_abilities;
};
struct PlayerPuppetAbilities {
  struct PlayerPuppetAbilities__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPuppetAbilities__Fields fields;
};
struct __declspec(align(8)) HashSet_1_AbilityType___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_AbilityType___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_AbilityType_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_AbilityType_ {
  struct HashSet_1_AbilityType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_AbilityType___Fields fields;
};
struct HashSet_1_T_Slot_AbilityType_ {
  int32_t hashCode;
  int32_t next;
  enum AbilityType__Enum value;
};
struct HashSet_1_T_Slot_AbilityType___Boxed {
  struct HashSet_1_T_Slot_AbilityType___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_AbilityType_ fields;
};
struct HashSet_1_T_Slot_AbilityType___Array {
  struct HashSet_1_T_Slot_AbilityType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_AbilityType_ vector[32];
};
struct PlayerPuppetCharacterStates__Fields {
  struct MonoBehaviour__Fields _;
  struct Dictionary_2_System_Int32_System_Boolean_ * m_states;
};
struct PlayerPuppetCharacterStates {
  struct PlayerPuppetCharacterStates__Class *klass;
  struct MonitorData *monitor;
  struct PlayerPuppetCharacterStates__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Boolean_ {
  struct Dictionary_2_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Boolean_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Fields {
  struct Dictionary_2_System_Int32_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Fields {
  struct Dictionary_2_System_Int32_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Boolean___Fields fields;
};
struct KeyValuePair_2_System_Int32_System_Boolean_ {
  int32_t key;
  bool value;
};
struct KeyValuePair_2_System_Int32_System_Boolean___Boxed {
  struct KeyValuePair_2_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Boolean_ fields;
};
struct KeyValuePair_2_System_Int32_System_Boolean___Array {
  struct KeyValuePair_2_System_Int32_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Boolean_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Boolean_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct OriGhostRigVisuals__Fields {
  struct MonoBehaviour__Fields _;
  struct Renderer * Body_MDL;
  struct Renderer * Trail;
  struct Renderer * FirstVignette;
  struct Renderer * SecondVignette;
  struct Renderer * ThirdVignette;
  struct Renderer * FourthVignette;
};
struct OriGhostRigVisuals {
  struct OriGhostRigVisuals__Class *klass;
  struct MonitorData *monitor;
  struct OriGhostRigVisuals__Fields fields;
};
struct __declspec(align(8)) OriGhostRigVisuals_GhostVisualSettings__Fields {
  struct UberShaderColor * MultiplyLayerColor;
  struct UberShaderColor * EmissivityColor;
  struct UberShaderColor * TrailColor;
  struct UberShaderColor * FirstVignetteColor;
  struct UberShaderColor * SecondVignetteColor;
  struct UberShaderColor * GhostIndicatorColor;
  struct UberShaderColor * ParticleColor;
};
struct OriGhostRigVisuals_GhostVisualSettings {
  struct OriGhostRigVisuals_GhostVisualSettings__Class *klass;
  struct MonitorData *monitor;
  struct OriGhostRigVisuals_GhostVisualSettings__Fields fields;
};
struct __declspec(align(8)) UberShaderProperty__Fields {
  struct GameObject * AttachedBlockGameObject;
  struct UberShaderBlock * m_block;
  int32_t MainBindId;
  struct String * _BindName_k__BackingField;
  int32_t _BindID_k__BackingField;
};
struct UberShaderProperty {
  struct UberShaderProperty__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderProperty__Fields fields;
};
struct UberShaderColor__Fields {
  struct UberShaderProperty__Fields _;
  struct Color m_color;
  float BindMultiply;
};
struct UberShaderColor {
  struct UberShaderColor__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderColor__Fields fields;
};
enum ShaderModeType__Enum : int32_t {
  ShaderModeType__Enum_In2D = 0,
  ShaderModeType__Enum_In3D = 1,
};
struct ShaderModeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShaderModeType__Enum value;
};
enum BlendModeType__Enum : int32_t {
  BlendModeType__Enum_AlphaBlend = 0,
  BlendModeType__Enum_Additive = 1,
  BlendModeType__Enum_Opaque = 2,
  BlendModeType__Enum_Multiply = 3,
  BlendModeType__Enum_Invisible = 4,
};
struct BlendModeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BlendModeType__Enum value;
};
enum MotionVectorsModeType__Enum : int32_t {
  MotionVectorsModeType__Enum_MotionVecAuto = 0,
  MotionVectorsModeType__Enum_MotionVecOn = 1,
  MotionVectorsModeType__Enum_MotionVecOff = 2,
};
struct MotionVectorsModeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MotionVectorsModeType__Enum value;
};
enum TimeMode__Enum : int32_t {
  TimeMode__Enum_GameTime = 0,
  TimeMode__Enum_UITime = 1,
};
struct TimeMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TimeMode__Enum value;
};
enum AlphaMaskChannelConfig__Enum : int32_t {
  AlphaMaskChannelConfig__Enum_Channel0 = 0,
  AlphaMaskChannelConfig__Enum_Channel1 = 1,
  AlphaMaskChannelConfig__Enum_Channel0And1 = 2,
};
struct AlphaMaskChannelConfig__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AlphaMaskChannelConfig__Enum value;
};
enum UberShaderBlock_ColliderTypeEnum__Enum : int32_t {
  UberShaderBlock_ColliderTypeEnum__Enum_Enabled = 0,
  UberShaderBlock_ColliderTypeEnum__Enum_Disabled = 1,
  UberShaderBlock_ColliderTypeEnum__Enum_UseLegacy = 2,
};
struct UberShaderBlock_ColliderTypeEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberShaderBlock_ColliderTypeEnum__Enum value;
};
struct UberShaderBlock__Fields {
  struct MonoBehaviour__Fields _;
  enum ShaderModeType__Enum ShaderMode;
  enum BlendModeType__Enum BlendMode;
  enum MotionVectorsModeType__Enum MotionVectorsMode;
  bool WriteRGB;
  bool WriteA;
  float OffsetPositionZ;
  float ZExpandNear;
  float ZExpandFar;
  float ThicknessNear;
  float ThicknessFar;
  bool ForceNeverClip;
  float MaxBrightness;
  float MinBrightness;
  float DisableDarkening;
  float ColorVariationInfluence;
  float ColorVariationSpeed;
  float ColorVariationScale;
  float ReflectionAmount;
  float RawRandomOffset;
  enum TimeMode__Enum TimeMode;
  bool IsAlphaMasked;
  bool IsAlphaInverse;
  enum AlphaMaskChannelConfig__Enum AlphaMaskChannelConfig;
  float AlphaMaskMulCh0;
  float AlphaMaskMulCh1;
  enum UberShaderBlock_ColliderTypeEnum__Enum ColliderType;
  bool ColliderErosion;
  bool BackSideOnly;
  bool FrontSideOnly;
  bool DoReflection;
  bool WaterOnly;
  bool GodRayPost;
  bool UseBakedLighting;
  float ZShift;
  float MotionBlurScale;
  float AlphaCutoff;
  float AlphaSmooth;
  bool DontResetCustomBounds;
  bool m_useFog;
  struct Material * m_MaterialInPrefab;
  struct MeshFilter * m_filter;
  struct Renderer * m_renderer;
  bool ForceZExpand;
  struct RuntimeTypeHandle m_typeId;
};
struct UberShaderBlock {
  struct UberShaderBlock__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderBlock__Fields fields;
};
struct UberShaderBlockGrabPass__Fields {
  struct UberShaderBlock__Fields _;
  struct UberShaderColor * Color;
  bool OverwriteDistort;
  bool m_inFrustm;
  int32_t m_frame;
};
struct UberShaderBlockGrabPass {
  struct UberShaderBlockGrabPass__Class *klass;
  struct MonitorData *monitor;
  struct UberShaderBlockGrabPass__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_CharacterStatePuppet___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_CharacterStatePuppet_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_CharacterStatePuppet_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_CharacterStatePuppet_ {
  struct Dictionary_2_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_CharacterStatePuppet___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct CharacterStatePuppet * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_CharacterStatePuppet_ vector[32];
};
struct CharacterStatePuppet__Fields {
  struct GenericPuppet__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct IPuppet * m_puppetMaster;
};}