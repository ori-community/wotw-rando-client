namespace app {
struct IKMappingBone__StaticFields {
};
struct IKMappingBone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKMappingBone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKMappingBone__VTable vtable;
};
struct IKMappingLimb__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IsValid;
  VirtualInvokeData Initiate;
};
struct IKMappingLimb__StaticFields {
};
struct IKMappingLimb__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKMappingLimb__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKMappingLimb__VTable vtable;
};
struct IKSolverFullBody__VTable {
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
  VirtualInvokeData ReadPose;
  VirtualInvokeData Solve;
  VirtualInvokeData ApplyBendConstraints;
  VirtualInvokeData WritePose;
};
struct IKSolverFullBody__StaticFields {
};
struct IKSolverFullBody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverFullBody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverFullBody__VTable vtable;
};
struct IKSolverFullBodyBiped__VTable {
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
  VirtualInvokeData ReadPose;
  VirtualInvokeData Solve;
  VirtualInvokeData ApplyBendConstraints;
  VirtualInvokeData WritePose;
};
struct IKSolverFullBodyBiped__StaticFields {
};
struct IKSolverFullBodyBiped__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverFullBodyBiped__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverFullBodyBiped__VTable vtable;
};
struct FullBodyBipedIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct FullBodyBipedIK__StaticFields {
};
struct FullBodyBipedIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FullBodyBipedIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FullBodyBipedIK__VTable vtable;
};
struct GrounderFBBIK_SpineEffector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GrounderFBBIK_SpineEffector__StaticFields {
};
struct GrounderFBBIK_SpineEffector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrounderFBBIK_SpineEffector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrounderFBBIK_SpineEffector__VTable vtable;
};
struct GrounderFBBIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ResetPosition;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct GrounderFBBIK__StaticFields {
};
struct GrounderFBBIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrounderFBBIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrounderFBBIK__VTable vtable;
};

struct GrounderIK__Fields {
  struct Grounder__Fields _;
  struct IK__Array * legs;
  struct Transform * pelvis;
  struct Transform * characterRoot;
  float rootRotationWeight;
  float rootRotationSpeed;
  float maxRootRotationAngle;
  struct Transform__Array * feet;
  struct Quaternion__Array * footRotations;
  struct Vector3 animatedPelvisLocalPosition;
  struct Vector3 solvedPelvisLocalPosition;
  int32_t solvedFeet;
  bool solved;
  float lastWeight;
};
struct GrounderIK {
  struct GrounderIK__Class *klass;
  struct MonitorData *monitor;
  struct GrounderIK__Fields fields;
};
struct IK__Array {
  struct IK__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IK * vector[32];
};
struct GrounderIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ResetPosition;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct GrounderIK__StaticFields {
};
struct GrounderIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrounderIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrounderIK__VTable vtable;
};

struct GrounderQuadruped__Fields {
  struct Grounder__Fields _;
  struct Grounding * forelegSolver;
  float rootRotationWeight;
  float minRootRotation;
  float maxRootRotation;
  float rootRotationSpeed;
  float maxLegOffset;
  float maxForeLegOffset;
  float maintainHeadRotationWeight;
  struct Transform * characterRoot;
  struct Transform * pelvis;
  struct Transform * lastSpineBone;
  struct Transform * head;
  struct IK__Array * legs;
  struct IK__Array * forelegs;
  struct Vector3 gravity;
  struct GrounderQuadruped_Foot__Array * feet;
  struct Vector3 animatedPelvisLocalPosition;
  struct Quaternion animatedPelvisLocalRotation;
  struct Quaternion animatedHeadLocalRotation;
  struct Vector3 solvedPelvisLocalPosition;
  struct Quaternion solvedPelvisLocalRotation;
  struct Quaternion solvedHeadLocalRotation;
  int32_t solvedFeet;
  bool solved;
  float angle;
  struct Transform * forefeetRoot;
  struct Quaternion headRotation;
  float lastWeight;
};
struct GrounderQuadruped {
  struct GrounderQuadruped__Class *klass;
  struct MonitorData *monitor;
  struct GrounderQuadruped__Fields fields;
};
struct GrounderQuadruped_Foot {
  struct IKSolver * solver;
  struct Transform * transform;
  struct Quaternion rotation;
  struct Grounding_Leg * leg;
};
struct GrounderQuadruped_Foot__Boxed {
  struct GrounderQuadruped_Foot__Class *klass;
  struct MonitorData *monitor;
  struct GrounderQuadruped_Foot fields;
};
struct GrounderQuadruped_Foot__Array {
  struct GrounderQuadruped_Foot__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GrounderQuadruped_Foot vector[32];
};
struct GrounderQuadruped_Foot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GrounderQuadruped_Foot__StaticFields {
};
struct GrounderQuadruped_Foot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrounderQuadruped_Foot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrounderQuadruped_Foot__VTable vtable;
};
struct GrounderQuadruped__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData ResetPosition;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct GrounderQuadruped__StaticFields {
};
struct GrounderQuadruped__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GrounderQuadruped__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GrounderQuadruped__VTable vtable;
};

struct CCDIK__Fields {
  struct IK__Fields _;
  struct IKSolverCCD * solver;
};
struct CCDIK {
  struct CCDIK__Class *klass;
  struct MonitorData *monitor;
  struct CCDIK__Fields fields;
};
struct IKSolverCCD__Fields {
  struct IKSolverHeuristic__Fields _;
  struct IKSolver_IterationDelegate * OnPreIteration;
};
struct IKSolverCCD {
  struct IKSolverCCD__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverCCD__Fields fields;
};
struct IKSolverCCD__VTable {
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
struct IKSolverCCD__StaticFields {
};
struct IKSolverCCD__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverCCD__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverCCD__VTable vtable;
};
struct CCDIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct CCDIK__StaticFields {
};
struct CCDIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CCDIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CCDIK__VTable vtable;
};

struct FABRIK__Fields {
  struct IK__Fields _;
  struct IKSolverFABRIK * solver;
};
struct FABRIK {
  struct FABRIK__Class *klass;
  struct MonitorData *monitor;
  struct FABRIK__Fields fields;
};
struct FABRIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct FABRIK__StaticFields {
};
struct FABRIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FABRIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FABRIK__VTable vtable;
};

struct FABRIKRoot__Fields {
  struct IK__Fields _;
  struct IKSolverFABRIKRoot * solver;
};
struct FABRIKRoot {
  struct FABRIKRoot__Class *klass;
  struct MonitorData *monitor;
  struct FABRIKRoot__Fields fields;
};
struct IKSolverFABRIKRoot__Fields {
  struct IKSolver__Fields _;
  int32_t iterations;
  float rootPin;
  struct FABRIKChain__Array * chains;
  bool zeroWeightApplied;
  struct Boolean__Array * isRoot;
  struct Vector3 rootDefaultPosition;
};
struct IKSolverFABRIKRoot {
  struct IKSolverFABRIKRoot__Class *klass;
  struct MonitorData *monitor;
  struct IKSolverFABRIKRoot__Fields fields;
};
struct __declspec(align(8)) FABRIKChain__Fields {
  struct FABRIK * ik;
  float pull;
  float pin;
  struct Int32__Array * children;
};
struct FABRIKChain {
  struct FABRIKChain__Class *klass;
  struct MonitorData *monitor;
  struct FABRIKChain__Fields fields;
};
struct FABRIKChain__Array {
  struct FABRIKChain__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FABRIKChain * vector[32];
};
struct FABRIKChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FABRIKChain__StaticFields {
};
struct FABRIKChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FABRIKChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FABRIKChain__VTable vtable;
};
struct IKSolverFABRIKRoot__VTable {
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
struct IKSolverFABRIKRoot__StaticFields {
};
struct IKSolverFABRIKRoot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKSolverFABRIKRoot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKSolverFABRIKRoot__VTable vtable;
};
struct FABRIKRoot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct FABRIKRoot__StaticFields {
};
struct FABRIKRoot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FABRIKRoot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FABRIKRoot__VTable vtable;
};

struct IKExecutionOrder__Fields {
  struct MonoBehaviour__Fields _;
  struct IK__Array * IKComponents;
};
struct IKExecutionOrder {
  struct IKExecutionOrder__Class *klass;
  struct MonitorData *monitor;
  struct IKExecutionOrder__Fields fields;
};
struct IKExecutionOrder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IKExecutionOrder__StaticFields {
};
struct IKExecutionOrder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKExecutionOrder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKExecutionOrder__VTable vtable;
};

struct LimbIK__Fields {
  struct IK__Fields _;
  struct IKSolverLimb * solver;
};
struct LimbIK {
  struct LimbIK__Class *klass;
  struct MonitorData *monitor;
  struct LimbIK__Fields fields;
};
struct LimbIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct LimbIK__StaticFields {
};
struct LimbIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LimbIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LimbIK__VTable vtable;
};

struct LookAtIK__Fields {
  struct IK__Fields _;
  struct IKSolverLookAt * solver;
};
struct LookAtIK {
  struct LookAtIK__Class *klass;
  struct MonitorData *monitor;
  struct LookAtIK__Fields fields;
};
struct LookAtIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct LookAtIK__StaticFields {
};
struct LookAtIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LookAtIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LookAtIK__VTable vtable;
};

struct TrigonometricIK__Fields {
  struct IK__Fields _;
  struct IKSolverTrigonometric * solver;
};
struct TrigonometricIK {
  struct TrigonometricIK__Class *klass;
  struct MonitorData *monitor;
  struct TrigonometricIK__Fields fields;
};
struct TrigonometricIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData InitiateSolver;
  VirtualInvokeData UpdateSolver;
  VirtualInvokeData FixTransforms;
  VirtualInvokeData GetIKSolver;
  VirtualInvokeData OpenUserManual;
  VirtualInvokeData OpenScriptReference;
};
struct TrigonometricIK__StaticFields {
};
struct TrigonometricIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TrigonometricIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TrigonometricIK__VTable vtable;
};

struct FBBIKArmBending__Fields {
  struct MonoBehaviour__Fields _;
  struct FullBodyBipedIK * ik;
  struct Vector3 bendDirectionOffsetLeft;
  struct Vector3 bendDirectionOffsetRight;
  struct Vector3 characterSpaceBendOffsetLeft;
  struct Vector3 characterSpaceBendOffsetRight;
  struct Quaternion leftHandTargetRotation;
  struct Quaternion rightHandTargetRotation;
  bool initiated;
};
struct FBBIKArmBending {
  struct FBBIKArmBending__Class *klass;
  struct MonitorData *monitor;
  struct FBBIKArmBending__Fields fields;
};
struct FBBIKArmBending__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBBIKArmBending__StaticFields {
};
struct FBBIKArmBending__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBBIKArmBending__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBBIKArmBending__VTable vtable;
};

struct FBBIKHeadEffector__Fields {
  struct MonoBehaviour__Fields _;
  struct FullBodyBipedIK * ik;
  float positionWeight;
  float bodyWeight;
  float thighWeight;
  float rotationWeight;
  float bodyClampWeight;
  float headClampWeight;
  float bendWeight;
  struct FBBIKHeadEffector_BendBone__Array * bendBones;
  float CCDWeight;
  float roll;
  float damper;
  struct Transform__Array * CCDBones;
  float postStretchWeight;
  float maxStretch;
  float stretchDamper;
  bool fixHead;
  struct Transform__Array * stretchBones;
  struct Vector3 chestDirection;
  float chestDirectionWeight;
  struct Transform__Array * chestBones;
  struct IKSolver_UpdateDelegate * OnPostHeadEffectorFK;
  struct Vector3 offset;
  struct Vector3 headToBody;
  struct Vector3 shoulderCenterToHead;
  struct Vector3 headToLeftThigh;
  struct Vector3 headToRightThigh;
  struct Vector3 leftShoulderPos;
  struct Vector3 rightShoulderPos;
  float shoulderDist;
  float leftShoulderDist;
  float rightShoulderDist;
  struct Quaternion chestRotation;
  struct Quaternion headRotationRelativeToRoot;
  struct Quaternion__Array * ccdDefaultLocalRotations;
  struct Vector3 headLocalPosition;
  struct Quaternion headLocalRotation;
  struct Vector3__Array * stretchLocalPositions;
  struct Quaternion__Array * stretchLocalRotations;
  struct Vector3__Array * chestLocalPositions;
  struct Quaternion__Array * chestLocalRotations;
  int32_t bendBonesCount;
  int32_t ccdBonesCount;
  int32_t stretchBonesCount;
  int32_t chestBonesCount;
};
struct FBBIKHeadEffector {
  struct FBBIKHeadEffector__Class *klass;
  struct MonitorData *monitor;
  struct FBBIKHeadEffector__Fields fields;
};
struct __declspec(align(8)) FBBIKHeadEffector_BendBone__Fields {
  struct Transform * transform;
  float weight;
  struct Quaternion defaultLocalRotation;
};
struct FBBIKHeadEffector_BendBone {
  struct FBBIKHeadEffector_BendBone__Class *klass;
  struct MonitorData *monitor;
  struct FBBIKHeadEffector_BendBone__Fields fields;
};
struct FBBIKHeadEffector_BendBone__Array {
  struct FBBIKHeadEffector_BendBone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FBBIKHeadEffector_BendBone * vector[32];
};
struct FBBIKHeadEffector_BendBone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBBIKHeadEffector_BendBone__StaticFields {
};
struct FBBIKHeadEffector_BendBone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBBIKHeadEffector_BendBone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBBIKHeadEffector_BendBone__VTable vtable;
};
struct FBBIKHeadEffector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBBIKHeadEffector__StaticFields {
};
struct FBBIKHeadEffector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBBIKHeadEffector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBBIKHeadEffector__VTable vtable;
};

enum IKMappingLimb_BoneMapType__Enum : int32_t {
  IKMappingLimb_BoneMapType__Enum_Parent = 0,
  IKMappingLimb_BoneMapType__Enum_Bone1 = 1,
  IKMappingLimb_BoneMapType__Enum_Bone2 = 2,
  IKMappingLimb_BoneMapType__Enum_Bone3 = 3,
};
struct IKMappingLimb_BoneMapType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum IKMappingLimb_BoneMapType__Enum value;
};

enum FullBodyBipedChain__Enum : int32_t {
  FullBodyBipedChain__Enum_LeftArm = 0,
  FullBodyBipedChain__Enum_RightArm = 1,
  FullBodyBipedChain__Enum_LeftLeg = 2,
  FullBodyBipedChain__Enum_RightLeg = 3,
};
struct FullBodyBipedChain__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FullBodyBipedChain__Enum value;
};

struct TwistRelaxer__Fields {
  struct MonoBehaviour__Fields _;
  float weight;
  float parentChildCrossfade;
  struct Transform * parent;
  struct Transform * child;
  struct Vector3 twistAxis;
  struct Vector3 axis;
  struct Vector3 axisRelativeToParentDefault;
  struct Vector3 axisRelativeToChildDefault;
};
struct TwistRelaxer {
  struct TwistRelaxer__Class *klass;
  struct MonitorData *monitor;
  struct TwistRelaxer__Fields fields;
};
struct TwistRelaxer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TwistRelaxer__StaticFields {
};
struct TwistRelaxer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TwistRelaxer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TwistRelaxer__VTable vtable;
};

struct __declspec(align(8)) InteractionEffector__Fields {
  enum FullBodyBipedEffector__Enum _effectorType_k__BackingField;
  bool _isPaused_k__BackingField;
  struct InteractionObject * _interactionObject_k__BackingField;
  struct Poser * poser;
  struct IKEffector * effector;
  float timer;
  float length;
  float weight;
  float fadeInSpeed;
  float defaultPositionWeight;
  float defaultRotationWeight;
  float defaultPull;
  float defaultReach;
  float defaultPush;
  float defaultPushParent;
  float resetTimer;
  bool positionWeightUsed;
  bool rotationWeightUsed;
  bool pullUsed;
  bool reachUsed;
  bool pushUsed;
  bool pushParentUsed;
  bool pickedUp;
  bool defaults;
  bool pickUpOnPostFBBIK;
  struct Vector3 pickUpPosition;
  struct Vector3 pausePositionRelative;
  struct Quaternion pickUpRotation;
  struct Quaternion pauseRotationRelative;
  struct InteractionTarget * interactionTarget;
  struct Transform * target;
  struct List_1_System_Boolean_ * triggered;
  struct InteractionSystem * interactionSystem;
  bool started;
};
struct InteractionEffector {
  struct InteractionEffector__Class *klass;
  struct MonitorData *monitor;
  struct InteractionEffector__Fields fields;
};
struct InteractionObject__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * otherLookAtTarget;
  struct Transform * otherTargetsRoot;
  struct Transform * positionOffsetSpace;
  struct InteractionObject_WeightCurve__Array * weightCurves;
  struct InteractionObject_Multiplier__Array * multipliers;
  struct InteractionObject_InteractionEvent__Array * events;
  float _length_k__BackingField;
  struct InteractionSystem * _lastUsedInteractionSystem_k__BackingField;
  struct InteractionTarget__Array * targets;
};
struct InteractionObject {
  struct InteractionObject__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject__Fields fields;
};
enum InteractionObject_WeightCurve_Type__Enum : int32_t {
  InteractionObject_WeightCurve_Type__Enum_PositionWeight = 0,
  InteractionObject_WeightCurve_Type__Enum_RotationWeight = 1,
  InteractionObject_WeightCurve_Type__Enum_PositionOffsetX = 2,
  InteractionObject_WeightCurve_Type__Enum_PositionOffsetY = 3,
  InteractionObject_WeightCurve_Type__Enum_PositionOffsetZ = 4,
  InteractionObject_WeightCurve_Type__Enum_Pull = 5,
  InteractionObject_WeightCurve_Type__Enum_Reach = 6,
  InteractionObject_WeightCurve_Type__Enum_RotateBoneWeight = 7,
  InteractionObject_WeightCurve_Type__Enum_Push = 8,
  InteractionObject_WeightCurve_Type__Enum_PushParent = 9,
  InteractionObject_WeightCurve_Type__Enum_PoserWeight = 10,
};
struct InteractionObject_WeightCurve_Type__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractionObject_WeightCurve_Type__Enum value;
};
struct __declspec(align(8)) InteractionObject_WeightCurve__Fields {
  enum InteractionObject_WeightCurve_Type__Enum type;
  struct AnimationCurve * curve;
};
struct InteractionObject_WeightCurve {
  struct InteractionObject_WeightCurve__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject_WeightCurve__Fields fields;
};
struct InteractionObject_WeightCurve__Array {
  struct InteractionObject_WeightCurve__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject_WeightCurve * vector[32];
};
struct __declspec(align(8)) InteractionObject_Multiplier__Fields {
  enum InteractionObject_WeightCurve_Type__Enum curve;
  float multiplier;
  enum InteractionObject_WeightCurve_Type__Enum result;
};
struct InteractionObject_Multiplier {
  struct InteractionObject_Multiplier__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject_Multiplier__Fields fields;
};
struct InteractionObject_Multiplier__Array {
  struct InteractionObject_Multiplier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject_Multiplier * vector[32];
};
struct __declspec(align(8)) InteractionObject_InteractionEvent__Fields {
  float time;
  bool pause;
  bool pickUp;
  struct InteractionObject_AnimatorEvent__Array * animations;
  struct InteractionObject_Message__Array * messages;
};
struct InteractionObject_InteractionEvent {
  struct InteractionObject_InteractionEvent__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject_InteractionEvent__Fields fields;
};
struct InteractionObject_InteractionEvent__Array {
  struct InteractionObject_InteractionEvent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject_InteractionEvent * vector[32];
};
struct __declspec(align(8)) InteractionObject_AnimatorEvent__Fields {
  struct Animator * animator;
  struct Animation * animation;
  struct String * animationState;
  float crossfadeTime;
  int32_t layer;
  bool resetNormalizedTime;
};
struct InteractionObject_AnimatorEvent {
  struct InteractionObject_AnimatorEvent__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject_AnimatorEvent__Fields fields;
};
struct InteractionObject_AnimatorEvent__Array {
  struct InteractionObject_AnimatorEvent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject_AnimatorEvent * vector[32];
};
struct __declspec(align(8)) InteractionObject_Message__Fields {
  struct String * function;
  struct GameObject * recipient;
};
struct InteractionObject_Message {
  struct InteractionObject_Message__Class *klass;
  struct MonitorData *monitor;
  struct InteractionObject_Message__Fields fields;
};
struct InteractionObject_Message__Array {
  struct InteractionObject_Message__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionObject_Message * vector[32];
};
struct InteractionSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct String * targetTag;
  float fadeInTime;
  float speed;
  float resetToDefaultsSpeed;
  struct Collider * characterCollider;
  struct Transform * FPSCamera;
  struct LayerMask camRaycastLayers;
  float camRaycastDistance;
  struct List_1_RootMotion_FinalIK_InteractionTrigger_ * _triggersInRange_k__BackingField;
  struct List_1_RootMotion_FinalIK_InteractionTrigger_ * inContact;
  struct List_1_System_Int32_ * bestRangeIndexes;
  struct InteractionSystem_InteractionDelegate * OnInteractionStart;
  struct InteractionSystem_InteractionDelegate * OnInteractionPause;
  struct InteractionSystem_InteractionDelegate * OnInteractionPickUp;
  struct InteractionSystem_InteractionDelegate * OnInteractionResume;
  struct InteractionSystem_InteractionDelegate * OnInteractionStop;
  struct InteractionSystem_InteractionEventDelegate * OnInteractionEvent;
  struct RaycastHit raycastHit;
  struct FullBodyBipedIK * fullBody;
  struct InteractionLookAt * lookAt;
  struct InteractionEffector__Array * interactionEffectors;
  bool initiated;
  struct Collider * lastCollider;
  struct Collider * c;
};
struct InteractionSystem {
  struct InteractionSystem__Class *klass;
  struct MonitorData *monitor;
  struct InteractionSystem__Fields fields;
};
struct __declspec(align(8)) List_1_RootMotion_FinalIK_InteractionTrigger___Fields {
  struct InteractionTrigger__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};}