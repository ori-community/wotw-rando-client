namespace app {
struct ShardTraderMoveOriToPositionBehaviour__StaticFields {
};

struct ShardTraderMoveOriToPositionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShardTraderMoveOriToPositionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShardTraderMoveOriToPositionBehaviour__VTable vtable;
};

struct AdditiveBodyRotation__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct Transform *root;
    struct Vector3 groundPosition;
    float raycastHeight;
    float raycastDistance;
    float groundLevel;
    struct Transform *targetBone;
    struct LayerMask raycastMask;
    float lerpCoeff;
    float terrainAngleCoeff;
    float minAngle;
    float maxAngle;
    float m_addAngle;
    struct Quaternion m_initialrotation;
    struct Vector3 m_rotationAxis;
};

struct AdditiveBodyRotation {
    struct AdditiveBodyRotation__Class *klass;
    MonitorData *monitor;
    struct AdditiveBodyRotation__Fields fields;
};

struct AdditiveBodyRotation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_RequiresOnUpdate;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData get_TotalWeight;
    VirtualInvokeData get_HasFinished;
    VirtualInvokeData get_Order;
    VirtualInvokeData OnPostEnable;
    VirtualInvokeData OnPostDisable;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Process;
    VirtualInvokeData OnSceneGui;
    VirtualInvokeData OnDrawGizmosSelected;
};

struct AdditiveBodyRotation__StaticFields {
};

struct AdditiveBodyRotation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AdditiveBodyRotation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AdditiveBodyRotation__VTable vtable;
};

struct WeaponAnimationPostprocess__Fields {
    struct IKLimb__Fields _;
    struct Transform *Weapon;
    struct Transform *tipTransform;
    struct Transform *handleTransform;
    struct Vector3 tipReferencePoint;
    struct Vector3 handleReferencePoint;
    struct VelocityBezierSplineComponent *tipSpline;
    struct VelocityBezierSplineComponent *handleSpline;
    bool autoRaycast;
    struct Vector3 targetTipPosition;
    struct Vector3 targetHandlePosition;
};

struct WeaponAnimationPostprocess {
    struct WeaponAnimationPostprocess__Class *klass;
    MonitorData *monitor;
    struct WeaponAnimationPostprocess__Fields fields;
};

struct WeaponAnimationPostprocess__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_RequiresOnUpdate;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData get_TotalWeight;
    VirtualInvokeData get_HasFinished;
    VirtualInvokeData get_Order;
    VirtualInvokeData OnPostEnable;
    VirtualInvokeData OnPostDisable;
    VirtualInvokeData OnAddedToAnimator;
    VirtualInvokeData OnRemovedFromAnimator;
    VirtualInvokeData OnActivated;
    VirtualInvokeData OnDeactivated;
    VirtualInvokeData Process;
    VirtualInvokeData OnSceneGui;
    VirtualInvokeData OnDrawGizmosSelected;
};

struct WeaponAnimationPostprocess__StaticFields {
};

struct WeaponAnimationPostprocess__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WeaponAnimationPostprocess__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WeaponAnimationPostprocess__VTable vtable;
};

struct DrivenAlpha__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_UnityEngine_Renderer_ *Target;
    float InitialAlpha;
    float EndAlpha;
    struct MoonReference_1_ITweenLerpInputProvider_ *InputProvider;
    struct ITweenLerpInputProvider *m_resolvedInputProvider;
    struct LerpFloatTweenable *m_tweenAlpha;
    float m_currentAlpha;
    struct Renderer *m_targetRenderer;
};

struct DrivenAlpha {
    struct DrivenAlpha__Class *klass;
    MonitorData *monitor;
    struct DrivenAlpha__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_UnityEngine_Renderer___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_UnityEngine_Renderer_ *m_cachedProxyType;
    struct Renderer *m_volatileValue;
};

struct MoonReference_1_UnityEngine_Renderer_ {
    struct MoonReference_1_UnityEngine_Renderer___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_UnityEngine_Renderer___Fields fields;
};

struct IMoonType_1_UnityEngine_Renderer_ {
    struct IMoonType_1_UnityEngine_Renderer___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_UnityEngine_Renderer___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_UnityEngine_Renderer___StaticFields {
};

struct IMoonType_1_UnityEngine_Renderer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_UnityEngine_Renderer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_UnityEngine_Renderer___VTable vtable;
};

struct Renderer___VTable {
};

struct Renderer___StaticFields {
};

struct Renderer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Renderer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Renderer___VTable vtable;
};

struct MoonReference_1_UnityEngine_Renderer___VTable {
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

struct MoonReference_1_UnityEngine_Renderer___StaticFields {
};

struct MoonReference_1_UnityEngine_Renderer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_UnityEngine_Renderer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_UnityEngine_Renderer___VTable vtable;
};

struct DrivenAlpha__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DrivenAlpha__StaticFields {
};

struct DrivenAlpha__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DrivenAlpha__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DrivenAlpha__VTable vtable;
};

struct MoonAnimatorBootstrapper__Fields {
    struct MonoBehaviour__Fields _;
};

struct MoonAnimatorBootstrapper {
    struct MoonAnimatorBootstrapper__Class *klass;
    MonitorData *monitor;
    struct MoonAnimatorBootstrapper__Fields fields;
};

struct MoonAnimatorBootstrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonAnimatorBootstrapper__StaticFields {
};

struct MoonAnimatorBootstrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimatorBootstrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimatorBootstrapper__VTable vtable;
};

struct IAnimationMontageEventHandler {
    struct IAnimationMontageEventHandler__Class *klass;
    MonitorData *monitor;
};

struct IAnimationMontageEventHandler__VTable {
    VirtualInvokeData get_AnimationMontageEventType;
    VirtualInvokeData OnAnimationMontageEventStart;
    VirtualInvokeData OnAnimationMontageEventStay;
    VirtualInvokeData OnAnimationMontageEventEnd;
};

struct IAnimationMontageEventHandler__StaticFields {
};

struct IAnimationMontageEventHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAnimationMontageEventHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAnimationMontageEventHandler__VTable vtable;
};

struct DamageReceiver_c {
    struct DamageReceiver_c__Class *klass;
    MonitorData *monitor;
};

struct DamageReceiver_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageReceiver_c__StaticFields {
    struct DamageReceiver_c *__9;
    struct Action_1_DamageResult_ *__9__133_0;
    struct Action_1_Damage_ *__9__133_1;
};

struct DamageReceiver_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageReceiver_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageReceiver_c__VTable vtable;
};

enum class DamageResolver_BaseRuleType__Enum : int32_t {
    AllowAll = 0x00000000,
    IgnoreAllButListed = 0x00000001,
    BlockAllButListed = 0x00000002,
};

struct DamageResolver_BaseRuleType__Enum__Boxed {
    struct DamageResolver_BaseRuleType__Enum__Class *klass;
    MonitorData *monitor;
    DamageResolver_BaseRuleType__Enum value;
    
};

struct DamageResolver__Fields {
    struct MonoBehaviour__Fields _;
    DamageResolver_BaseRuleType__Enum BaseRule;
    
    float BlockAllMultiplier;
    struct List_1_Moon_DamageResolver_Rule_ *DamageRules;
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_ *m_ruleOverrides;
};

struct DamageResolver {
    struct DamageResolver__Class *klass;
    MonitorData *monitor;
    struct DamageResolver__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_DamageResolver_Rule___Fields {
    struct DamageResolver_Rule__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_DamageResolver_Rule_ {
    struct List_1_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_DamageResolver_Rule___Fields fields;
};

struct __declspec(align(8)) DamageResolver_Rule__Fields {
    DamageType__Enum DamageType;
    
    DamageResultType__Enum DamageResultType;
    
    float Multiplier;
};

struct DamageResolver_Rule {
    struct DamageResolver_Rule__Class *klass;
    MonitorData *monitor;
    struct DamageResolver_Rule__Fields fields;
};

struct DamageResolver_Rule__Array {
    struct DamageResolver_Rule__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DamageResolver_Rule *vector[32];
};

struct IEnumerator_1_Moon_DamageResolver_Rule_ {
    struct IEnumerator_1_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_DamageType_Moon_DamageResolver_Rule___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_DamageType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_ {
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule_ {
    int32_t hashCode;
    int32_t next;
    DamageType__Enum key;
    
    struct DamageResolver_Rule *value;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array {
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___Fields {
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___Fields {
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___Fields fields;
};

struct ICollection_1_Moon_DamageResolver_Rule_ {
    struct ICollection_1_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule_ {
    DamageType__Enum key;
    
    struct DamageResolver_Rule *value;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Boxed {
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule_ fields;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array {
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule_ {
    struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_DamageResolver_Rule_ {
    struct IEnumerable_1_Moon_DamageResolver_Rule___Class *klass;
    MonitorData *monitor;
};

struct DamageResolver_BaseRuleType__Enum__VTable {
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

struct DamageResolver_BaseRuleType__Enum__StaticFields {
};

struct DamageResolver_BaseRuleType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResolver_BaseRuleType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResolver_BaseRuleType__Enum__VTable vtable;
};

struct DamageResolver_Rule__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DamageResolver_Rule__StaticFields {
};

struct DamageResolver_Rule__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResolver_Rule__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResolver_Rule__VTable vtable;
};

struct DamageResolver_Rule__Array__VTable {
};

struct DamageResolver_Rule__Array__StaticFields {
};

struct DamageResolver_Rule__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResolver_Rule__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResolver_Rule__Array__VTable vtable;
};

struct IEnumerator_1_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_DamageResolver_Rule___StaticFields {
};

struct IEnumerator_1_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_DamageResolver_Rule___VTable vtable;
};

struct List_1_Moon_DamageResolver_Rule___VTable {
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

struct List_1_Moon_DamageResolver_Rule___StaticFields {
    struct DamageResolver_Rule__Array *_emptyArray;
};

struct List_1_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_DamageResolver_Rule___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_DamageType_Moon_DamageResolver_Rule___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct ICollection_1_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_Moon_DamageResolver_Rule___StaticFields {
};

struct ICollection_1_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_Moon_DamageResolver_Rule___VTable vtable;
};

struct DamageResolver_Rule___VTable {
};

struct DamageResolver_Rule___StaticFields {
};

struct DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResolver_Rule___VTable vtable;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__VTable {
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__StaticFields {
};

struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct IEnumerable_1_Moon_DamageResolver_Rule___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_Moon_DamageResolver_Rule___StaticFields {
};

struct IEnumerable_1_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_Moon_DamageResolver_Rule___VTable vtable;
};

struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___VTable {
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

struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___StaticFields {
};

struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_DamageType_Moon_DamageResolver_Rule___VTable vtable;
};

struct DamageResolver__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData ResolveDamage;
};

struct DamageResolver__StaticFields {
};

struct DamageResolver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DamageResolver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DamageResolver__VTable vtable;
};

struct IHitStopReceiver {
    struct IHitStopReceiver__Class *klass;
    MonitorData *monitor;
};

struct IHitStopReceiver__VTable {
    VirtualInvokeData get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
};

struct IHitStopReceiver__StaticFields {
};

struct IHitStopReceiver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IHitStopReceiver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IHitStopReceiver__VTable vtable;
};

struct HitStop__Fields {
    struct MonoBehaviour__Fields _;
    struct IHitStopReceiver *m_hitStopReceiver;
    float m_timeRemaining;
    float m_timeElapsed;
    float m_hitStopDelayTime;
    bool m_wasNotified;
    struct List_1_Moon_HitStop_Entry_ *m_entries;
    struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ *m_entryBySuspendable;
};

struct HitStop {
    struct HitStop__Class *klass;
    MonitorData *monitor;
    struct HitStop__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_HitStop_Entry___Fields {
    struct HitStop_Entry__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_HitStop_Entry_ {
    struct List_1_Moon_HitStop_Entry___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_HitStop_Entry___Fields fields;
};

struct __declspec(align(8)) HitStop_Entry__Fields {
    struct ISuspendable *Suspendable;
    bool WasSuspended;
    float HitStopDelayTime;
    float TimeRemaining;
    float TimeElapsed;
};

struct HitStop_Entry {
    struct HitStop_Entry__Class *klass;
    MonitorData *monitor;
    struct HitStop_Entry__Fields fields;
};

struct HitStop_Entry__Array {
    struct HitStop_Entry__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HitStop_Entry *vector[32];
};

struct IEnumerator_1_Moon_HitStop_Entry_ {
    struct IEnumerator_1_Moon_HitStop_Entry___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ISuspendable_Moon_HitStop_Entry___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_ISuspendable_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ISuspendable_Moon_HitStop_Entry_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ISuspendable_Moon_HitStop_Entry_ *values;
    struct Object *_syncRoot;
};

}
