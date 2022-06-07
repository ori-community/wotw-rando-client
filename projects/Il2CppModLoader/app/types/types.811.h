namespace app {
struct LegacyTranslateAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTranslateAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTranslateAnimator__VTable vtable;
};

struct LegacyTwoPointTransformAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct GameObject *Target;
    struct Transform *m_transform;
    struct Vector3 m_originalLocalPosition;
};

struct LegacyTwoPointTransformAnimator {
    struct LegacyTwoPointTransformAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyTwoPointTransformAnimator__Fields fields;
};

struct LegacyTwoPointTransformAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyTwoPointTransformAnimator__StaticFields {
};

struct LegacyTwoPointTransformAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTwoPointTransformAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTwoPointTransformAnimator__VTable vtable;
};

struct LegacyUnityTextFadeWordsAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct TextMesh *m_textMesh;
    struct AnimationCurve *WordFade;
    struct List_1_System_String_ *m_text;
};

struct LegacyUnityTextFadeWordsAnimator {
    struct LegacyUnityTextFadeWordsAnimator__Class *klass;
    MonitorData *monitor;
    struct LegacyUnityTextFadeWordsAnimator__Fields fields;
};

struct LegacyUnityTextFadeWordsAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData get_IsInScene;
    VirtualInvokeData set_IsInScene;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData Start;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData Restart;
    VirtualInvokeData RestartReverse;
    VirtualInvokeData AnimateIt;
    VirtualInvokeData RestoreToOriginalState;
};

struct LegacyUnityTextFadeWordsAnimator__StaticFields {
};

struct LegacyUnityTextFadeWordsAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyUnityTextFadeWordsAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyUnityTextFadeWordsAnimator__VTable vtable;
};

struct AllEnemiesKilledCondition__Fields {
    struct Condition_1__Fields _;
    struct AllEnemiesKilledTrigger *allEnemiesKilledTrigger;
};

struct AllEnemiesKilledCondition {
    struct AllEnemiesKilledCondition__Class *klass;
    MonitorData *monitor;
    struct AllEnemiesKilledCondition__Fields fields;
};

struct AllEnemiesKilledTrigger__Fields {
    struct LegacyTrigger__Fields _;
    struct List_1_RespawningPlaceholder_ *LegacyRespawningPlaceholders;
    struct List_1_LegacyEntity_ *LegacyEntities;
    struct List_1_EntityPlaceholder_ *NewRespanwingPlaceholders;
    struct List_1_Moon_Entity_ *NewEntities;
    bool AutoPopulatePlaceholderReferences;
    struct List_1_MessageProvider_ *Messages;
    bool ShowMessages;
    int32_t TriggerOnCounter;
    int32_t m_counter;
    struct MessageBox *m_lastMessageBox;
    struct ActionMethod *ActionOnAwakeTrigger;
};

struct AllEnemiesKilledTrigger {
    struct AllEnemiesKilledTrigger__Class *klass;
    MonitorData *monitor;
    struct AllEnemiesKilledTrigger__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyEntity___Fields {
    struct LegacyEntity__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyEntity_ {
    struct List_1_LegacyEntity___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyEntity___Fields fields;
};

struct LegacyEntity__Array {
    struct LegacyEntity__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyEntity *vector[32];
};

struct IEnumerator_1_LegacyEntity_ {
    struct IEnumerator_1_LegacyEntity___Class *klass;
    MonitorData *monitor;
};

struct LegacyEntity__Array__VTable {
};

struct LegacyEntity__Array__StaticFields {
};

struct LegacyEntity__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyEntity__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyEntity__Array__VTable vtable;
};

struct IEnumerator_1_LegacyEntity___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyEntity___StaticFields {
};

struct IEnumerator_1_LegacyEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyEntity___VTable vtable;
};

struct List_1_LegacyEntity___VTable {
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

struct List_1_LegacyEntity___StaticFields {
    struct LegacyEntity__Array *_emptyArray;
};

struct List_1_LegacyEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyEntity___VTable vtable;
};

struct AllEnemiesKilledTrigger__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnTriggerEnable;
    VirtualInvokeData OnTriggerDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnTriggerActivated;
    VirtualInvokeData get_VirtualTimelineTarget;
    VirtualInvokeData get_VirtualTimelineGroup;
    VirtualInvokeData get_NameDisplayedOnClip;
};

struct AllEnemiesKilledTrigger__StaticFields {
};

struct AllEnemiesKilledTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllEnemiesKilledTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllEnemiesKilledTrigger__VTable vtable;
};

struct AllEnemiesKilledCondition__VTable {
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

struct AllEnemiesKilledCondition__StaticFields {
};

struct AllEnemiesKilledCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AllEnemiesKilledCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AllEnemiesKilledCondition__VTable vtable;
};

enum class AutoDamageCollider_AutoDamageValueMode__Enum : int32_t {
    DamageBasedOnArea = 0x0000000a,
    InstantKill = 0x00000014,
    DamageBasedOnManuallySetArea = 0x0000001e,
};

struct AutoDamageCollider_AutoDamageValueMode__Enum__Boxed {
    struct AutoDamageCollider_AutoDamageValueMode__Enum__Class *klass;
    MonitorData *monitor;
    AutoDamageCollider_AutoDamageValueMode__Enum value;
    
};

enum class AutoDamageCollider_AutoDamageTypeMode__Enum : int32_t {
    Auto = 0x00000000,
    Override = 0x0000000a,
};

struct AutoDamageCollider_AutoDamageTypeMode__Enum__Boxed {
    struct AutoDamageCollider_AutoDamageTypeMode__Enum__Class *klass;
    MonitorData *monitor;
    AutoDamageCollider_AutoDamageTypeMode__Enum value;
    
};

struct AutoDamageCollider__Fields {
    struct MonoBehaviour__Fields _;
    struct DamageType__Enum__Array *m_damageTypeFilter;
    struct HashSet_1_UnityEngine_GameObject_ *Children;
    AutoDamageCollider_AutoDamageValueMode__Enum DamageMode;
    
    GameWorldAreaID__Enum ManuallySetArea;
    
    bool PlayerOnly;
    AutoDamageCollider_AutoDamageTypeMode__Enum TypeMode;
    
    DamageType__Enum DamageType;
    
    struct List_1_AutoDamageCollider_AutoDamageColliderEntry_ *m_damageDealers;
    int32_t m_childrenCount;
};

struct AutoDamageCollider {
    struct AutoDamageCollider__Class *klass;
    MonitorData *monitor;
    struct AutoDamageCollider__Fields fields;
};

struct __declspec(align(8)) List_1_AutoDamageCollider_AutoDamageColliderEntry___Fields {
    struct AutoDamageCollider_AutoDamageColliderEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_AutoDamageCollider_AutoDamageColliderEntry_ {
    struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Fields fields;
};

struct __declspec(align(8)) AutoDamageCollider_AutoDamageColliderEntry__Fields {
    struct DamageDealer *DamageDealer;
    struct Polygon_1 *Polygon;
};

struct AutoDamageCollider_AutoDamageColliderEntry {
    struct AutoDamageCollider_AutoDamageColliderEntry__Class *klass;
    MonitorData *monitor;
    struct AutoDamageCollider_AutoDamageColliderEntry__Fields fields;
};

struct AutoDamageCollider_AutoDamageColliderEntry__Array {
    struct AutoDamageCollider_AutoDamageColliderEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AutoDamageCollider_AutoDamageColliderEntry *vector[32];
};

struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry_ {
    struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___Class *klass;
    MonitorData *monitor;
};

struct AutoDamageCollider_AutoDamageValueMode__Enum__VTable {
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

struct AutoDamageCollider_AutoDamageValueMode__Enum__StaticFields {
};

struct AutoDamageCollider_AutoDamageValueMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider_AutoDamageValueMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider_AutoDamageValueMode__Enum__VTable vtable;
};

struct AutoDamageCollider_AutoDamageTypeMode__Enum__VTable {
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

struct AutoDamageCollider_AutoDamageTypeMode__Enum__StaticFields {
};

struct AutoDamageCollider_AutoDamageTypeMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider_AutoDamageTypeMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider_AutoDamageTypeMode__Enum__VTable vtable;
};

struct AutoDamageCollider_AutoDamageColliderEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AutoDamageCollider_AutoDamageColliderEntry__StaticFields {
};

struct AutoDamageCollider_AutoDamageColliderEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider_AutoDamageColliderEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider_AutoDamageColliderEntry__VTable vtable;
};

struct AutoDamageCollider_AutoDamageColliderEntry__Array__VTable {
};

struct AutoDamageCollider_AutoDamageColliderEntry__Array__StaticFields {
};

struct AutoDamageCollider_AutoDamageColliderEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider_AutoDamageColliderEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider_AutoDamageColliderEntry__Array__VTable vtable;
};

struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields {
};

struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_AutoDamageCollider_AutoDamageColliderEntry___VTable vtable;
};

struct List_1_AutoDamageCollider_AutoDamageColliderEntry___VTable {
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

struct List_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields {
    struct AutoDamageCollider_AutoDamageColliderEntry__Array *_emptyArray;
};

struct List_1_AutoDamageCollider_AutoDamageColliderEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_AutoDamageCollider_AutoDamageColliderEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_AutoDamageCollider_AutoDamageColliderEntry___VTable vtable;
};

struct AutoDamageCollider__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeStrip;
    VirtualInvokeData DoStrip;
};

struct AutoDamageCollider__StaticFields {
};

struct AutoDamageCollider__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider__VTable vtable;
};

struct AutoDamageCollider_c {
    struct AutoDamageCollider_c__Class *klass;
    MonitorData *monitor;
};

struct AutoDamageCollider_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AutoDamageCollider_c__StaticFields {
    struct AutoDamageCollider_c *__9;
    struct Predicate_1_UnityEngine_GameObject_ *__9__25_0;
};

struct AutoDamageCollider_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageCollider_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageCollider_c__VTable vtable;
};

struct AutoDamageColliderResolver__Fields {
    struct MonoBehaviour__Fields _;
    struct DamageSurfacesMap *DamageMap;
};

struct AutoDamageColliderResolver {
    struct AutoDamageColliderResolver__Class *klass;
    MonitorData *monitor;
    struct AutoDamageColliderResolver__Fields fields;
};

struct DamageSurfacesMap__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry_ *Etries;
};

struct DamageSurfacesMap {
    struct DamageSurfacesMap__Class *klass;
    MonitorData *monitor;
    struct DamageSurfacesMap__Fields fields;
};

struct __declspec(align(8)) List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Fields {
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry_ {
    struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class *klass;
    MonitorData *monitor;
    struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Fields fields;
};

struct __declspec(align(8)) DamageSurfacesMap_DamageSurfaceMapEntry__Fields {
    int32_t AreaId;
    float Damage;
};

struct DamageSurfacesMap_DamageSurfaceMapEntry {
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Class *klass;
    MonitorData *monitor;
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Fields fields;
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__Array {
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DamageSurfacesMap_DamageSurfaceMapEntry *vector[32];
};

struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry_ {
    struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class *klass;
    MonitorData *monitor;
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__StaticFields {
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageSurfacesMap_DamageSurfaceMapEntry__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageSurfacesMap_DamageSurfaceMapEntry__VTable vtable;
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__VTable {
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__StaticFields {
};

struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Array__VTable vtable;
};

struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields {
};

struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable vtable;
};

struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable {
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

struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields {
    struct DamageSurfacesMap_DamageSurfaceMapEntry__Array *_emptyArray;
};

struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DamageSurfacesMap_DamageSurfaceMapEntry___VTable vtable;
};

struct DamageSurfacesMap__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageSurfacesMap__StaticFields {
};

struct DamageSurfacesMap__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageSurfacesMap__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageSurfacesMap__VTable vtable;
};

struct AutoDamageColliderResolver__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnInstantiate;
};

struct AutoDamageColliderResolver__StaticFields {
    struct AutoDamageColliderResolver *Instance;
};

struct AutoDamageColliderResolver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AutoDamageColliderResolver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AutoDamageColliderResolver__VTable vtable;
};

struct CompareVelocityCondition__Fields {
    struct Condition_1__Fields _;
    float Speed;
    struct Rigidbody *m_rigidBody;
};

struct CompareVelocityCondition {
    struct CompareVelocityCondition__Class *klass;
    MonitorData *monitor;
    struct CompareVelocityCondition__Fields fields;
};

struct CompareVelocityCondition__VTable {
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

struct CompareVelocityCondition__StaticFields {
};

struct CompareVelocityCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CompareVelocityCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CompareVelocityCondition__VTable vtable;
};

struct DamageResultContext {
    struct DamageResult DamageResult;
};

struct DamageResultContext__Boxed {
    struct DamageResultContext__Class *klass;
    MonitorData *monitor;
    struct DamageResultContext fields;
};

struct DamageResultContext__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageResultContext__StaticFields {
};

struct DamageResultContext__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResultContext__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResultContext__VTable vtable;
};

struct OriDamage__Fields {
    struct Damage__Fields _;
};

struct OriDamage {
    struct OriDamage__Class *klass;
    MonitorData *monitor;
    struct OriDamage__Fields fields;
};

struct OriDamage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct OriDamage__StaticFields {
};

struct OriDamage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OriDamage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OriDamage__VTable vtable;
};

struct DamageWeight___VTable {
};

struct DamageWeight___StaticFields {
};

struct DamageWeight___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageWeight___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageWeight___VTable vtable;
};

struct Damage_c {
    struct Damage_c__Class *klass;
    MonitorData *monitor;
};

struct Damage_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Damage_c__StaticFields {
    struct Damage_c *__9;
    struct Action_1_DamageResult_ *__9__7_0;
};

struct Damage_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Damage_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Damage_c__VTable vtable;
};

struct DamageDealer_c {
    struct DamageDealer_c__Class *klass;
    MonitorData *monitor;
};

struct DamageDealer_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageDealer_c__StaticFields {
    struct DamageDealer_c *__9;
    struct Action_2_DamageDealer_DamageResult_ *__9__112_0;
};

struct DamageDealer_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageDealer_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageDealer_c__VTable vtable;
};

struct List_1_DamageWeight__1__VTable {
};

struct List_1_DamageWeight__1__StaticFields {
};

struct List_1_DamageWeight__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DamageWeight__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DamageWeight__1__VTable vtable;
};

struct DamageText__Fields {
    struct Suspendable__Fields _;
    struct Color Red;
    struct Color Zero;
    struct AnimationCurve *SizeByDamageAmount;
    struct Vector3 m_speed;
    float m_time;
    bool _IsSuspended_k__BackingField;
};

}
