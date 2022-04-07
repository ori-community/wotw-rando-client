namespace app {
struct LayeredAnimation__Fields {
  struct MoonAnimation__Fields _;
  struct LayeredAnimation_Input__Array * Inputs;
  struct LayeredAnimation_Input__Array * m_validInputs;
};
struct LayeredAnimation {
  struct LayeredAnimation__Class *klass;
  struct MonitorData *monitor;
  struct LayeredAnimation__Fields fields;
};
struct __declspec(align(8)) LayeredAnimation_Input__Fields {
  struct MoonAnimation * Animation;
  enum MoonAnimatorLayerBlendingMode__Enum BlendMode;
  struct AvatarMask * Mask;
};
struct LayeredAnimation_Input {
  struct LayeredAnimation_Input__Class *klass;
  struct MonitorData *monitor;
  struct LayeredAnimation_Input__Fields fields;
};
struct LayeredAnimation_Input__Array {
  struct LayeredAnimation_Input__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LayeredAnimation_Input * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_LayeredInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_LayeredInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_Blend2DInstance___Fields {
  struct MoonAnimator_Blend2DInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_Blend2DInstance_ {
  struct List_1_Moon_MoonAnimator_Blend2DInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_Blend2DInstance___Fields fields;
};
struct MoonAnimator_Blend2DInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct BlendAnimation2D * m_blendAnimation;
  struct AnimationMixerPlayable m_mixerPlayable;
  struct MoonAnimator_AnimationInstance__Array * m_inputInstances;
  struct Int32__Array * m_currentBlendNodeIndices;
  struct Single__Array * m_currentBlendWeights;
  int32_t m_activeBlendNodesCount;
  struct BlendAnimation2D_Input__Array * m_validInputs;
};
struct MoonAnimator_Blend2DInstance {
  struct MoonAnimator_Blend2DInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_Blend2DInstance__Fields fields;
};
struct MoonAnimator_Blend2DInstance__Array {
  struct MoonAnimator_Blend2DInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_Blend2DInstance * vector[32];
};
struct BlendAnimation2D__Fields {
  struct MoonAnimation__Fields _;
  struct FloatAnimationParameter * m_parameterX;
  struct FloatAnimationParameter * m_parameterY;
  struct Action_1_Moon_BlendAnimation2D_ * OnUpdated;
  struct Blend2DTriangulationState * m_triangulationState;
  struct Vector2 m_currentInput;
  struct Vector2 m_currentParameterVector;
  struct Single__Array * m_currentBlendWeight;
  struct Int32__Array * m_currentBlendNodeIndex;
  int32_t m_activeBlendNodesCount;
  struct BlendAnimation2D_InputContainer__Array * GridInputs;
  struct BlendAnimation2D_Input__Array * Inputs;
  bool UseThreshold;
  float Threshold;
  enum BlendAnimationMode__Enum Mode;
  enum BlendAnimationEventMode__Enum AnimationEventMode;
  int32_t m_validInputCount;
  struct BlendAnimation2D_Input__Array * m_validInputs;
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
  struct MonitorData *monitor;
  struct BlendAnimation2D__Fields fields;
};
struct Action_1_Moon_BlendAnimation2D___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_BlendAnimation2D_ {
  struct Action_1_Moon_BlendAnimation2D___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_BlendAnimation2D___Fields fields;
};
struct __declspec(align(8)) Blend2DTriangulationState__Fields {
  struct Blend2DTriangleState__Array * Triangles;
};
struct Blend2DTriangulationState {
  struct Blend2DTriangulationState__Class *klass;
  struct MonitorData *monitor;
  struct Blend2DTriangulationState__Fields fields;
};
struct __declspec(align(8)) Blend2DTriangleState__Fields {
  int32_t Hash;
  int32_t Id;
  struct Blend2DVertexState__Array * Vertices;
  struct Blend2DSegmentState__Array * Segments;
  int32_t Label;
  double Area;
};
struct Blend2DTriangleState {
  struct Blend2DTriangleState__Class *klass;
  struct MonitorData *monitor;
  struct Blend2DTriangleState__Fields fields;
};
struct Blend2DTriangleState__Array {
  struct Blend2DTriangleState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Blend2DTriangleState * vector[32];
};
struct __declspec(align(8)) Blend2DVertexState__Fields {
  int32_t Hash;
  int32_t Id;
  int32_t Label;
  float X;
  float Y;
  int32_t InputIndex;
  enum VertexType__Enum Type;
};
struct Blend2DVertexState {
  struct Blend2DVertexState__Class *klass;
  struct MonitorData *monitor;
  struct Blend2DVertexState__Fields fields;
};
struct Blend2DVertexState__Array {
  struct Blend2DVertexState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Blend2DVertexState * vector[32];
};
struct __declspec(align(8)) Blend2DSegmentState__Fields {
  int32_t Hash;
  struct Blend2DVertexState__Array * Vertices;
};
struct Blend2DSegmentState {
  struct Blend2DSegmentState__Class *klass;
  struct MonitorData *monitor;
  struct Blend2DSegmentState__Fields fields;
};
struct Blend2DSegmentState__Array {
  struct Blend2DSegmentState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Blend2DSegmentState * vector[32];
};
struct __declspec(align(8)) BlendAnimation2D_InputContainer__Fields {
  struct BlendAnimation2D_Input * Input;
  struct Vector2 GridIndex;
  struct Vector2 Value;
};
struct BlendAnimation2D_InputContainer {
  struct BlendAnimation2D_InputContainer__Class *klass;
  struct MonitorData *monitor;
  struct BlendAnimation2D_InputContainer__Fields fields;
};
struct BlendAnimation2D_InputContainer__Array {
  struct BlendAnimation2D_InputContainer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BlendAnimation2D_InputContainer * vector[32];
};
struct __declspec(align(8)) BlendAnimation2D_Input__Fields {
  struct Vector2 Value;
  int32_t GridIndex;
  struct MoonAnimation * Animation;
};
struct BlendAnimation2D_Input {
  struct BlendAnimation2D_Input__Class *klass;
  struct MonitorData *monitor;
  struct BlendAnimation2D_Input__Fields fields;
};
struct BlendAnimation2D_Input__Array {
  struct BlendAnimation2D_Input__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BlendAnimation2D_Input * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_Blend2DInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_Blend2DInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_DirectBlendInstance___Fields {
  struct MoonAnimator_DirectBlendInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_DirectBlendInstance_ {
  struct List_1_Moon_MoonAnimator_DirectBlendInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_DirectBlendInstance___Fields fields;
};
struct MoonAnimator_DirectBlendInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct DirectBlendAnimation * m_blendAnimation;
  struct AnimationLayerMixerPlayable m_mixerPlayable;
  struct MoonAnimator_AnimationInstance__Array * m_inputInstances;
  int32_t m_validInputCount;
};
struct MoonAnimator_DirectBlendInstance {
  struct MoonAnimator_DirectBlendInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_DirectBlendInstance__Fields fields;
};
struct MoonAnimator_DirectBlendInstance__Array {
  struct MoonAnimator_DirectBlendInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_DirectBlendInstance * vector[32];
};
struct DirectBlendAnimation__Fields {
  struct MoonAnimation__Fields _;
  struct DirectBlendAnimation_Input__Array * Inputs;
  float Speed;
  bool SynchronizeTime;
};
struct DirectBlendAnimation {
  struct DirectBlendAnimation__Class *klass;
  struct MonitorData *monitor;
  struct DirectBlendAnimation__Fields fields;
};
struct __declspec(align(8)) DirectBlendAnimation_Input__Fields {
  struct FloatAnimationParameter * Parameter;
  float FixedWeight;
  struct MoonAnimation * Animation;
  bool Additive;
  struct AvatarMask * Mask;
};
struct DirectBlendAnimation_Input {
  struct DirectBlendAnimation_Input__Class *klass;
  struct MonitorData *monitor;
  struct DirectBlendAnimation_Input__Fields fields;
};
struct DirectBlendAnimation_Input__Array {
  struct DirectBlendAnimation_Input__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DirectBlendAnimation_Input * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_DirectBlendInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_DirectBlendInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Fields {
  struct MoonAnimator_SimpleCrossfadeInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_ {
  struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Fields fields;
};
struct MoonAnimator_SimpleCrossfadeInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct AnimationMixerPlayable m_mixerPlayable;
  struct MoonAnimator_AnimationInstance * m_source;
  struct MoonAnimator_AnimationInstance * m_target;
  float m_currentTime;
  float m_crossfadeDuration;
};
struct MoonAnimator_SimpleCrossfadeInstance {
  struct MoonAnimator_SimpleCrossfadeInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_SimpleCrossfadeInstance__Fields fields;
};
struct MoonAnimator_SimpleCrossfadeInstance__Array {
  struct MoonAnimator_SimpleCrossfadeInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_SimpleCrossfadeInstance * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_SimpleCrossfadeInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_SimpleCrossfadeInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Fields {
  struct MoonAnimator_AnimatedCrossfadeInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_ {
  struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Fields fields;
};
enum MoonAnimator_AnimatedCrossfadeInstance_State__Enum : int32_t {
  MoonAnimator_AnimatedCrossfadeInstance_State__Enum_Source = 0,
  MoonAnimator_AnimatedCrossfadeInstance_State__Enum_SourceToTransition = 1,
  MoonAnimator_AnimatedCrossfadeInstance_State__Enum_Transition = 2,
  MoonAnimator_AnimatedCrossfadeInstance_State__Enum_TransitionToTarget = 3,
  MoonAnimator_AnimatedCrossfadeInstance_State__Enum_Target = 4,
};
struct MoonAnimator_AnimatedCrossfadeInstance_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonAnimator_AnimatedCrossfadeInstance_State__Enum value;
};
struct MoonAnimator_AnimatedCrossfadeInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct Playable m_mixerPlayable;
  struct MoonAnimator_AnimationInstance * m_source;
  struct MoonAnimator_AnimationInstance * m_target;
  struct MoonAnimator_AnimationInstance * m_transition;
  enum MoonAnimator_AnimatedCrossfadeInstance_State__Enum m_currentState;
  float m_currentStateTime;
  float m_sourceAnimationTransitionTime;
  float m_durationIn;
  float m_durationOut;
  float m_targetNormalizedTime;
};
struct MoonAnimator_AnimatedCrossfadeInstance {
  struct MoonAnimator_AnimatedCrossfadeInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_AnimatedCrossfadeInstance__Fields fields;
};
struct MoonAnimator_AnimatedCrossfadeInstance__Array {
  struct MoonAnimator_AnimatedCrossfadeInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_AnimatedCrossfadeInstance * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_AnimatedCrossfadeInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator___Fields {
  struct MoonAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_ {
  struct List_1_Moon_MoonAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator___Fields fields;
};
struct MoonAnimator__Array {
  struct MoonAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_ {
  struct IEnumerator_1_Moon_MoonAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_PreviewAnimation___Fields {
  struct MoonAnimator_PreviewAnimation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_PreviewAnimation_ {
  struct List_1_Moon_MoonAnimator_PreviewAnimation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_PreviewAnimation___Fields fields;
};
struct __declspec(align(8)) MoonAnimator_PreviewAnimation__Fields {
  float StartTime;
  float EndTime;
  int32_t Priority;
  float Speed;
  struct MoonAnimation * Animation;
  int32_t Id;
  float Weight;
};
struct MoonAnimator_PreviewAnimation {
  struct MoonAnimator_PreviewAnimation__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_PreviewAnimation__Fields fields;
};
struct MoonAnimator_PreviewAnimation__Array {
  struct MoonAnimator_PreviewAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_PreviewAnimation * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_PreviewAnimation_ {
  struct IEnumerator_1_Moon_MoonAnimator_PreviewAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_TransformData___Fields {
  struct MoonAnimator_TransformData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_TransformData_ {
  struct List_1_Moon_MoonAnimator_TransformData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_TransformData___Fields fields;
};
struct MoonAnimator_TransformData {
  bool IsJoint;
  struct Transform * Transform;
  struct Vector3 Postion;
  struct Quaternion Rotation;
  struct Vector3 Scale;
  struct String * DebugName;
};
struct MoonAnimator_TransformData__Boxed {
  struct MoonAnimator_TransformData__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_TransformData fields;
};
struct MoonAnimator_TransformData__Array {
  struct MoonAnimator_TransformData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_TransformData vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_TransformData_ {
  struct IEnumerator_1_Moon_MoonAnimator_TransformData___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Vector3_ {
  struct Action_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Vector3___Fields fields;
};
struct Action_1_UnityEngine_Quaternion___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Quaternion_ {
  struct Action_1_UnityEngine_Quaternion___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Quaternion___Fields fields;
};
struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ {
  struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean___Fields fields;
};
struct ActiveAnimationHandle {
  int32_t m_version;
  struct IActiveAnimation * m_activeAnimation;
};
struct ActiveAnimationHandle__Boxed {
  struct ActiveAnimationHandle__Class *klass;
  struct MonitorData *monitor;
  struct ActiveAnimationHandle fields;
};
struct IActiveAnimation {
  struct IActiveAnimation__Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ {
  struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle___Fields fields;
};
struct Action_2_Moon_FloatAnimationParameter_Single___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Moon_FloatAnimationParameter_Single_ {
  struct Action_2_Moon_FloatAnimationParameter_Single___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Moon_FloatAnimationParameter_Single___Fields fields;
};
struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_ {
  struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3___Fields fields;
};
struct VectorAnimationParameter__Fields {
  struct AnimationParameter__Fields _;
  struct Vector3 DefaultValue;
  float SmoothTime;
};
struct VectorAnimationParameter {
  struct VectorAnimationParameter__Class *klass;
  struct MonitorData *monitor;
  struct VectorAnimationParameter__Fields fields;
};
struct Action_1_Moon_ClipAnimation_EventMetadata___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_ClipAnimation_EventMetadata_ {
  struct Action_1_Moon_ClipAnimation_EventMetadata___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_ClipAnimation_EventMetadata___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Fields {
  struct MoonAnimator_AnimationPostprocessMetadata__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_ {
  struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Fields fields;
};
enum MoonAnimator_AnimationPostprocessState__Enum : int32_t {
  MoonAnimator_AnimationPostprocessState__Enum_Inactive = 0,
  MoonAnimator_AnimationPostprocessState__Enum_BlendingIn = 1,
  MoonAnimator_AnimationPostprocessState__Enum_Active = 2,
  MoonAnimator_AnimationPostprocessState__Enum_BlendingOut = 3,
};
struct MoonAnimator_AnimationPostprocessState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonAnimator_AnimationPostprocessState__Enum value;
};
struct __declspec(align(8)) MoonAnimator_AnimationPostprocessMetadata__Fields {
  struct AnimationPostprocess * Animation;
  enum MoonAnimator_AnimationPostprocessState__Enum State;
  float CurrentBlendTime;
  float BlendDuration;
  float OriginalWeight;
  bool IsProcessingActive;
};
struct MoonAnimator_AnimationPostprocessMetadata {
  struct MoonAnimator_AnimationPostprocessMetadata__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_AnimationPostprocessMetadata__Fields fields;
};
struct MoonAnimator_AnimationPostprocessMetadata__Array {
  struct MoonAnimator_AnimationPostprocessMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_AnimationPostprocessMetadata * vector[32];
};
struct AnimationPostprocess__Fields {
  struct MonoBehaviour__Fields _;
  float Weight;
  struct FloatAnimationParameter * WeightParameter;
  struct GameObject * AutoAddTarget;
  struct MoonAnimator * TargetAnimator;
  struct AnimationPostprocessGroup * Group;
  struct AnimationPostprocessGroup * SubGroup;
  struct MoonAnimator * m_moonAnimator;
  bool m_registeredToMoonDriver;
};
struct AnimationPostprocess {
  struct AnimationPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct AnimationPostprocess__Fields fields;
};
enum UpdateType__Enum : int32_t {
  UpdateType__Enum_Default = -1,
  UpdateType__Enum_Update = 0,
  UpdateType__Enum_LateUpdate = 1,
  UpdateType__Enum_FixedUpdate = 2,
  UpdateType__Enum_COUNT = 3,
};
struct UpdateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UpdateType__Enum value;
};
struct BlendAnimationPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  struct MoonAnimation * Animation;
  struct AnimationMaskNode * Mask;
  int32_t OrderNumber;
  bool AutoRemoveOnFinish;
  bool BlendInOut;
  float BlendInNormalizedDuration;
  float BlendOutNormalizedDuration;
  struct GameObject * m_animatedObjectCopy;
  struct ActiveAnimationHandle m_activeAnimation;
};
struct BlendAnimationPostprocess {
  struct BlendAnimationPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct BlendAnimationPostprocess__Fields fields;
};
struct AnimationMaskNode__Fields {
  struct MonoBehaviour__Fields _;
  bool Included;
  float Weight;
};
struct AnimationMaskNode {
  struct AnimationMaskNode__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMaskNode__Fields fields;
};
struct IEnumerator_1_Moon_MoonAnimator_AnimationPostprocessMetadata_ {
  struct IEnumerator_1_Moon_MoonAnimator_AnimationPostprocessMetadata___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) AnimationPostprocessGroupManager__Fields {
  struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ * m_groupStates;
  struct List_1_Moon_AnimationPostprocessGroupManager_GroupState_ * m_groupList;
};
struct AnimationPostprocessGroupManager {
  struct AnimationPostprocessGroupManager__Class *klass;
  struct MonitorData *monitor;
  struct AnimationPostprocessGroupManager__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_AnimationPostprocessGroup_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  int32_t hashCode;
  int32_t next;
  struct AnimationPostprocessGroup * key;
  struct AnimationPostprocessGroupManager_GroupState * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ vector[32];
};
struct __declspec(align(8)) AnimationPostprocessGroupManager_GroupState__Fields {
  struct AnimationPostprocessGroup * m_group;
  int32_t m_disableCounter;
  float m_currentWeight;
  float m_velocity;
  float m_currentSmoothTime;
};
struct AnimationPostprocessGroupManager_GroupState {
  struct AnimationPostprocessGroupManager_GroupState__Class *klass;
  struct MonitorData *monitor;
  struct AnimationPostprocessGroupManager_GroupState__Fields fields;
};
struct IEqualityComparer_1_Moon_AnimationPostprocessGroup_ {
  struct IEqualityComparer_1_Moon_AnimationPostprocessGroup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
  struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};
struct IEnumerator_1_Moon_AnimationPostprocessGroup_ {
  struct IEnumerator_1_Moon_AnimationPostprocessGroup___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
  struct Dictionary_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};
struct AnimationPostprocessGroupManager_GroupState__Array {
  struct AnimationPostprocessGroupManager_GroupState__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationPostprocessGroupManager_GroupState * vector[32];
};
struct IEnumerator_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct IEnumerator_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_AnimationPostprocessGroup_ {
  struct ICollection_1_Moon_AnimationPostprocessGroup___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct ICollection_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct AnimationPostprocessGroup * key;
  struct AnimationPostprocessGroupManager_GroupState * value;
};
struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Boxed {
  struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ fields;
};
struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array {
  struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_AnimationPostprocessGroup_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_AnimationPostprocessGroup_ {
  struct IEnumerable_1_Moon_AnimationPostprocessGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct IEnumerable_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_AnimationPostprocessGroupManager_GroupState___Fields {
  struct AnimationPostprocessGroupManager_GroupState__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_AnimationPostprocessGroupManager_GroupState_ {
  struct List_1_Moon_AnimationPostprocessGroupManager_GroupState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_AnimationPostprocessGroupManager_GroupState___Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_Layer___Fields {
  struct MoonAnimator_Layer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_Layer_ {
  struct List_1_Moon_MoonAnimator_Layer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_Layer___Fields fields;
};
struct __declspec(align(8)) MoonAnimator_Layer__Fields {
  struct MoonAnimator_AnimationInstance * m_transitionTargetAnimationInstance;
  struct MoonAnimator_AnimationInstance * m_currentAnimationInstance;
  struct IAnimation * m_transitionTargetAnimation;
  struct IAnimation * m_currentAnimation;
  struct MoonAnimator_ActiveAnimation * m_currentActiveAnimation;
  struct List_1_Moon_MoonAnimator_ActiveAnimation_ * m_activeAnimations;
  struct List_1_Moon_MoonAnimator_ActiveAnimation_ * m_animationsToStop;
  struct MoonAnimator * m_animator;
  struct MoonAnimatorLayerDefinition m_definition;
  float m_weight;
  float m_blendDuration;
};
struct MoonAnimator_Layer {
  struct MoonAnimator_Layer__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_Layer__Fields fields;
};
struct MoonAnimator_Layer__Array {
  struct MoonAnimator_Layer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_Layer * vector[32];
};
struct __declspec(align(8)) Stack_1_Moon_MoonAnimator_ActiveAnimation___Fields {
  struct MoonAnimator_ActiveAnimation__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_Moon_MoonAnimator_ActiveAnimation_ {
  struct Stack_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_Moon_MoonAnimator_ActiveAnimation___Fields fields;
};
struct Nullable_1_Single_ {
  float value;
  bool has_value;
};
struct Nullable_1_Single___Boxed {
  struct Nullable_1_Single___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Single_ fields;
};
struct __declspec(align(8)) MoonAnimator_ActiveAnimation__Fields {
  struct MoonAnimator * m_animator;
  struct IAnimation * m_animation;
  struct MoonAnimator_AnimationInstance * m_animationInstance;
  struct Action * m_onStoppedPlaying;
  struct Action * m_onStartedPlaying;
  struct Func_1_Boolean_ * m_continueCondition;
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
  struct MonitorData *monitor;
  struct MoonAnimator_ActiveAnimation__Fields fields;
};
struct MoonAnimator_ActiveAnimation__Array {
  struct MoonAnimator_ActiveAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_ActiveAnimation * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_ActiveAnimation_ {
  struct IEnumerator_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_ActiveAnimation___Fields {
  struct MoonAnimator_ActiveAnimation__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_ActiveAnimation_ {
  struct List_1_Moon_MoonAnimator_ActiveAnimation___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_ActiveAnimation___Fields fields;
};
struct IEnumerator_1_Moon_MoonAnimator_Layer_ {
  struct IEnumerator_1_Moon_MoonAnimator_Layer___Class *klass;
  struct MonitorData *monitor;
};
struct Renderer__Array {
  struct Renderer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Renderer * vector[32];
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_AnimatorPostprocessData___Fields {
  struct MoonAnimator_AnimatorPostprocessData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
  struct List_1_Moon_MoonAnimator_AnimatorPostprocessData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_AnimatorPostprocessData___Fields fields;
};
struct MoonAnimator_AnimatorPostprocessData {
  struct IAnimatorPostprocessBase * Postprocess;
  struct Playable Playable;
  bool Removed;
  float BlendDuration;
  float Weight;
};
struct MoonAnimator_AnimatorPostprocessData__Boxed {
  struct MoonAnimator_AnimatorPostprocessData__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_AnimatorPostprocessData fields;
};
struct MoonAnimator_AnimatorPostprocessData__Array {
  struct MoonAnimator_AnimatorPostprocessData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_AnimatorPostprocessData vector[32];
};
struct IAnimatorPostprocessBase {
  struct IAnimatorPostprocessBase__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_MoonAnimator_AnimatorPostprocessData_ {
  struct IEnumerator_1_Moon_MoonAnimator_AnimatorPostprocessData___Class *klass;
  struct MonitorData *monitor;
};
struct Nullable_1_Moon_MoonAnimatorLayerName_ {
  struct MoonAnimatorLayerName value;
  bool has_value;
};
struct Nullable_1_Moon_MoonAnimatorLayerName___Boxed {
  struct Nullable_1_Moon_MoonAnimatorLayerName___Class *klass;
  struct MonitorData *monitor;
  struct Nullable_1_Moon_MoonAnimatorLayerName_ fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAnimation__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAnimator_AnimationInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAnimator_AnimationInstance__VTable vtable;
};
struct MoonAnimatorLayerName__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}