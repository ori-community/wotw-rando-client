namespace app {
struct List_1_StateCondition_StateConditionSetupData___VTable {
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

struct List_1_StateCondition_StateConditionSetupData___StaticFields {
    struct StateCondition_StateConditionSetupData__Array *_emptyArray;
};

struct List_1_StateCondition_StateConditionSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_StateCondition_StateConditionSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_StateCondition_StateConditionSetupData___VTable vtable;
};

struct StateHolder_1_StateCondition_StateConditionSetupData___VTable {
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

struct StateHolder_1_StateCondition_StateConditionSetupData___StaticFields {
};

struct StateHolder_1_StateCondition_StateConditionSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateHolder_1_StateCondition_StateConditionSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateHolder_1_StateCondition_StateConditionSetupData___VTable vtable;
};

struct StateCondition_StateConditionSetupHolder__VTable {
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

struct StateCondition_StateConditionSetupHolder__StaticFields {
};

struct StateCondition_StateConditionSetupHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateCondition_StateConditionSetupHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateCondition_StateConditionSetupHolder__VTable vtable;
};

struct StateCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
};

struct StateCondition__StaticFields {
};

struct StateCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateCondition__VTable vtable;
};

struct StickToMovingPlatforms__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *m_ground;
    struct Matrix4x4 m_groundMatrix;
    int32_t m_keepTracking;
};

struct StickToMovingPlatforms {
    struct StickToMovingPlatforms__Class *klass;
    MonitorData *monitor;
    struct StickToMovingPlatforms__Fields fields;
};

struct StickToMovingPlatforms__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
};

struct StickToMovingPlatforms__StaticFields {
};

struct StickToMovingPlatforms__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StickToMovingPlatforms__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StickToMovingPlatforms__VTable vtable;
};

struct SwampNightDayTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct BaseAnimator *TransitionAnimator;
    struct UberPostProcessAnimator *PostAnimator;
    struct ActionSequence *DayTimeActionSequence;
    struct ActionSequence *NightTimeActionSequence;
    struct GameObject *DayTimeGroup;
    struct GameObject *NightTimeGroup;
    struct PhysicalSystemManager__Array *physicsSetups;
    bool m_previousHadSword;
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct SwampNightDayTransition {
    struct SwampNightDayTransition__Class *klass;
    MonitorData *monitor;
    struct SwampNightDayTransition__Fields fields;
};

struct SwampNightDayTransition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetDynamicGraphicTargets;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData OnValidate;
};

struct SwampNightDayTransition__StaticFields {
};

struct SwampNightDayTransition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwampNightDayTransition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwampNightDayTransition__VTable vtable;
};

struct TargetPositionFollower__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    bool TargetCamera;
    bool TargetOri;
    struct Vector3 Offset;
    bool FollowZ;
    struct Transform *m_transform;
};

struct TargetPositionFollower {
    struct TargetPositionFollower__Class *klass;
    MonitorData *monitor;
    struct TargetPositionFollower__Fields fields;
};

struct TargetPositionFollower__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TargetPositionFollower__StaticFields {
};

struct TargetPositionFollower__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TargetPositionFollower__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TargetPositionFollower__VTable vtable;
};

struct Trail_1__Fields {
    struct MonoBehaviour__Fields _;
    struct LineMesh *m_lineMesh;
    struct Transform *m_transform;
    float MinVertexDistance;
    float MaxTime;
    float MaxDistance;
    float m_time;
    bool m_resetTrails;
    struct List_1_Trail_TrailPosition_ *Data;
    struct Vector3 LastPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct Vector3 _Speed_k__BackingField;
};

struct Trail_1 {
    struct Trail_1__Class *klass;
    MonitorData *monitor;
    struct Trail_1__Fields fields;
};

struct __declspec(align(8)) List_1_Trail_TrailPosition___Fields {
    struct Trail_TrailPosition__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Trail_TrailPosition_ {
    struct List_1_Trail_TrailPosition___Class *klass;
    MonitorData *monitor;
    struct List_1_Trail_TrailPosition___Fields fields;
};

struct Trail_TrailPosition {
    struct Vector3 Position;
    float StartTime;
};

struct Trail_TrailPosition__Boxed {
    struct Trail_TrailPosition__Class *klass;
    MonitorData *monitor;
    struct Trail_TrailPosition fields;
};

struct Trail_TrailPosition__Array {
    struct Trail_TrailPosition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Trail_TrailPosition vector[32];
};

struct IEnumerator_1_Trail_TrailPosition_ {
    struct IEnumerator_1_Trail_TrailPosition___Class *klass;
    MonitorData *monitor;
};

struct Trail_TrailPosition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Trail_TrailPosition__StaticFields {
};

struct Trail_TrailPosition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Trail_TrailPosition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Trail_TrailPosition__VTable vtable;
};

struct Trail_TrailPosition__Array__VTable {
};

struct Trail_TrailPosition__Array__StaticFields {
};

struct Trail_TrailPosition__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Trail_TrailPosition__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Trail_TrailPosition__Array__VTable vtable;
};

struct IEnumerator_1_Trail_TrailPosition___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Trail_TrailPosition___StaticFields {
};

struct IEnumerator_1_Trail_TrailPosition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Trail_TrailPosition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Trail_TrailPosition___VTable vtable;
};

struct List_1_Trail_TrailPosition___VTable {
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

struct List_1_Trail_TrailPosition___StaticFields {
    struct Trail_TrailPosition__Array *_emptyArray;
};

struct List_1_Trail_TrailPosition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Trail_TrailPosition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Trail_TrailPosition___VTable vtable;
};

struct Trail_1__VTable {
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
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
};

struct Trail_1__StaticFields {
};

struct Trail_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Trail_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Trail_1__VTable vtable;
};

struct TransformFollower__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    bool FollowSein;
    bool Instant;
    struct AnimationCurve *XSpeedCurve;
    struct AnimationCurve *YSpeedCurve;
    bool ShouldZeroZ;
    struct Vector3 m_speed;
};

struct TransformFollower {
    struct TransformFollower__Class *klass;
    MonitorData *monitor;
    struct TransformFollower__Fields fields;
};

struct TransformFollower__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformFollower__StaticFields {
};

struct TransformFollower__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformFollower__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformFollower__VTable vtable;
};

struct TransformOffsetter__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_ *Timeline;
    struct MoonReference_1_UnityEngine_Transform_ *ObjectToOffset;
    struct MoonReference_1_UnityEngine_Transform_ *ObjectA;
    struct MoonReference_1_UnityEngine_Transform_ *ObjectB;
};

struct TransformOffsetter {
    struct TransformOffsetter__Class *klass;
    MonitorData *monitor;
    struct TransformOffsetter__Fields fields;
};

struct TransformOffsetter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformOffsetter__StaticFields {
};

struct TransformOffsetter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformOffsetter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformOffsetter__VTable vtable;
};

struct TransformScaleCopy__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *Target;
    bool CopySignOnly;
};

struct TransformScaleCopy {
    struct TransformScaleCopy__Class *klass;
    MonitorData *monitor;
    struct TransformScaleCopy__Fields fields;
};

struct TransformScaleCopy__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformScaleCopy__StaticFields {
};

struct TransformScaleCopy__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformScaleCopy__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformScaleCopy__VTable vtable;
};

struct UberStateConditionWrapper__Fields {
    struct Condition_1__Fields _;
    struct ConditionUberState *Condition;
    bool Invert;
};

struct UberStateConditionWrapper {
    struct UberStateConditionWrapper__Class *klass;
    MonitorData *monitor;
    struct UberStateConditionWrapper__Fields fields;
};

struct UberStateConditionWrapper__VTable {
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

struct UberStateConditionWrapper__StaticFields {
};

struct UberStateConditionWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UberStateConditionWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UberStateConditionWrapper__VTable vtable;
};

struct UnityTextMeshDropShadow__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Offset;
    struct Color Color;
    struct GameObject *m_shadowGameObject;
    struct TextMesh *m_shadowTextMesh;
    struct MeshRenderer *m_shadowMeshRenderer;
    struct Transform *m_transform;
    struct TextMesh *m_textMesh;
    struct Renderer *m_renderer;
};

struct UnityTextMeshDropShadow {
    struct UnityTextMeshDropShadow__Class *klass;
    MonitorData *monitor;
    struct UnityTextMeshDropShadow__Fields fields;
};

struct UnityTextMeshDropShadow__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UnityTextMeshDropShadow__StaticFields {
};

struct UnityTextMeshDropShadow__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnityTextMeshDropShadow__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnityTextMeshDropShadow__VTable vtable;
};

struct __declspec(align(8)) UnparentTrailRenderer_ResetTrail_d_12__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct TrailRenderer *trail;
    float _trailTime_5__2;
};

struct UnparentTrailRenderer_ResetTrail_d_12 {
    struct UnparentTrailRenderer_ResetTrail_d_12__Class *klass;
    MonitorData *monitor;
    struct UnparentTrailRenderer_ResetTrail_d_12__Fields fields;
};

struct UnparentTrailRenderer_ResetTrail_d_12__VTable {
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

struct UnparentTrailRenderer_ResetTrail_d_12__StaticFields {
};

struct UnparentTrailRenderer_ResetTrail_d_12__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UnparentTrailRenderer_ResetTrail_d_12__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UnparentTrailRenderer_ResetTrail_d_12__VTable vtable;
};

struct WiggleTreeController__Fields {
    struct SaveSerialize__Fields _;
    struct List_1_WiggleTreeController_WiggleSettings_ *WiggleInformation;
    struct ActionMethod *OnWiggleSequenceEnded;
    struct Transform *Target;
    int32_t m_wiggleDataIndex;
};

struct WiggleTreeController {
    struct WiggleTreeController__Class *klass;
    MonitorData *monitor;
    struct WiggleTreeController__Fields fields;
};

struct __declspec(align(8)) List_1_WiggleTreeController_WiggleSettings___Fields {
    struct WiggleTreeController_WiggleSettings__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WiggleTreeController_WiggleSettings_ {
    struct List_1_WiggleTreeController_WiggleSettings___Class *klass;
    MonitorData *monitor;
    struct List_1_WiggleTreeController_WiggleSettings___Fields fields;
};

struct __declspec(align(8)) WiggleTreeController_WiggleSettings__Fields {
    float TargetAngle;
    struct ActionMethod *OnWiggleEnded;
};

struct WiggleTreeController_WiggleSettings {
    struct WiggleTreeController_WiggleSettings__Class *klass;
    MonitorData *monitor;
    struct WiggleTreeController_WiggleSettings__Fields fields;
};

struct WiggleTreeController_WiggleSettings__Array {
    struct WiggleTreeController_WiggleSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WiggleTreeController_WiggleSettings *vector[32];
};

struct IEnumerator_1_WiggleTreeController_WiggleSettings_ {
    struct IEnumerator_1_WiggleTreeController_WiggleSettings___Class *klass;
    MonitorData *monitor;
};

struct WiggleTreeController_WiggleSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WiggleTreeController_WiggleSettings__StaticFields {
};

struct WiggleTreeController_WiggleSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WiggleTreeController_WiggleSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WiggleTreeController_WiggleSettings__VTable vtable;
};

struct WiggleTreeController_WiggleSettings__Array__VTable {
};

struct WiggleTreeController_WiggleSettings__Array__StaticFields {
};

struct WiggleTreeController_WiggleSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WiggleTreeController_WiggleSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WiggleTreeController_WiggleSettings__Array__VTable vtable;
};

struct IEnumerator_1_WiggleTreeController_WiggleSettings___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_WiggleTreeController_WiggleSettings___StaticFields {
};

struct IEnumerator_1_WiggleTreeController_WiggleSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_WiggleTreeController_WiggleSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_WiggleTreeController_WiggleSettings___VTable vtable;
};

struct List_1_WiggleTreeController_WiggleSettings___VTable {
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

struct List_1_WiggleTreeController_WiggleSettings___StaticFields {
    struct WiggleTreeController_WiggleSettings__Array *_emptyArray;
};

struct List_1_WiggleTreeController_WiggleSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_WiggleTreeController_WiggleSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_WiggleTreeController_WiggleSettings___VTable vtable;
};

struct WiggleTreeController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
};

struct WiggleTreeController__StaticFields {
};

struct WiggleTreeController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WiggleTreeController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WiggleTreeController__VTable vtable;
};

struct ZerofyWorldPosition__Fields {
    struct MonoBehaviour__Fields _;
    bool ShouldAffectZ;
};

struct ZerofyWorldPosition {
    struct ZerofyWorldPosition__Class *klass;
    MonitorData *monitor;
    struct ZerofyWorldPosition__Fields fields;
};

struct ZerofyWorldPosition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ZerofyWorldPosition__StaticFields {
};

struct ZerofyWorldPosition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ZerofyWorldPosition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ZerofyWorldPosition__VTable vtable;
};

struct ArtBuildController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Texture2D_ *SceneScreenshots;
    int32_t CurrentScene;
    struct GameObject *PauseDimmer;
    struct LegacyAnimator__Array *m_dimmerAnimators;
    int32_t MaxScreenshotWidth;
    int32_t MaxScreenshotHeight;
    bool m_menuVisible;
    bool m_loadingFinished;
};

struct ArtBuildController {
    struct ArtBuildController__Class *klass;
    MonitorData *monitor;
    struct ArtBuildController__Fields fields;
};

struct ArtBuildController__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ArtBuildController__StaticFields {
};

struct ArtBuildController__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArtBuildController__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArtBuildController__VTable vtable;
};

struct ArtBuildController_c {
    struct ArtBuildController_c__Class *klass;
    MonitorData *monitor;
};

struct ArtBuildController_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ArtBuildController_c__StaticFields {
    struct ArtBuildController_c *__9;
    struct Func_2_String_Boolean_ *__9__9_0;
};

struct ArtBuildController_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArtBuildController_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArtBuildController_c__VTable vtable;
};

struct __declspec(align(8)) ArtBuildController_LoadScreenshots_d_9__Fields {
    int32_t __1__state;
    struct Object *__2__current;
    struct ArtBuildController *__4__this;
    struct WWW *_www_5__2;
    struct String *_path_5__3;
    struct IEnumerator_1_System_String_ *__7__wrap3;
    struct String *_sceneScreenshotPath_5__5;
};

struct ArtBuildController_LoadScreenshots_d_9 {
    struct ArtBuildController_LoadScreenshots_d_9__Class *klass;
    MonitorData *monitor;
    struct ArtBuildController_LoadScreenshots_d_9__Fields fields;
};

struct ArtBuildController_LoadScreenshots_d_9__VTable {
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

struct ArtBuildController_LoadScreenshots_d_9__StaticFields {
};

struct ArtBuildController_LoadScreenshots_d_9__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArtBuildController_LoadScreenshots_d_9__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArtBuildController_LoadScreenshots_d_9__VTable vtable;
};

struct Rock__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *m_transform;
    struct ActionSequence *OnBashHighlightAction;
    struct ActionMethod *OnHitGround;
    float Lifetime;
    float m_lifeRemaining;
    bool m_forceExplodeOnContact;
    bool ExplodeOnContact;
    bool Bashable;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    struct IDamageReciever__Array *m_damageReceivers;
};

struct Rock {
    struct Rock__Class *klass;
    MonitorData *monitor;
    struct Rock__Fields fields;
};

struct Rock__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
};

}
