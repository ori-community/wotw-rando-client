namespace app {
struct MoonAnimator_AnimatedCrossfadeInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct Playable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance *m_source;
    struct MoonAnimator_AnimationInstance *m_target;
    struct MoonAnimator_AnimationInstance *m_transition;
    MoonAnimator_AnimatedCrossfadeInstance_State__Enum m_currentState;
    
    float m_currentStateTime;
    float m_sourceAnimationTransitionTime;
    float m_durationIn;
    float m_durationOut;
    float m_targetNormalizedTime;
};

struct MoonAnimator_AnimatedCrossfadeInstance {
    struct MoonAnimator_AnimatedCrossfadeInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_AnimatedCrossfadeInstance__Fields fields;
};

struct MoonAnimator_AnimatedCrossfadeInstance__Array {
    struct MoonAnimator_AnimatedCrossfadeInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_AnimatedCrossfadeInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator___Fields {
    struct MoonAnimator__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_ {
    struct List_1_Moon_MoonAnimator___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator___Fields fields;
};

struct MoonAnimator__Array {
    struct MoonAnimator__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_ {
    struct IEnumerator_1_Moon_MoonAnimator___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_PreviewAnimation___Fields {
    struct MoonAnimator_PreviewAnimation__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_PreviewAnimation_ {
    struct List_1_Moon_MoonAnimator_PreviewAnimation___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_PreviewAnimation___Fields fields;
};

struct __declspec(align(8)) MoonAnimator_PreviewAnimation__Fields {
    float StartTime;
    float EndTime;
    int32_t Priority;
    float Speed;
    struct MoonAnimation *Animation;
    int32_t Id;
    float Weight;
};

struct MoonAnimator_PreviewAnimation {
    struct MoonAnimator_PreviewAnimation__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_PreviewAnimation__Fields fields;
};

struct MoonAnimator_PreviewAnimation__Array {
    struct MoonAnimator_PreviewAnimation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_PreviewAnimation *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_PreviewAnimation_ {
    struct IEnumerator_1_Moon_MoonAnimator_PreviewAnimation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_TransformData___Fields {
    struct MoonAnimator_TransformData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_TransformData_ {
    struct List_1_Moon_MoonAnimator_TransformData___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_TransformData___Fields fields;
};

struct MoonAnimator_TransformData {
    bool IsJoint;
    struct Transform *Transform;
    struct Vector3 Postion;
    struct Quaternion Rotation;
    struct Vector3 Scale;
    struct String *DebugName;
};

struct MoonAnimator_TransformData__Boxed {
    struct MoonAnimator_TransformData__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_TransformData fields;
};

struct MoonAnimator_TransformData__Array {
    struct MoonAnimator_TransformData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_TransformData vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_TransformData_ {
    struct IEnumerator_1_Moon_MoonAnimator_TransformData___Class *klass;
    MonitorData *monitor;
};

struct Action_1_UnityEngine_Vector3___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_Vector3_ {
    struct Action_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Action_1_UnityEngine_Vector3___Fields fields;
};

struct Action_1_UnityEngine_Quaternion___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_UnityEngine_Quaternion_ {
    struct Action_1_UnityEngine_Quaternion___Class *klass;
    MonitorData *monitor;
    struct Action_1_UnityEngine_Quaternion___Fields fields;
};

struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ {
    struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Class *klass;
    MonitorData *monitor;
    struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Fields fields;
};

struct ActiveAnimationHandle {
    int32_t m_version;
    struct IActiveAnimation *m_activeAnimation;
};

struct ActiveAnimationHandle__Boxed {
    struct ActiveAnimationHandle__Class *klass;
    MonitorData *monitor;
    struct ActiveAnimationHandle fields;
};

struct IActiveAnimation {
    struct IActiveAnimation__Class *klass;
    MonitorData *monitor;
};

struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ {
    struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Fields fields;
};

struct Action_2_Moon_FloatAnimationParameter_Single___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_FloatAnimationParameter_Single_ {
    struct Action_2_Moon_FloatAnimationParameter_Single___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_FloatAnimationParameter_Single___Fields fields;
};

struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_ {
    struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Fields fields;
};

struct VectorAnimationParameter__Fields {
    struct AnimationParameter__Fields _;
    struct Vector3 DefaultValue;
    float SmoothTime;
};

struct VectorAnimationParameter {
    struct VectorAnimationParameter__Class *klass;
    MonitorData *monitor;
    struct VectorAnimationParameter__Fields fields;
};

struct Action_1_Moon_ClipAnimation_EventMetadata___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_ClipAnimation_EventMetadata_ {
    struct Action_1_Moon_ClipAnimation_EventMetadata___Class *klass;
    MonitorData *monitor;
    struct Action_1_Moon_ClipAnimation_EventMetadata___Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Fields {
    struct MoonAnimator_AnimationPostprocessMetadata__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_ {
    struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Fields fields;
};

enum class MoonAnimator_AnimationPostprocessState__Enum : int32_t {
    Inactive = 0x00000000,
    BlendingIn = 0x00000001,
    Active = 0x00000002,
    BlendingOut = 0x00000003,
};

struct MoonAnimator_AnimationPostprocessState__Enum__Boxed {
    struct MoonAnimator_AnimationPostprocessState__Enum__Class *klass;
    MonitorData *monitor;
    MoonAnimator_AnimationPostprocessState__Enum value;
    
};

struct __declspec(align(8)) MoonAnimator_AnimationPostprocessMetadata__Fields {
    struct AnimationPostprocess *Animation;
    MoonAnimator_AnimationPostprocessState__Enum State;
    
    float CurrentBlendTime;
    float BlendDuration;
    float OriginalWeight;
    bool IsProcessingActive;
};

struct MoonAnimator_AnimationPostprocessMetadata {
    struct MoonAnimator_AnimationPostprocessMetadata__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_AnimationPostprocessMetadata__Fields fields;
};

struct AnimationPostprocess__Fields {
    struct MonoBehaviour__Fields _;
    float Weight;
    struct FloatAnimationParameter *WeightParameter;
    struct GameObject *AutoAddTarget;
    struct MoonAnimator *TargetAnimator;
    struct AnimationPostprocessGroup *Group;
    struct AnimationPostprocessGroup *SubGroup;
    struct MoonAnimator *m_moonAnimator;
    bool m_registeredToMoonDriver;
};

struct AnimationPostprocess {
    struct AnimationPostprocess__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocess__Fields fields;
};

enum class UpdateType__Enum : int32_t {
    Default = -1,
    Update = 0x00000000,
    LateUpdate = 0x00000001,
    FixedUpdate = 0x00000002,
    COUNT = 0x00000003,
};

struct UpdateType__Enum__Boxed {
    struct UpdateType__Enum__Class *klass;
    MonitorData *monitor;
    UpdateType__Enum value;
    
};

struct BlendAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct MoonAnimation *Animation;
    struct AnimationMaskNode *Mask_1;
    int32_t OrderNumber;
    bool AutoRemoveOnFinish;
    bool BlendInOut;
    float BlendInNormalizedDuration;
    float BlendOutNormalizedDuration;
    struct GameObject *m_animatedObjectCopy;
    struct ActiveAnimationHandle m_activeAnimation;
};

struct BlendAnimationPostprocess {
    struct BlendAnimationPostprocess__Class *klass;
    MonitorData *monitor;
    struct BlendAnimationPostprocess__Fields fields;
};

struct AnimationMaskNode__Fields {
    struct MonoBehaviour__Fields _;
    bool Included;
    float Weight;
};

struct AnimationMaskNode {
    struct AnimationMaskNode__Class *klass;
    MonitorData *monitor;
    struct AnimationMaskNode__Fields fields;
};

struct MoonAnimator_AnimationPostprocessMetadata__Array {
    struct MoonAnimator_AnimationPostprocessMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_AnimationPostprocessMetadata *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_AnimationPostprocessMetadata_ {
    struct IEnumerator_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) AnimationPostprocessGroupManager__Fields {
    struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ *m_groupStates;
    struct List_1_Moon_AnimationPostprocessGroupManager_GroupState_ *m_groupList;
};

struct AnimationPostprocessGroupManager {
    struct AnimationPostprocessGroupManager__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocessGroupManager__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_AnimationPostprocessGroup_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    int32_t hashCode;
    int32_t next;
    struct AnimationPostprocessGroup *key;
    struct AnimationPostprocessGroupManager_GroupState *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ fields;
};

struct __declspec(align(8)) AnimationPostprocessGroupManager_GroupState__Fields {
    struct AnimationPostprocessGroup *m_group;
    int32_t m_disableCounter;
    float m_currentWeight;
    float m_velocity;
    float m_currentSmoothTime;
};

struct AnimationPostprocessGroupManager_GroupState {
    struct AnimationPostprocessGroupManager_GroupState__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocessGroupManager_GroupState__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ vector[32];
};

struct IEqualityComparer_1_Moon_AnimationPostprocessGroup_ {
    struct IEqualityComparer_1_Moon_AnimationPostprocessGroup___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
    struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};

struct IEnumerator_1_Moon_AnimationPostprocessGroup_ {
    struct IEnumerator_1_Moon_AnimationPostprocessGroup___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
    struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};

struct AnimationPostprocessGroupManager_GroupState__Array {
    struct AnimationPostprocessGroupManager_GroupState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationPostprocessGroupManager_GroupState *vector[32];
};

struct IEnumerator_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct IEnumerator_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_AnimationPostprocessGroup_ {
    struct ICollection_1_Moon_AnimationPostprocessGroup___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct ICollection_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct AnimationPostprocessGroup *key;
    struct AnimationPostprocessGroupManager_GroupState *value;
};

struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Boxed {
    struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ fields;
};

struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array {
    struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_AnimationPostprocessGroup_ {
    struct IEnumerable_1_Moon_AnimationPostprocessGroup___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct IEnumerable_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
    struct AnimationPostprocessGroupManager_GroupState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
    struct List_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_Layer___Fields {
    struct MoonAnimator_Layer__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_Layer_ {
    struct List_1_Moon_MoonAnimator_Layer___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_Layer___Fields fields;
};

struct __declspec(align(8)) MoonAnimator_Layer__Fields {
    struct MoonAnimator_AnimationInstance *m_transitionTargetAnimationInstance;
    struct MoonAnimator_AnimationInstance *m_currentAnimationInstance;
    struct IAnimation *m_transitionTargetAnimation;
    struct IAnimation *m_currentAnimation;
    struct MoonAnimator_ActiveAnimation *m_currentActiveAnimation;
    struct List_1_Moon_MoonAnimator_ActiveAnimation_ *m_activeAnimations;
    struct List_1_Moon_MoonAnimator_ActiveAnimation_ *m_animationsToStop;
    struct MoonAnimator *m_animator;
    struct MoonAnimatorLayerDefinition m_definition;
    float m_weight;
    float m_blendDuration;
};

struct MoonAnimator_Layer {
    struct MoonAnimator_Layer__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_Layer__Fields fields;
};

struct __declspec(align(8)) Stack_1_Moon_MoonAnimator_ActiveAnimation___Fields {
    struct MoonAnimator_ActiveAnimation__Array *_array;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct Stack_1_Moon_MoonAnimator_ActiveAnimation_ {
    struct Stack_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
    MonitorData *monitor;
    struct Stack_1_Moon_MoonAnimator_ActiveAnimation___Fields fields;
};

struct Nullable_1_Single_ {
    float value;
    bool has_value;
};

struct Nullable_1_Single___Boxed {
    struct Nullable_1_Single___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Single_ fields;
};

struct __declspec(align(8)) MoonAnimator_ActiveAnimation__Fields {
    struct MoonAnimator *m_animator;
    struct IAnimation *m_animation;
    struct MoonAnimator_AnimationInstance *m_animationInstance;
    struct Action *m_onStoppedPlaying;
    struct Action *m_onStartedPlaying;
    struct Func_1_Boolean_ *m_continueCondition;
    bool m_startedPlaying;
    bool m_stopRequested;
    int32_t m_priority;
    float m_speed;
    float m_time;
    struct Nullable_1_Single_ m_crossfadeTimeOverride;
    bool m_isFinished;
    float m_weight;
    int32_t m_version;
    bool m_allocated;
};

struct MoonAnimator_ActiveAnimation {
    struct MoonAnimator_ActiveAnimation__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_ActiveAnimation__Fields fields;
};

struct MoonAnimator_ActiveAnimation__Array {
    struct MoonAnimator_ActiveAnimation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_ActiveAnimation *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_ActiveAnimation_ {
    struct IEnumerator_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_ActiveAnimation___Fields {
    struct MoonAnimator_ActiveAnimation__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_ActiveAnimation_ {
    struct List_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_ActiveAnimation___Fields fields;
};

struct MoonAnimator_Layer__Array {
    struct MoonAnimator_Layer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_Layer *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_Layer_ {
    struct IEnumerator_1_Moon_MoonAnimator_Layer___Class *klass;
    MonitorData *monitor;
};

struct Renderer__Array {
    struct Renderer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Renderer *vector[32];
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimatorPostprocessData___Fields {
    struct MoonAnimator_AnimatorPostprocessData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
    struct List_1_Moon_MoonAnimator_AnimatorPostprocessData___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_AnimatorPostprocessData___Fields fields;
};

struct MoonAnimator_AnimatorPostprocessData {
    struct IAnimatorPostprocessBase *Postprocess;
    struct Playable Playable;
    bool Removed;
    float BlendDuration;
    float Weight;
};

struct MoonAnimator_AnimatorPostprocessData__Boxed {
    struct MoonAnimator_AnimatorPostprocessData__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_AnimatorPostprocessData fields;
};

struct IAnimatorPostprocessBase {
    struct IAnimatorPostprocessBase__Class *klass;
    MonitorData *monitor;
};

struct MoonAnimator_AnimatorPostprocessData__Array {
    struct MoonAnimator_AnimatorPostprocessData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_AnimatorPostprocessData vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
    struct IEnumerator_1_Moon_MoonAnimator_AnimatorPostprocessData___Class *klass;
    MonitorData *monitor;
};

struct Nullable_1_Moon_MoonAnimatorLayerName_ {
    struct MoonAnimatorLayerName value;
    bool has_value;
};

struct Nullable_1_Moon_MoonAnimatorLayerName___Boxed {
    struct Nullable_1_Moon_MoonAnimatorLayerName___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_Moon_MoonAnimatorLayerName_ fields;
};

struct SuspendableMask__Enum__VTable {
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

struct SuspendableMask__Enum__StaticFields {
};

struct SuspendableMask__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SuspendableMask__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SuspendableMask__Enum__VTable vtable;
};

struct IAnimation__VTable {
    VirtualInvokeData get_Name;
    VirtualInvokeData get_Layer;
    VirtualInvokeData get_AnimatorDefinition;
    VirtualInvokeData get_DefaultTransitionInDuration;
    VirtualInvokeData get_UseDefaultTransitionIn;
    VirtualInvokeData get_DefaultTransitionIn;
    VirtualInvokeData get_LayerBlendInDuration;
    VirtualInvokeData get_LayerBlendOutDuration;
    VirtualInvokeData get_DisabledPostprocessGroups;
    VirtualInvokeData get_PostprocessGroupModifiers;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_AdditiveWeightMultiplier;
    VirtualInvokeData GetTransition;
    VirtualInvokeData IsLooping;
    VirtualInvokeData GetDuration;
};

struct IAnimation__StaticFields {
};

struct IAnimation__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IAnimation__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IAnimation__VTable vtable;
};

struct MoonAnimator_AnimationInstanceType__Enum__VTable {
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

struct MoonAnimator_AnimationInstanceType__Enum__StaticFields {
};

struct MoonAnimator_AnimationInstanceType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimator_AnimationInstanceType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimator_AnimationInstanceType__Enum__VTable vtable;
};

struct MoonAnimator_AnimationInstance__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsDone;
    VirtualInvokeData get_IsCrossFading;
    VirtualInvokeData __unknown;
    VirtualInvokeData get_MainAnimationInstance;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData __unknown_5;
    VirtualInvokeData __unknown_6;
    VirtualInvokeData __unknown_7;
    VirtualInvokeData __unknown_8;
    VirtualInvokeData __unknown_9;
    VirtualInvokeData __unknown_10;
    VirtualInvokeData FinishedPlaying;
    VirtualInvokeData OnCreated;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnPrepare;
    VirtualInvokeData OnRetrievedFromPool;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnRetunedToPool;
    VirtualInvokeData OnProcessEvents;
    VirtualInvokeData __unknown_11;
    VirtualInvokeData __unknown_12;
};

struct MoonAnimator_AnimationInstance__StaticFields {
};

struct MoonAnimator_AnimationInstance__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimator_AnimationInstance__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimator_AnimationInstance__VTable vtable;
};

struct MoonAnimatorLayerName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonAnimatorLayerName__StaticFields {
    struct MoonAnimatorLayerName Invalid;
};

struct MoonAnimatorLayerName__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimatorLayerName__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimatorLayerName__VTable vtable;
};

struct MoonAnimatorLayerBlendingMode__Enum__VTable {
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

struct MoonAnimatorLayerBlendingMode__Enum__StaticFields {
};

struct MoonAnimatorLayerBlendingMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimatorLayerBlendingMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimatorLayerBlendingMode__Enum__VTable vtable;
};

struct MoonAnimatorLayerDefinition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MoonAnimatorLayerDefinition__StaticFields {
};

struct MoonAnimatorLayerDefinition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimatorLayerDefinition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimatorLayerDefinition__VTable vtable;
};

struct MoonAnimatorLayerDefinition__Array__VTable {
};

struct MoonAnimatorLayerDefinition__Array__StaticFields {
};

struct MoonAnimatorLayerDefinition__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonAnimatorLayerDefinition__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonAnimatorLayerDefinition__Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___StaticFields {
};

struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___VTable vtable;
};

struct List_1_Moon_MoonAnimatorLayerDefinition___VTable {
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

}
