namespace app {
struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___StaticFields {
};
struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_CleverMenuItem_EquipmentRadialSelection_RadialItemVisual___VTable vtable;
};
struct EquipmentRadialSelection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct EquipmentRadialSelection__StaticFields {
};
struct EquipmentRadialSelection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentRadialSelection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentRadialSelection__VTable vtable;
};

struct EquipmentScreen_c {
  struct EquipmentScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct EquipmentScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentScreen_c__StaticFields {
  struct EquipmentScreen_c * __9;
  struct Predicate_1_CleverMenuItem_ * __9__57_0;
};
struct EquipmentScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentScreen_c__VTable vtable;
};

struct __declspec(align(8)) EquipmentScreen_c_DisplayClass58_0__Fields {
  struct PlayerUberStateInventory_InventoryItem * item;
};
struct EquipmentScreen_c_DisplayClass58_0 {
  struct EquipmentScreen_c_DisplayClass58_0__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentScreen_c_DisplayClass58_0__Fields fields;
};
struct EquipmentScreen_c_DisplayClass58_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentScreen_c_DisplayClass58_0__StaticFields {
};
struct EquipmentScreen_c_DisplayClass58_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentScreen_c_DisplayClass58_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentScreen_c_DisplayClass58_0__VTable vtable;
};

struct EquipmentUIDetails_c {
  struct EquipmentUIDetails_c__Class *klass;
  struct MonitorData *monitor;
};
struct EquipmentUIDetails_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentUIDetails_c__StaticFields {
  struct EquipmentUIDetails_c * __9;
  struct Action * __9__18_0;
  struct Action * __9__18_1;
};
struct EquipmentUIDetails_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentUIDetails_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentUIDetails_c__VTable vtable;
};

struct EquipmentWheel__Fields {
  struct MenuScreenStack__Fields _;
  struct MoonTimelineUiFader * Fader;
  struct GameObject * ButtonBindingCanvasPrefab;
  struct EquipmentRadialSelection * RadialSelection;
  struct GameObject * SpellItemPrefab;
  struct GameObject * PlaceholderRoot;
  struct GameObject * ItemHighlightGO;
  struct GameObject * FootBar;
  struct EquipmentWheelUIDetails * EquipmentDetailsCanvas;
  struct Transform * ArrowPivot;
  struct GameObject * CircleBackground;
  struct GameObject * SpiralBackground;
  bool PauseGame;
  bool ShouldSnapToAngles;
  float RadialSmoothTime;
  struct Vector2 m_currentRadialVelocity;
  bool m_isHiding;
  enum AbilityType__Enum m_nextAbilityOfCurrentlyUpdatingSlot;
  enum AbilityType__Enum m_previousAbilityOfCurrentlyUpdatingSlot;
  struct Dictionary_2_SpellInventory_Binding_EquipmentType_ * m_previousAbilityByBinding;
  struct Dictionary_2_SpellInventory_Binding_EquipmentType_ * m_currentAbilityByBinding;
  struct Action_2_AbilityType_AbilityType_ * OnAbilityBind;
  struct Vector2 m_lastNonZeroAngle;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct HashSet_1_Moon_ISuspendable_ * m_cachedSuspendables;
};
struct EquipmentWheel {
  struct EquipmentWheel__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentWheel__Fields fields;
};
struct EquipmentWheelUIDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * UsesEnergyGO;
  struct GameObject * DrainsEnergyGO;
  struct MessageProvider * LockedName;
  struct MessageProvider * LockedDescription;
  float Offset;
  struct Action * OnSocketActivated;
  struct Action * OnSocketAdded;
  struct PlayerUberStateInventory_InventoryItem * m_item;
};
struct EquipmentWheelUIDetails {
  struct EquipmentWheelUIDetails__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentWheelUIDetails__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_SpellInventory_Binding_EquipmentType___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SpellInventory_Binding_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SpellInventory_Binding_EquipmentType_ {
  struct Dictionary_2_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SpellInventory_Binding_EquipmentType___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType_ {
  int32_t hashCode;
  int32_t next;
  enum SpellInventory_Binding__Enum key;
  enum EquipmentType__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Array {
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType_ vector[32];
};
struct IEqualityComparer_1_SpellInventory_Binding_ {
  struct IEqualityComparer_1_SpellInventory_Binding___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___Fields {
  struct Dictionary_2_SpellInventory_Binding_EquipmentType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___Fields fields;
};
struct SpellInventory_Binding__Enum__Array {
  struct SpellInventory_Binding__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum SpellInventory_Binding__Enum vector[32];
};
struct IEnumerator_1_SpellInventory_Binding_ {
  struct IEnumerator_1_SpellInventory_Binding___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___Fields {
  struct Dictionary_2_SpellInventory_Binding_EquipmentType_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___Fields fields;
};
struct ICollection_1_SpellInventory_Binding_ {
  struct ICollection_1_SpellInventory_Binding___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType_ {
  enum SpellInventory_Binding__Enum key;
  enum EquipmentType__Enum value;
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___Boxed {
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType_ fields;
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array {
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType_ {
  struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SpellInventory_Binding_ {
  struct IEnumerable_1_SpellInventory_Binding___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_AbilityType_AbilityType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_AbilityType_AbilityType_ {
  struct Action_2_AbilityType_AbilityType___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_AbilityType_AbilityType___Fields fields;
};
struct EquipmentWheelUIDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentWheelUIDetails__StaticFields {
};
struct EquipmentWheelUIDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentWheelUIDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentWheelUIDetails__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct IEqualityComparer_1_SpellInventory_Binding___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_SpellInventory_Binding___StaticFields {
};
struct IEqualityComparer_1_SpellInventory_Binding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_SpellInventory_Binding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_SpellInventory_Binding___VTable vtable;
};
struct IEnumerator_1_SpellInventory_Binding___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpellInventory_Binding___StaticFields {
};
struct IEnumerator_1_SpellInventory_Binding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpellInventory_Binding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpellInventory_Binding___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct ICollection_1_SpellInventory_Binding___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_SpellInventory_Binding___StaticFields {
};
struct ICollection_1_SpellInventory_Binding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_SpellInventory_Binding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_SpellInventory_Binding___VTable vtable;
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct IEnumerable_1_SpellInventory_Binding___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SpellInventory_Binding___StaticFields {
};
struct IEnumerable_1_SpellInventory_Binding___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SpellInventory_Binding___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SpellInventory_Binding___VTable vtable;
};
struct Dictionary_2_SpellInventory_Binding_EquipmentType___VTable {
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
struct Dictionary_2_SpellInventory_Binding_EquipmentType___StaticFields {
};
struct Dictionary_2_SpellInventory_Binding_EquipmentType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_SpellInventory_Binding_EquipmentType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_SpellInventory_Binding_EquipmentType___VTable vtable;
};
struct Action_2_AbilityType_AbilityType___VTable {
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
struct Action_2_AbilityType_AbilityType___StaticFields {
};
struct Action_2_AbilityType_AbilityType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_2_AbilityType_AbilityType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_2_AbilityType_AbilityType___VTable vtable;
};
struct EquipmentWheel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct EquipmentWheel__StaticFields {
  struct EquipmentWheel * Instance;
  struct HashSet_1_EquipmentType_ * s_tempEquipmentTypesWithRestrictions;
  struct List_1_EquipmentType_ * s_equipmentTypeValues;
  struct List_1_EquipmentType_ * m_validEquipmentTypes;
};
struct EquipmentWheel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentWheel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentWheel__VTable vtable;
};

struct EquipmentWheel_c {
  struct EquipmentWheel_c__Class *klass;
  struct MonitorData *monitor;
};
struct EquipmentWheel_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentWheel_c__StaticFields {
  struct EquipmentWheel_c * __9;
  struct Action_2_AbilityType_AbilityType_ * __9__91_0;
};
struct EquipmentWheel_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentWheel_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentWheel_c__VTable vtable;
};

struct EquipmentWheelUIDetails_c {
  struct EquipmentWheelUIDetails_c__Class *klass;
  struct MonitorData *monitor;
};
struct EquipmentWheelUIDetails_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentWheelUIDetails_c__StaticFields {
  struct EquipmentWheelUIDetails_c * __9;
  struct Action * __9__14_0;
  struct Action * __9__14_1;
};
struct EquipmentWheelUIDetails_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentWheelUIDetails_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentWheelUIDetails_c__VTable vtable;
};

struct __declspec(align(8)) FireStick_DropAndDestroy_d_73__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct FireStick * __4__this;
};
struct FireStick_DropAndDestroy_d_73 {
  struct FireStick_DropAndDestroy_d_73__Class *klass;
  struct MonitorData *monitor;
  struct FireStick_DropAndDestroy_d_73__Fields fields;
};
struct FireStick_DropAndDestroy_d_73__VTable {
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
struct FireStick_DropAndDestroy_d_73__StaticFields {
};
struct FireStick_DropAndDestroy_d_73__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStick_DropAndDestroy_d_73__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStick_DropAndDestroy_d_73__VTable vtable;
};

struct __declspec(align(8)) FireStick_DeactivateWithDelay_d_81__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float delay;
  struct FireStick * __4__this;
};
struct FireStick_DeactivateWithDelay_d_81 {
  struct FireStick_DeactivateWithDelay_d_81__Class *klass;
  struct MonitorData *monitor;
  struct FireStick_DeactivateWithDelay_d_81__Fields fields;
};
struct FireStick_DeactivateWithDelay_d_81__VTable {
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
struct FireStick_DeactivateWithDelay_d_81__StaticFields {
};
struct FireStick_DeactivateWithDelay_d_81__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStick_DeactivateWithDelay_d_81__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStick_DeactivateWithDelay_d_81__VTable vtable;
};

struct __declspec(align(8)) FireStick_DestroyAfter_d_82__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float time;
  struct FireStick * __4__this;
};
struct FireStick_DestroyAfter_d_82 {
  struct FireStick_DestroyAfter_d_82__Class *klass;
  struct MonitorData *monitor;
  struct FireStick_DestroyAfter_d_82__Fields fields;
};
struct FireStick_DestroyAfter_d_82__VTable {
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
struct FireStick_DestroyAfter_d_82__StaticFields {
};
struct FireStick_DestroyAfter_d_82__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStick_DestroyAfter_d_82__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStick_DestroyAfter_d_82__VTable vtable;
};

struct FireStickInteractor__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * Message;
  struct MessageBox * m_message;
  bool ShouldBeLit;
  enum FireStick_Usability__Enum Allow;
  struct ActionMethod * OnAction;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct FireStickInteractor {
  struct FireStickInteractor__Class *klass;
  struct MonitorData *monitor;
  struct FireStickInteractor__Fields fields;
};
struct FireStickInteractor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StressTestName;
  VirtualInvokeData StartStressTest;
  VirtualInvokeData StressTestUpdate;
  VirtualInvokeData EndStressTest;
  VirtualInvokeData get_StressTestStatus;
  VirtualInvokeData set_StressTestStatus;
  VirtualInvokeData get_CanExecuteStressTest;
  VirtualInvokeData get_StopMovingPlayerWhilePerforming;
};
struct FireStickInteractor__StaticFields {
};
struct FireStickInteractor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStickInteractor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStickInteractor__VTable vtable;
};

struct FireStickManager {
  struct FireStickManager__Class *klass;
  struct MonitorData *monitor;
};
struct FireStickManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FireStickManager__StaticFields {
};
struct FireStickManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStickManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStickManager__VTable vtable;
};

struct HoldableRigidBodyPlaceholder__Fields {
  struct SaveSerialize__Fields _;
  struct GameObject * HoldableRigidBodyPrefab;
  bool CanBeDropped;
  bool m_instanceSpawned;
};
struct HoldableRigidBodyPlaceholder {
  struct HoldableRigidBodyPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct HoldableRigidBodyPlaceholder__Fields fields;
};
struct HoldableRigidBodyPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct HoldableRigidBodyPlaceholder__StaticFields {
};
struct HoldableRigidBodyPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldableRigidBodyPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldableRigidBodyPlaceholder__VTable vtable;
};

struct TorchFirePedestal__Fields {
  struct MonoBehaviour__Fields _;
  struct SerializedBooleanUberState * IsBurningUberState;
  bool CreateCheckpoint;
  struct Flammable * Flammable;
  struct GameObject * FlameActiveObject;
  struct StickSpawner * StickSpawner;
  struct LegacyTimelineSequence * BurningStartTimeline;
  struct IUberState__Array * m_affectingUberStates;
};
struct TorchFirePedestal {
  struct TorchFirePedestal__Class *klass;
  struct MonitorData *monitor;
  struct TorchFirePedestal__Fields fields;
};
struct CharacterInteractable__Fields {
  struct Suspendable__Fields _;
  bool _IsSuspended_k__BackingField;
  enum CharacterInteractableType__Enum Type;
  struct PlayerStayInsideZoneTrigger * InteractionZone;
  struct Func_2_ICharacter_Boolean_ * CanCharacterInteractModifier;
  struct MessageProvider * InteractionHint;
  struct Condition_1 * InteractionCondition;
};
struct CharacterInteractable {
  struct CharacterInteractable__Class *klass;
  struct MonitorData *monitor;
  struct CharacterInteractable__Fields fields;
};
struct InteractablePrefabSpawner__Fields {
  struct CharacterInteractable__Fields _;
  struct GameObject * Prefab;
};
struct InteractablePrefabSpawner {
  struct InteractablePrefabSpawner__Class *klass;
  struct MonitorData *monitor;
  struct InteractablePrefabSpawner__Fields fields;
};
struct StickSpawner__Fields {
  struct InteractablePrefabSpawner__Fields _;
  struct GuidOwner * GuidOwner;
  enum Flammable_FlameState__Enum FlameState;
  enum Flammable_FlameColor__Enum FlameColor;
  struct Event_1 * OnSpawnStickSound;
  struct MoonTimeline * OnPickupTimeline;
};
struct StickSpawner {
  struct StickSpawner__Class *klass;
  struct MonitorData *monitor;
  struct StickSpawner__Fields fields;
};
struct Func_2_ICharacter_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_ICharacter_Boolean_ {
  struct Func_2_ICharacter_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_ICharacter_Boolean___Fields fields;
};
struct Func_2_ICharacter_Boolean___VTable {
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
struct Func_2_ICharacter_Boolean___StaticFields {
};
struct Func_2_ICharacter_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_ICharacter_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_ICharacter_Boolean___VTable vtable;
};
struct CharacterInteractable__VTable {
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
  VirtualInvokeData get_InteractableType;
  VirtualInvokeData CanInteractWithCharacter;
  VirtualInvokeData OnInteractionStart;
  VirtualInvokeData InteractionUpdate;
  VirtualInvokeData OnInteractionEnd;
  VirtualInvokeData ShouldFinishInteraction;
  VirtualInvokeData get_ActivationMode;
  VirtualInvokeData get_ActivationButton;
  VirtualInvokeData get_InteractionMessageHint;
  VirtualInvokeData CanInteractWithCharacter_1;
  VirtualInvokeData OnInteractionStart_1;
  VirtualInvokeData InteractionUpdate_1;
  VirtualInvokeData OnInteractionEnd_1;
  VirtualInvokeData get_ActivationMode_1;
  VirtualInvokeData get_ActivationButton_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct CharacterInteractable__StaticFields {
};
struct CharacterInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterInteractable__VTable vtable;
};
struct InteractablePrefabSpawner__VTable {
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
  VirtualInvokeData get_InteractableType;
  VirtualInvokeData CanInteractWithCharacter;
  VirtualInvokeData OnInteractionStart;
  VirtualInvokeData InteractionUpdate;
  VirtualInvokeData OnInteractionEnd;
  VirtualInvokeData ShouldFinishInteraction;
  VirtualInvokeData get_ActivationMode;
  VirtualInvokeData get_ActivationButton;
  VirtualInvokeData get_InteractionMessageHint;
  VirtualInvokeData CanInteractWithCharacter_1;
  VirtualInvokeData OnInteractionStart_1;
  VirtualInvokeData InteractionUpdate_1;
  VirtualInvokeData OnInteractionEnd_1;
  VirtualInvokeData get_ActivationMode_1;
  VirtualInvokeData get_ActivationButton_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData InstantiatePrefab;
  VirtualInvokeData OnAfterInstantiatePrefab;
};
struct InteractablePrefabSpawner__StaticFields {
};
struct InteractablePrefabSpawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InteractablePrefabSpawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InteractablePrefabSpawner__VTable vtable;
};
struct StickSpawner__VTable {
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
  VirtualInvokeData get_InteractableType;
  VirtualInvokeData CanInteractWithCharacter;
  VirtualInvokeData OnInteractionStart;
  VirtualInvokeData InteractionUpdate;
  VirtualInvokeData OnInteractionEnd;
  VirtualInvokeData ShouldFinishInteraction;
  VirtualInvokeData get_ActivationMode;
  VirtualInvokeData get_ActivationButton;
  VirtualInvokeData get_InteractionMessageHint;
  VirtualInvokeData CanInteractWithCharacter_1;
  VirtualInvokeData OnInteractionStart_1;
  VirtualInvokeData InteractionUpdate_1;
  VirtualInvokeData OnInteractionEnd_1;
  VirtualInvokeData get_ActivationMode_1;
  VirtualInvokeData get_ActivationButton_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData InstantiatePrefab;
  VirtualInvokeData OnAfterInstantiatePrefab;
};
struct StickSpawner__StaticFields {
};
struct StickSpawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StickSpawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StickSpawner__VTable vtable;
};}