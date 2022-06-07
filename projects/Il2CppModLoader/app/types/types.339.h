namespace app {
struct AnimationPostprocessPlayer__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_MoonAnimator_ *Animator;
    struct MoonAnimator *m_moonAnimator;
    struct AnimationPostprocess *m_postprocessInstance;
    float m_time;
    struct MoonReference_1_AnimationPostprocess_ *AnimationPostprocess;
    struct AnimationPostprocess *Postprocess;
    struct AnimationCurve *WeightCurve;
};

struct AnimationPostprocessPlayer {
    struct AnimationPostprocessPlayer__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocessPlayer__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_AnimationPostprocess___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_AnimationPostprocess_ *m_cachedProxyType;
    struct AnimationPostprocess *m_volatileValue;
};

struct MoonReference_1_AnimationPostprocess_ {
    struct MoonReference_1_AnimationPostprocess___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_AnimationPostprocess___Fields fields;
};

struct IMoonType_1_AnimationPostprocess_ {
    struct IMoonType_1_AnimationPostprocess___Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_AnimationPostprocess___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_AnimationPostprocess___StaticFields {
};

struct IMoonType_1_AnimationPostprocess___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_AnimationPostprocess___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_AnimationPostprocess___VTable vtable;
};

struct AnimationPostprocess___VTable {
};

struct AnimationPostprocess___StaticFields {
};

struct AnimationPostprocess___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationPostprocess___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationPostprocess___VTable vtable;
};

struct MoonReference_1_AnimationPostprocess___VTable {
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

struct MoonReference_1_AnimationPostprocess___StaticFields {
};

struct MoonReference_1_AnimationPostprocess___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_AnimationPostprocess___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_AnimationPostprocess___VTable vtable;
};

struct AnimationPostprocessPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
};

struct AnimationPostprocessPlayer__StaticFields {
};

struct AnimationPostprocessPlayer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationPostprocessPlayer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationPostprocessPlayer__VTable vtable;
};

struct EventTriggerAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct Action_1_Moon_Timeline_EventTriggerAnimator_ *m_eventStartWithTriggerInfo;
    struct Action *m_eventStart;
    struct Action *m_eventStay;
    struct Action *m_eventEnd;
    float m_duration;
    float m_time;
};

struct EventTriggerAnimator {
    struct EventTriggerAnimator__Class *klass;
    MonitorData *monitor;
    struct EventTriggerAnimator__Fields fields;
};

struct Action_1_Moon_Timeline_EventTriggerAnimator___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_Timeline_EventTriggerAnimator_ {
    struct Action_1_Moon_Timeline_EventTriggerAnimator___Class *klass;
    MonitorData *monitor;
    struct Action_1_Moon_Timeline_EventTriggerAnimator___Fields fields;
};

struct Action_1_Moon_Timeline_EventTriggerAnimator___VTable {
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

struct Action_1_Moon_Timeline_EventTriggerAnimator___StaticFields {
};

struct Action_1_Moon_Timeline_EventTriggerAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_Moon_Timeline_EventTriggerAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_Moon_Timeline_EventTriggerAnimator___VTable vtable;
};

struct EventTriggerAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData get_IsOn;
    VirtualInvokeData Validate;
};

struct EventTriggerAnimator__StaticFields {
};

struct EventTriggerAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerAnimator__VTable vtable;
};

struct EventTriggerAnimator_c {
    struct EventTriggerAnimator_c__Class *klass;
    MonitorData *monitor;
};

struct EventTriggerAnimator_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EventTriggerAnimator_c__StaticFields {
    struct EventTriggerAnimator_c *__9;
    struct Action_1_Moon_Timeline_EventTriggerAnimator_ *__9__27_0;
    struct Action *__9__27_1;
    struct Action *__9__27_2;
    struct Action *__9__27_3;
};

struct EventTriggerAnimator_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerAnimator_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerAnimator_c__VTable vtable;
};

struct __declspec(align(8)) List_1_Moon_Timeline_EventTriggerGameplayAnimator___Fields {
    struct EventTriggerGameplayAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_ {
    struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___Fields fields;
};

enum class EventTriggerGameplayAnimator_Type__Enum : int32_t {
    None = -1,
    HitAccumulation = 0x00000000,
    HitReactionAllowed = 0x00000001,
    LookRight = 0x00000002,
    LookLeft = 0x00000003,
    Cancellable = 0x00000004,
    SkipCutsceneAllowed = 0x00000005,
};

struct EventTriggerGameplayAnimator_Type__Enum__Boxed {
    struct EventTriggerGameplayAnimator_Type__Enum__Class *klass;
    MonitorData *monitor;
    EventTriggerGameplayAnimator_Type__Enum value;
    
};

struct EventTriggerGameplayAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    EventTriggerGameplayAnimator_Type__Enum EventType;
    
};

struct EventTriggerGameplayAnimator {
    struct EventTriggerGameplayAnimator__Class *klass;
    MonitorData *monitor;
    struct EventTriggerGameplayAnimator__Fields fields;
};

struct EventTriggerGameplayAnimator__Array {
    struct EventTriggerGameplayAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct EventTriggerGameplayAnimator *vector[32];
};

struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator_ {
    struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___Class *klass;
    MonitorData *monitor;
};

struct EventTriggerGameplayAnimator_Type__Enum__VTable {
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

struct EventTriggerGameplayAnimator_Type__Enum__StaticFields {
};

struct EventTriggerGameplayAnimator_Type__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerGameplayAnimator_Type__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerGameplayAnimator_Type__Enum__VTable vtable;
};

struct EventTriggerGameplayAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData get_IsOn;
    VirtualInvokeData Validate;
};

struct EventTriggerGameplayAnimator__StaticFields {
};

struct EventTriggerGameplayAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerGameplayAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerGameplayAnimator__VTable vtable;
};

struct EventTriggerGameplayAnimator__Array__VTable {
};

struct EventTriggerGameplayAnimator__Array__StaticFields {
};

struct EventTriggerGameplayAnimator__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerGameplayAnimator__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerGameplayAnimator__Array__VTable vtable;
};

struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___StaticFields {
};

struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_Timeline_EventTriggerGameplayAnimator___VTable vtable;
};

struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___VTable {
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

struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___StaticFields {
    struct EventTriggerGameplayAnimator__Array *_emptyArray;
};

struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_Timeline_EventTriggerGameplayAnimator___VTable vtable;
};

struct __declspec(align(8)) EventTriggerGameplayAnimator_c_DisplayClass2_0__Fields {
    EventTriggerGameplayAnimator_Type__Enum type;
    
};

struct EventTriggerGameplayAnimator_c_DisplayClass2_0 {
    struct EventTriggerGameplayAnimator_c_DisplayClass2_0__Class *klass;
    MonitorData *monitor;
    struct EventTriggerGameplayAnimator_c_DisplayClass2_0__Fields fields;
};

struct EventTriggerGameplayAnimator_c_DisplayClass2_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EventTriggerGameplayAnimator_c_DisplayClass2_0__StaticFields {
};

struct EventTriggerGameplayAnimator_c_DisplayClass2_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventTriggerGameplayAnimator_c_DisplayClass2_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventTriggerGameplayAnimator_c_DisplayClass2_0__VTable vtable;
};

enum class ExternalTimelineEntity_StopBehaviourType__Enum : int32_t {
    StopTimeline = 0x00000000,
    None = 0x00000001,
};

struct ExternalTimelineEntity_StopBehaviourType__Enum__Boxed {
    struct ExternalTimelineEntity_StopBehaviourType__Enum__Class *klass;
    MonitorData *monitor;
    ExternalTimelineEntity_StopBehaviourType__Enum value;
    
};

struct ExternalTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *m_timeline;
    bool IsScenarioTimelineCall;
    ExternalTimelineEntity_StopBehaviourType__Enum m_stopBehaviourType;
    
    struct MoonTimeline *m_targetTimeline;
    struct List_1_Moon_MoonReference_1__2 *m_timelines;
    float _TrimTime_k__BackingField;
    bool _ShouldTrim_k__BackingField;
    struct ITrimController *_TrimController_k__BackingField;
};

struct ExternalTimelineEntity {
    struct ExternalTimelineEntity__Class *klass;
    MonitorData *monitor;
    struct ExternalTimelineEntity__Fields fields;
};

struct ExternalTimelineEntity_StopBehaviourType__Enum__VTable {
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

struct ExternalTimelineEntity_StopBehaviourType__Enum__StaticFields {
};

struct ExternalTimelineEntity_StopBehaviourType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExternalTimelineEntity_StopBehaviourType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExternalTimelineEntity_StopBehaviourType__Enum__VTable vtable;
};

struct ExternalTimelineEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData get_Timelines;
    VirtualInvokeData get_ActiveTimeline;
    VirtualInvokeData get_EntityRecords;
    VirtualInvokeData get_ConstraintMetaDatas;
    VirtualInvokeData get_MarkerRecords;
    VirtualInvokeData get_ExternalRecords;
    VirtualInvokeData get_CurrentTime;
    VirtualInvokeData RecursivelySetupExecutionOrder;
    VirtualInvokeData get_TrimController;
    VirtualInvokeData set_TrimController;
    VirtualInvokeData get_FullAddress;
    VirtualInvokeData HasFinished;
    VirtualInvokeData ApproximateEvent;
};

struct ExternalTimelineEntity__StaticFields {
};

struct ExternalTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExternalTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExternalTimelineEntity__VTable vtable;
};

struct FloatAnimationParameterAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct AnimationCurve *Curve;
    struct MoonAnimator *MoonAnimator;
    struct FloatAnimationParameter *FloatAnimationParameter;
    float m_time;
};

struct FloatAnimationParameterAnimator {
    struct FloatAnimationParameterAnimator__Class *klass;
    MonitorData *monitor;
    struct FloatAnimationParameterAnimator__Fields fields;
};

struct FloatAnimationParameterAnimator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
};

struct FloatAnimationParameterAnimator__StaticFields {
};

struct FloatAnimationParameterAnimator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FloatAnimationParameterAnimator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FloatAnimationParameterAnimator__VTable vtable;
};

struct TransformAnimatorEntity__Fields {
    struct TimelineEntity__Fields _;
    bool AnimateDynamicBody;
    struct Rigidbody *m_rigidbody;
    UpdateCategory__Enum m_updateCategory;
    
};

struct TransformAnimatorEntity {
    struct TransformAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct TransformAnimatorEntity__Fields fields;
};

struct EulerXYZRotationAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    struct MoonQuaternion *LocalStartRotation;
    bool EnabledX;
    bool EnabledY;
    bool EnabledZ;
    struct AnimationCurve *RotationX;
    struct AnimationCurve *RotationY;
    struct AnimationCurve *RotationZ;
    Space__Enum Space;
    
    bool Loop;
    struct Quaternion m_currentLocalStartRotation;
    float m_time;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
};

struct EulerXYZRotationAnimatorEntity {
    struct EulerXYZRotationAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct EulerXYZRotationAnimatorEntity__Fields fields;
};

struct TransformAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
};

struct TransformAnimatorEntity__StaticFields {
};

struct TransformAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformAnimatorEntity__VTable vtable;
};

struct EulerXYZRotationAnimatorEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_EventReciever;
    VirtualInvokeData set_EventReciever;
    VirtualInvokeData StartPlayback;
    VirtualInvokeData StopPlayback;
    VirtualInvokeData PausePlayback;
    VirtualInvokeData ResumePlayback;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData get_PlayState;
    VirtualInvokeData get_PlaybackStatus;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_Name;
    VirtualInvokeData get_ExecutionOrderOffset;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData PostEvent;
    VirtualInvokeData PostEvent_1;
    VirtualInvokeData PostRequest;
    VirtualInvokeData get_Hash_1;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_UpdateCategory;
    VirtualInvokeData SetTimeScale;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnPausePlayback;
    VirtualInvokeData OnResumePlayback;
    VirtualInvokeData OnStartPlayback;
    VirtualInvokeData OnStopPlayback;
    VirtualInvokeData OnUpdateEntity;
    VirtualInvokeData CanUpdate;
    VirtualInvokeData Awake;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData SynchronizeData;
    VirtualInvokeData SynchronizePad;
    VirtualInvokeData PostEvent_2;
    VirtualInvokeData PostEvent_3;
    VirtualInvokeData PostRequest_1;
    VirtualInvokeData OnRootScopeStopped;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData get_TransformTarget;
    VirtualInvokeData get_EffectiveTransform;
    VirtualInvokeData OnBeforeSerialize_1;
    VirtualInvokeData OnAfterDeserialize_1;
    VirtualInvokeData GetTransformTarget;
    VirtualInvokeData GetCurrentValueAssociatedWithCurve;
    VirtualInvokeData get_ObservedTarget;
    VirtualInvokeData get_ObservedModifierType;
    VirtualInvokeData get_FromStateGuid;
    VirtualInvokeData set_FromStateGuid;
    VirtualInvokeData get_ToStateGuid;
    VirtualInvokeData set_ToStateGuid;
    VirtualInvokeData OnStartObserving;
    VirtualInvokeData OnStopObserving;
    VirtualInvokeData OnSetupChanged;
    VirtualInvokeData OnEntityCreated;
    VirtualInvokeData get_ExternalTarget;
    VirtualInvokeData GetManagedEarlyZDynamicGraphicTargets;
    VirtualInvokeData OnTimelineSample;
};

struct EulerXYZRotationAnimatorEntity__StaticFields {
};

struct EulerXYZRotationAnimatorEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EulerXYZRotationAnimatorEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EulerXYZRotationAnimatorEntity__VTable vtable;
};

enum class PositionAnimatorEntity_PositionMovementType__Enum : int32_t {
    Relative = 0x00000000,
    Absolute = 0x00000001,
    WorldAbsolute = 0x00000002,
};

struct PositionAnimatorEntity_PositionMovementType__Enum__Boxed {
    struct PositionAnimatorEntity_PositionMovementType__Enum__Class *klass;
    MonitorData *monitor;
    PositionAnimatorEntity_PositionMovementType__Enum value;
    
};

struct PositionAnimatorEntity__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct MoonReference_1_UnityEngine_Transform_ *TargetTransform;
    struct AnimationCurve *X;
    struct AnimationCurve *Y;
    struct AnimationCurve *Z;
    float m_deltaTimeScale;
    float m_time;
    struct Vector3 m_initialPosition;
    int32_t m_fromStateGuid;
    int32_t m_toStateGuid;
    struct Transform *m_oldTransform;
    PositionAnimatorEntity_PositionMovementType__Enum MovementType;
    
};

struct PositionAnimatorEntity {
    struct PositionAnimatorEntity__Class *klass;
    MonitorData *monitor;
    struct PositionAnimatorEntity__Fields fields;
};

}
