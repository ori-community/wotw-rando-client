namespace app {
struct AnimationStream__Boxed {
  struct AnimationStream__Class *klass;
  struct MonitorData *monitor;
  struct AnimationStream fields;
};
struct AnimationStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationStream__StaticFields {
};
struct AnimationStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationStream__VTable vtable;
};

struct AnimationHumanStream {
  void * stream;
};
struct AnimationHumanStream__Boxed {
  struct AnimationHumanStream__Class *klass;
  struct MonitorData *monitor;
  struct AnimationHumanStream fields;
};
struct AnimationHumanStream__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationHumanStream__StaticFields {
};
struct AnimationHumanStream__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationHumanStream__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationHumanStream__VTable vtable;
};

struct TransformStreamHandle {
  uint32_t m_AnimatorBindingsVersion;
  int32_t handleIndex;
  int32_t skeletonIndex;
};
struct TransformStreamHandle__Boxed {
  struct TransformStreamHandle__Class *klass;
  struct MonitorData *monitor;
  struct TransformStreamHandle fields;
};
struct TransformStreamHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TransformStreamHandle__StaticFields {
};
struct TransformStreamHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TransformStreamHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TransformStreamHandle__VTable vtable;
};

struct AnimationVerletPlayable {
  struct PlayableHandle m_Handle;
};
struct AnimationVerletPlayable__Boxed {
  struct AnimationVerletPlayable__Class *klass;
  struct MonitorData *monitor;
  struct AnimationVerletPlayable fields;
};
struct AnimationVerletPlayable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetHandle;
  VirtualInvokeData Equals_1;
};
struct AnimationVerletPlayable__StaticFields {
};
struct AnimationVerletPlayable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationVerletPlayable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationVerletPlayable__VTable vtable;
};

struct AnimationVerletPlayableConfiguration {
  bool UseJobs;
  bool EnableDebugDraw;
};
struct AnimationVerletPlayableConfiguration__Boxed {
  struct AnimationVerletPlayableConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct AnimationVerletPlayableConfiguration fields;
};
struct AnimationVerletPlayableConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationVerletPlayableConfiguration__StaticFields {
};
struct AnimationVerletPlayableConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationVerletPlayableConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationVerletPlayableConfiguration__VTable vtable;
};

struct AnimationVerletPlayableParametersAsset__Fields {
  struct Object_1__Fields _;
};
struct AnimationVerletPlayableParametersAsset {
  struct AnimationVerletPlayableParametersAsset__Class *klass;
  struct MonitorData *monitor;
  struct AnimationVerletPlayableParametersAsset__Fields fields;
};
struct AnimationVerletPlayableParametersAsset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationVerletPlayableParametersAsset__StaticFields {
};
struct AnimationVerletPlayableParametersAsset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationVerletPlayableParametersAsset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationVerletPlayableParametersAsset__VTable vtable;
};

enum AnimatorUpdateMode__Enum : int32_t {
  AnimatorUpdateMode__Enum_Normal = 0,
  AnimatorUpdateMode__Enum_AnimatePhysics = 1,
  AnimatorUpdateMode__Enum_UnscaledTime = 2,
};
struct AnimatorUpdateMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorUpdateMode__Enum value;
};

enum AvatarIKGoal__Enum : int32_t {
  AvatarIKGoal__Enum_LeftFoot = 0,
  AvatarIKGoal__Enum_RightFoot = 1,
  AvatarIKGoal__Enum_LeftHand = 2,
  AvatarIKGoal__Enum_RightHand = 3,
};
struct AvatarIKGoal__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AvatarIKGoal__Enum value;
};

enum AvatarIKHint__Enum : int32_t {
  AvatarIKHint__Enum_LeftKnee = 0,
  AvatarIKHint__Enum_RightKnee = 1,
  AvatarIKHint__Enum_LeftElbow = 2,
  AvatarIKHint__Enum_RightElbow = 3,
};
struct AvatarIKHint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AvatarIKHint__Enum value;
};

enum HumanBodyBones__Enum : int32_t {
  HumanBodyBones__Enum_Hips = 0,
  HumanBodyBones__Enum_LeftUpperLeg = 1,
  HumanBodyBones__Enum_RightUpperLeg = 2,
  HumanBodyBones__Enum_LeftLowerLeg = 3,
  HumanBodyBones__Enum_RightLowerLeg = 4,
  HumanBodyBones__Enum_LeftFoot = 5,
  HumanBodyBones__Enum_RightFoot = 6,
  HumanBodyBones__Enum_Spine = 7,
  HumanBodyBones__Enum_Chest = 8,
  HumanBodyBones__Enum_UpperChest = 54,
  HumanBodyBones__Enum_Neck = 9,
  HumanBodyBones__Enum_Head = 10,
  HumanBodyBones__Enum_LeftShoulder = 11,
  HumanBodyBones__Enum_RightShoulder = 12,
  HumanBodyBones__Enum_LeftUpperArm = 13,
  HumanBodyBones__Enum_RightUpperArm = 14,
  HumanBodyBones__Enum_LeftLowerArm = 15,
  HumanBodyBones__Enum_RightLowerArm = 16,
  HumanBodyBones__Enum_LeftHand = 17,
  HumanBodyBones__Enum_RightHand = 18,
  HumanBodyBones__Enum_LeftToes = 19,
  HumanBodyBones__Enum_RightToes = 20,
  HumanBodyBones__Enum_LeftEye = 21,
  HumanBodyBones__Enum_RightEye = 22,
  HumanBodyBones__Enum_Jaw = 23,
  HumanBodyBones__Enum_LeftThumbProximal = 24,
  HumanBodyBones__Enum_LeftThumbIntermediate = 25,
  HumanBodyBones__Enum_LeftThumbDistal = 26,
  HumanBodyBones__Enum_LeftIndexProximal = 27,
  HumanBodyBones__Enum_LeftIndexIntermediate = 28,
  HumanBodyBones__Enum_LeftIndexDistal = 29,
  HumanBodyBones__Enum_LeftMiddleProximal = 30,
  HumanBodyBones__Enum_LeftMiddleIntermediate = 31,
  HumanBodyBones__Enum_LeftMiddleDistal = 32,
  HumanBodyBones__Enum_LeftRingProximal = 33,
  HumanBodyBones__Enum_LeftRingIntermediate = 34,
  HumanBodyBones__Enum_LeftRingDistal = 35,
  HumanBodyBones__Enum_LeftLittleProximal = 36,
  HumanBodyBones__Enum_LeftLittleIntermediate = 37,
  HumanBodyBones__Enum_LeftLittleDistal = 38,
  HumanBodyBones__Enum_RightThumbProximal = 39,
  HumanBodyBones__Enum_RightThumbIntermediate = 40,
  HumanBodyBones__Enum_RightThumbDistal = 41,
  HumanBodyBones__Enum_RightIndexProximal = 42,
  HumanBodyBones__Enum_RightIndexIntermediate = 43,
  HumanBodyBones__Enum_RightIndexDistal = 44,
  HumanBodyBones__Enum_RightMiddleProximal = 45,
  HumanBodyBones__Enum_RightMiddleIntermediate = 46,
  HumanBodyBones__Enum_RightMiddleDistal = 47,
  HumanBodyBones__Enum_RightRingProximal = 48,
  HumanBodyBones__Enum_RightRingIntermediate = 49,
  HumanBodyBones__Enum_RightRingDistal = 50,
  HumanBodyBones__Enum_RightLittleProximal = 51,
  HumanBodyBones__Enum_RightLittleIntermediate = 52,
  HumanBodyBones__Enum_RightLittleDistal = 53,
  HumanBodyBones__Enum_LastBone = 55,
};
struct HumanBodyBones__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HumanBodyBones__Enum value;
};

struct ScriptableObject__Array {
  struct ScriptableObject__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ScriptableObject * vector[32];
};

struct StateMachineBehaviour__Array {
  struct StateMachineBehaviour__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StateMachineBehaviour * vector[32];
};

enum StateInfoIndex__Enum : int32_t {
  StateInfoIndex__Enum_CurrentState = 0,
  StateInfoIndex__Enum_NextState = 1,
  StateInfoIndex__Enum_ExitState = 2,
  StateInfoIndex__Enum_InterruptedState = 3,
};
struct StateInfoIndex__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StateInfoIndex__Enum value;
};

struct AnimatorTransitionInfo {
  int32_t m_FullPath;
  int32_t m_UserName;
  int32_t m_Name;
  bool m_HasFixedDuration;
  float m_Duration;
  float m_NormalizedTime;
  bool m_AnyState;
  int32_t m_TransitionType;
};
struct AnimatorTransitionInfo__Boxed {
  struct AnimatorTransitionInfo__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorTransitionInfo fields;
};
struct AnimatorTransitionInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatorTransitionInfo__StaticFields {
};
struct AnimatorTransitionInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorTransitionInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorTransitionInfo__VTable vtable;
};

struct AnimatorClipInfo__Array {
  struct AnimatorClipInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimatorClipInfo vector[32];
};

struct __declspec(align(8)) List_1_UnityEngine_AnimatorClipInfo___Fields {
  struct AnimatorClipInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_AnimatorClipInfo_ {
  struct List_1_UnityEngine_AnimatorClipInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_AnimatorClipInfo___Fields fields;
};
struct IEnumerator_1_UnityEngine_AnimatorClipInfo_ {
  struct IEnumerator_1_UnityEngine_AnimatorClipInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_AnimatorClipInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_AnimatorClipInfo___StaticFields {
};
struct IEnumerator_1_UnityEngine_AnimatorClipInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_AnimatorClipInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_AnimatorClipInfo___VTable vtable;
};
struct List_1_UnityEngine_AnimatorClipInfo___VTable {
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
struct List_1_UnityEngine_AnimatorClipInfo___StaticFields {
  struct AnimatorClipInfo__Array * _emptyArray;
};
struct List_1_UnityEngine_AnimatorClipInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_AnimatorClipInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_AnimatorClipInfo___VTable vtable;
};

enum AnimatorControllerParameterType__Enum : int32_t {
  AnimatorControllerParameterType__Enum_Float = 1,
  AnimatorControllerParameterType__Enum_Int = 3,
  AnimatorControllerParameterType__Enum_Bool = 4,
  AnimatorControllerParameterType__Enum_Trigger = 9,
};
struct AnimatorControllerParameterType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorControllerParameterType__Enum value;
};
struct __declspec(align(8)) AnimatorControllerParameter__Fields {
  struct String * m_Name;
  enum AnimatorControllerParameterType__Enum m_Type;
  float m_DefaultFloat;
  int32_t m_DefaultInt;
  bool m_DefaultBool;
};
struct AnimatorControllerParameter {
  struct AnimatorControllerParameter__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorControllerParameter__Fields fields;
};
struct AnimatorControllerParameter__Array {
  struct AnimatorControllerParameter__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimatorControllerParameter * vector[32];
};
struct AnimatorControllerParameter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatorControllerParameter__StaticFields {
};
struct AnimatorControllerParameter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorControllerParameter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorControllerParameter__VTable vtable;
};

struct MatchTargetWeightMask {
  struct Vector3 m_PositionXYZWeight;
  float m_RotationWeight;
};
struct MatchTargetWeightMask__Boxed {
  struct MatchTargetWeightMask__Class *klass;
  struct MonitorData *monitor;
  struct MatchTargetWeightMask fields;
};
struct MatchTargetWeightMask__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MatchTargetWeightMask__StaticFields {
};
struct MatchTargetWeightMask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MatchTargetWeightMask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MatchTargetWeightMask__VTable vtable;
};

enum AvatarTarget__Enum : int32_t {
  AvatarTarget__Enum_Root = 0,
  AvatarTarget__Enum_Body = 1,
  AvatarTarget__Enum_LeftFoot = 2,
  AvatarTarget__Enum_RightFoot = 3,
  AvatarTarget__Enum_LeftHand = 4,
  AvatarTarget__Enum_RightHand = 5,
};
struct AvatarTarget__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AvatarTarget__Enum value;
};

enum AnimatorCullingMode__Enum : int32_t {
  AnimatorCullingMode__Enum_AlwaysAnimate = 0,
  AnimatorCullingMode__Enum_CullUpdateTransforms = 1,
  AnimatorCullingMode__Enum_CullCompletely = 2,
};
struct AnimatorCullingMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorCullingMode__Enum value;
};

enum AnimatorRecorderMode__Enum : int32_t {
  AnimatorRecorderMode__Enum_Offline = 0,
  AnimatorRecorderMode__Enum_Playback = 1,
  AnimatorRecorderMode__Enum_Record = 2,
};
struct AnimatorRecorderMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimatorRecorderMode__Enum value;
};

struct RuntimeAnimatorController__Fields {
  struct Object_1__Fields _;
};
struct RuntimeAnimatorController {
  struct RuntimeAnimatorController__Class *klass;
  struct MonitorData *monitor;
  struct RuntimeAnimatorController__Fields fields;
};
struct RuntimeAnimatorController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RuntimeAnimatorController__StaticFields {
};
struct RuntimeAnimatorController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RuntimeAnimatorController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RuntimeAnimatorController__VTable vtable;
};

struct Avatar__Fields {
  struct Object_1__Fields _;
};
struct Avatar {
  struct Avatar__Class *klass;
  struct MonitorData *monitor;
  struct Avatar__Fields fields;
};
struct Avatar__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Avatar__StaticFields {
};
struct Avatar__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Avatar__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Avatar__VTable vtable;
};

struct AnimatorOverrideController__Fields {
  struct RuntimeAnimatorController__Fields _;
  struct AnimatorOverrideController_OnOverrideControllerDirtyCallback * OnOverrideControllerDirty;
};
struct AnimatorOverrideController {
  struct AnimatorOverrideController__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorOverrideController__Fields fields;
};
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback {
  struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__Fields fields;
};
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__VTable {
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
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__StaticFields {
};
struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorOverrideController_OnOverrideControllerDirtyCallback__VTable vtable;
};
struct AnimatorOverrideController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimatorOverrideController__StaticFields {
};
struct AnimatorOverrideController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorOverrideController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorOverrideController__VTable vtable;
};

struct SnakeAnimator__Fields {
  struct Behaviour__Fields _;
};
struct SnakeAnimator {
  struct SnakeAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SnakeAnimator__Fields fields;
};
struct SnakeAnimatorConfiguration {
  struct Transform * Target;
  struct Transform * Root;
  int32_t SolverIterationCount;
  float BodyStretch;
  float MaxJointAngle;
  float AngleRestrictSpeed;
  struct Vector3 PositionOffset;
  bool UseTipAngle;
};
struct SnakeAnimatorConfiguration__Boxed {
  struct SnakeAnimatorConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct SnakeAnimatorConfiguration fields;
};
struct SnakeAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SnakeAnimator__StaticFields {
};
struct SnakeAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnakeAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnakeAnimator__VTable vtable;
};
struct SnakeAnimatorConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SnakeAnimatorConfiguration__StaticFields {
};
struct SnakeAnimatorConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnakeAnimatorConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnakeAnimatorConfiguration__VTable vtable;
};

struct SnakeAnimatorJointConfiguration {
  struct Transform * Transform;
  float MaxLength;
  float MinLength;
};
struct SnakeAnimatorJointConfiguration__Boxed {
  struct SnakeAnimatorJointConfiguration__Class *klass;
  struct MonitorData *monitor;
  struct SnakeAnimatorJointConfiguration fields;
};
struct SnakeAnimatorJointConfiguration__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SnakeAnimatorJointConfiguration__StaticFields {
};
struct SnakeAnimatorJointConfiguration__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SnakeAnimatorJointConfiguration__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SnakeAnimatorJointConfiguration__VTable vtable;
};

struct Animation__Fields {
  struct Behaviour__Fields _;
};
struct Animation {
  struct Animation__Class *klass;
  struct MonitorData *monitor;
  struct Animation__Fields fields;
};
struct Animation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEnumerator;
};
struct Animation__StaticFields {
};
struct Animation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Animation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Animation__VTable vtable;
};

enum PlayMode__Enum : int32_t {
  PlayMode__Enum_StopSameLayer = 0,
  PlayMode__Enum_StopAll = 4,
};
struct PlayMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PlayMode__Enum value;
};

enum QueueMode__Enum : int32_t {
  QueueMode__Enum_CompleteOthers = 0,
  QueueMode__Enum_PlayNow = 2,
};
struct QueueMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum QueueMode__Enum value;
};

enum AnimationPlayMode__Enum : int32_t {
  AnimationPlayMode__Enum_Stop = 0,
  AnimationPlayMode__Enum_Queue = 1,
  AnimationPlayMode__Enum_Mix = 2,
};
struct AnimationPlayMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationPlayMode__Enum value;
};

enum AnimationCullingType__Enum : int32_t {
  AnimationCullingType__Enum_AlwaysAnimate = 0,
  AnimationCullingType__Enum_BasedOnRenderers = 1,
  AnimationCullingType__Enum_BasedOnClipBounds = 2,
  AnimationCullingType__Enum_BasedOnUserBounds = 3,
};
struct AnimationCullingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationCullingType__Enum value;
};

struct __declspec(align(8)) Animation_Enumerator__Fields {
  struct Animation * m_Outer;
  int32_t m_CurrentIndex;
};
struct Animation_Enumerator {
  struct Animation_Enumerator__Class *klass;
  struct MonitorData *monitor;
  struct Animation_Enumerator__Fields fields;
};
struct Animation_Enumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData MoveNext;
  VirtualInvokeData get_Current;
  VirtualInvokeData Reset;
};
struct Animation_Enumerator__StaticFields {
};
struct Animation_Enumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Animation_Enumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Animation_Enumerator__VTable vtable;
};

struct PlayableDirector__Fields {
  struct Behaviour__Fields _;
  struct Action_1_UnityEngine_Playables_PlayableDirector_ * played;
  struct Action_1_UnityEngine_Playables_PlayableDirector_ * paused;
  struct Action_1_UnityEngine_Playables_PlayableDirector_ * stopped;
};
struct PlayableDirector {
  struct PlayableDirector__Class *klass;
  struct MonitorData *monitor;
  struct PlayableDirector__Fields fields;
};
struct Action_1_UnityEngine_Playables_PlayableDirector___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Playables_PlayableDirector_ {
  struct Action_1_UnityEngine_Playables_PlayableDirector___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Playables_PlayableDirector___Fields fields;
};
struct Action_1_UnityEngine_Playables_PlayableDirector___VTable {
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
struct Action_1_UnityEngine_Playables_PlayableDirector___StaticFields {
};
struct Action_1_UnityEngine_Playables_PlayableDirector___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_UnityEngine_Playables_PlayableDirector___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_UnityEngine_Playables_PlayableDirector___VTable vtable;
};
struct PlayableDirector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayableDirector__StaticFields {
};
struct PlayableDirector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayableDirector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayableDirector__VTable vtable;
};

struct NativeUpdateCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct NativeUpdateCallback {
  struct NativeUpdateCallback__Class *klass;
  struct MonitorData *monitor;
  struct NativeUpdateCallback__Fields fields;
};
enum NativeInputUpdateType__Enum : int32_t {
  NativeInputUpdateType__Enum_Dynamic = 1,
  NativeInputUpdateType__Enum_Fixed = 2,
  NativeInputUpdateType__Enum_BeforeRender = 4,
  NativeInputUpdateType__Enum_Editor = 8,
  NativeInputUpdateType__Enum_IgnoreFocus = -2147483648,
};
struct NativeInputUpdateType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NativeInputUpdateType__Enum value;
};
struct NativeInputEventBuffer {
  struct Void * eventBuffer;
  int32_t eventCount;
  int32_t sizeInBytes;
  int32_t capacityInBytes;
};
struct NativeInputEventBuffer__Boxed {
  struct NativeInputEventBuffer__Class *klass;
  struct MonitorData *monitor;
  struct NativeInputEventBuffer fields;
};
struct NativeInputEventBuffer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NativeInputEventBuffer__StaticFields {
};
struct NativeInputEventBuffer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeInputEventBuffer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeInputEventBuffer__VTable vtable;
};
struct NativeUpdateCallback__VTable {
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
struct NativeUpdateCallback__StaticFields {
};
struct NativeUpdateCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeUpdateCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeUpdateCallback__VTable vtable;
};

enum ScreenCapture_StereoScreenCaptureMode__Enum : int32_t {
  ScreenCapture_StereoScreenCaptureMode__Enum_LeftEye = 1,
  ScreenCapture_StereoScreenCaptureMode__Enum_RightEye = 2,
  ScreenCapture_StereoScreenCaptureMode__Enum_BothEyes = 3,
};
struct ScreenCapture_StereoScreenCaptureMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ScreenCapture_StereoScreenCaptureMode__Enum value;
};

struct Terrain_1__Fields {
  struct Behaviour__Fields _;
};
struct Terrain_1 {
  struct Terrain_1__Class *klass;
  struct MonitorData *monitor;
  struct Terrain_1__Fields fields;
};
struct Terrain_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Terrain_1__StaticFields {
};
struct Terrain_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Terrain_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Terrain_1__VTable vtable;
};

struct TerrainData_1__Fields {
  struct Object_1__Fields _;
};
struct TerrainData_1 {
  struct TerrainData_1__Class *klass;
  struct MonitorData *monitor;
  struct TerrainData_1__Fields fields;
};
struct TerrainData_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TerrainData_1__StaticFields {
  int32_t k_MaximumResolution;
  int32_t k_MinimumDetailResolutionPerPatch;
  int32_t k_MaximumDetailResolutionPerPatch;
  int32_t k_MaximumDetailPatchCount;
  int32_t k_MinimumAlphamapResolution;
  int32_t k_MaximumAlphamapResolution;
  int32_t k_MinimumBaseMapResolution;
  int32_t k_MaximumBaseMapResolution;
};
struct TerrainData_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainData_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainData_1__VTable vtable;
};}