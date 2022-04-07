namespace app {

struct SeinPickupProcessorEditorSettings__Fields {
  struct ScriptableObject__Fields _;
  bool AreFirstTimePickupHintsEnabled;
};
struct SeinPickupProcessorEditorSettings {
  struct SeinPickupProcessorEditorSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinPickupProcessorEditorSettings__Fields fields;
};
struct SeinPickupProcessorEditorSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinPickupProcessorEditorSettings__StaticFields {
};
struct SeinPickupProcessorEditorSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinPickupProcessorEditorSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinPickupProcessorEditorSettings__VTable vtable;
};

struct ISenseInteractable {
  struct ISenseInteractable__Class *klass;
  struct MonitorData *monitor;
};
struct ISenseInteractable__VTable {
  VirtualInvokeData get_IsAvailable;
  VirtualInvokeData Highlight;
  VirtualInvokeData Unhighlight;
  VirtualInvokeData get_Bounds;
};
struct ISenseInteractable__StaticFields {
};
struct ISenseInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISenseInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISenseInteractable__VTable vtable;
};

struct SeinSenseInteractionHandler__Fields {
  struct MonoBehaviour__Fields _;
  float SenseDistance;
  bool m_prevWasShardEquipped;
};
struct SeinSenseInteractionHandler {
  struct SeinSenseInteractionHandler__Class *klass;
  struct MonitorData *monitor;
  struct SeinSenseInteractionHandler__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_ISenseInteractable___Fields {
  struct List_1_ISenseInteractable_ * m_objects;
};
struct AllContainer_1_ISenseInteractable_ {
  struct AllContainer_1_ISenseInteractable___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_ISenseInteractable___Fields fields;
};
struct __declspec(align(8)) List_1_ISenseInteractable___Fields {
  struct ISenseInteractable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ISenseInteractable_ {
  struct List_1_ISenseInteractable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ISenseInteractable___Fields fields;
};
struct ISenseInteractable__Array {
  struct ISenseInteractable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISenseInteractable * vector[32];
};
struct IEnumerator_1_ISenseInteractable_ {
  struct IEnumerator_1_ISenseInteractable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ISenseInteractable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ISenseInteractable___StaticFields {
};
struct IEnumerator_1_ISenseInteractable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ISenseInteractable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ISenseInteractable___VTable vtable;
};
struct List_1_ISenseInteractable___VTable {
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
struct List_1_ISenseInteractable___StaticFields {
  struct ISenseInteractable__Array * _emptyArray;
};
struct List_1_ISenseInteractable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ISenseInteractable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ISenseInteractable___VTable vtable;
};
struct AllContainer_1_ISenseInteractable___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_ISenseInteractable___StaticFields {
};
struct AllContainer_1_ISenseInteractable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_ISenseInteractable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_ISenseInteractable___VTable vtable;
};
struct SeinSenseInteractionHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinSenseInteractionHandler__StaticFields {
  struct AllContainer_1_ISenseInteractable_ * m_interactables;
};
struct SeinSenseInteractionHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinSenseInteractionHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinSenseInteractionHandler__VTable vtable;
};

struct SeinTransparentWallHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundProvider * EnterTransparentWallSoundProvider;
  struct SoundProvider * EnterTransparentWallFirstTimeSoundProvider;
  struct SoundProvider * LeaveTransparentWallSoundProvider;
};
struct SeinTransparentWallHandler {
  struct SeinTransparentWallHandler__Class *klass;
  struct MonitorData *monitor;
  struct SeinTransparentWallHandler__Fields fields;
};
struct SeinTransparentWallHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinTransparentWallHandler__StaticFields {
  struct SeinTransparentWallHandler * Instance;
};
struct SeinTransparentWallHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinTransparentWallHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinTransparentWallHandler__VTable vtable;
};

struct StormZone__Fields {
  struct MonoBehaviour__Fields _;
  float QuietDuration;
  float AnticipationDuration;
  float StormDuration;
  bool Active;
  struct StormZone_SoundSource * Quiet;
  struct StormZone_SoundSource * Anticipation;
  struct StormZone_SoundSource * Storm;
  float m_currentTime;
};
struct StormZone {
  struct StormZone__Class *klass;
  struct MonitorData *monitor;
  struct StormZone__Fields fields;
};
struct __declspec(align(8)) StormZone_SoundSource__Fields {
  struct AnimatingFloat * Volume;
  struct AudioSource * Source;
  float FadeInDuration;
  float FadeOutDuration;
};
struct StormZone_SoundSource {
  struct StormZone_SoundSource__Class *klass;
  struct MonitorData *monitor;
  struct StormZone_SoundSource__Fields fields;
};
struct StormZone_SoundSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StormZone_SoundSource__StaticFields {
};
struct StormZone_SoundSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StormZone_SoundSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StormZone_SoundSource__VTable vtable;
};
struct StormZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StormZone__StaticFields {
};
struct StormZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StormZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StormZone__VTable vtable;
};

struct StreamingSoundsDisplay__Fields {
  struct MonoBehaviour__Fields _;
  struct GUIText * m_guidText;
};
struct StreamingSoundsDisplay {
  struct StreamingSoundsDisplay__Class *klass;
  struct MonitorData *monitor;
  struct StreamingSoundsDisplay__Fields fields;
};
struct StreamingSoundsDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StreamingSoundsDisplay__StaticFields {
};
struct StreamingSoundsDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StreamingSoundsDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StreamingSoundsDisplay__VTable vtable;
};

struct SyncParticleSystems__Fields {
  struct MonoBehaviour__Fields _;
  struct ParticleSystem__Array * ParticleSystems;
};
struct SyncParticleSystems {
  struct SyncParticleSystems__Class *klass;
  struct MonitorData *monitor;
  struct SyncParticleSystems__Fields fields;
};
struct SyncParticleSystems__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SyncParticleSystems__StaticFields {
};
struct SyncParticleSystems__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SyncParticleSystems__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SyncParticleSystems__VTable vtable;
};

struct TimeCounterDisplay__Fields {
  struct MonoBehaviour__Fields _;
  float m_delay;
};
struct TimeCounterDisplay {
  struct TimeCounterDisplay__Class *klass;
  struct MonitorData *monitor;
  struct TimeCounterDisplay__Fields fields;
};
struct TimeCounterDisplay__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TimeCounterDisplay__StaticFields {
};
struct TimeCounterDisplay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimeCounterDisplay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimeCounterDisplay__VTable vtable;
};

struct ValueWithMaxValueSerializer__Fields {
  struct SaveSerialize__Fields _;
  struct ValueWithMaxValue * ValueWithMinMax;
};
struct ValueWithMaxValueSerializer {
  struct ValueWithMaxValueSerializer__Class *klass;
  struct MonitorData *monitor;
  struct ValueWithMaxValueSerializer__Fields fields;
};
struct ValueWithMaxValueSerializer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct ValueWithMaxValueSerializer__StaticFields {
};
struct ValueWithMaxValueSerializer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueWithMaxValueSerializer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueWithMaxValueSerializer__VTable vtable;
};

struct AngularSpring__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * m_transform;
  struct Rigidbody * m_rigidbody;
  float m_startRotation;
  float Spring;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct AngularSpring {
  struct AngularSpring__Class *klass;
  struct MonitorData *monitor;
  struct AngularSpring__Fields fields;
};
struct AngularSpring__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct AngularSpring__StaticFields {
};
struct AngularSpring__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AngularSpring__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AngularSpring__VTable vtable;
};

struct __declspec(align(8)) CategoryAttribute_2__Fields {
  struct String * _Category_k__BackingField;
};
struct CategoryAttribute_2 {
  struct CategoryAttribute_2__Class *klass;
  struct MonitorData *monitor;
  struct CategoryAttribute_2__Fields fields;
};
struct CategoryAttribute_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CategoryAttribute_2__StaticFields {
};
struct CategoryAttribute_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CategoryAttribute_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CategoryAttribute_2__VTable vtable;
};

struct __declspec(align(8)) Cheat__Fields {
  struct Input_InputButtonProcessor__Array * m_combination;
  struct Action * m_action;
  struct Func_1_Boolean_ * m_condition;
  int32_t m_currentCombinationIndex;
};
struct Cheat {
  struct Cheat__Class *klass;
  struct MonitorData *monitor;
  struct Cheat__Fields fields;
};
struct Cheat__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Cheat__StaticFields {
};
struct Cheat__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Cheat__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Cheat__VTable vtable;
};

struct CheatsHandler__Fields {
  struct SaveSerialize__Fields _;
  bool DebugEnabled;
  struct List_1_Cheat_ * m_cheats;
  float m_timer;
};
struct CheatsHandler {
  struct CheatsHandler__Class *klass;
  struct MonitorData *monitor;
  struct CheatsHandler__Fields fields;
};
struct __declspec(align(8)) List_1_Cheat___Fields {
  struct Cheat__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Cheat_ {
  struct List_1_Cheat___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Cheat___Fields fields;
};
struct Cheat__Array {
  struct Cheat__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Cheat * vector[32];
};
struct IEnumerator_1_Cheat_ {
  struct IEnumerator_1_Cheat___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Cheat___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Cheat___StaticFields {
};
struct IEnumerator_1_Cheat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Cheat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Cheat___VTable vtable;
};
struct List_1_Cheat___VTable {
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
struct List_1_Cheat___StaticFields {
  struct Cheat__Array * _emptyArray;
};
struct List_1_Cheat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Cheat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Cheat___VTable vtable;
};
struct CheatsHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct CheatsHandler__StaticFields {
  struct CheatsHandler * Instance;
  bool DebugWasEnabled;
  bool DebugAlwaysEnabled;
  bool InfiniteDoubleJumps;
};
struct CheatsHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CheatsHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CheatsHandler__VTable vtable;
};

struct CheatsHandler_c {
  struct CheatsHandler_c__Class *klass;
  struct MonitorData *monitor;
};
struct CheatsHandler_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CheatsHandler_c__StaticFields {
  struct CheatsHandler_c * __9;
  struct Action * __9__13_0;
  struct Func_1_Boolean_ * __9__13_1;
};
struct CheatsHandler_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CheatsHandler_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CheatsHandler_c__VTable vtable;
};

struct __declspec(align(8)) CheatsHandler_InitDebugMenu_d_14__Fields {
  int32_t __1__state;
  struct Object * __2__current;
};
struct CheatsHandler_InitDebugMenu_d_14 {
  struct CheatsHandler_InitDebugMenu_d_14__Class *klass;
  struct MonitorData *monitor;
  struct CheatsHandler_InitDebugMenu_d_14__Fields fields;
};
struct CheatsHandler_InitDebugMenu_d_14__VTable {
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
struct CheatsHandler_InitDebugMenu_d_14__StaticFields {
};
struct CheatsHandler_InitDebugMenu_d_14__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CheatsHandler_InitDebugMenu_d_14__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CheatsHandler_InitDebugMenu_d_14__VTable vtable;
};

struct ClearTrailOverCertainDistance__Fields {
  struct MonoBehaviour__Fields _;
  float Distance;
  struct Vector3 m_lastPosition;
  struct TrailRenderer * m_trailRenderer;
  float m_time;
};
struct ClearTrailOverCertainDistance {
  struct ClearTrailOverCertainDistance__Class *klass;
  struct MonitorData *monitor;
  struct ClearTrailOverCertainDistance__Fields fields;
};
struct ClearTrailOverCertainDistance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct ClearTrailOverCertainDistance__StaticFields {
};
struct ClearTrailOverCertainDistance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClearTrailOverCertainDistance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClearTrailOverCertainDistance__VTable vtable;
};

struct CursorController__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * Transparency;
  struct Vector2 m_mousePosition;
  struct Texture2D * CursorTexture;
  struct Vector2 Offset;
};
struct CursorController {
  struct CursorController__Class *klass;
  struct MonitorData *monitor;
  struct CursorController__Fields fields;
};
struct CursorController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CursorController__StaticFields {
  float m_idleTime;
  bool IsVisible;
};
struct CursorController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CursorController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CursorController__VTable vtable;
};

struct CustomCondition__Fields {
  struct Condition_1__Fields _;
  struct MoonReference_1_ICustomConditionDefinition_ * ConditionDefinition;
  int32_t ConditionGUID;
  struct ICustomConditionDefinition * m_resolvedConditionDefinition;
};
struct CustomCondition {
  struct CustomCondition__Class *klass;
  struct MonitorData *monitor;
  struct CustomCondition__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_ICustomConditionDefinition___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_ICustomConditionDefinition_ * m_cachedProxyType;
  struct ICustomConditionDefinition * m_volatileValue;
};
struct MoonReference_1_ICustomConditionDefinition_ {
  struct MoonReference_1_ICustomConditionDefinition___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_ICustomConditionDefinition___Fields fields;
};
struct IMoonType_1_ICustomConditionDefinition_ {
  struct IMoonType_1_ICustomConditionDefinition___Class *klass;
  struct MonitorData *monitor;
};
struct ICustomConditionDefinition {
  struct ICustomConditionDefinition__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_ICustomConditionDefinition___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_ICustomConditionDefinition___StaticFields {
};
struct IMoonType_1_ICustomConditionDefinition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_ICustomConditionDefinition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_ICustomConditionDefinition___VTable vtable;
};
struct ICustomConditionDefinition__VTable {
  VirtualInvokeData GetAllConditionNames;
  VirtualInvokeData GetAllConditionGuids;
  VirtualInvokeData GetConditionNameFromGuid;
  VirtualInvokeData IsConditionGuidValid;
  VirtualInvokeData Validate;
};
struct ICustomConditionDefinition__StaticFields {
};
struct ICustomConditionDefinition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICustomConditionDefinition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICustomConditionDefinition__VTable vtable;
};
struct MoonReference_1_ICustomConditionDefinition___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_ICustomConditionDefinition___StaticFields {
};
struct MoonReference_1_ICustomConditionDefinition___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_ICustomConditionDefinition___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_ICustomConditionDefinition___VTable vtable;
};
struct CustomCondition__VTable {
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
struct CustomCondition__StaticFields {
};
struct CustomCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomCondition__VTable vtable;
};

struct DemoLogic {
  struct DemoLogic__Class *klass;
  struct MonitorData *monitor;
};
struct DemoLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DemoLogic__StaticFields {
  bool _OutOfTime_k__BackingField;
  float _IdleElapsedTime_k__BackingField;
  float _PlaytimeElapsedTime_k__BackingField;
};
struct DemoLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DemoLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DemoLogic__VTable vtable;
};

struct DestroyWhenInvisible__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator * Animator;
  bool DestroyReversedToStart;
  bool DestroyAtEnd;
};
struct DestroyWhenInvisible {
  struct DestroyWhenInvisible__Class *klass;
  struct MonitorData *monitor;
  struct DestroyWhenInvisible__Fields fields;
};
struct DestroyWhenInvisible__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DestroyWhenInvisible__StaticFields {
};
struct DestroyWhenInvisible__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DestroyWhenInvisible__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DestroyWhenInvisible__VTable vtable;
};

struct DifficultyController__Fields {
  struct SaveSerialize__Fields _;
  enum DifficultyMode__Enum Difficulty;
  enum DifficultyMode__Enum LowestDifficulty;
  struct Action * OnDifficultyChanged;
};
struct DifficultyController {
  struct DifficultyController__Class *klass;
  struct MonitorData *monitor;
  struct DifficultyController__Fields fields;
};
struct DifficultyController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct DifficultyController__StaticFields {
  struct DifficultyController * Instance;
};
struct DifficultyController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DifficultyController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DifficultyController__VTable vtable;
};

struct DifficultyController_c {
  struct DifficultyController_c__Class *klass;
  struct MonitorData *monitor;
};
struct DifficultyController_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DifficultyController_c__StaticFields {
  struct DifficultyController_c * __9;
  struct Action * __9__10_0;
};
struct DifficultyController_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DifficultyController_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DifficultyController_c__VTable vtable;
};

struct DisableOnRestoreCheckpoint__Fields {
  struct MonoBehaviour__Fields _;
};
struct DisableOnRestoreCheckpoint {
  struct DisableOnRestoreCheckpoint__Class *klass;
  struct MonitorData *monitor;
  struct DisableOnRestoreCheckpoint__Fields fields;
};
struct DisableOnRestoreCheckpoint__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DisableOnRestoreCheckpoint__StaticFields {
};
struct DisableOnRestoreCheckpoint__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableOnRestoreCheckpoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableOnRestoreCheckpoint__VTable vtable;
};

struct DisableScale__Fields {
  struct MonoBehaviour__Fields _;
};
struct DisableScale {
  struct DisableScale__Class *klass;
  struct MonitorData *monitor;
  struct DisableScale__Fields fields;
};
struct DisableScale__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DisableScale__StaticFields {
};
struct DisableScale__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DisableScale__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DisableScale__VTable vtable;
};

struct DynamicLightSource__Fields {
  struct MonoBehaviour__Fields _;
  float LightFalloffRadius;
  float LightFalloffExponent;
};
struct DynamicLightSource {
  struct DynamicLightSource__Class *klass;
  struct MonitorData *monitor;
  struct DynamicLightSource__Fields fields;
};
struct DynamicLightSource__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DynamicLightSource__StaticFields {
};
struct DynamicLightSource__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DynamicLightSource__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DynamicLightSource__VTable vtable;
};}