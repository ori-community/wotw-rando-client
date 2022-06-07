namespace app {
struct AreaMapUI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPostTimeSlicedEnable;
    VirtualInvokeData OnInstantiate;
};

struct AreaMapUI__StaticFields {
    struct AreaMapUI *Instance;
};

struct AreaMapUI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaMapUI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaMapUI__VTable vtable;
};

struct AreaMapDebugNavigation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AreaMapDebugNavigation__StaticFields {
};

struct AreaMapDebugNavigation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaMapDebugNavigation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaMapDebugNavigation__VTable vtable;
};

struct AreaMapObjectiveArrow__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *Arrow;
    struct GameObject *ArrowRotation;
    struct Rect Area;
    struct TextBox *TextBox;
    struct MessageBox *MessageBox;
    bool ShowNumber;
};

struct AreaMapObjectiveArrow {
    struct AreaMapObjectiveArrow__Class *klass;
    MonitorData *monitor;
    struct AreaMapObjectiveArrow__Fields fields;
};

struct AreaMapObjectiveArrow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AreaMapObjectiveArrow__StaticFields {
};

struct AreaMapObjectiveArrow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaMapObjectiveArrow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaMapObjectiveArrow__VTable vtable;
};

struct __declspec(align(8)) AreaMapUI_c_DisplayClass61_0__Fields {
    struct GameWorldArea *area;
};

struct AreaMapUI_c_DisplayClass61_0 {
    struct AreaMapUI_c_DisplayClass61_0__Class *klass;
    MonitorData *monitor;
    struct AreaMapUI_c_DisplayClass61_0__Fields fields;
};

struct AreaMapUI_c_DisplayClass61_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AreaMapUI_c_DisplayClass61_0__StaticFields {
};

struct AreaMapUI_c_DisplayClass61_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AreaMapUI_c_DisplayClass61_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AreaMapUI_c_DisplayClass61_0__VTable vtable;
};

struct ChangeWorldMapIconAction__Fields {
    struct ActionMethod__Fields _;
    WorldMapIconType__Enum Icon;
    
    struct VisibleOnWorldMap *Target;
};

struct ChangeWorldMapIconAction {
    struct ChangeWorldMapIconAction__Class *klass;
    MonitorData *monitor;
    struct ChangeWorldMapIconAction__Fields fields;
};

struct ChangeWorldMapIconAction__VTable {
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

struct ChangeWorldMapIconAction__StaticFields {
};

struct ChangeWorldMapIconAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChangeWorldMapIconAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChangeWorldMapIconAction__VTable vtable;
};

struct __declspec(align(8)) CompoundMessageProvider_GetMessages_d_7__Fields {
    int32_t __1__state;
    struct MessageDescriptor __2__current;
    int32_t __l__initialThreadId;
    struct CompoundMessageProvider *__4__this;
};

struct CompoundMessageProvider_GetMessages_d_7 {
    struct CompoundMessageProvider_GetMessages_d_7__Class *klass;
    MonitorData *monitor;
    struct CompoundMessageProvider_GetMessages_d_7__Fields fields;
};

struct CompoundMessageProvider_GetMessages_d_7__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerable_MessageDescriptor__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_Generic_IEnumerator_MessageDescriptor__get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct CompoundMessageProvider_GetMessages_d_7__StaticFields {
};

struct CompoundMessageProvider_GetMessages_d_7__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompoundMessageProvider_GetMessages_d_7__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompoundMessageProvider_GetMessages_d_7__VTable vtable;
};

struct EnableMapAction__Fields {
    struct ActionMethod__Fields _;
    bool Enabled;
};

struct EnableMapAction {
    struct EnableMapAction__Class *klass;
    MonitorData *monitor;
    struct EnableMapAction__Fields fields;
};

struct EnableMapAction__VTable {
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

struct EnableMapAction__StaticFields {
};

struct EnableMapAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnableMapAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnableMapAction__VTable vtable;
};

struct GameMapObjectiveIcons__Fields {
    struct MonoBehaviour__Fields _;
};

struct GameMapObjectiveIcons {
    struct GameMapObjectiveIcons__Class *klass;
    MonitorData *monitor;
    struct GameMapObjectiveIcons__Fields fields;
};

struct GameMapObjectiveIcons__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameMapObjectiveIcons__StaticFields {
};

struct GameMapObjectiveIcons__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapObjectiveIcons__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapObjectiveIcons__VTable vtable;
};

struct GameMapPins__Fields {
    struct GuidOwner__Fields _;
    float PinCursorSnapDistnace;
    struct Transform *MapPinHolder;
    struct GameObject *RedPinPrefab;
    struct GameObject *BluePinPrefab;
    struct GameObject *GreenPinPrefab;
    struct GameObject *YellowPinPrefab;
    struct GameObject *PlacePinEffect;
    struct PlayerUberStateDescriptor *PlayerUberState;
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_ *m_colorDictionary;
    bool _ApplyOnEditor_k__BackingField;
};

struct GameMapPins {
    struct GameMapPins__Class *klass;
    MonitorData *monitor;
    struct GameMapPins__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_GameMapPins_PinColour_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_ {
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject_ {
    int32_t hashCode;
    int32_t next;
    GameMapPins_PinColour__Enum key;
    
    struct GameObject *value;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array {
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___Fields {
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___Fields {
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___Fields fields;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject_ {
    GameMapPins_PinColour__Enum key;
    
    struct GameObject *value;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Boxed {
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject_ fields;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array {
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject_ {
    struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_GameMapPins_PinColour_UnityEngine_GameObject___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__VTable {
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__StaticFields {
};

struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable {
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

struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields {
};

struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_GameMapPins_PinColour_UnityEngine_GameObject___VTable vtable;
};

struct GameMapPins__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct GameMapPins__StaticFields {
    struct GameMapPins *Instance;
};

struct GameMapPins__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapPins__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapPins__VTable vtable;
};

struct __declspec(align(8)) GameMapSavePedestal__Fields {
    struct String *Identifier;
    struct Vector3 WorldPosition;
    struct MessageProvider *Name;
    struct LegacyTransparencyAnimator *m_worldMapIconHighlightAnimator;
    struct Transform *m_worldMapIconTransform;
    struct GameObject *m_worldMapIconGameObject;
    struct LegacyTransparencyAnimator *m_areaMapIconHighlightAnimator;
    struct Transform *m_areaMapIconTransform;
    struct GameObject *m_areaMapIconGameObject;
    struct SavePedestalUberState *SeralizedState;
    struct IUberState__Array *m_affectingUberStates;
};

struct GameMapSavePedestal {
    struct GameMapSavePedestal__Class *klass;
    MonitorData *monitor;
    struct GameMapSavePedestal__Fields fields;
};

struct GameMapSavePedestal__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct GameMapSavePedestal__StaticFields {
};

struct GameMapSavePedestal__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapSavePedestal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapSavePedestal__VTable vtable;
};

struct GameMapSavePedestals__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider *SelectTeleporterSound;
    struct SoundProvider *SwitchTeleporterSelectionSound;
    struct SoundProvider *StartTeleportingSound;
    struct SoundProvider *ReachDestinationTeleporterSound;
    struct SoundProvider *OpenWindowSound;
    struct SoundProvider *CloseWindowSound;
    int32_t OriginIndex;
    int32_t SelectedIndex;
    bool m_released;
    struct Vector2 m_previousScrollPosition;
    float m_flyBackTime;
    struct Vector2 m_clickedPosition;
};

struct GameMapSavePedestals {
    struct GameMapSavePedestals__Class *klass;
    MonitorData *monitor;
    struct GameMapSavePedestals__Fields fields;
};

struct __declspec(align(8)) List_1_GameMapSavePedestal___Fields {
    struct GameMapSavePedestal__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_GameMapSavePedestal_ {
    struct List_1_GameMapSavePedestal___Class *klass;
    MonitorData *monitor;
    struct List_1_GameMapSavePedestal___Fields fields;
};

struct GameMapSavePedestal__Array {
    struct GameMapSavePedestal__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct GameMapSavePedestal *vector[32];
};

struct IEnumerator_1_GameMapSavePedestal_ {
    struct IEnumerator_1_GameMapSavePedestal___Class *klass;
    MonitorData *monitor;
};

struct GameMapSavePedestals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameMapSavePedestals__StaticFields {
};

struct GameMapSavePedestals__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapSavePedestals__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapSavePedestals__VTable vtable;
};

struct GameMapSavePedestal__Array__VTable {
};

struct GameMapSavePedestal__Array__StaticFields {
};

struct GameMapSavePedestal__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapSavePedestal__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapSavePedestal__Array__VTable vtable;
};

struct IEnumerator_1_GameMapSavePedestal___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_GameMapSavePedestal___StaticFields {
};

struct IEnumerator_1_GameMapSavePedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_GameMapSavePedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_GameMapSavePedestal___VTable vtable;
};

struct List_1_GameMapSavePedestal___VTable {
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

struct List_1_GameMapSavePedestal___StaticFields {
    struct GameMapSavePedestal__Array *_emptyArray;
};

struct List_1_GameMapSavePedestal___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_GameMapSavePedestal___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_GameMapSavePedestal___VTable vtable;
};

struct __declspec(align(8)) GameMapSavePedestals_c_DisplayClass23_0__Fields {
    struct String *identifier;
};

struct GameMapSavePedestals_c_DisplayClass23_0 {
    struct GameMapSavePedestals_c_DisplayClass23_0__Class *klass;
    MonitorData *monitor;
    struct GameMapSavePedestals_c_DisplayClass23_0__Fields fields;
};

struct GameMapSavePedestals_c_DisplayClass23_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameMapSavePedestals_c_DisplayClass23_0__StaticFields {
};

struct GameMapSavePedestals_c_DisplayClass23_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapSavePedestals_c_DisplayClass23_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapSavePedestals_c_DisplayClass23_0__VTable vtable;
};

struct __declspec(align(8)) GameMapSavePedestals_c_DisplayClass24_0__Fields {
    struct String *identifier;
};

struct GameMapSavePedestals_c_DisplayClass24_0 {
    struct GameMapSavePedestals_c_DisplayClass24_0__Class *klass;
    MonitorData *monitor;
    struct GameMapSavePedestals_c_DisplayClass24_0__Fields fields;
};

struct GameMapSavePedestals_c_DisplayClass24_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameMapSavePedestals_c_DisplayClass24_0__StaticFields {
};

struct GameMapSavePedestals_c_DisplayClass24_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapSavePedestals_c_DisplayClass24_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapSavePedestals_c_DisplayClass24_0__VTable vtable;
};

enum class GameMapShowObjective_State__Enum : int32_t {
    None = 0x00000000,
    StartWait = 0x00000001,
    Move = 0x00000002,
    EndWait = 0x00000003,
    AreaMap = 0x00000004,
    Complete = 0x00000005,
};

struct GameMapShowObjective_State__Enum__Boxed {
    struct GameMapShowObjective_State__Enum__Class *klass;
    MonitorData *monitor;
    GameMapShowObjective_State__Enum value;
    
};

struct GameMapShowObjective__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve *IconMovingCurve;
    struct Varying2DSoundProvider *FinishShowObjectiveSound;
    float BlipInterval;
    struct Action *OnFinish;
    float BeginWaitTime;
    float MoveTime;
    float EndWaitTime;
    float AreaMapWaitTime;
    bool m_isPerforming;
    struct GameObject *ObjectiveAppearEffect;
    struct Objective *m_objective;
    GameMapShowObjective_State__Enum CurrentState;
    
    struct Vector3 StartPosition;
    struct Vector3 TargetPosition;
    struct Vector3 Position;
    float m_stateCurrentTime;
    struct Vector3 m_startPositionUI;
    struct Vector3 m_targetPositionUI;
};

struct GameMapShowObjective {
    struct GameMapShowObjective__Class *klass;
    MonitorData *monitor;
    struct GameMapShowObjective__Fields fields;
};

struct GameMapShowObjective_State__Enum__VTable {
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

struct GameMapShowObjective_State__Enum__StaticFields {
};

struct GameMapShowObjective_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapShowObjective_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapShowObjective_State__Enum__VTable vtable;
};

struct GameMapShowObjective__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GameMapShowObjective__StaticFields {
};

struct GameMapShowObjective__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GameMapShowObjective__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GameMapShowObjective__VTable vtable;
};

struct GameMapTransitionManager__Fields {
    struct MonoBehaviour__Fields _;
    struct UISoundSettingsAsset *Sounds;
    float m_zoomTime;
    float m_previousZoomTime;
    float m_transitionCooldown;
    struct ContextSet *m_contextSet;
    struct TweenDelayAnimatorContext *m_areaMapFadeDelay;
    struct ForceRefreshAnimatorContext *m_forceRefreshAnimatorContext;
    bool m_areaMode;
    float ZoomDuration;
    bool _ForbidWorldMapUntilClose_k__BackingField;
    float m_mouseWheelSmooth;
    float m_zoomSpeed;
    bool m_zeroZoom;
    float m_mouseWheel;
    float m_recenteringThreshold;
    float m_transitionInputDelayTimer;
};

struct GameMapTransitionManager {
    struct GameMapTransitionManager__Class *klass;
    MonitorData *monitor;
    struct GameMapTransitionManager__Fields fields;
};

struct __declspec(align(8)) TweenDelayAnimatorContext__Fields {
    float Delay;
};

struct TweenDelayAnimatorContext {
    struct TweenDelayAnimatorContext__Class *klass;
    MonitorData *monitor;
    struct TweenDelayAnimatorContext__Fields fields;
};

struct TweenDelayAnimatorContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TweenDelayAnimatorContext__StaticFields {
};

struct TweenDelayAnimatorContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TweenDelayAnimatorContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TweenDelayAnimatorContext__VTable vtable;
};

struct GameMapTransitionManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
