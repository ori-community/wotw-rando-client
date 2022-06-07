namespace app {
struct AnimationTransition {
    struct AnimationTransition__Class *klass;
    MonitorData *monitor;
    struct AnimationTransition__Fields fields;
};

struct AnimationTransition__Array {
    struct AnimationTransition__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationTransition *vector[32];
};

struct AnimationPostprocessGroup__Fields {
    struct ScriptableObject__Fields _;
    float SmoothTime;
};

struct AnimationPostprocessGroup {
    struct AnimationPostprocessGroup__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocessGroup__Fields fields;
};

struct AnimationPostprocessGroup__Array {
    struct AnimationPostprocessGroup__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationPostprocessGroup *vector[32];
};

struct __declspec(align(8)) AnimationPostprocessGroupModifier__Fields {
    struct AnimationPostprocessGroup *Group;
    bool Enable;
    float BlendInDuration;
    float BlendOutDuration;
};

struct AnimationPostprocessGroupModifier {
    struct AnimationPostprocessGroupModifier__Class *klass;
    MonitorData *monitor;
    struct AnimationPostprocessGroupModifier__Fields fields;
};

struct AnimationPostprocessGroupModifier__Array {
    struct AnimationPostprocessGroupModifier__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationPostprocessGroupModifier *vector[32];
};

enum class AnimationType__Enum : int32_t {
    Clip = 0x00000000,
    Blend = 0x00000001,
    DirectBlend = 0x00000002,
    Blend2D = 0x00000003,
    Crossfade = 0x00000004,
    Layered = 0x00000005,
};

struct AnimationType__Enum__Boxed {
    struct AnimationType__Enum__Class *klass;
    MonitorData *monitor;
    AnimationType__Enum value;
    
};

struct __declspec(align(8)) AnimationParameterSet__Fields {
    bool m_previewMode;
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *m_parameters;
    struct List_1_Moon_AnimationParameter_Instance_ *m_parametersList;
};

struct AnimationParameterSet {
    struct AnimationParameterSet__Class *klass;
    MonitorData *monitor;
    struct AnimationParameterSet__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_AnimationParameter_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    int32_t hashCode;
    int32_t next;
    struct AnimationParameter *key;
    struct AnimationParameter_Instance *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ fields;
};

struct AnimationParameter__Fields {
    struct ScriptableObject__Fields _;
    struct String *Name;
};

struct AnimationParameter {
    struct AnimationParameter__Class *klass;
    MonitorData *monitor;
    struct AnimationParameter__Fields fields;
};

struct AnimationParameter_Instance {
    struct AnimationParameter_Instance__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) FloatAnimationParameter_Instance__Fields {
    struct FloatAnimationParameter *m_parameter;
    float m_targetValue;
    float m_currentValue;
    bool m_previewMode;
    float m_currentVelocity;
};

struct FloatAnimationParameter_Instance {
    struct FloatAnimationParameter_Instance__Class *klass;
    MonitorData *monitor;
    struct FloatAnimationParameter_Instance__Fields fields;
};

struct FloatAnimationParameter__Fields {
    struct AnimationParameter__Fields _;
    float MinValue;
    float MaxValue;
    float DefaultValue;
    float SmoothTime;
    bool Angular;
};

struct FloatAnimationParameter {
    struct FloatAnimationParameter__Class *klass;
    MonitorData *monitor;
    struct FloatAnimationParameter__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ vector[32];
};

struct IEqualityComparer_1_Moon_AnimationParameter_ {
    struct IEqualityComparer_1_Moon_AnimationParameter___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};

struct AnimationParameter__Array {
    struct AnimationParameter__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationParameter *vector[32];
};

struct IEnumerator_1_Moon_AnimationParameter_ {
    struct IEnumerator_1_Moon_AnimationParameter___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
    struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};

struct AnimationParameter_Instance__Array {
    struct AnimationParameter_Instance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationParameter_Instance *vector[32];
};

struct IEnumerator_1_Moon_AnimationParameter_Instance_ {
    struct IEnumerator_1_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_AnimationParameter_ {
    struct ICollection_1_Moon_AnimationParameter___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_AnimationParameter_Instance_ {
    struct ICollection_1_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    struct AnimationParameter *key;
    struct AnimationParameter_Instance *value;
};

struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Boxed {
    struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ fields;
};

struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array {
    struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_AnimationParameter_ {
    struct IEnumerable_1_Moon_AnimationParameter___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_AnimationParameter_Instance_ {
    struct IEnumerable_1_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_AnimationParameter_Instance___Fields {
    struct AnimationParameter_Instance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_AnimationParameter_Instance_ {
    struct List_1_Moon_AnimationParameter_Instance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_AnimationParameter_Instance___Fields fields;
};

enum class BlendAnimationMode__Enum : int32_t {
    Smooth = 0x00000000,
    Nearest = 0x00000001,
};

struct BlendAnimationMode__Enum__Boxed {
    struct BlendAnimationMode__Enum__Class *klass;
    MonitorData *monitor;
    BlendAnimationMode__Enum value;
    
};

enum class BlendAnimationEventMode__Enum : int32_t {
    All = 0x00000000,
    HighestWeight = 0x00000001,
};

struct BlendAnimationEventMode__Enum__Boxed {
    struct BlendAnimationEventMode__Enum__Class *klass;
    MonitorData *monitor;
    BlendAnimationEventMode__Enum value;
    
};

struct BlendAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct FloatAnimationParameter *Parameter;
    struct BlendAnimation_Input__Array *Inputs;
    bool UseThreshold;
    float Threshold;
    BlendAnimationMode__Enum Mode;
    
    BlendAnimationEventMode__Enum AnimationEventMode;
    
    struct BlendAnimation_Input__Array *m_validInputs;
};

struct BlendAnimation {
    struct BlendAnimation__Class *klass;
    MonitorData *monitor;
    struct BlendAnimation__Fields fields;
};

struct __declspec(align(8)) BlendAnimation_Input__Fields {
    float Value;
    struct MoonAnimation *Animation;
    struct AnimationCurve *BlendCurve;
    bool UseBlendCurve;
};

struct BlendAnimation_Input {
    struct BlendAnimation_Input__Class *klass;
    MonitorData *monitor;
    struct BlendAnimation_Input__Fields fields;
};

struct BlendAnimation_Input__Array {
    struct BlendAnimation_Input__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BlendAnimation_Input *vector[32];
};

struct __declspec(align(8)) HashSet_1_Moon_MoonAnimation___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_Moon_MoonAnimation___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_Moon_MoonAnimation_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_Moon_MoonAnimation_ {
    struct HashSet_1_Moon_MoonAnimation___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_Moon_MoonAnimation___Fields fields;
};

struct HashSet_1_T_Slot_Moon_MoonAnimation_ {
    int32_t hashCode;
    int32_t next;
    struct MoonAnimation *value;
};

struct HashSet_1_T_Slot_Moon_MoonAnimation___Boxed {
    struct HashSet_1_T_Slot_Moon_MoonAnimation___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_Moon_MoonAnimation_ fields;
};

struct HashSet_1_T_Slot_Moon_MoonAnimation___Array {
    struct HashSet_1_T_Slot_Moon_MoonAnimation___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_Moon_MoonAnimation_ vector[32];
};

struct IEqualityComparer_1_Moon_MoonAnimation_ {
    struct IEqualityComparer_1_Moon_MoonAnimation___Class *klass;
    MonitorData *monitor;
};

struct MoonAnimation__Array {
    struct MoonAnimation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimation *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimation_ {
    struct IEnumerator_1_Moon_MoonAnimation___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_MoonAnimation_ {
    struct IEnumerable_1_Moon_MoonAnimation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) HashSet_1_UnityEngine_AnimationClip___Fields {
    struct Int32__Array *_buckets;
    struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array *_slots;
    int32_t _count;
    int32_t _lastIndex;
    int32_t _freeList;
    struct IEqualityComparer_1_UnityEngine_AnimationClip_ *_comparer;
    int32_t _version;
    struct SerializationInfo *_siInfo;
};

struct HashSet_1_UnityEngine_AnimationClip_ {
    struct HashSet_1_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_UnityEngine_AnimationClip___Fields fields;
};

struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ {
    int32_t hashCode;
    int32_t next;
    struct AnimationClip *value;
};

struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Boxed {
    struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
    struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ fields;
};

struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array {
    struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ vector[32];
};

struct IEqualityComparer_1_UnityEngine_AnimationClip_ {
    struct IEqualityComparer_1_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
};

struct AnimationClip__Array {
    struct AnimationClip__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AnimationClip *vector[32];
};

struct IEnumerator_1_UnityEngine_AnimationClip_ {
    struct IEnumerator_1_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UnityEngine_AnimationClip_ {
    struct IEnumerable_1_UnityEngine_AnimationClip___Class *klass;
    MonitorData *monitor;
};

struct MoonAnimation_RootMotionSample {
    struct Vector3 Position;
    struct Quaternion Rotation;
};

struct MoonAnimation_RootMotionSample__Boxed {
    struct MoonAnimation_RootMotionSample__Class *klass;
    MonitorData *monitor;
    struct MoonAnimation_RootMotionSample fields;
};

struct __declspec(align(8)) ClipAnimation_EventMetadata__Fields {
    struct MoonAnimationEvent *Event;
    struct String *Type;
    float Time;
};

struct ClipAnimation_EventMetadata {
    struct ClipAnimation_EventMetadata__Class *klass;
    MonitorData *monitor;
    struct ClipAnimation_EventMetadata__Fields fields;
};

struct MoonAnimationEvent__Fields {
    struct ScriptableObject__Fields _;
};

struct MoonAnimationEvent {
    struct MoonAnimationEvent__Class *klass;
    MonitorData *monitor;
    struct MoonAnimationEvent__Fields fields;
};

struct ClipAnimation_EventMetadata__Array {
    struct ClipAnimation_EventMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ClipAnimation_EventMetadata *vector[32];
};

struct __declspec(align(8)) ClipAnimation_RootMotionData__Fields {
    struct AnimationCurve *XCurve;
    struct AnimationCurve *YCurve;
    struct AnimationCurve *ZCurve;
    struct AnimationCurve *WCurve;
    bool _IsDirty_k__BackingField;
};

struct ClipAnimation_RootMotionData {
    struct ClipAnimation_RootMotionData__Class *klass;
    MonitorData *monitor;
    struct ClipAnimation_RootMotionData__Fields fields;
};

struct MoonAnimator_ClipInstance__Array {
    struct MoonAnimator_ClipInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_ClipInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_ClipInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_ClipInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_BlendInstance___Fields {
    struct MoonAnimator_BlendInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_BlendInstance_ {
    struct List_1_Moon_MoonAnimator_BlendInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_BlendInstance___Fields fields;
};

struct MoonAnimator_BlendInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct BlendAnimation *m_blendAnimation;
    struct AnimationMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance__Array *m_inputInstances;
    float m_currentBlendWeight;
    int32_t m_currentBlendNodeIndex;
    struct BlendAnimation_Input__Array *m_validInputs;
};

struct MoonAnimator_BlendInstance {
    struct MoonAnimator_BlendInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_BlendInstance__Fields fields;
};

struct MoonAnimator_AnimationInstance__Array {
    struct MoonAnimator_AnimationInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_AnimationInstance *vector[32];
};

struct MoonAnimator_BlendInstance__Array {
    struct MoonAnimator_BlendInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_BlendInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_BlendInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_BlendInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_LayeredInstance___Fields {
    struct MoonAnimator_LayeredInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_LayeredInstance_ {
    struct List_1_Moon_MoonAnimator_LayeredInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_LayeredInstance___Fields fields;
};

struct MoonAnimator_LayeredInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct LayeredAnimation *m_layeredAnimation;
    struct AnimationLayerMixerPlayable m_layerMixerPlayable;
    struct MoonAnimator_AnimationInstance__Array *m_inputInstances;
    struct LayeredAnimation_Input__Array *m_validInputs;
};

struct MoonAnimator_LayeredInstance {
    struct MoonAnimator_LayeredInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_LayeredInstance__Fields fields;
};

struct LayeredAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct LayeredAnimation_Input__Array *Inputs;
    struct LayeredAnimation_Input__Array *m_validInputs;
};

struct LayeredAnimation {
    struct LayeredAnimation__Class *klass;
    MonitorData *monitor;
    struct LayeredAnimation__Fields fields;
};

struct __declspec(align(8)) LayeredAnimation_Input__Fields {
    struct MoonAnimation *Animation;
    MoonAnimatorLayerBlendingMode__Enum BlendMode;
    
    struct AvatarMask *Mask_1;
};

struct LayeredAnimation_Input {
    struct LayeredAnimation_Input__Class *klass;
    MonitorData *monitor;
    struct LayeredAnimation_Input__Fields fields;
};

struct LayeredAnimation_Input__Array {
    struct LayeredAnimation_Input__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LayeredAnimation_Input *vector[32];
};

struct MoonAnimator_LayeredInstance__Array {
    struct MoonAnimator_LayeredInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_LayeredInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_LayeredInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_LayeredInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_Blend2DInstance___Fields {
    struct MoonAnimator_Blend2DInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_Blend2DInstance_ {
    struct List_1_Moon_MoonAnimator_Blend2DInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_Blend2DInstance___Fields fields;
};

struct MoonAnimator_Blend2DInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct BlendAnimation2D *m_blendAnimation;
    struct AnimationMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance__Array *m_inputInstances;
    struct Int32__Array *m_currentBlendNodeIndices;
    struct Single__Array *m_currentBlendWeights;
    int32_t m_activeBlendNodesCount;
    struct BlendAnimation2D_Input__Array *m_validInputs;
};

struct MoonAnimator_Blend2DInstance {
    struct MoonAnimator_Blend2DInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_Blend2DInstance__Fields fields;
};

struct BlendAnimation2D__Fields {
    struct MoonAnimation__Fields _;
    struct FloatAnimationParameter *m_parameterX;
    struct FloatAnimationParameter *m_parameterY;
    struct Action_1_Moon_BlendAnimation2D_ *OnUpdated;
    struct Blend2DTriangulationState *m_triangulationState;
    struct Vector2 m_currentInput;
    struct Vector2 m_currentParameterVector;
    struct Single__Array *m_currentBlendWeight;
    struct Int32__Array *m_currentBlendNodeIndex;
    int32_t m_activeBlendNodesCount;
    struct BlendAnimation2D_InputContainer__Array *GridInputs;
    struct BlendAnimation2D_Input__Array *Inputs;
    bool UseThreshold;
    float Threshold;
    BlendAnimationMode__Enum Mode;
    
    BlendAnimationEventMode__Enum AnimationEventMode;
    
    int32_t m_validInputCount;
    struct BlendAnimation2D_Input__Array *m_validInputs;
    int32_t m_gridNumX;
    int32_t m_gridNumY;
    struct Vector2 m_blendPoint1;
    struct Vector2 m_blendPoint2;
    struct Vector3 m_currentParameter;
    struct Vector3 m_baricentricPoint1;
    struct Vector3 m_baricentricPoint2;
    struct Vector3 m_baricentricPoint3;
    struct Vector3 m_baricentricNumerator;
    struct Vector3 m_baricentricDenumerator;
};

struct BlendAnimation2D {
    struct BlendAnimation2D__Class *klass;
    MonitorData *monitor;
    struct BlendAnimation2D__Fields fields;
};

struct Action_1_Moon_BlendAnimation2D___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_Moon_BlendAnimation2D_ {
    struct Action_1_Moon_BlendAnimation2D___Class *klass;
    MonitorData *monitor;
    struct Action_1_Moon_BlendAnimation2D___Fields fields;
};

struct __declspec(align(8)) Blend2DTriangulationState__Fields {
    struct Blend2DTriangleState__Array *Triangles;
};

struct Blend2DTriangulationState {
    struct Blend2DTriangulationState__Class *klass;
    MonitorData *monitor;
    struct Blend2DTriangulationState__Fields fields;
};

struct __declspec(align(8)) Blend2DTriangleState__Fields {
    int32_t Hash;
    int32_t Id;
    struct Blend2DVertexState__Array *Vertices;
    struct Blend2DSegmentState__Array *Segments;
    int32_t Label;
    double Area;
};

struct Blend2DTriangleState {
    struct Blend2DTriangleState__Class *klass;
    MonitorData *monitor;
    struct Blend2DTriangleState__Fields fields;
};

struct __declspec(align(8)) Blend2DVertexState__Fields {
    int32_t Hash;
    int32_t Id;
    int32_t Label;
    float X;
    float Y;
    int32_t InputIndex;
    VertexType__Enum Type;
    
};

struct Blend2DVertexState {
    struct Blend2DVertexState__Class *klass;
    MonitorData *monitor;
    struct Blend2DVertexState__Fields fields;
};

struct Blend2DVertexState__Array {
    struct Blend2DVertexState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Blend2DVertexState *vector[32];
};

struct __declspec(align(8)) Blend2DSegmentState__Fields {
    int32_t Hash;
    struct Blend2DVertexState__Array *Vertices;
};

struct Blend2DSegmentState {
    struct Blend2DSegmentState__Class *klass;
    MonitorData *monitor;
    struct Blend2DSegmentState__Fields fields;
};

struct Blend2DSegmentState__Array {
    struct Blend2DSegmentState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Blend2DSegmentState *vector[32];
};

struct Blend2DTriangleState__Array {
    struct Blend2DTriangleState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Blend2DTriangleState *vector[32];
};

struct __declspec(align(8)) BlendAnimation2D_InputContainer__Fields {
    struct BlendAnimation2D_Input *Input;
    struct Vector2 GridIndex;
    struct Vector2 Value;
};

struct BlendAnimation2D_InputContainer {
    struct BlendAnimation2D_InputContainer__Class *klass;
    MonitorData *monitor;
    struct BlendAnimation2D_InputContainer__Fields fields;
};

struct __declspec(align(8)) BlendAnimation2D_Input__Fields {
    struct Vector2 Value;
    int32_t GridIndex;
    struct MoonAnimation *Animation;
};

struct BlendAnimation2D_Input {
    struct BlendAnimation2D_Input__Class *klass;
    MonitorData *monitor;
    struct BlendAnimation2D_Input__Fields fields;
};

struct BlendAnimation2D_InputContainer__Array {
    struct BlendAnimation2D_InputContainer__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BlendAnimation2D_InputContainer *vector[32];
};

struct BlendAnimation2D_Input__Array {
    struct BlendAnimation2D_Input__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct BlendAnimation2D_Input *vector[32];
};

struct MoonAnimator_Blend2DInstance__Array {
    struct MoonAnimator_Blend2DInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_Blend2DInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_Blend2DInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_Blend2DInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_DirectBlendInstance___Fields {
    struct MoonAnimator_DirectBlendInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_DirectBlendInstance_ {
    struct List_1_Moon_MoonAnimator_DirectBlendInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_DirectBlendInstance___Fields fields;
};

struct MoonAnimator_DirectBlendInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct DirectBlendAnimation *m_blendAnimation;
    struct AnimationLayerMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance__Array *m_inputInstances;
    int32_t m_validInputCount;
};

struct MoonAnimator_DirectBlendInstance {
    struct MoonAnimator_DirectBlendInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_DirectBlendInstance__Fields fields;
};

struct DirectBlendAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct DirectBlendAnimation_Input__Array *Inputs;
    float Speed;
    bool SynchronizeTime;
};

struct DirectBlendAnimation {
    struct DirectBlendAnimation__Class *klass;
    MonitorData *monitor;
    struct DirectBlendAnimation__Fields fields;
};

struct __declspec(align(8)) DirectBlendAnimation_Input__Fields {
    struct FloatAnimationParameter *Parameter;
    float FixedWeight;
    struct MoonAnimation *Animation;
    bool Additive;
    struct AvatarMask *Mask_1;
};

struct DirectBlendAnimation_Input {
    struct DirectBlendAnimation_Input__Class *klass;
    MonitorData *monitor;
    struct DirectBlendAnimation_Input__Fields fields;
};

struct DirectBlendAnimation_Input__Array {
    struct DirectBlendAnimation_Input__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct DirectBlendAnimation_Input *vector[32];
};

struct MoonAnimator_DirectBlendInstance__Array {
    struct MoonAnimator_DirectBlendInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_DirectBlendInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_DirectBlendInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_DirectBlendInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Fields {
    struct MoonAnimator_SimpleCrossfadeInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_ {
    struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Fields fields;
};

struct MoonAnimator_SimpleCrossfadeInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct AnimationMixerPlayable m_mixerPlayable;
    struct MoonAnimator_AnimationInstance *m_source;
    struct MoonAnimator_AnimationInstance *m_target;
    float m_currentTime;
    float m_crossfadeDuration;
};

struct MoonAnimator_SimpleCrossfadeInstance {
    struct MoonAnimator_SimpleCrossfadeInstance__Class *klass;
    MonitorData *monitor;
    struct MoonAnimator_SimpleCrossfadeInstance__Fields fields;
};

struct MoonAnimator_SimpleCrossfadeInstance__Array {
    struct MoonAnimator_SimpleCrossfadeInstance__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonAnimator_SimpleCrossfadeInstance *vector[32];
};

struct IEnumerator_1_Moon_MoonAnimator_SimpleCrossfadeInstance_ {
    struct IEnumerator_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Fields {
    struct MoonAnimator_AnimatedCrossfadeInstance__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_ {
    struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Fields fields;
};

enum class MoonAnimator_AnimatedCrossfadeInstance_State__Enum : int32_t {
    Source = 0x00000000,
    SourceToTransition = 0x00000001,
    Transition = 0x00000002,
    TransitionToTarget = 0x00000003,
    Target = 0x00000004,
};

struct MoonAnimator_AnimatedCrossfadeInstance_State__Enum__Boxed {
    struct MoonAnimator_AnimatedCrossfadeInstance_State__Enum__Class *klass;
    MonitorData *monitor;
    MoonAnimator_AnimatedCrossfadeInstance_State__Enum value;
    
};

}
