namespace app {
struct List_1_CollisionMaterialSoundPair_ {
  struct List_1_CollisionMaterialSoundPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CollisionMaterialSoundPair___Fields fields;
};
struct __declspec(align(8)) CollisionMaterialSoundPair__Fields {
  struct Vector2 Normal;
  float CosAngle;
  struct SoundProvider * IndependantSoundProvider;
};
struct CollisionMaterialSoundPair {
  struct CollisionMaterialSoundPair__Class *klass;
  struct MonitorData *monitor;
  struct CollisionMaterialSoundPair__Fields fields;
};
struct CollisionMaterialSoundPair__Array {
  struct CollisionMaterialSoundPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CollisionMaterialSoundPair * vector[32];
};
struct IEnumerator_1_CollisionMaterialSoundPair_ {
  struct IEnumerator_1_CollisionMaterialSoundPair___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MessageDescriptor_ {
  struct IEnumerable_1_MessageDescriptor___Class *klass;
  struct MonitorData *monitor;
};
struct SoundHost__Fields {
  struct MonoBehaviour__Fields _;
  bool SyncPosition;
  struct Event_1__Array * StartEvents;
  struct Transform * m_transform;
  struct GameObject * m_gameObject;
  bool m_isListener;
  bool _IsActive_k__BackingField;
  int32_t _Version_k__BackingField;
  uint64_t m_id;
  struct AkAuxSendArray * AuxSendArray;
  struct List_1_System_UInt32_ * m_playingIDsToStopOnDisable;
  bool m_isRegistered;
  int32_t m_framesWithCount0;
};
struct SoundHost {
  struct SoundHost__Class *klass;
  struct MonitorData *monitor;
  struct SoundHost__Fields fields;
};
struct Event_1__Array {
  struct Event_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Event_1 * vector[32];
};
struct __declspec(align(8)) AkAuxSendArray__Fields {
  int32_t SIZE_OF_AKAUXSENDVALUE;
  void * m_Buffer;
  int32_t m_Count;
  struct Action_1_Int32_ * OnCountChanged;
};
struct AkAuxSendArray {
  struct AkAuxSendArray__Class *klass;
  struct MonitorData *monitor;
  struct AkAuxSendArray__Fields fields;
};
struct __declspec(align(8)) List_1_System_UInt32___Fields {
  struct UInt32__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_UInt32_ {
  struct List_1_System_UInt32___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_UInt32___Fields fields;
};
struct ISoundListener {
  struct ISoundListener__Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_MessageBox_HideAction___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_MessageBox_HideAction_ {
  struct Action_1_MessageBox_HideAction___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_MessageBox_HideAction___Fields fields;
};
enum MessageBox_HideAction__Enum : int32_t {
  MessageBox_HideAction__Enum_Normal = 0,
  MessageBox_HideAction__Enum_Cancel = 1,
  MessageBox_HideAction__Enum_Inventory = 2,
};
struct MessageBox_HideAction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MessageBox_HideAction__Enum value;
};
struct MessageDescriptor__Array {
  struct MessageDescriptor__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MessageDescriptor vector[32];
};
struct IMessageBox {
  struct IMessageBox__Class *klass;
  struct MonitorData *monitor;
};
struct BitmapFontChar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BitmapFontChar__StaticFields {
};
struct BitmapFontChar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BitmapFontChar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BitmapFontChar__VTable vtable;
};
struct BitmapFont__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BitmapFont__StaticFields {
};
struct BitmapFont__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BitmapFont__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BitmapFont__VTable vtable;
};
struct CharMetaData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharMetaData__StaticFields {
};
struct CharMetaData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharMetaData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharMetaData__VTable vtable;
};
struct TextRenderer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Prepare;
  VirtualInvokeData Add;
  VirtualInvokeData Apply;
};
struct TextRenderer__StaticFields {
};
struct TextRenderer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextRenderer__VTable vtable;
};
struct TextStyle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextStyle__StaticFields {
};
struct TextStyle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextStyle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextStyle__VTable vtable;
};
struct TextStyleCollection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextStyleCollection__StaticFields {
};
struct TextStyleCollection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextStyleCollection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextStyleCollection__VTable vtable;
};
struct MessageBoxLanguageStyles__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MessageBoxLanguageStyles__StaticFields {
};
struct MessageBoxLanguageStyles__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MessageBoxLanguageStyles__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MessageBoxLanguageStyles__VTable vtable;
};
struct IAnimatorDriver__VTable {
  VirtualInvokeData RegisterAnimator;
  VirtualInvokeData UnregisterAnimator;
  VirtualInvokeData DriverFixedUpdate;
};
struct IAnimatorDriver__StaticFields {
};
struct IAnimatorDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAnimatorDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAnimatorDriver__VTable vtable;
};
struct AnimatorDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatorDriver__StaticFields {
};
struct AnimatorDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorDriver__VTable vtable;
};
struct IEnumerator_1_CameraShake___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CameraShake___StaticFields {
};
struct IEnumerator_1_CameraShake___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CameraShake___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CameraShake___VTable vtable;
};
struct List_1_CameraShake___VTable {
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
struct List_1_CameraShake___StaticFields {
  struct CameraShake__Array * _emptyArray;
};
struct List_1_CameraShake___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CameraShake___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CameraShake___VTable vtable;
};
struct AllContainer_1_CameraShake___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_CameraShake___StaticFields {
};
struct AllContainer_1_CameraShake___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_CameraShake___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_CameraShake___VTable vtable;
};
struct CameraShakeAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CameraShakeAsset__StaticFields {
};
struct CameraShakeAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraShakeAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraShakeAsset__VTable vtable;
};
struct CameraShake__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct CameraShake__StaticFields {
  struct AllContainer_1_CameraShake_ * All;
};
struct CameraShake__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CameraShake__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CameraShake__VTable vtable;
};
struct BaseAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData Convert_1;
};
struct BaseAnimator__StaticFields {
};
struct BaseAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseAnimator__VTable vtable;
};
struct WriteOutTextBox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct WriteOutTextBox__StaticFields {
};
struct WriteOutTextBox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WriteOutTextBox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WriteOutTextBox__VTable vtable;
};
struct UberDelegate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberDelegate__StaticFields {
};
struct UberDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberDelegate__VTable vtable;
};
struct MessageBoxVisibility__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct MessageBoxVisibility__StaticFields {
};
struct MessageBoxVisibility__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MessageBoxVisibility__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MessageBoxVisibility__VTable vtable;
};
struct LineDescent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LineDescent__StaticFields {
};
struct LineDescent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LineDescent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LineDescent__VTable vtable;
};
struct AppliedTextStyle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AppliedTextStyle__StaticFields {
};
struct AppliedTextStyle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AppliedTextStyle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AppliedTextStyle__VTable vtable;
};
struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___StaticFields {
};
struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle___VTable vtable;
};
struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___VTable {
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
struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___StaticFields {
};
struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle___VTable vtable;
};
struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___StaticFields {
};
struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CatlikeCoding_TextBox_LineDescent___VTable vtable;
};
struct List_1_CatlikeCoding_TextBox_LineDescent___VTable {
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
struct List_1_CatlikeCoding_TextBox_LineDescent___StaticFields {
  struct LineDescent__Array * _emptyArray;
};
struct List_1_CatlikeCoding_TextBox_LineDescent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CatlikeCoding_TextBox_LineDescent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CatlikeCoding_TextBox_LineDescent___VTable vtable;
};
struct TextBoxLine__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextBoxLine__StaticFields {
};
struct TextBoxLine__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextBoxLine__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextBoxLine__VTable vtable;
};
struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___StaticFields {
};
struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CatlikeCoding_TextBox_TextBoxLine___VTable vtable;
};
struct List_1_CatlikeCoding_TextBox_TextBoxLine___VTable {
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
struct List_1_CatlikeCoding_TextBox_TextBoxLine___StaticFields {
  struct TextBoxLine__Array * _emptyArray;
};
struct List_1_CatlikeCoding_TextBox_TextBoxLine___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CatlikeCoding_TextBox_TextBoxLine___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CatlikeCoding_TextBox_TextBoxLine___VTable vtable;
};
struct TextBox__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetRealTextBoxLocalRect;
};
struct TextBox__StaticFields {
};
struct TextBox__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextBox__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextBox__VTable vtable;
};
struct SoundProvider_CallbackFunction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct SoundProvider_CallbackFunction__StaticFields {
};
struct SoundProvider_CallbackFunction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundProvider_CallbackFunction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundProvider_CallbackFunction__VTable vtable;
};
struct AcousticTexture__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct AcousticTexture__StaticFields {
};
struct AcousticTexture__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AcousticTexture__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AcousticTexture__VTable vtable;
};
struct BaseType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct BaseType__StaticFields {
};
struct BaseType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseType__VTable vtable;
};
struct Event_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct Event_1__StaticFields {
};
struct Event_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Event_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Event_1__VTable vtable;
};
struct State__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
  VirtualInvokeData get_WwiseObjectGroupType;
};
struct State__StaticFields {
};
struct State__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct State__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct State__VTable vtable;
};
struct BaseGroupType__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData __unknown;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
  VirtualInvokeData __unknown_1;
};
struct BaseGroupType__StaticFields {
};
struct BaseGroupType__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaseGroupType__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaseGroupType__VTable vtable;
};
struct Switch_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
  VirtualInvokeData get_WwiseObjectGroupType;
};
struct Switch_1__StaticFields {
};
struct Switch_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Switch_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Switch_1__VTable vtable;
};
struct Trigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
  VirtualInvokeData get_WwiseObjectType;
  VirtualInvokeData get_Name;
  VirtualInvokeData IsValid;
};
struct Trigger__StaticFields {
};
struct Trigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Trigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Trigger__VTable vtable;
};
struct SoundSize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SoundSize__StaticFields {
  struct SoundSize * m_everywhere;
};
struct SoundSize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundSize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundSize__VTable vtable;
};
struct LowPassFilterSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LowPassFilterSettings__StaticFields {
  struct LowPassFilterSettings * m_standardSetting;
};
struct LowPassFilterSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LowPassFilterSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LowPassFilterSettings__VTable vtable;
};
struct SoundDescriptor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetGenericResource;
  VirtualInvokeData GetGenericResourceId;
};
struct SoundDescriptor__StaticFields {
};
struct SoundDescriptor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoundDescriptor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoundDescriptor__VTable vtable;
};
struct CollisionMaterialSoundPair__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollisionMaterialSoundPair__StaticFields {
};
struct CollisionMaterialSoundPair__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollisionMaterialSoundPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollisionMaterialSoundPair__VTable vtable;
};
struct IEnumerator_1_CollisionMaterialSoundPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CollisionMaterialSoundPair___StaticFields {
};}