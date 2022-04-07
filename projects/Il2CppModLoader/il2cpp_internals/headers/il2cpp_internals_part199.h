namespace app {
struct BipedReferences_AutoDetectParams__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BipedReferences_AutoDetectParams__StaticFields {
};
struct BipedReferences_AutoDetectParams__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedReferences_AutoDetectParams__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedReferences_AutoDetectParams__VTable vtable;
};

struct Comments__Fields {
  struct MonoBehaviour__Fields _;
  struct String * text;
};
struct Comments {
  struct Comments__Class *klass;
  struct MonitorData *monitor;
  struct Comments__Fields fields;
};
struct Comments__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Comments__StaticFields {
};
struct Comments__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comments__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comments__VTable vtable;
};

struct DemoGUIMessage__Fields {
  struct MonoBehaviour__Fields _;
  struct String * text;
  struct Color color;
};
struct DemoGUIMessage {
  struct DemoGUIMessage__Class *klass;
  struct MonitorData *monitor;
  struct DemoGUIMessage__Fields fields;
};
struct DemoGUIMessage__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DemoGUIMessage__StaticFields {
};
struct DemoGUIMessage__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DemoGUIMessage__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DemoGUIMessage__VTable vtable;
};

struct Hierarchy {
  struct Hierarchy__Class *klass;
  struct MonitorData *monitor;
};
struct Hierarchy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Hierarchy__StaticFields {
};
struct Hierarchy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Hierarchy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Hierarchy__VTable vtable;
};

enum InterpolationMode__Enum : int32_t {
  InterpolationMode__Enum_None = 0,
  InterpolationMode__Enum_InOutCubic = 1,
  InterpolationMode__Enum_InOutQuintic = 2,
  InterpolationMode__Enum_InOutSine = 3,
  InterpolationMode__Enum_InQuintic = 4,
  InterpolationMode__Enum_InQuartic = 5,
  InterpolationMode__Enum_InCubic = 6,
  InterpolationMode__Enum_InQuadratic = 7,
  InterpolationMode__Enum_InElastic = 8,
  InterpolationMode__Enum_InElasticSmall = 9,
  InterpolationMode__Enum_InElasticBig = 10,
  InterpolationMode__Enum_InSine = 11,
  InterpolationMode__Enum_InBack = 12,
  InterpolationMode__Enum_OutQuintic = 13,
  InterpolationMode__Enum_OutQuartic = 14,
  InterpolationMode__Enum_OutCubic = 15,
  InterpolationMode__Enum_OutInCubic = 16,
  InterpolationMode__Enum_OutInQuartic = 17,
  InterpolationMode__Enum_OutElastic = 18,
  InterpolationMode__Enum_OutElasticSmall = 19,
  InterpolationMode__Enum_OutElasticBig = 20,
  InterpolationMode__Enum_OutSine = 21,
  InterpolationMode__Enum_OutBack = 22,
  InterpolationMode__Enum_OutBackCubic = 23,
  InterpolationMode__Enum_OutBackQuartic = 24,
  InterpolationMode__Enum_BackInCubic = 25,
  InterpolationMode__Enum_BackInQuartic = 26,
};
struct InterpolationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InterpolationMode__Enum value;
};

struct Interp {
  struct Interp__Class *klass;
  struct MonitorData *monitor;
};
struct Interp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Interp__StaticFields {
};
struct Interp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Interp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Interp__VTable vtable;
};

struct __declspec(align(8)) LargeHeader__Fields {
  struct String * name;
  struct String * color;
};
struct LargeHeader {
  struct LargeHeader__Class *klass;
  struct MonitorData *monitor;
  struct LargeHeader__Fields fields;
};
struct LargeHeader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct LargeHeader__StaticFields {
};
struct LargeHeader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LargeHeader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LargeHeader__VTable vtable;
};

struct SolverManager__Fields {
  struct MonoBehaviour__Fields _;
  float timeStep;
  bool fixTransforms;
  bool manuallyUpdated;
  float lastTime;
  struct Animator * animator;
  struct Animation * legacy;
  bool updateFrame;
  bool componentInitiated;
  bool skipSolverUpdate;
};
struct SolverManager {
  struct SolverManager__Class *klass;
  struct MonitorData *monitor;
  struct SolverManager__Fields fields;
};
struct SolverManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
};
struct SolverManager__StaticFields {
};
struct SolverManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SolverManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SolverManager__VTable vtable;
};

struct TriggerEventBroadcaster__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * target;
};
struct TriggerEventBroadcaster {
  struct TriggerEventBroadcaster__Class *klass;
  struct MonitorData *monitor;
  struct TriggerEventBroadcaster__Fields fields;
};
struct TriggerEventBroadcaster__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriggerEventBroadcaster__StaticFields {
};
struct TriggerEventBroadcaster__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerEventBroadcaster__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerEventBroadcaster__VTable vtable;
};

struct Warning_Logger__Fields {
  struct MulticastDelegate__Fields _;
};
struct Warning_Logger {
  struct Warning_Logger__Class *klass;
  struct MonitorData *monitor;
  struct Warning_Logger__Fields fields;
};
struct Warning_Logger__VTable {
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
struct Warning_Logger__StaticFields {
};
struct Warning_Logger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Warning_Logger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Warning_Logger__VTable vtable;
};

struct BipedIK__Fields {
  struct SolverManager__Fields _;
  struct BipedReferences * references;
  struct BipedIKSolvers * solvers;
};
struct BipedIK {
  struct BipedIK__Class *klass;
  struct MonitorData *monitor;
  struct BipedIK__Fields fields;
};
struct __declspec(align(8)) BipedIKSolvers__Fields {
  struct IKSolverLimb * leftFoot;
  struct IKSolverLimb * rightFoot;
  struct IKSolverLimb * leftHand;
  struct IKSolverLimb * rightHand;
  struct IKSolverFABRIK * spine;
  struct IKSolverLookAt * lookAt;
  struct IKSolverAim * aim;
  struct Constraints * pelvis;
  struct IKSolverLimb__Array * _limbs;
  struct IKSolver__Array * _ikSolvers;
};
struct BipedIKSolvers {
  struct BipedIKSolvers__Class *klass;
  struct MonitorData *monitor;
  struct BipedIKSolvers__Fields fields;
};
struct __declspec(align(8)) IKSolver__Fields {
  struct Vector3 IKPosition;
  float IKPositionWeight;
  bool _initiated_k__BackingField;
  struct IKSolver_UpdateDelegate * OnPreInitiate;
  struct IKSolver_UpdateDelegate * OnPostInitiate;
  struct IKSolver_UpdateDelegate * OnPreUpdate;
  struct IKSolver_UpdateDelegate * OnPostUpdate;
  bool firstInitiation;
  struct Transform * root;
};
struct IKSolver {
  struct IKSolver__Class *klass;
  struct MonitorData *monitor;
  struct IKSolver__Fields fields;
};
struct IKSolverTrigonometric__Fields {
  struct IKSolver__Fields _;
  struct Transform * target;
  float IKRotationWeight;
  struct Quaternion IKRotation;
  struct Vector3 bendNormal;
  struct IKSolverTrigonometric_TrigonometricBone * bone1;
  struct IKSolverTrigonometric_TrigonometricBone * bone2;
  struct IKSolverTrigonometric_TrigonometricBone * bone3;
  bool freezeBone1;
  struct Vector3 weightIKPosition;
  bool directHierarchy;
};
struct IKSolverTrigonometric {
  struct IKSolverTrigonometric__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverTrigonometric__Fields fields;
};
enum IKSolverLimb_BendModifier__Enum : int32_t {
  IKSolverLimb_BendModifier__Enum_Animation = 0,
  IKSolverLimb_BendModifier__Enum_Target = 1,
  IKSolverLimb_BendModifier__Enum_Parent = 2,
  IKSolverLimb_BendModifier__Enum_Arm = 3,
  IKSolverLimb_BendModifier__Enum_Goal = 4,
};
struct IKSolverLimb_BendModifier__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IKSolverLimb_BendModifier__Enum value;
};
struct IKSolverLimb__Fields {
  struct IKSolverTrigonometric__Fields _;
  enum AvatarIKGoal__Enum goal;
  enum IKSolverLimb_BendModifier__Enum bendModifier;
  float maintainRotationWeight;
  float bendModifierWeight;
  struct Transform * bendGoal;
  bool maintainBendFor1Frame;
  bool maintainRotationFor1Frame;
  struct Quaternion defaultRootRotation;
  struct Quaternion parentDefaultRotation;
  struct Quaternion bone3RotationBeforeSolve;
  struct Quaternion maintainRotation;
  struct Quaternion bone3DefaultRotation;
  struct Vector3 _bendNormal;
  struct Vector3 animationNormal;
  struct IKSolverLimb_AxisDirection__Array * axisDirectionsLeft;
  struct IKSolverLimb_AxisDirection__Array * axisDirectionsRight;
};
struct IKSolverLimb {
  struct IKSolverLimb__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverLimb__Fields fields;
};
struct IKSolver_UpdateDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct IKSolver_UpdateDelegate {
  struct IKSolver_UpdateDelegate__Class *klass;
  struct MonitorData *monitor;
  struct IKSolver_UpdateDelegate__Fields fields;
};
struct IKSolverHeuristic__Fields {
  struct IKSolver__Fields _;
  struct Transform * target;
  float tolerance;
  int32_t maxIterations;
  bool useRotationLimits;
  bool XY;
  struct IKSolver_Bone__Array * bones;
  struct Vector3 lastLocalDirection;
  float chainLength;
};
struct IKSolverHeuristic {
  struct IKSolverHeuristic__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverHeuristic__Fields fields;
};
struct __declspec(align(8)) IKSolver_Point__Fields {
  struct Transform * transform;
  float weight;
  struct Vector3 solverPosition;
  struct Quaternion solverRotation;
  struct Vector3 defaultLocalPosition;
  struct Quaternion defaultLocalRotation;
};
struct IKSolver_Point {
  struct IKSolver_Point__Class *klass;
  struct MonitorData *monitor;
  struct IKSolver_Point__Fields fields;
};
struct IKSolver_Bone__Fields {
  struct IKSolver_Point__Fields _;
  float length;
  float sqrMag;
  struct Vector3 axis;
  struct RotationLimit * _rotationLimit;
  bool isLimited;
};
struct IKSolver_Bone {
  struct IKSolver_Bone__Class *klass;
  struct MonitorData *monitor;
  struct IKSolver_Bone__Fields fields;
};
struct IKSolver_Bone__Array {
  struct IKSolver_Bone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolver_Bone * vector[32];
};
struct RotationLimit__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 axis;
  bool fixedDefaultLocalRotation;
  struct Quaternion defaultLocalRotation;
  bool initiated;
  bool applicationQuit;
  struct Quaternion inverseDefaultLocalRotation;
};
struct RotationLimit {
  struct RotationLimit__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimit__Fields fields;
};
struct RotationLimitAngle__Fields {
  struct RotationLimit__Fields _;
  float limit;
  float twistLimit;
};
struct RotationLimitAngle {
  struct RotationLimitAngle__Class *klass;
  struct MonitorData *monitor;
  struct RotationLimitAngle__Fields fields;
};
struct IKSolver_Point__Array {
  struct IKSolver_Point__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolver_Point * vector[32];
};
struct IKSolverAim__Fields {
  struct IKSolverHeuristic__Fields _;
  struct Transform * transform;
  struct Vector3 axis;
  struct Vector3 poleAxis;
  struct Vector3 polePosition;
  float poleWeight;
  struct Transform * poleTarget;
  float clampWeight;
  int32_t clampSmoothing;
  struct IKSolver_IterationDelegate * OnPreIteration;
  float step;
  struct Vector3 clampedIKPosition;
  struct RotationLimit * transformLimit;
  struct Transform * lastTransform;
};
struct IKSolverAim {
  struct IKSolverAim__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverAim__Fields fields;
};
struct IKSolver_IterationDelegate__Fields {
  struct MulticastDelegate__Fields _;
};
struct IKSolver_IterationDelegate {
  struct IKSolver_IterationDelegate__Class *klass;
  struct MonitorData *monitor;
  struct IKSolver_IterationDelegate__Fields fields;
};
struct IKSolverTrigonometric_TrigonometricBone__Fields {
  struct IKSolver_Bone__Fields _;
  struct Quaternion targetToLocalSpace;
  struct Vector3 defaultLocalBendNormal;
};
struct IKSolverTrigonometric_TrigonometricBone {
  struct IKSolverTrigonometric_TrigonometricBone__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverTrigonometric_TrigonometricBone__Fields fields;
};
struct IKSolverLimb_AxisDirection {
  struct Vector3 direction;
  struct Vector3 axis;
  float dot;
};
struct IKSolverLimb_AxisDirection__Boxed {
  struct IKSolverLimb_AxisDirection__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverLimb_AxisDirection fields;
};
struct IKSolverLimb_AxisDirection__Array {
  struct IKSolverLimb_AxisDirection__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolverLimb_AxisDirection vector[32];
};
struct IKSolverFABRIK__Fields {
  struct IKSolverHeuristic__Fields _;
  struct IKSolver_IterationDelegate * OnPreIteration;
  struct Boolean__Array * limitedBones;
  struct Vector3__Array * solverLocalPositions;
};
struct IKSolverFABRIK {
  struct IKSolverFABRIK__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverFABRIK__Fields fields;
};
struct IKSolverLookAt__Fields {
  struct IKSolver__Fields _;
  struct Transform * target;
  struct IKSolverLookAt_LookAtBone__Array * spine;
  struct IKSolverLookAt_LookAtBone * head;
  struct IKSolverLookAt_LookAtBone__Array * eyes;
  float bodyWeight;
  float headWeight;
  float eyesWeight;
  float clampWeight;
  float clampWeightHead;
  float clampWeightEyes;
  int32_t clampSmoothing;
  struct AnimationCurve * spineWeightCurve;
  struct Vector3__Array * spineForwards;
  struct Vector3__Array * headForwards;
  struct Vector3__Array * eyeForward;
};
struct IKSolverLookAt {
  struct IKSolverLookAt__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverLookAt__Fields fields;
};
struct IKSolverLookAt_LookAtBone__Fields {
  struct IKSolver_Bone__Fields _;
};
struct IKSolverLookAt_LookAtBone {
  struct IKSolverLookAt_LookAtBone__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverLookAt_LookAtBone__Fields fields;
};
struct IKSolverLookAt_LookAtBone__Array {
  struct IKSolverLookAt_LookAtBone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolverLookAt_LookAtBone * vector[32];
};
struct __declspec(align(8)) Constraints__Fields {
  struct Transform * transform;
  struct Vector3 positionOffset;
  struct Vector3 position;
  float positionWeight;
  struct Vector3 rotationOffset;
  struct Vector3 rotation;
  float rotationWeight;
};
struct Constraints {
  struct Constraints__Class *klass;
  struct MonitorData *monitor;
  struct Constraints__Fields fields;
};
struct IKSolverLimb__Array {
  struct IKSolverLimb__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolverLimb * vector[32];
};
struct IKSolver__Array {
  struct IKSolver__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IKSolver * vector[32];
};
struct IKSolver_UpdateDelegate__VTable {
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
struct IKSolver_UpdateDelegate__StaticFields {
};
struct IKSolver_UpdateDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolver_UpdateDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolver_UpdateDelegate__VTable vtable;
};
struct IKSolver_Point__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKSolver_Point__StaticFields {
};
struct IKSolver_Point__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolver_Point__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolver_Point__VTable vtable;
};
struct RotationLimitAngle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData LimitRotation;
};
struct RotationLimitAngle__StaticFields {
};
struct RotationLimitAngle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitAngle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitAngle__VTable vtable;
};
struct RotationLimit__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
};
struct RotationLimit__StaticFields {
};
struct RotationLimit__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimit__VTable vtable;
};
struct IKSolver_Bone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKSolver_Bone__StaticFields {
};
struct IKSolver_Bone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolver_Bone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolver_Bone__VTable vtable;
};
struct IKSolverHeuristic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_minBones;
  VirtualInvokeData get_boneLengthCanBeZero;
  VirtualInvokeData get_allowCommonParent;
  VirtualInvokeData get_localDirection;
};
struct IKSolverHeuristic__StaticFields {
};
struct IKSolverHeuristic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverHeuristic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverHeuristic__VTable vtable;
};
struct IKSolver_IterationDelegate__VTable {
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
struct IKSolver_IterationDelegate__StaticFields {
};
struct IKSolver_IterationDelegate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolver_IterationDelegate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolver_IterationDelegate__VTable vtable;
};
struct IKSolverAim__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_minBones;
  VirtualInvokeData get_boneLengthCanBeZero;
  VirtualInvokeData get_allowCommonParent;
  VirtualInvokeData get_localDirection;
};
struct IKSolverAim__StaticFields {
};
struct IKSolverAim__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverAim__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverAim__VTable vtable;
};
struct IKSolver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
};
struct IKSolver__StaticFields {
  struct Transform__Array * BatchedTransformQueryTransforms;
  struct Vector3__Array * BatchedTransformQueryPositions;
  struct Quaternion__Array * BatchedTransformQueryRotations;
};
struct IKSolver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolver__VTable vtable;
};
struct IKSolverTrigonometric_TrigonometricBone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKSolverTrigonometric_TrigonometricBone__StaticFields {
};
struct IKSolverTrigonometric_TrigonometricBone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverTrigonometric_TrigonometricBone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverTrigonometric_TrigonometricBone__VTable vtable;
};
struct IKSolverTrigonometric__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInitiateVirtual;
  VirtualInvokeData OnUpdateVirtual;
  VirtualInvokeData OnPostSolveVirtual;
};
struct IKSolverTrigonometric__StaticFields {
};
struct IKSolverTrigonometric__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverTrigonometric__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverTrigonometric__VTable vtable;
};
struct IKSolverLimb_AxisDirection__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKSolverLimb_AxisDirection__StaticFields {
};
struct IKSolverLimb_AxisDirection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverLimb_AxisDirection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverLimb_AxisDirection__VTable vtable;
};
struct IKSolverLimb__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData OnInitiateVirtual;
  VirtualInvokeData OnUpdateVirtual;
  VirtualInvokeData OnPostSolveVirtual;
};
struct IKSolverLimb__StaticFields {
};
struct IKSolverLimb__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverLimb__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverLimb__VTable vtable;
};
struct IKSolverFABRIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_minBones;
  VirtualInvokeData get_boneLengthCanBeZero;
  VirtualInvokeData get_allowCommonParent;
  VirtualInvokeData get_localDirection;
};
struct IKSolverFABRIK__StaticFields {
};
struct IKSolverFABRIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverFABRIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverFABRIK__VTable vtable;
};
struct IKSolverLookAt_LookAtBone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKSolverLookAt_LookAtBone__StaticFields {
};
struct IKSolverLookAt_LookAtBone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverLookAt_LookAtBone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverLookAt_LookAtBone__VTable vtable;
};
struct IKSolverLookAt__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData GetIKPosition;
  VirtualInvokeData GetPoints;
  VirtualInvokeData GetPoint;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData StoreDefaultLocalState;
  VirtualInvokeData OnInitiate;
  VirtualInvokeData OnUpdate;
};
struct IKSolverLookAt__StaticFields {
};
struct IKSolverLookAt__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverLookAt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverLookAt__VTable vtable;
};
struct Constraints__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Constraints__StaticFields {
};
struct Constraints__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Constraints__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Constraints__VTable vtable;
};
struct BipedIKSolvers__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BipedIKSolvers__StaticFields {
};
struct BipedIKSolvers__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedIKSolvers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedIKSolvers__VTable vtable;
};
struct BipedIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
};
struct BipedIK__StaticFields {
};
struct BipedIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedIK__VTable vtable;
};}