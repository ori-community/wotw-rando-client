namespace app {
struct __declspec(align(8)) SpaceMongerWidget__Fields {
  struct Action_1_Moon_UberStateVisualization_UberStateData_ * OnSelectionChanged;
  struct SpaceMongerWidget_SpaceMongerLayout m_layout;
  struct SpaceMongerWidget_SpaceMongerModel m_model;
};
struct SpaceMongerWidget {
  struct SpaceMongerWidget__Class *klass;
  struct MonitorData *monitor;
  struct SpaceMongerWidget__Fields fields;
};
struct Action_1_Moon_UberStateVisualization_UberStateData___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_UberStateVisualization_UberStateData_ {
  struct Action_1_Moon_UberStateVisualization_UberStateData___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_UberStateVisualization_UberStateData___Fields fields;
};
struct IUberStateUIWrapper {
  struct IUberStateUIWrapper__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_UberStateVisualization_UberStateGroupData___Fields {
  struct UberStateGroupData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UberStateVisualization_UberStateGroupData_ {
  struct List_1_Moon_UberStateVisualization_UberStateGroupData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UberStateVisualization_UberStateGroupData___Fields fields;
};
struct UberStateGroupData {
  struct UberID * Id;
  struct Color Color;
  struct Rect GroupRect;
  int64_t DataSize;
  struct List_1_Moon_UberStateVisualization_UberStateData_ * States;
  struct List_1_UnityEngine_Rect_ * GroupSplitters;
  struct String * m_name;
  int32_t m_previusStateCount;
};
struct UberStateGroupData__Boxed {
  struct UberStateGroupData__Class *klass;
  struct MonitorData *monitor;
  struct UberStateGroupData fields;
};
struct UberStateGroupData__Array {
  struct UberStateGroupData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateGroupData vector[32];
};
struct __declspec(align(8)) List_1_Moon_UberStateVisualization_UberStateData___Fields {
  struct UberStateData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UberStateVisualization_UberStateData_ {
  struct List_1_Moon_UberStateVisualization_UberStateData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UberStateVisualization_UberStateData___Fields fields;
};
struct UberStateData__Array {
  struct UberStateData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UberStateData vector[32];
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateData_ {
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData_ {
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___Class *klass;
  struct MonitorData *monitor;
};
struct IUberStateUIWrapper__VTable {
  VirtualInvokeData get_IsActive;
  VirtualInvokeData set_IsActive;
  VirtualInvokeData OnGui;
  VirtualInvokeData HandleInput;
};
struct IUberStateUIWrapper__StaticFields {
};
struct IUberStateUIWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUberStateUIWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUberStateUIWrapper__VTable vtable;
};
struct UberStateData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateData__StaticFields {
};
struct UberStateData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateData__VTable vtable;
};
struct Action_1_Moon_UberStateVisualization_UberStateData___VTable {
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
struct Action_1_Moon_UberStateVisualization_UberStateData___StaticFields {
};
struct Action_1_Moon_UberStateVisualization_UberStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_UberStateVisualization_UberStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_UberStateVisualization_UberStateData___VTable vtable;
};
struct SpaceMongerWidget_SpaceMongerLayout__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpaceMongerWidget_SpaceMongerLayout__StaticFields {
};
struct SpaceMongerWidget_SpaceMongerLayout__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceMongerWidget_SpaceMongerLayout__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceMongerWidget_SpaceMongerLayout__VTable vtable;
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___StaticFields {
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateData___VTable vtable;
};
struct List_1_Moon_UberStateVisualization_UberStateData___VTable {
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
struct List_1_Moon_UberStateVisualization_UberStateData___StaticFields {
  struct UberStateData__Array * _emptyArray;
};
struct List_1_Moon_UberStateVisualization_UberStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_UberStateVisualization_UberStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_UberStateVisualization_UberStateData___VTable vtable;
};
struct UberStateGroupData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateGroupData__StaticFields {
};
struct UberStateGroupData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateGroupData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateGroupData__VTable vtable;
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields {
};
struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_UberStateVisualization_UberStateGroupData___VTable vtable;
};
struct List_1_Moon_UberStateVisualization_UberStateGroupData___VTable {
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
struct List_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields {
  struct UberStateGroupData__Array * _emptyArray;
};
struct List_1_Moon_UberStateVisualization_UberStateGroupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_UberStateVisualization_UberStateGroupData___VTable vtable;
};
struct Nullable_1_Moon_UberStateVisualization_UberStateData___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Nullable_1_Moon_UberStateVisualization_UberStateData___StaticFields {
};
struct Nullable_1_Moon_UberStateVisualization_UberStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Nullable_1_Moon_UberStateVisualization_UberStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Nullable_1_Moon_UberStateVisualization_UberStateData___VTable vtable;
};
struct SpaceMongerWidget_SpaceMongerModel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpaceMongerWidget_SpaceMongerModel__StaticFields {
};
struct SpaceMongerWidget_SpaceMongerModel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceMongerWidget_SpaceMongerModel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceMongerWidget_SpaceMongerModel__VTable vtable;
};
struct SpaceMongerWidget__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpaceMongerWidget__StaticFields {
};
struct SpaceMongerWidget__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceMongerWidget__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceMongerWidget__VTable vtable;
};

struct SpaceMongerWidget_UberStateGroupDataSizeComparer {
  struct SpaceMongerWidget_UberStateGroupDataSizeComparer__Class *klass;
  struct MonitorData *monitor;
};
struct SpaceMongerWidget_UberStateGroupDataSizeComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct SpaceMongerWidget_UberStateGroupDataSizeComparer__StaticFields {
};
struct SpaceMongerWidget_UberStateGroupDataSizeComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceMongerWidget_UberStateGroupDataSizeComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceMongerWidget_UberStateGroupDataSizeComparer__VTable vtable;
};

struct SpaceMongerWidget_c {
  struct SpaceMongerWidget_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpaceMongerWidget_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpaceMongerWidget_c__StaticFields {
  struct SpaceMongerWidget_c * __9;
  struct Action_1_Moon_UberStateVisualization_UberStateData_ * __9__7_0;
};
struct SpaceMongerWidget_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpaceMongerWidget_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpaceMongerWidget_c__VTable vtable;
};

struct __declspec(align(8)) UberStateDataView__Fields {
  struct Rect m_viewRect;
  struct Rect m_headerRect;
  struct Nullable_1_Moon_UberStateVisualization_UberStateData_ m_uberStateData;
  int32_t m_lastControlId;
};
struct UberStateDataView {
  struct UberStateDataView__Class *klass;
  struct MonitorData *monitor;
  struct UberStateDataView__Fields fields;
};
struct UberStateDataView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateDataView__StaticFields {
};
struct UberStateDataView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateDataView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateDataView__VTable vtable;
};

struct UberStateGroupDataItemView__Fields {
  struct ListViewItem__Fields _;
  struct UberStateGroupData m_data;
};
struct UberStateGroupDataItemView {
  struct UberStateGroupDataItemView__Class *klass;
  struct MonitorData *monitor;
  struct UberStateGroupDataItemView__Fields fields;
};
struct UberStateGroupDataItemView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnItemGui;
};
struct UberStateGroupDataItemView__StaticFields {
  struct Texture2D * s_circleTexture;
};
struct UberStateGroupDataItemView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateGroupDataItemView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateGroupDataItemView__VTable vtable;
};

struct UberStateValueGroupSortById {
  struct UberStateValueGroupSortById__Class *klass;
  struct MonitorData *monitor;
};
struct UberStateValueGroupSortById__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct UberStateValueGroupSortById__StaticFields {
};
struct UberStateValueGroupSortById__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateValueGroupSortById__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateValueGroupSortById__VTable vtable;
};

struct UberStateVisualizationView_UberStateVisualizationLayout {
  struct Rect ViewRect;
  struct Rect ToolbarRect;
  struct Rect MapButtonRect;
  struct Rect GroupsListRect;
  struct Rect StatesListRect;
  struct Rect StateDetailsRect;
  struct Rect SpaceMongerRect;
  float GroupsListRectWidth;
  float StatesListRectWidth;
  float SpaceMongerRectHeigth;
  struct Rect SpaceMongerSplitterRect;
  struct Rect GroupsSplitterRect;
  struct Rect StatesSplitterRect;
};
struct UberStateVisualizationView_UberStateVisualizationLayout__Boxed {
  struct UberStateVisualizationView_UberStateVisualizationLayout__Class *klass;
  struct MonitorData *monitor;
  struct UberStateVisualizationView_UberStateVisualizationLayout fields;
};
struct UberStateVisualizationView_UberStateVisualizationModel {
  struct List_1_Moon_UberStateVisualization_UberStateGroupData_ * Groups;
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * GroupsListViewItems;
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * StatesListViewItems;
  struct Dictionary_2_System_Int32_Moon_IUberState_ * UberStatesMap;
};
struct UberStateVisualizationView_UberStateVisualizationModel__Boxed {
  struct UberStateVisualizationView_UberStateVisualizationModel__Class *klass;
  struct MonitorData *monitor;
  struct UberStateVisualizationView_UberStateVisualizationModel fields;
};
struct __declspec(align(8)) UberStateVisualizationView__Fields {
  struct UberStateVisualizationView_UberStateVisualizationLayout m_layout;
  struct UberStateVisualizationView_UberStateVisualizationModel m_model;
  struct ListView * m_groupsListView;
  struct ListView * m_statesListView;
  struct UberStateDataView * m_stateDataView;
  struct SpaceMongerWidget * m_spaceMonger;
  bool inputLeft;
  bool inputRight;
  bool inputDown;
  bool inputUp;
  float lastDpadX;
  float lastDpadY;
  float lastLeftStickX;
  float lastLeftStickY;
  bool leftStickLeft;
  bool leftStickRight;
  bool leftStickDown;
  bool leftStickUp;
  bool dpadLeft;
  bool dpadRight;
  bool dpadUp;
  bool dpadDown;
  bool inputActivate;
  int32_t m_currentSectionIndex;
};
struct UberStateVisualizationView {
  struct UberStateVisualizationView__Class *klass;
  struct MonitorData *monitor;
  struct UberStateVisualizationView__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_UberID_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  int32_t hashCode;
  int32_t next;
  struct UberID * key;
  struct ListViewItem * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields {
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields {
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Fields fields;
};
struct ICollection_1_Moon_UberStateVisualization_ListViewItem_ {
  struct ICollection_1_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  struct UberID * key;
  struct ListViewItem * value;
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Boxed {
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ fields;
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Array {
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem_ {
  struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___Class *klass;
  struct MonitorData *monitor;
};
struct UberStateVisualizationView_UberStateVisualizationLayout__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateVisualizationView_UberStateVisualizationLayout__StaticFields {
};
struct UberStateVisualizationView_UberStateVisualizationLayout__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateVisualizationView_UberStateVisualizationLayout__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateVisualizationView_UberStateVisualizationLayout__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct ICollection_1_Moon_UberStateVisualization_ListViewItem___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct ICollection_1_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable {
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
struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields {
};
struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_Moon_UberID_Moon_UberStateVisualization_ListViewItem___VTable vtable;
};
struct UberStateVisualizationView_UberStateVisualizationModel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateVisualizationView_UberStateVisualizationModel__StaticFields {
};
struct UberStateVisualizationView_UberStateVisualizationModel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateVisualizationView_UberStateVisualizationModel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateVisualizationView_UberStateVisualizationModel__VTable vtable;
};
struct UberStateVisualizationView__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnGui;
  VirtualInvokeData UpdateWithModel;
  VirtualInvokeData Layout;
  VirtualInvokeData Render;
  VirtualInvokeData HandleInput;
  VirtualInvokeData Clear;
};
struct UberStateVisualizationView__StaticFields {
};
struct UberStateVisualizationView__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateVisualizationView__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateVisualizationView__VTable vtable;
};

struct UberStateVisualizationView_c {
  struct UberStateVisualizationView_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ {
  struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___Fields fields;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateData___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateData_ {
  struct Comparison_1_Moon_UberStateVisualization_UberStateData___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Moon_UberStateVisualization_UberStateData___Fields fields;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___VTable {
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
struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields {
};
struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData___VTable vtable;
};
struct Comparison_1_Moon_UberStateVisualization_UberStateData___VTable {
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
struct Comparison_1_Moon_UberStateVisualization_UberStateData___StaticFields {
};
struct Comparison_1_Moon_UberStateVisualization_UberStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Moon_UberStateVisualization_UberStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Moon_UberStateVisualization_UberStateData___VTable vtable;
};
struct UberStateVisualizationView_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UberStateVisualizationView_c__StaticFields {
  struct UberStateVisualizationView_c * __9;
  struct Comparison_1_Moon_UberStateVisualization_UberStateGroupData_ * __9__10_0;
  struct Comparison_1_Moon_UberStateVisualization_UberStateData_ * __9__11_0;
};
struct UberStateVisualizationView_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UberStateVisualizationView_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UberStateVisualizationView_c__VTable vtable;
};

struct __declspec(align(8)) NonSerializedBooleanUberStateWrapper__Fields {
  struct BooleanUberState * m_state;
  struct String * m_controlName;
  bool _IsActive_k__BackingField;
};
struct NonSerializedBooleanUberStateWrapper {
  struct NonSerializedBooleanUberStateWrapper__Class *klass;
  struct MonitorData *monitor;
  struct NonSerializedBooleanUberStateWrapper__Fields fields;
};
struct NonSerializedBooleanUberStateWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetValue;
  VirtualInvokeData SetValue;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData set_IsActive;
  VirtualInvokeData OnGui;
  VirtualInvokeData HandleInput;
};
struct NonSerializedBooleanUberStateWrapper__StaticFields {
};
struct NonSerializedBooleanUberStateWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NonSerializedBooleanUberStateWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NonSerializedBooleanUberStateWrapper__VTable vtable;
};

struct __declspec(align(8)) NonSerializedByteUberStateWrapper__Fields {
  struct ByteUberState * m_state;
  bool _IsActive_k__BackingField;
};
struct NonSerializedByteUberStateWrapper {
  struct NonSerializedByteUberStateWrapper__Class *klass;
  struct MonitorData *monitor;
  struct NonSerializedByteUberStateWrapper__Fields fields;
};
struct NonSerializedByteUberStateWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetValue;
  VirtualInvokeData SetValue;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData set_IsActive;
  VirtualInvokeData OnGui;
  VirtualInvokeData HandleInput;
};}