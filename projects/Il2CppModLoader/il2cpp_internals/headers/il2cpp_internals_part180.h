namespace app {
struct VideoPlayer_FrameReadyEventHandler__StaticFields {
};
struct VideoPlayer_FrameReadyEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoPlayer_FrameReadyEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoPlayer_FrameReadyEventHandler__VTable vtable;
};
struct VideoPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VideoPlayer__StaticFields {
};
struct VideoPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VideoPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VideoPlayer__VTable vtable;
};

struct MoonAssert {
  struct MoonAssert__Class *klass;
  struct MonitorData *monitor;
};
struct MoonAssert__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonAssert__StaticFields {
};
struct MoonAssert__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonAssert__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonAssert__VTable vtable;
};

struct __declspec(align(8)) MoonDebug__Fields {
  struct List_1_Moon_MoonDebugMessage_ * m_debugMessages;
  int32_t m_flushThreshhold;
  struct String * m_outputFilePath;
  struct StreamWriter * m_streamWriter;
  struct NintendoSaveFileSystemBinaryWriter * m_switchWriter;
};
struct MoonDebug {
  struct MoonDebug__Class *klass;
  struct MonitorData *monitor;
  struct MoonDebug__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonDebugMessage___Fields {
  struct MoonDebugMessage__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonDebugMessage_ {
  struct List_1_Moon_MoonDebugMessage___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonDebugMessage___Fields fields;
};
enum MoonDebugMessageType__Enum : int32_t {
  MoonDebugMessageType__Enum_Log = 0,
  MoonDebugMessageType__Enum_Warning = 1,
  MoonDebugMessageType__Enum_Error = 2,
  MoonDebugMessageType__Enum_Exception = 3,
  MoonDebugMessageType__Enum_Assertion = 4,
};
struct MoonDebugMessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonDebugMessageType__Enum value;
};
struct __declspec(align(8)) MoonDebugMessage__Fields {
  enum MoonDebugMessageType__Enum m_type;
  struct String * m_text;
  struct Object_1 * m_object;
};
struct MoonDebugMessage {
  struct MoonDebugMessage__Class *klass;
  struct MonitorData *monitor;
  struct MoonDebugMessage__Fields fields;
};
struct MoonDebugMessage__Array {
  struct MoonDebugMessage__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonDebugMessage * vector[32];
};
struct IEnumerator_1_Moon_MoonDebugMessage_ {
  struct IEnumerator_1_Moon_MoonDebugMessage___Class *klass;
  struct MonitorData *monitor;
};
struct MoonDebugMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonDebugMessage__StaticFields {
};
struct MoonDebugMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonDebugMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonDebugMessage__VTable vtable;
};
struct IEnumerator_1_Moon_MoonDebugMessage___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_MoonDebugMessage___StaticFields {
};
struct IEnumerator_1_Moon_MoonDebugMessage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_MoonDebugMessage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_MoonDebugMessage___VTable vtable;
};
struct List_1_Moon_MoonDebugMessage___VTable {
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
struct List_1_Moon_MoonDebugMessage___StaticFields {
  struct MoonDebugMessage__Array * _emptyArray;
};
struct List_1_Moon_MoonDebugMessage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_MoonDebugMessage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_MoonDebugMessage___VTable vtable;
};
struct MoonDebug__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonDebug__StaticFields {
  struct MoonDebug * m_instance;
  bool ShouldWriteBuildInLog;
  bool ExplicitlyIncludeStackTraceInExceptions;
};
struct MoonDebug__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonDebug__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonDebug__VTable vtable;
};

struct ProfilerSample {
};
struct ProfilerSample__Boxed {
  struct ProfilerSample__Class *klass;
  struct MonitorData *monitor;
  struct ProfilerSample fields;
};
struct ProfilerSample__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct ProfilerSample__StaticFields {
};
struct ProfilerSample__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProfilerSample__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProfilerSample__VTable vtable;
};

enum SuspendableMask__Enum : int32_t {
  SuspendableMask__Enum_None = 0,
  SuspendableMask__Enum_Default = 1,
  SuspendableMask__Enum_Ori = 2,
  SuspendableMask__Enum_UI = 4,
  SuspendableMask__Enum_Camera = 8,
};
struct SuspendableMask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SuspendableMask__Enum value;
};
struct Suspendable__Fields {
  struct MonoBehaviour__Fields _;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct Suspendable {
  struct Suspendable__Class *klass;
  struct MonitorData *monitor;
  struct Suspendable__Fields fields;
};
enum RecordableParsingGroup__Enum : int32_t {
  RecordableParsingGroup__Enum_Default = 0,
  RecordableParsingGroup__Enum_Enemies = 1,
  RecordableParsingGroup__Enum_Projectiles = 2,
  RecordableParsingGroup__Enum_PlayerAbilities = 3,
};
struct RecordableParsingGroup__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RecordableParsingGroup__Enum value;
};
struct MoonAnimatorDebugConfig {
  bool DisableClipBindingCache;
  bool DisableMoonOptimizations;
};
struct MoonAnimatorDebugConfig__Boxed {
  struct MoonAnimatorDebugConfig__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorDebugConfig fields;
};
struct MoonAnimator__Fields {
  struct Suspendable__Fields _;
  struct List_1_Moon_MoonAnimator_ClipInstance_ * m_clipPool;
  struct List_1_Moon_MoonAnimator_BlendInstance_ * m_blendPool;
  struct List_1_Moon_MoonAnimator_LayeredInstance_ * m_layeredPool;
  struct List_1_Moon_MoonAnimator_Blend2DInstance_ * m_blend2DPool;
  struct List_1_Moon_MoonAnimator_DirectBlendInstance_ * m_directBlendPool;
  struct List_1_Moon_MoonAnimator_SimpleCrossfadeInstance_ * m_simpleCrossfadePool;
  struct List_1_Moon_MoonAnimator_AnimatedCrossfadeInstance_ * m_animatedCrossfadePool;
  struct PlayableGraph m_previewPlayableGraph;
  struct AnimationPlayableOutput m_previewPlayableOutput;
  struct MoonAnimator_AnimationInstance__Array * m_previewBlendTreesRoots;
  bool m_isTemporaryForPreview;
  int32_t m_enterPreviewCounter;
  float m_previewTime;
  struct List_1_Moon_MoonAnimator_PreviewAnimation_ * m_previewAnimations;
  struct List_1_Moon_MoonAnimator_TransformData_ * m_previewTransformsBackup;
  struct AnimationLayerMixerPlayable m_previewLayerMixer;
  int32_t m_nextPreviewAnimationId;
  enum AnimatorCullingMode__Enum m_cullingModeBeforePreview;
  bool _AnimationPostCullingAllowed_k__BackingField;
  bool _IsRegisteredToManager_k__BackingField;
  bool _IsConnectedToPlayableGraph_k__BackingField;
  bool _StartedNewAnimation_k__BackingField;
  enum RecordableParsingGroup__Enum _ParsingGroup_k__BackingField;
  struct Action_1_UnityEngine_Vector3_ * OnProcessRootMotion;
  struct Action_1_UnityEngine_Quaternion_ * OnProcessRootRotation;
  struct Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_ * OnPlayAnimation;
  struct Action_2_Moon_IAnimation_Moon_ActiveAnimationHandle_ * OnStopAnimation;
  struct Action_2_Moon_FloatAnimationParameter_Single_ * OnFloatParameterSet;
  struct Action_2_Moon_VectorAnimationParameter_UnityEngine_Vector3_ * OnVectorParameterSet;
  struct Action_1_Moon_ClipAnimation_EventMetadata_ * OnEvent;
  struct Action * OnEnabled;
  struct Action * OnDisabled;
  struct MoonAnimatorDefinition * Definition;
  struct GameObject * AnimatedObject;
  float LocalObjectScale;
  struct Transform__Array * LocalObjectScaleJoints;
  struct MoonAnimatorDebugConfig DebugConfig;
  int32_t m_updatePriority;
  struct Animator * m_unityAnimator;
  struct PlayableGraph m_playableGraph;
  struct AnimationPlayableOutput m_playableOutput;
  struct AnimationLayerMixerPlayable m_layerMixer;
  struct AnimationParameterSet * m_parameterSet;
  struct List_1_Moon_MoonAnimator_AnimationPostprocessMetadata_ * m_postprocessChain;
  struct AnimationPostprocessGroupManager * m_postprocessGroupManager;
  struct List_1_Moon_MoonAnimator_Layer_ * m_layers;
  bool m_clearing;
  bool m_isValid;
  bool m_isInitializedForParallelUpdate;
  bool m_suspended;
  bool m_initialized;
  bool m_isVisibleCached;
  int32_t m_isVisibleCachedFrame;
  struct Renderer__Array * RenderersForVisibility;
  struct List_1_Moon_MoonAnimator_AnimatorPostprocessData_ * m_animatorPostprocessJobDatas;
};
struct MoonAnimator {
  struct MoonAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_ClipInstance___Fields {
  struct MoonAnimator_ClipInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_ClipInstance_ {
  struct List_1_Moon_MoonAnimator_ClipInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_ClipInstance___Fields fields;
};
struct __declspec(align(8)) MoonAnimator_AnimationInstance__Fields {
  int32_t _UserId_k__BackingField;
  struct MoonAnimator * m_animator;
  struct IAnimation * m_animation;
  bool m_isPreview;
  bool m_groupsDisabled;
};
struct MoonAnimator_AnimationInstance {
  struct MoonAnimator_AnimationInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_AnimationInstance__Fields fields;
};
struct MoonAnimator_ClipInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct AnimationClipPlayable m_clipPlayable;
  struct ClipAnimation * m_clipAnimation;
  float m_previousTime;
  float m_clipLength;
};
struct MoonAnimator_ClipInstance {
  struct MoonAnimator_ClipInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_ClipInstance__Fields fields;
};
struct MoonAnimator_ClipInstance__Array {
  struct MoonAnimator_ClipInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_ClipInstance * vector[32];
};
struct IAnimation {
  struct IAnimation__Class *klass;
  struct MonitorData *monitor;
};
enum MoonAnimator_AnimationInstanceType__Enum : int32_t {
  MoonAnimator_AnimationInstanceType__Enum_Clip = 0,
  MoonAnimator_AnimationInstanceType__Enum_Blend = 1,
  MoonAnimator_AnimationInstanceType__Enum_DirectBlend = 2,
  MoonAnimator_AnimationInstanceType__Enum_Blend2D = 3,
  MoonAnimator_AnimationInstanceType__Enum_SimpleCrossfade = 4,
  MoonAnimator_AnimationInstanceType__Enum_AnimatedCrossfade = 5,
  MoonAnimator_AnimationInstanceType__Enum_Layered = 6,
};
struct MoonAnimator_AnimationInstanceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonAnimator_AnimationInstanceType__Enum value;
};
struct MoonAnimatorLayerName {
  struct String * m_displayName;
  int32_t m_uid;
};
struct MoonAnimatorLayerName__Boxed {
  struct MoonAnimatorLayerName__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorLayerName fields;
};
struct MoonAnimation__Fields {
  struct ScriptableObject__Fields _;
  struct MoonAnimatorDefinition * AnimatorDefinition;
  struct GameObject * PreviewObject;
  struct AnimationTransition__Array * Transitions;
  float AdditiveWeightMultiplier;
  struct MoonAnimatorLayerName m_layer;
  float m_layerBlendInDuration;
  float m_layerBlendOutDuration;
  float m_defaultTransitionInDuration;
  struct AnimationPostprocessGroup__Array * m_disabledPostprocessGroups;
  struct AnimationPostprocessGroupModifier__Array * m_postprocessGroupModifiers;
  bool m_useDefaultTransitionIn;
  struct AnimationTransition * m_defaultTransitionIn;
};
struct MoonAnimation {
  struct MoonAnimation__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimation__Fields fields;
};
struct ClipAnimation__Fields {
  struct MoonAnimation__Fields _;
  struct AnimationClip * Clip;
  bool KeepLastFrame;
  struct ClipAnimation_EventMetadata__Array * Events;
  struct ClipAnimation_RootMotionData * RootMotionPositionCurves;
  struct ClipAnimation_RootMotionData * RootMotionRotationCurves;
  float Speed;
};
struct ClipAnimation {
  struct ClipAnimation__Class *klass;
  struct MonitorData *monitor;
  struct ClipAnimation__Fields fields;
};
struct MoonAnimatorDefinition__Fields {
  struct ScriptableObject__Fields _;
  struct GameObject * m_rig;
  int32_t m_nextAdditionalLayerId;
  struct List_1_Moon_MoonAnimatorLayerDefinition_ * m_additionalLayers;
};
struct MoonAnimatorDefinition {
  struct MoonAnimatorDefinition__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorDefinition__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimatorLayerDefinition___Fields {
  struct MoonAnimatorLayerDefinition__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimatorLayerDefinition_ {
  struct List_1_Moon_MoonAnimatorLayerDefinition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimatorLayerDefinition___Fields fields;
};
enum MoonAnimatorLayerBlendingMode__Enum : int32_t {
  MoonAnimatorLayerBlendingMode__Enum_Override = 0,
  MoonAnimatorLayerBlendingMode__Enum_Additive = 1,
};
struct MoonAnimatorLayerBlendingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MoonAnimatorLayerBlendingMode__Enum value;
};
struct MoonAnimatorLayerDefinition {
  struct MoonAnimatorLayerName Name;
  enum MoonAnimatorLayerBlendingMode__Enum BlendMode;
  struct AvatarMask * Mask;
};
struct MoonAnimatorLayerDefinition__Boxed {
  struct MoonAnimatorLayerDefinition__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimatorLayerDefinition fields;
};
struct MoonAnimatorLayerDefinition__Array {
  struct MoonAnimatorLayerDefinition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimatorLayerDefinition vector[32];
};
struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition_ {
  struct IEnumerator_1_Moon_MoonAnimatorLayerDefinition___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) AnimationTransition__Fields {
  struct MoonAnimation * TargetAnimation;
  struct MoonAnimation * TransitionAnimation;
  float Duration;
  float CrossfadeFromSourceDuration;
  float CrossfadeToTargetDuration;
  bool HasExitRange;
  float ExitRangeBegin;
  float ExitRangeEnd;
  float TargetNormalizedStartTime;
  bool IsFolded;
};
struct AnimationTransition {
  struct AnimationTransition__Class *klass;
  struct MonitorData *monitor;
  struct AnimationTransition__Fields fields;
};
struct AnimationTransition__Array {
  struct AnimationTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationTransition * vector[32];
};
struct AnimationPostprocessGroup__Fields {
  struct ScriptableObject__Fields _;
  float SmoothTime;
};
struct AnimationPostprocessGroup {
  struct AnimationPostprocessGroup__Class *klass;
  struct MonitorData *monitor;
  struct AnimationPostprocessGroup__Fields fields;
};
struct AnimationPostprocessGroup__Array {
  struct AnimationPostprocessGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationPostprocessGroup * vector[32];
};
struct __declspec(align(8)) AnimationPostprocessGroupModifier__Fields {
  struct AnimationPostprocessGroup * Group;
  bool Enable;
  float BlendInDuration;
  float BlendOutDuration;
};
struct AnimationPostprocessGroupModifier {
  struct AnimationPostprocessGroupModifier__Class *klass;
  struct MonitorData *monitor;
  struct AnimationPostprocessGroupModifier__Fields fields;
};
struct AnimationPostprocessGroupModifier__Array {
  struct AnimationPostprocessGroupModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationPostprocessGroupModifier * vector[32];
};
enum AnimationType__Enum : int32_t {
  AnimationType__Enum_Clip = 0,
  AnimationType__Enum_Blend = 1,
  AnimationType__Enum_DirectBlend = 2,
  AnimationType__Enum_Blend2D = 3,
  AnimationType__Enum_Crossfade = 4,
  AnimationType__Enum_Layered = 5,
};
struct AnimationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationType__Enum value;
};
struct __declspec(align(8)) AnimationParameterSet__Fields {
  bool m_previewMode;
  struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ * m_parameters;
  struct List_1_Moon_AnimationParameter_Instance_ * m_parametersList;
};
struct AnimationParameterSet {
  struct AnimationParameterSet__Class *klass;
  struct MonitorData *monitor;
  struct AnimationParameterSet__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_AnimationParameter_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  int32_t hashCode;
  int32_t next;
  struct AnimationParameter * key;
  struct AnimationParameter_Instance * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ vector[32];
};
struct AnimationParameter__Fields {
  struct ScriptableObject__Fields _;
  struct String * Name;
};
struct AnimationParameter {
  struct AnimationParameter__Class *klass;
  struct MonitorData *monitor;
  struct AnimationParameter__Fields fields;
};
struct AnimationParameter_Instance {
  struct AnimationParameter_Instance__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) FloatAnimationParameter_Instance__Fields {
  struct FloatAnimationParameter * m_parameter;
  float m_targetValue;
  float m_currentValue;
  bool m_previewMode;
  float m_currentVelocity;
};
struct FloatAnimationParameter_Instance {
  struct FloatAnimationParameter_Instance__Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
  struct FloatAnimationParameter__Fields fields;
};
struct IEqualityComparer_1_Moon_AnimationParameter_ {
  struct IEqualityComparer_1_Moon_AnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
  struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};
struct AnimationParameter__Array {
  struct AnimationParameter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationParameter * vector[32];
};
struct IEnumerator_1_Moon_AnimationParameter_ {
  struct IEnumerator_1_Moon_AnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields {
  struct Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Fields fields;
};
struct AnimationParameter_Instance__Array {
  struct AnimationParameter_Instance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationParameter_Instance * vector[32];
};
struct IEnumerator_1_Moon_AnimationParameter_Instance_ {
  struct IEnumerator_1_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_AnimationParameter_ {
  struct ICollection_1_Moon_AnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_Moon_AnimationParameter_Instance_ {
  struct ICollection_1_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  struct AnimationParameter * key;
  struct AnimationParameter_Instance * value;
};
struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Boxed {
  struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ fields;
};
struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array {
  struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_AnimationParameter_ {
  struct IEnumerable_1_Moon_AnimationParameter___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_AnimationParameter_Instance_ {
  struct IEnumerable_1_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_AnimationParameter_Instance___Fields {
  struct AnimationParameter_Instance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_AnimationParameter_Instance_ {
  struct List_1_Moon_AnimationParameter_Instance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_AnimationParameter_Instance___Fields fields;
};
enum BlendAnimationMode__Enum : int32_t {
  BlendAnimationMode__Enum_Smooth = 0,
  BlendAnimationMode__Enum_Nearest = 1,
};
struct BlendAnimationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BlendAnimationMode__Enum value;
};
enum BlendAnimationEventMode__Enum : int32_t {
  BlendAnimationEventMode__Enum_All = 0,
  BlendAnimationEventMode__Enum_HighestWeight = 1,
};
struct BlendAnimationEventMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BlendAnimationEventMode__Enum value;
};
struct BlendAnimation__Fields {
  struct MoonAnimation__Fields _;
  struct FloatAnimationParameter * Parameter;
  struct BlendAnimation_Input__Array * Inputs;
  bool UseThreshold;
  float Threshold;
  enum BlendAnimationMode__Enum Mode;
  enum BlendAnimationEventMode__Enum AnimationEventMode;
  struct BlendAnimation_Input__Array * m_validInputs;
};
struct BlendAnimation {
  struct BlendAnimation__Class *klass;
  struct MonitorData *monitor;
  struct BlendAnimation__Fields fields;
};
struct __declspec(align(8)) BlendAnimation_Input__Fields {
  float Value;
  struct MoonAnimation * Animation;
  struct AnimationCurve * BlendCurve;
  bool UseBlendCurve;
};
struct BlendAnimation_Input {
  struct BlendAnimation_Input__Class *klass;
  struct MonitorData *monitor;
  struct BlendAnimation_Input__Fields fields;
};
struct BlendAnimation_Input__Array {
  struct BlendAnimation_Input__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BlendAnimation_Input * vector[32];
};
struct __declspec(align(8)) HashSet_1_Moon_MoonAnimation___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_MoonAnimation___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_MoonAnimation_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_MoonAnimation_ {
  struct HashSet_1_Moon_MoonAnimation___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_MoonAnimation___Fields fields;
};
struct HashSet_1_T_Slot_Moon_MoonAnimation_ {
  int32_t hashCode;
  int32_t next;
  struct MoonAnimation * value;
};
struct HashSet_1_T_Slot_Moon_MoonAnimation___Boxed {
  struct HashSet_1_T_Slot_Moon_MoonAnimation___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_MoonAnimation_ fields;
};
struct HashSet_1_T_Slot_Moon_MoonAnimation___Array {
  struct HashSet_1_T_Slot_Moon_MoonAnimation___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_MoonAnimation_ vector[32];
};
struct IEqualityComparer_1_Moon_MoonAnimation_ {
  struct IEqualityComparer_1_Moon_MoonAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct MoonAnimation__Array {
  struct MoonAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimation * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimation_ {
  struct IEnumerator_1_Moon_MoonAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_MoonAnimation_ {
  struct IEnumerable_1_Moon_MoonAnimation___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_AnimationClip___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_AnimationClip_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_AnimationClip_ {
  struct HashSet_1_UnityEngine_AnimationClip___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_AnimationClip___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ {
  int32_t hashCode;
  int32_t next;
  struct AnimationClip * value;
};
struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array {
  struct HashSet_1_T_Slot_UnityEngine_AnimationClip___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_AnimationClip_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_AnimationClip_ {
  struct IEqualityComparer_1_UnityEngine_AnimationClip___Class *klass;
  struct MonitorData *monitor;
};
struct AnimationClip__Array {
  struct AnimationClip__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationClip * vector[32];
};
struct IEnumerator_1_UnityEngine_AnimationClip_ {
  struct IEnumerator_1_UnityEngine_AnimationClip___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_AnimationClip_ {
  struct IEnumerable_1_UnityEngine_AnimationClip___Class *klass;
  struct MonitorData *monitor;
};
struct MoonAnimation_RootMotionSample {
  struct Vector3 Position;
  struct Quaternion Rotation;
};
struct MoonAnimation_RootMotionSample__Boxed {
  struct MoonAnimation_RootMotionSample__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimation_RootMotionSample fields;
};
struct __declspec(align(8)) ClipAnimation_EventMetadata__Fields {
  struct MoonAnimationEvent * Event;
  struct String * Type;
  float Time;
};
struct ClipAnimation_EventMetadata {
  struct ClipAnimation_EventMetadata__Class *klass;
  struct MonitorData *monitor;
  struct ClipAnimation_EventMetadata__Fields fields;
};
struct ClipAnimation_EventMetadata__Array {
  struct ClipAnimation_EventMetadata__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ClipAnimation_EventMetadata * vector[32];
};
struct MoonAnimationEvent__Fields {
  struct ScriptableObject__Fields _;
};
struct MoonAnimationEvent {
  struct MoonAnimationEvent__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimationEvent__Fields fields;
};
struct __declspec(align(8)) ClipAnimation_RootMotionData__Fields {
  struct AnimationCurve * XCurve;
  struct AnimationCurve * YCurve;
  struct AnimationCurve * ZCurve;
  struct AnimationCurve * WCurve;
  bool _IsDirty_k__BackingField;
};
struct ClipAnimation_RootMotionData {
  struct ClipAnimation_RootMotionData__Class *klass;
  struct MonitorData *monitor;
  struct ClipAnimation_RootMotionData__Fields fields;
};
struct IEnumerator_1_Moon_MoonAnimator_ClipInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_ClipInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_BlendInstance___Fields {
  struct MoonAnimator_BlendInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_BlendInstance_ {
  struct List_1_Moon_MoonAnimator_BlendInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_BlendInstance___Fields fields;
};
struct MoonAnimator_BlendInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct BlendAnimation * m_blendAnimation;
  struct AnimationMixerPlayable m_mixerPlayable;
  struct MoonAnimator_AnimationInstance__Array * m_inputInstances;
  float m_currentBlendWeight;
  int32_t m_currentBlendNodeIndex;
  struct BlendAnimation_Input__Array * m_validInputs;
};
struct MoonAnimator_BlendInstance {
  struct MoonAnimator_BlendInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_BlendInstance__Fields fields;
};
struct MoonAnimator_BlendInstance__Array {
  struct MoonAnimator_BlendInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_BlendInstance * vector[32];
};
struct MoonAnimator_AnimationInstance__Array {
  struct MoonAnimator_AnimationInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_AnimationInstance * vector[32];
};
struct IEnumerator_1_Moon_MoonAnimator_BlendInstance_ {
  struct IEnumerator_1_Moon_MoonAnimator_BlendInstance___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_MoonAnimator_LayeredInstance___Fields {
  struct MoonAnimator_LayeredInstance__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_MoonAnimator_LayeredInstance_ {
  struct List_1_Moon_MoonAnimator_LayeredInstance___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_MoonAnimator_LayeredInstance___Fields fields;
};
struct MoonAnimator_LayeredInstance__Fields {
  struct MoonAnimator_AnimationInstance__Fields _;
  struct LayeredAnimation * m_layeredAnimation;
  struct AnimationLayerMixerPlayable m_layerMixerPlayable;
  struct MoonAnimator_AnimationInstance__Array * m_inputInstances;
  struct LayeredAnimation_Input__Array * m_validInputs;
};
struct MoonAnimator_LayeredInstance {
  struct MoonAnimator_LayeredInstance__Class *klass;
  struct MonitorData *monitor;
  struct MoonAnimator_LayeredInstance__Fields fields;
};
struct MoonAnimator_LayeredInstance__Array {
  struct MoonAnimator_LayeredInstance__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MoonAnimator_LayeredInstance * vector[32];
};}