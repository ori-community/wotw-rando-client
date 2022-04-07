namespace app {
struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry___StaticFields {
};
struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry___VTable vtable;
};
struct HitStop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HitStop__StaticFields {
  float HitStopDelayTime;
  struct List_1_Moon_ISuspendable_ * m_tempList;
};
struct HitStop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitStop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitStop__VTable vtable;
};

struct Brain_c {
  struct Brain_c__Class *klass;
  struct MonitorData *monitor;
};
struct Brain_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Brain_c__StaticFields {
  struct Brain_c * __9;
  struct Action_1_Moon_BrainBehaviour_ * __9__26_0;
  struct Action_1_Moon_BrainBehaviour_ * __9__26_1;
};
struct Brain_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Brain_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Brain_c__VTable vtable;
};

struct MultiTargetCameraSetup__Fields {
  struct MonoBehaviour__Fields _;
  struct CameraTargetsProvider * TargetsProvider;
  struct CameraPivotZone * PivotZone;
  struct CameraOffsetAnimationZone * ZoomAnimationZone;
  struct Transform * CameraTargetTransform;
  struct Vector2 ZoomRange;
  struct Vector2 VerticalPaddings;
  struct Vector2 HorizontalPaddings;
  float ActivationLerpTime;
  float CameraTargetLerpSpeed;
  float ZoomLerpSpeedDec;
  float ZoomLerpSpeedInc;
  bool EnableDebugDraw;
  bool m_isSuspended;
  bool m_isActive;
  float m_weight;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Vector3 m_charMovement;
};
struct MultiTargetCameraSetup {
  struct MultiTargetCameraSetup__Class *klass;
  struct MonitorData *monitor;
  struct MultiTargetCameraSetup__Fields fields;
};
struct MultiTargetCameraSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct MultiTargetCameraSetup__StaticFields {
};
struct MultiTargetCameraSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiTargetCameraSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiTargetCameraSetup__VTable vtable;
};

struct SeinDamageOwner__Fields {
  struct DamageOwner__Fields _;
};
struct SeinDamageOwner {
  struct SeinDamageOwner__Class *klass;
  struct MonitorData *monitor;
  struct SeinDamageOwner__Fields fields;
};
struct SeinDamageOwner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ProcessDamage;
};
struct SeinDamageOwner__StaticFields {
};
struct SeinDamageOwner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinDamageOwner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinDamageOwner__VTable vtable;
};

struct __declspec(align(8)) CustomGizmo__Fields {
  struct Type * m_type;
};
struct CustomGizmo {
  struct CustomGizmo__Class *klass;
  struct MonitorData *monitor;
  struct CustomGizmo__Fields fields;
};
struct CustomGizmo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct CustomGizmo__StaticFields {
};
struct CustomGizmo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CustomGizmo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CustomGizmo__VTable vtable;
};

struct MoonGizmos__Fields {
  struct MonoBehaviour__Fields _;
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo_ * m_componentToGizmos;
};
struct MoonGizmos {
  struct MoonGizmos__Class *klass;
  struct MonitorData *monitor;
  struct MoonGizmos__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Component_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo_ {
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo_ {
  int32_t hashCode;
  int32_t next;
  struct Component_1 * key;
  struct List_1_Moon_IGizmo_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo_ vector[32];
};
struct __declspec(align(8)) List_1_Moon_IGizmo___Fields {
  struct IGizmo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_IGizmo_ {
  struct List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_IGizmo___Fields fields;
};
struct IGizmo {
  struct IGizmo__Class *klass;
  struct MonitorData *monitor;
};
struct IGizmo__Array {
  struct IGizmo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IGizmo * vector[32];
};
struct IEnumerator_1_Moon_IGizmo_ {
  struct IEnumerator_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_UnityEngine_Component_ {
  struct IEqualityComparer_1_UnityEngine_Component___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___Fields {
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___Fields {
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___Fields fields;
};
struct List_1_Moon_IGizmo___Array {
  struct List_1_Moon_IGizmo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_Moon_IGizmo_ * vector[32];
};
struct IEnumerator_1_List_1_Moon_IGizmo_ {
  struct IEnumerator_1_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Component_ {
  struct ICollection_1_UnityEngine_Component___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_Moon_IGizmo_ {
  struct ICollection_1_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo_ {
  struct Component_1 * key;
  struct List_1_Moon_IGizmo_ * value;
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Boxed {
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo_ fields;
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Array {
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Component_ {
  struct IEnumerable_1_UnityEngine_Component___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_Moon_IGizmo_ {
  struct IEnumerable_1_List_1_Moon_IGizmo___Class *klass;
  struct MonitorData *monitor;
};
struct IGizmo__VTable {
  VirtualInvokeData OnDrawGizmos;
  VirtualInvokeData OnSceneGUI;
};
struct IGizmo__StaticFields {
};
struct IGizmo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IGizmo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IGizmo__VTable vtable;
};
struct IEnumerator_1_Moon_IGizmo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_IGizmo___StaticFields {
};
struct IEnumerator_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_IGizmo___VTable vtable;
};
struct List_1_Moon_IGizmo___VTable {
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
struct List_1_Moon_IGizmo___StaticFields {
  struct IGizmo__Array * _emptyArray;
};
struct List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_IGizmo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct IEqualityComparer_1_UnityEngine_Component___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_UnityEngine_Component___StaticFields {
};
struct IEqualityComparer_1_UnityEngine_Component___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_UnityEngine_Component___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_UnityEngine_Component___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct IEnumerator_1_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_List_1_Moon_IGizmo___StaticFields {
};
struct IEnumerator_1_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_List_1_Moon_IGizmo___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct ICollection_1_UnityEngine_Component___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_Component___StaticFields {
};
struct ICollection_1_UnityEngine_Component___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_Component___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_Component___VTable vtable;
};
struct ICollection_1_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_List_1_Moon_IGizmo___StaticFields {
};
struct ICollection_1_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_List_1_Moon_IGizmo___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct IEnumerable_1_UnityEngine_Component___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_UnityEngine_Component___StaticFields {
};
struct IEnumerable_1_UnityEngine_Component___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_UnityEngine_Component___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_UnityEngine_Component___VTable vtable;
};
struct IEnumerable_1_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_List_1_Moon_IGizmo___StaticFields {
};
struct IEnumerable_1_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_List_1_Moon_IGizmo___VTable vtable;
};
struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields {
};
struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_Component_List_1_Moon_IGizmo___VTable vtable;
};
struct MoonGizmos__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonGizmos__StaticFields {
  bool m_typeToGizmoDictionaryInitialized;
  struct Dictionary_2_System_Type_System_Type_ * m_typeToGizmo;
};
struct MoonGizmos__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonGizmos__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonGizmos__VTable vtable;
};

enum GizmoHandleType__Enum : int32_t {
  GizmoHandleType__Enum_FreeMoveSphere = 0,
  GizmoHandleType__Enum_FreeMoveBox = 1,
  GizmoHandleType__Enum_ClassicPositionHandle = 2,
};
struct GizmoHandleType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GizmoHandleType__Enum value;
};
enum AxisAlignedBoxGizmoSettings_ModeType__Enum : int32_t {
  AxisAlignedBoxGizmoSettings_ModeType__Enum_Box2D = 0,
  AxisAlignedBoxGizmoSettings_ModeType__Enum_Box3D = 1,
};
struct AxisAlignedBoxGizmoSettings_ModeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AxisAlignedBoxGizmoSettings_ModeType__Enum value;
};
struct __declspec(align(8)) AxisAlignedBoxGizmoSettings__Fields {
  struct String * m_label;
  struct Color m_fillColor;
  struct Color m_outlineColor;
  struct Color m_handleColor;
  float m_handleSize;
  enum GizmoHandleType__Enum m_resizeHandle;
  enum GizmoHandleType__Enum m_moveHandle;
  enum AxisAlignedBoxGizmoSettings_ModeType__Enum m_mode;
};
struct AxisAlignedBoxGizmoSettings {
  struct AxisAlignedBoxGizmoSettings__Class *klass;
  struct MonitorData *monitor;
  struct AxisAlignedBoxGizmoSettings__Fields fields;
};
struct AxisAlignedBoxGizmoSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct AxisAlignedBoxGizmoSettings__StaticFields {
};
struct AxisAlignedBoxGizmoSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AxisAlignedBoxGizmoSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AxisAlignedBoxGizmoSettings__VTable vtable;
};

struct __declspec(align(8)) PointGizmoSettings__Fields {
  struct String * m_label;
  struct Color m_color;
  float m_size;
  enum GizmoHandleType__Enum m_handleType;
};
struct PointGizmoSettings {
  struct PointGizmoSettings__Class *klass;
  struct MonitorData *monitor;
  struct PointGizmoSettings__Fields fields;
};
struct PointGizmoSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PointGizmoSettings__StaticFields {
};
struct PointGizmoSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PointGizmoSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PointGizmoSettings__VTable vtable;
};

struct PetrifiedOwlAnimationDebugger__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator * Idle;
  struct BaseAnimator__Array * Animators;
  struct GameObject * ZoomOutZone;
  struct Vector2 GUIPosition;
  struct Vector2 GUIButtonSize;
  float GUIButtonBottomMargin;
  bool Enabled;
  struct BaseAnimator * m_lastPlayedAnimator;
  bool m_wasEnabled;
};
struct PetrifiedOwlAnimationDebugger {
  struct PetrifiedOwlAnimationDebugger__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlAnimationDebugger__Fields fields;
};
struct PetrifiedOwlAnimationDebugger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PetrifiedOwlAnimationDebugger__StaticFields {
};
struct PetrifiedOwlAnimationDebugger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlAnimationDebugger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlAnimationDebugger__VTable vtable;
};

struct PetrifiedOwlAnimatorBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float Score;
  struct BaseAnimator * Animator;
};
struct PetrifiedOwlAnimatorBehaviour {
  struct PetrifiedOwlAnimatorBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlAnimatorBehaviour__Fields fields;
};
struct PetrifiedOwlAnimatorBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlAnimatorBehaviour__StaticFields {
};
struct PetrifiedOwlAnimatorBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlAnimatorBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlAnimatorBehaviour__VTable vtable;
};

struct PetrifiedOwlDoubleClawBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float StaminaPerAttack;
  float StaminaThreshold;
  float StaminaThresholdScore;
  float InsideTriggerScore;
  float DoubleClawChanceStatScore;
  float AnyLegHurtScore;
  struct PetrifiedOwlStats * Stats;
  struct PlayerStayInsideZoneTrigger * AttackZoneTrigger;
  struct BaseAnimator * Animator;
};
struct PetrifiedOwlDoubleClawBehaviour {
  struct PetrifiedOwlDoubleClawBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlDoubleClawBehaviour__Fields fields;
};
struct PetrifiedOwlDoubleClawBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlDoubleClawBehaviour__StaticFields {
};
struct PetrifiedOwlDoubleClawBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlDoubleClawBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlDoubleClawBehaviour__VTable vtable;
};

struct PetrifiedOwlFireProjectilesBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float InsideTriggerScore;
  float SpawnInterval;
  float BrokenHornSpawnInterval;
  struct PetrifiedOwlStats * Stats;
  struct GameObject * OwlEntity;
  struct PlayerStayInsideZoneTrigger * ShootingZoneTrigger;
  struct BaseAnimator * FireProjectilesAnimator;
  struct ProjectileSpawner * SpawnerL;
  struct ProjectileSpawner * SpawnerR;
  struct TimelineEventTrigger * ShootingEvent;
  float m_timer;
  bool m_canShoot;
  struct Transform * m_target;
  struct IDamageReciever * m_targetReceiver;
  bool m_spawnerLFlipped;
  bool m_spawnerRFlipped;
};
struct PetrifiedOwlFireProjectilesBehaviour {
  struct PetrifiedOwlFireProjectilesBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlFireProjectilesBehaviour__Fields fields;
};
struct PetrifiedOwlFireProjectilesBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlFireProjectilesBehaviour__StaticFields {
};
struct PetrifiedOwlFireProjectilesBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlFireProjectilesBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlFireProjectilesBehaviour__VTable vtable;
};

struct PetrifiedOwlJumpBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float ScorePerOneMeter;
  float OriPosPredictionTime;
  struct GameObject * OwlEntity;
  struct BaseAnimator * JumpAnimator;
  struct TimelineEventTrigger * BeforeJumpDownEvent;
  struct Vector3 m_posBeforeJump;
};
struct PetrifiedOwlJumpBehaviour {
  struct PetrifiedOwlJumpBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlJumpBehaviour__Fields fields;
};
struct PetrifiedOwlJumpBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlJumpBehaviour__StaticFields {
};
struct PetrifiedOwlJumpBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlJumpBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlJumpBehaviour__VTable vtable;
};

struct PetrifiedOwlLaserBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float ScorePerIdleTime;
  struct PetrifiedOwlStats * Stats;
  struct BaseAnimator * LaserAnimator;
  struct GameObject * LaserBeamPrefab;
  struct Transform__Array * EyeSockets;
  struct TimelineEventTrigger * LaserEvent;
  struct TimelineEventTrigger * SampleOriPosition;
  struct GameObject__Array * m_lasers;
  struct Vector3 m_lastOriPosition;
};
struct PetrifiedOwlLaserBehaviour {
  struct PetrifiedOwlLaserBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlLaserBehaviour__Fields fields;
};
struct PetrifiedOwlLaserBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlLaserBehaviour__StaticFields {
};
struct PetrifiedOwlLaserBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlLaserBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlLaserBehaviour__VTable vtable;
};

struct PetrifiedOwlLookBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float OffsetZ;
  float LookMaxSpeed;
  float LookDamp;
  struct PetrifiedOwlStats * Stats;
  struct GameObject * OwlAnimator;
  struct VectorAnimationParameter * HeadIKParameter;
  struct InverseKinematicsPostprocess * KinematicsPostProcess;
  float WeightChangeSpeed;
  struct MoonAnimator * m_animator;
  struct Vector3 m_lastLookPos;
  struct Vector3 m_velocity;
  bool m_startedTrackingOri;
};
struct PetrifiedOwlLookBehaviour {
  struct PetrifiedOwlLookBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlLookBehaviour__Fields fields;
};
struct PetrifiedOwlLookBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};}