namespace app {
struct List_1_IntStateMap_Mapping___VTable {
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
struct List_1_IntStateMap_Mapping___StaticFields {
  struct IntStateMap_Mapping__Array * _emptyArray;
};
struct List_1_IntStateMap_Mapping___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IntStateMap_Mapping___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IntStateMap_Mapping___VTable vtable;
};
struct StateMap_1_IntStateMap_Mapping___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetGenericMapping;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData Resolve;
};
struct StateMap_1_IntStateMap_Mapping___StaticFields {
};
struct StateMap_1_IntStateMap_Mapping___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMap_1_IntStateMap_Mapping___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMap_1_IntStateMap_Mapping___VTable vtable;
};
struct IntStateMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetGenericMapping;
  VirtualInvokeData GetGenericMapping_1;
  VirtualInvokeData SetGenericMapping;
  VirtualInvokeData Resolve;
};
struct IntStateMap__StaticFields {
};
struct IntStateMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IntStateMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IntStateMap__VTable vtable;
};

struct NewSetupStateController__Fields {
  struct MonoBehaviour__Fields _;
  struct SetupControllerStateHolder * StateHolder;
  struct NewSetupStateControllerResolver * m_dataResolver;
  struct String * m_guidStr;
  struct Guid m_guid;
  struct NewSetupStateController_ChangeModel * m_changeModel;
  int32_t m_activeStateIndex;
  struct Int32__Array * m_allStateGuids;
  struct Nullable_1_Int32_ m_currentPassiveStateApplied;
  struct IUberState__Array * m_affectingUberStates;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct NewSetupStateController {
  struct NewSetupStateController__Class *klass;
  struct MonitorData *monitor;
  struct NewSetupStateController__Fields fields;
};
struct __declspec(align(8)) StateHolder__Fields {
  struct MoonReference_1_IUberState_ * State;
  struct StateMap * Mapping;
};
struct StateHolder {
  struct StateHolder__Class *klass;
  struct MonitorData *monitor;
  struct StateHolder__Fields fields;
};
struct StateHolder_1_SetupStateModifier___Fields {
  struct StateHolder__Fields _;
  struct List_1_SetupStateModifier_ * StateData;
  struct List_1_IIndexedItem_ * m_cachedStates;
};
struct StateHolder_1_SetupStateModifier_ {
  struct StateHolder_1_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct StateHolder_1_SetupStateModifier___Fields fields;
};
enum SetupControllerStateHolder_StateControllerMode__Enum : int32_t {
  SetupControllerStateHolder_StateControllerMode__Enum_Active = 0,
  SetupControllerStateHolder_StateControllerMode__Enum_Passive = 1,
};
struct SetupControllerStateHolder_StateControllerMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SetupControllerStateHolder_StateControllerMode__Enum value;
};
struct SetupControllerStateHolder__Fields {
  struct StateHolder_1_SetupStateModifier___Fields _;
  enum SetupControllerStateHolder_StateControllerMode__Enum Mode;
  struct List_1_SetupState_ * States;
  struct List_1_SetupStateModifier_ * Modifiers;
  int32_t FallbackPassiveState;
  struct Dictionary_2_System_Int32_SetupStateModifier_ * m_guidToModifier;
};
struct SetupControllerStateHolder {
  struct SetupControllerStateHolder__Class *klass;
  struct MonitorData *monitor;
  struct SetupControllerStateHolder__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IUberState___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IUberState_ * m_cachedProxyType;
  struct IUberState * m_volatileValue;
};
struct MoonReference_1_IUberState_ {
  struct MoonReference_1_IUberState___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IUberState___Fields fields;
};
struct IMoonType_1_IUberState_ {
  struct IMoonType_1_IUberState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_IIndexedItem___Fields {
  struct IIndexedItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IIndexedItem_ {
  struct List_1_IIndexedItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IIndexedItem___Fields fields;
};
struct IIndexedItem {
  struct IIndexedItem__Class *klass;
  struct MonitorData *monitor;
};
struct IIndexedItem__Array {
  struct IIndexedItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IIndexedItem * vector[32];
};
struct IEnumerator_1_IIndexedItem_ {
  struct IEnumerator_1_IIndexedItem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SetupStateModifier___Fields {
  struct SetupStateModifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SetupStateModifier_ {
  struct List_1_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SetupStateModifier___Fields fields;
};
struct __declspec(align(8)) SetupStateModifier__Fields {
  int32_t ModifierGUID;
  struct MoonReference_1_UnityEngine_GameObject_ * Target;
  struct List_1_SetupStateModifierData_ * m_uberStateModifierDatas;
};
struct SetupStateModifier {
  struct SetupStateModifier__Class *klass;
  struct MonitorData *monitor;
  struct SetupStateModifier__Fields fields;
};
struct SetupStateModifier__Array {
  struct SetupStateModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SetupStateModifier * vector[32];
};
struct __declspec(align(8)) List_1_SetupStateModifierData___Fields {
  struct SetupStateModifierData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SetupStateModifierData_ {
  struct List_1_SetupStateModifierData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SetupStateModifierData___Fields fields;
};
struct SetupStateModifierData__Array {
  struct SetupStateModifierData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SetupStateModifierData * vector[32];
};
struct IEnumerator_1_SetupStateModifierData_ {
  struct IEnumerator_1_SetupStateModifierData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SetupStateModifier_ {
  struct IEnumerator_1_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SetupState___Fields {
  struct SetupState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SetupState_ {
  struct List_1_SetupState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SetupState___Fields fields;
};
struct __declspec(align(8)) SetupState__Fields {
  int32_t StateGUID;
  struct String * StateName;
};
struct SetupState {
  struct SetupState__Class *klass;
  struct MonitorData *monitor;
  struct SetupState__Fields fields;
};
struct SetupState__Array {
  struct SetupState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SetupState * vector[32];
};
struct IEnumerator_1_SetupState_ {
  struct IEnumerator_1_SetupState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_SetupStateModifier___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_SetupStateModifier_ {
  struct Dictionary_2_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_SetupStateModifier___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct SetupStateModifier * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___Fields {
  struct Dictionary_2_System_Int32_SetupStateModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___Fields {
  struct Dictionary_2_System_Int32_SetupStateModifier_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___Fields fields;
};
struct ICollection_1_SetupStateModifier_ {
  struct ICollection_1_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_SetupStateModifier_ {
  int32_t key;
  struct SetupStateModifier * value;
};
struct KeyValuePair_2_System_Int32_SetupStateModifier___Boxed {
  struct KeyValuePair_2_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_SetupStateModifier_ fields;
};
struct KeyValuePair_2_System_Int32_SetupStateModifier___Array {
  struct KeyValuePair_2_System_Int32_SetupStateModifier___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_SetupStateModifier_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_SetupStateModifier_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SetupStateModifier_ {
  struct IEnumerable_1_SetupStateModifier___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) NewSetupStateControllerResolver__Fields {
  bool m_serializationComplete;
  struct List_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_ * SerializedItems;
  struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ * m_dataLinks;
};
struct NewSetupStateControllerResolver {
  struct NewSetupStateControllerResolver__Class *klass;
  struct MonitorData *monitor;
  struct NewSetupStateControllerResolver__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem___Fields {
  struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_ {
  struct List_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem___Fields fields;
};
struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem {
  int32_t Guid;
  struct NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData * DataLinkItem;
};
struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Boxed {
  struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Class *klass;
  struct MonitorData *monitor;
  struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem fields;
};
struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array {
  struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem vector[32];
};
struct __declspec(align(8)) NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Fields {
  int32_t StateGUID;
  int32_t ModifierGUID;
  struct NewSetupStateController * TargetController;
  enum SetupStateModifierDataType__Enum ModifierDataClassType;
  enum DynamicDataLinkUtils_DataTargetMemberType__Enum TargetMemberType;
  int32_t ClassID;
  int32_t FieldID;
  struct String * MemberName;
  struct String * ParameterName;
};
struct NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData {
  struct NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Class *klass;
  struct MonitorData *monitor;
  struct NewSetupStateControllerResolver_SetupStateControllerLinkSerializedData__Fields fields;
};
struct IEnumerator_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem_ {
  struct IEnumerator_1_Moon_NewSetupStateControllerResolver_SerializedUberStateControllerLinkItem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ vector[32];
};
struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink {
  struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields {
  struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields {
  struct Dictionary_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Fields fields;
};
struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array {
  struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink * vector[32];
};
struct IEnumerator_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct IEnumerator_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct ICollection_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  int32_t key;
  struct NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink * value;
};
struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Boxed {
  struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ fields;
};
struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Array {
  struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink_ {
  struct IEnumerable_1_Moon_NewSetupStateControllerResolver_IRuntimeUberStateControllerDataLink___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) NewSetupStateController_ChangeModel__Fields {
  int32_t m_stateCount;
  int32_t m_modifierCount;
  struct IUberState * m_uberState;
};
struct NewSetupStateController_ChangeModel {
  struct NewSetupStateController_ChangeModel__Class *klass;
  struct MonitorData *monitor;
  struct NewSetupStateController_ChangeModel__Fields fields;
};
struct IMoonType_1_IUberState___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IUberState___StaticFields {
};
struct IMoonType_1_IUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IUberState___VTable vtable;
};
struct MoonReference_1_IUberState___VTable {
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
struct MoonReference_1_IUberState___StaticFields {
};
struct MoonReference_1_IUberState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IUberState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IUberState___VTable vtable;
};
struct IIndexedItem__VTable {
  VirtualInvokeData get_Index;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_NotMappable;
};
struct IIndexedItem__StaticFields {
};
struct IIndexedItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IIndexedItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IIndexedItem__VTable vtable;
};
struct IEnumerator_1_IIndexedItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_IIndexedItem___StaticFields {
};
struct IEnumerator_1_IIndexedItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_IIndexedItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_IIndexedItem___VTable vtable;
};
struct List_1_IIndexedItem___VTable {
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
struct List_1_IIndexedItem___StaticFields {
  struct IIndexedItem__Array * _emptyArray;
};
struct List_1_IIndexedItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_IIndexedItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_IIndexedItem___VTable vtable;
};
struct StateHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetSetupStates;
  VirtualInvokeData get_UseMapping;
  VirtualInvokeData get_UseDesiredValues;
  VirtualInvokeData get_UseUberState;
};
struct StateHolder__StaticFields {
};
struct StateHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder__VTable vtable;
};
struct IEnumerator_1_SetupStateModifierData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SetupStateModifierData___StaticFields {
};
struct IEnumerator_1_SetupStateModifierData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SetupStateModifierData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SetupStateModifierData___VTable vtable;
};
struct List_1_SetupStateModifierData___VTable {
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
struct List_1_SetupStateModifierData___StaticFields {
  struct SetupStateModifierData__Array * _emptyArray;
};
struct List_1_SetupStateModifierData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SetupStateModifierData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SetupStateModifierData___VTable vtable;
};
struct SetupStateModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Index;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_NotMappable;
  VirtualInvokeData OnTargetChange;
};
struct SetupStateModifier__StaticFields {
};
struct SetupStateModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetupStateModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetupStateModifier__VTable vtable;
};
struct IEnumerator_1_SetupStateModifier___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SetupStateModifier___StaticFields {
};
struct IEnumerator_1_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SetupStateModifier___VTable vtable;
};
struct List_1_SetupStateModifier___VTable {
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
struct List_1_SetupStateModifier___StaticFields {
  struct SetupStateModifier__Array * _emptyArray;
};
struct List_1_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SetupStateModifier___VTable vtable;
};
struct StateHolder_1_SetupStateModifier___VTable {
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
struct StateHolder_1_SetupStateModifier___StaticFields {
};
struct StateHolder_1_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateHolder_1_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateHolder_1_SetupStateModifier___VTable vtable;
};
struct SetupState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Index;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_NotMappable;
};
struct SetupState__StaticFields {
};
struct SetupState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetupState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetupState__VTable vtable;
};
struct IEnumerator_1_SetupState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SetupState___StaticFields {
};
struct IEnumerator_1_SetupState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SetupState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SetupState___VTable vtable;
};
struct List_1_SetupState___VTable {
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
struct List_1_SetupState___StaticFields {
  struct SetupState__Array * _emptyArray;
};
struct List_1_SetupState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SetupState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SetupState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_SetupStateModifier___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_SetupStateModifier___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_SetupStateModifier___VTable vtable;
};
struct ICollection_1_SetupStateModifier___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_SetupStateModifier___StaticFields {
};
struct ICollection_1_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_SetupStateModifier___VTable vtable;
};
struct KeyValuePair_2_System_Int32_SetupStateModifier___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Int32_SetupStateModifier___StaticFields {
};
struct KeyValuePair_2_System_Int32_SetupStateModifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Int32_SetupStateModifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Int32_SetupStateModifier___VTable vtable;
};}