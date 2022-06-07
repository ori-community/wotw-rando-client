namespace app {
struct StateHolder_1_LeverSetupData___VTable {
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

struct StateHolder_1_LeverSetupData___StaticFields {
};

struct StateHolder_1_LeverSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateHolder_1_LeverSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateHolder_1_LeverSetupData___VTable vtable;
};

struct TransitionBasedSetupHolder_1_LeverSetupData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct TransitionBasedSetupHolder_1_LeverSetupData___StaticFields {
};

struct TransitionBasedSetupHolder_1_LeverSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransitionBasedSetupHolder_1_LeverSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransitionBasedSetupHolder_1_LeverSetupData___VTable vtable;
};

struct LeverSetupHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct LeverSetupHolder__StaticFields {
};

struct LeverSetupHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeverSetupHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeverSetupHolder__VTable vtable;
};

struct Lever__Fields {
    struct MonoBehaviour__Fields _;
    bool _InRange_k__BackingField;
    bool _IsGrabbed_k__BackingField;
    float LeverRadius;
    bool SnapToGround;
    struct Transform *RotatingHandle;
    float LeverGroundOffset;
    float SeinGroundOffset;
    struct MoonTimeline *GrabLeverTimeline;
    struct MoonTimeline *ReleaseLeverTimeline;
    struct MoonTimeline *LeverLeftTimeline;
    struct MoonTimeline *LeverMiddleTimeline;
    struct MoonTimeline *LeverRightTimeline;
    LeverDirections__Enum LeverDirection;
    
    struct LeverSetupHolder *SetupStates;
    struct MoonReference_1_IStateTransitionHolder_ *LinkedSetup;
    bool CreateCheckpoint;
    LeverDirections__Enum _OriginalDirection_k__BackingField;
    
    struct Condition_1 *CanGrabCondition;
    struct Bounds m_bounds;
    bool m_insideFrustum;
    LeverMode__Enum LeverKind;
    
    struct Transform *m_transform;
    struct IUberState__Array *m_affectingUberStates;
    bool m_autoadjustedtoGroundLevel;
    float m_grabbedTime;
    float HandleRotationSpeed;
    float MaxAngularSpeed;
    float delayBeforeHandleRotation;
    struct Action *m_grabLeverEvent;
    struct Action *m_releaseLeverEvent;
    struct Action *m_leverLeftEvent;
    struct Action *m_leverRightEvent;
    struct Action *m_leverLeftFailedEvent;
    struct Action *m_leverRightFailedEvent;
    struct Action *m_leverMiddleEvent;
    struct Action *m_leverEnterEvent;
    struct Action *m_leverExitEvent;
    struct Func_1_Boolean_ *m_canLeverLeft;
    struct Func_1_Boolean_ *m_canLeverRight;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
    
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct Lever {
    struct Lever__Class *klass;
    MonitorData *monitor;
    struct Lever__Fields fields;
};

struct __declspec(align(8)) List_1_ILever___Fields {
    struct ILever__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ILever_ {
    struct List_1_ILever___Class *klass;
    MonitorData *monitor;
    struct List_1_ILever___Fields fields;
};

struct ILever__Array {
    struct ILever__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ILever *vector[32];
};

struct IEnumerator_1_ILever_ {
    struct IEnumerator_1_ILever___Class *klass;
    MonitorData *monitor;
};

struct ILever__Array__VTable {
};

struct ILever__Array__StaticFields {
};

struct ILever__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ILever__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ILever__Array__VTable vtable;
};

struct IEnumerator_1_ILever___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ILever___StaticFields {
};

struct IEnumerator_1_ILever___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ILever___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_ILever___VTable vtable;
};

struct List_1_ILever___VTable {
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

struct List_1_ILever___StaticFields {
    struct ILever__Array *_emptyArray;
};

struct List_1_ILever___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ILever___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ILever___VTable vtable;
};

struct Lever__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData get_InRange;
    VirtualInvokeData get_CanBeGrabbed;
    VirtualInvokeData get_CanTurn;
    VirtualInvokeData get_IsGrabbed;
    VirtualInvokeData get_Radius;
    VirtualInvokeData get_Transform;
    VirtualInvokeData get_SeinPositionOffset;
    VirtualInvokeData get_Position;
    VirtualInvokeData get_LeverType;
    VirtualInvokeData get_OriginalDirection;
    VirtualInvokeData get_Direction;
    VirtualInvokeData SetLeverDirection;
    VirtualInvokeData PlayLeverAnimation;
    VirtualInvokeData OnPushLeverLeft;
    VirtualInvokeData OnPushLeverMiddle;
    VirtualInvokeData OnPushLeverRight;
    VirtualInvokeData OnGrabLever;
    VirtualInvokeData OnReleaseLever;
    VirtualInvokeData get_CanLeverLeft;
    VirtualInvokeData set_CanLeverLeft;
    VirtualInvokeData get_CanLeverRight;
    VirtualInvokeData set_CanLeverRight;
    VirtualInvokeData get_NeedsToBeOnGround;
    VirtualInvokeData OnEnterLever;
    VirtualInvokeData OnExitLever;
    VirtualInvokeData GetGroundLevelOffset;
    VirtualInvokeData get_LeverEnterEvent;
    VirtualInvokeData set_LeverEnterEvent;
    VirtualInvokeData get_LeverExitEvent;
    VirtualInvokeData set_LeverExitEvent;
    VirtualInvokeData get_GrabLeverEvent;
    VirtualInvokeData set_GrabLeverEvent;
    VirtualInvokeData get_ReleaseLeverEvent;
    VirtualInvokeData set_ReleaseLeverEvent;
    VirtualInvokeData get_LeverLeftEvent;
    VirtualInvokeData set_LeverLeftEvent;
    VirtualInvokeData get_LeverRightEvent;
    VirtualInvokeData set_LeverRightEvent;
    VirtualInvokeData get_LeverLeftFailedEvent;
    VirtualInvokeData set_LeverLeftFailedEvent;
    VirtualInvokeData get_LeverRightFailedEvent;
    VirtualInvokeData set_LeverRightFailedEvent;
    VirtualInvokeData get_LeverMiddleEvent;
    VirtualInvokeData set_LeverMiddleEvent;
    VirtualInvokeData get_InsideFrustum_1;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
};

struct Lever__StaticFields {
    struct List_1_ILever_ *All;
};

struct Lever__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Lever__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Lever__VTable vtable;
};

struct Lever_c {
    struct Lever_c__Class *klass;
    MonitorData *monitor;
};

struct Lever_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Lever_c__StaticFields {
    struct Lever_c *__9;
    struct Action *__9__153_0;
    struct Action *__9__153_1;
    struct Action *__9__153_2;
    struct Action *__9__153_3;
    struct Action *__9__153_4;
    struct Action *__9__153_5;
    struct Action *__9__153_6;
    struct Action *__9__153_7;
    struct Action *__9__153_8;
    struct Func_1_Boolean_ *__9__153_9;
    struct Func_1_Boolean_ *__9__153_10;
};

struct Lever_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Lever_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Lever_c__VTable vtable;
};

struct LeverActionSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct Lever *Lever;
    struct MoonTimeline *LeverLeftTimeline;
    struct MoonTimeline *LeverRightTimeline;
    struct Condition_1 *CanLeverLeft;
    struct Condition_1 *CanLeverRight;
};

struct LeverActionSystem {
    struct LeverActionSystem__Class *klass;
    MonitorData *monitor;
    struct LeverActionSystem__Fields fields;
};

struct LeverActionSystem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LeverActionSystem__StaticFields {
};

struct LeverActionSystem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LeverActionSystem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LeverActionSystem__VTable vtable;
};

struct StateHolder_1_DoorSetupData___Fields {
    struct StateHolder__Fields _;
    struct List_1_DoorSetupData_ *StateData;
    struct List_1_IIndexedItem_ *m_cachedStates;
};

struct StateHolder_1_DoorSetupData_ {
    struct StateHolder_1_DoorSetupData___Class *klass;
    MonitorData *monitor;
    struct StateHolder_1_DoorSetupData___Fields fields;
};

struct TransitionBasedSetupHolder_1_DoorSetupData___Fields {
    struct StateHolder_1_DoorSetupData___Fields _;
};

struct TransitionBasedSetupHolder_1_DoorSetupData_ {
    struct TransitionBasedSetupHolder_1_DoorSetupData___Class *klass;
    MonitorData *monitor;
    struct TransitionBasedSetupHolder_1_DoorSetupData___Fields fields;
};

struct DoorSetupHolder__Fields {
    struct TransitionBasedSetupHolder_1_DoorSetupData___Fields _;
};

struct DoorSetupHolder {
    struct DoorSetupHolder__Class *klass;
    MonitorData *monitor;
    struct DoorSetupHolder__Fields fields;
};

struct __declspec(align(8)) List_1_DoorSetupData___Fields {
    struct DoorSetupData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_DoorSetupData_ {
    struct List_1_DoorSetupData___Class *klass;
    MonitorData *monitor;
    struct List_1_DoorSetupData___Fields fields;
};

struct __declspec(align(8)) DoorSetupData__Fields {
    struct MoonTimeline *m_transition;
    float m_desiredValue;
    struct Vector3 DoorPosition;
};

struct DoorSetupData {
    struct DoorSetupData__Class *klass;
    MonitorData *monitor;
    struct DoorSetupData__Fields fields;
};

struct DoorSetupData__Array {
    struct DoorSetupData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DoorSetupData *vector[32];
};

struct IEnumerator_1_DoorSetupData_ {
    struct IEnumerator_1_DoorSetupData___Class *klass;
    MonitorData *monitor;
};

struct DoorSetupData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Transition;
    VirtualInvokeData get_DesiredValue;
};

struct DoorSetupData__StaticFields {
};

struct DoorSetupData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorSetupData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorSetupData__VTable vtable;
};

struct DoorSetupData__Array__VTable {
};

struct DoorSetupData__Array__StaticFields {
};

struct DoorSetupData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorSetupData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorSetupData__Array__VTable vtable;
};

struct IEnumerator_1_DoorSetupData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_DoorSetupData___StaticFields {
};

struct IEnumerator_1_DoorSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_DoorSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_DoorSetupData___VTable vtable;
};

struct List_1_DoorSetupData___VTable {
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

struct List_1_DoorSetupData___StaticFields {
    struct DoorSetupData__Array *_emptyArray;
};

struct List_1_DoorSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_DoorSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_DoorSetupData___VTable vtable;
};

struct StateHolder_1_DoorSetupData___VTable {
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

struct StateHolder_1_DoorSetupData___StaticFields {
};

struct StateHolder_1_DoorSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StateHolder_1_DoorSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StateHolder_1_DoorSetupData___VTable vtable;
};

struct TransitionBasedSetupHolder_1_DoorSetupData___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct TransitionBasedSetupHolder_1_DoorSetupData___StaticFields {
};

struct TransitionBasedSetupHolder_1_DoorSetupData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransitionBasedSetupHolder_1_DoorSetupData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransitionBasedSetupHolder_1_DoorSetupData___VTable vtable;
};

struct DoorSetupHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
    VirtualInvokeData GetRequirementsForTimeline;
};

struct DoorSetupHolder__StaticFields {
};

struct DoorSetupHolder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorSetupHolder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorSetupHolder__VTable vtable;
};

struct Door__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct Transform *DoorTransform;
    struct DoorSetupHolder *SetupStates;
    struct IUberState__Array *m_affectingUberStates;
};

struct Door {
    struct Door__Class *klass;
    MonitorData *monitor;
    struct Door__Fields fields;
};

struct Door__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Apply;
    VirtualInvokeData get_ApplyOnEditor;
    VirtualInvokeData get_AffectingUberStates;
    VirtualInvokeData get_AllTargets;
    VirtualInvokeData PerformStateTransition;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData StopTransitions;
};

struct Door__StaticFields {
};

struct Door__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Door__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Door__VTable vtable;
};

struct DoorAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct DoorVisuals *Visuals;
    struct MoonTimeline *OpenTimeline;
    struct MoonTimeline *CloseTimeline;
    bool _InvalidateParentTimelineCache_k__BackingField;
};

struct DoorAnimator {
    struct DoorAnimator__Class *klass;
    MonitorData *monitor;
    struct DoorAnimator__Fields fields;
};

struct DoorVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline *OpenTimeline;
    struct MoonTimeline *CloseTimeline;
};

struct DoorVisuals {
    struct DoorVisuals__Class *klass;
    MonitorData *monitor;
    struct DoorVisuals__Fields fields;
};

struct DoorVisuals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DoorVisuals__StaticFields {
};

struct DoorVisuals__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorVisuals__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorVisuals__VTable vtable;
};

struct DoorAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_MoonSetupVisuals;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
};

struct DoorAnimator__StaticFields {
};

struct DoorAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorAnimator__VTable vtable;
};

struct DoorLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver *m_dataResolver;
    struct DoorAnimator *Animator;
    struct MoonReference_1_IGenericUberState_ *State;
};

struct DoorLogic {
    struct DoorLogic__Class *klass;
    MonitorData *monitor;
    struct DoorLogic__Fields fields;
};

struct DoorLogic__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData PerformStateTransition;
    VirtualInvokeData GetRequirementsForTimeline;
    VirtualInvokeData StopTransitions;
    VirtualInvokeData get_MoonSetupAnimator;
    VirtualInvokeData GetResolverForType;
};

struct DoorLogic__StaticFields {
};

struct DoorLogic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoorLogic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoorLogic__VTable vtable;
};

struct ProximityMine__Fields {
    struct Entity__Fields _;
    float PopOutTimelineTimescale;
    float ExplosionRadius;
    float DamageAmount;
    struct Sensor *MineSensor;
    struct DamageReceiver *Hitbox;
    struct MoonTimeline *PopOutTimeline;
    struct EventTriggerAnimator *ExplosionEvent;
    struct GameObject *ExplosionFXPrefab;
    bool m_destroyMine;
    int32_t DamageMask;
};

struct ProximityMine {
    struct ProximityMine__Class *klass;
    MonitorData *monitor;
    struct ProximityMine__Fields fields;
};

struct ProximityMine__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_BehaviourTree;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ShouldKillBubble;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData get_ExternalID;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData IPortalVisitor_get_Position;
    VirtualInvokeData IPortalVisitor_set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
    VirtualInvokeData get_IsFacingTarget;
    VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
    VirtualInvokeData get_ScreenPadding;
    VirtualInvokeData IsBehaviourTreePaused;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnAwake;
    VirtualInvokeData GetBehaviourTree;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData UnserializedInitialization;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
    VirtualInvokeData OnSuspendedStay;
    VirtualInvokeData OnUpdate_2;
    VirtualInvokeData EnterSpawningState;
    VirtualInvokeData UpdateSpawningState;
    VirtualInvokeData ExitSpawningState;
    VirtualInvokeData EnterDecisionMakingState;
    VirtualInvokeData UpdateDecisionMakingState;
    VirtualInvokeData ExitDecisionMakingState;
    VirtualInvokeData EnterReactionState;
    VirtualInvokeData UpdateReactionState;
    VirtualInvokeData ExitReactionState;
    VirtualInvokeData EnterCinematicState;
    VirtualInvokeData UpdateCinematicState;
    VirtualInvokeData ExitCinematicState;
    VirtualInvokeData GetActiveLocomotion;
    VirtualInvokeData OnContactDamageDealt;
    VirtualInvokeData OnHandleFireDamage;
    VirtualInvokeData OnHandleIceDamage;
    VirtualInvokeData OnDamageReceived;
    VirtualInvokeData OnDamageBlocked;
    VirtualInvokeData DeactivateDamageReceivers;
    VirtualInvokeData InstantKill;
    VirtualInvokeData OnDied;
    VirtualInvokeData SpawnOrbs;
    VirtualInvokeData OnDiedOutOfBounds;
    VirtualInvokeData OnEndDeathBehaviour;
    VirtualInvokeData OnPostRestoreCheckpoint;
    VirtualInvokeData ResetEntity;
    VirtualInvokeData GetHitStopAutoSuspendables_1;
    VirtualInvokeData OnHitStopStart_1;
    VirtualInvokeData OnHitStopEnd_1;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData IsFacingPoint;
    VirtualInvokeData ResolveDamage_1;
    VirtualInvokeData get_CameraTargetActive_1;
    VirtualInvokeData get_CameraTargetPosition_1;
    VirtualInvokeData get_CameraTargetPadding_1;
    VirtualInvokeData get_CameraInfluenceMinDist_1;
    VirtualInvokeData get_CameraInfluenceMaxDist_1;
    VirtualInvokeData get_CameraZoomFactor_1;
    VirtualInvokeData get_TargetType_1;
    VirtualInvokeData AdjustCameraTargetWeight_1;
    VirtualInvokeData get_IsAggroed;
};

struct ProximityMine__StaticFields {
};

struct ProximityMine__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ProximityMine__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ProximityMine__VTable vtable;
};

struct RotatingObstacleAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct RotatingObstacleVisuals *Visuals;
};

struct RotatingObstacleAnimator {
    struct RotatingObstacleAnimator__Class *klass;
    MonitorData *monitor;
    struct RotatingObstacleAnimator__Fields fields;
};

struct RotatingObstacleVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *DefaultImpactEffect;
    struct GameObject *DefaultImpactEffectLoop;
    struct LayerMask BlockingLayers;
    struct Transform *EffectSpawnPoint;
    struct GameObject *m_lastImpactEffectLoop;
    bool m_isLooping;
    struct Vector3 m_lastSpawnPosition;
    struct List_1_UnityEngine_ParticleSystem_ *s_particleSystemList;
};

struct RotatingObstacleVisuals {
    struct RotatingObstacleVisuals__Class *klass;
    MonitorData *monitor;
    struct RotatingObstacleVisuals__Fields fields;
};

struct RotatingObstacleVisuals__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct RotatingObstacleVisuals__StaticFields {
};

struct RotatingObstacleVisuals__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RotatingObstacleVisuals__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RotatingObstacleVisuals__VTable vtable;
};

struct RotatingObstacleAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_MoonSetupVisuals;
};

struct RotatingObstacleAnimator__StaticFields {
};

struct RotatingObstacleAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct RotatingObstacleAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct RotatingObstacleAnimator__VTable vtable;
};

struct RotatingObstacleImpactEffect__Fields {
    struct MonoBehaviour__Fields _;
};

}
