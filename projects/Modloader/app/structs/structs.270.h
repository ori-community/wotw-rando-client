namespace app {
    struct IKSolver__Array__VTable {
    };

    struct IKSolver__Array__StaticFields {
    };

    struct IKSolver__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolver__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKSolver__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BipedIKSolvers__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BipedIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BipedIK__VTable vtable;
    };

    struct __declspec(align(8)) Constraint__Fields {
        struct Transform* transform;
        float weight;
    };

    struct Constraint {
        struct Constraint__Class* klass;
        MonitorData* monitor;
        struct Constraint__Fields fields;
    };

    struct ConstraintPosition__Fields {
        struct Constraint__Fields _;
        struct Vector3 position;
    };

    struct ConstraintPosition {
        struct ConstraintPosition__Class* klass;
        MonitorData* monitor;
        struct ConstraintPosition__Fields fields;
    };

    struct ConstraintPosition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateConstraint;
    };

    struct ConstraintPosition__StaticFields {
    };

    struct ConstraintPosition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintPosition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintPosition__VTable vtable;
    };

    struct Constraint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
    };

    struct Constraint__StaticFields {
    };

    struct Constraint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Constraint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Constraint__VTable vtable;
    };

    struct ConstraintPositionOffset__Fields {
        struct Constraint__Fields _;
        struct Vector3 offset;
        struct Vector3 defaultLocalPosition;
        struct Vector3 lastLocalPosition;
        bool initiated;
    };

    struct ConstraintPositionOffset {
        struct ConstraintPositionOffset__Class* klass;
        MonitorData* monitor;
        struct ConstraintPositionOffset__Fields fields;
    };

    struct ConstraintPositionOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateConstraint;
    };

    struct ConstraintPositionOffset__StaticFields {
    };

    struct ConstraintPositionOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintPositionOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintPositionOffset__VTable vtable;
    };

    struct ConstraintRotation__Fields {
        struct Constraint__Fields _;
        struct Quaternion rotation;
    };

    struct ConstraintRotation {
        struct ConstraintRotation__Class* klass;
        MonitorData* monitor;
        struct ConstraintRotation__Fields fields;
    };

    struct ConstraintRotation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateConstraint;
    };

    struct ConstraintRotation__StaticFields {
    };

    struct ConstraintRotation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintRotation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintRotation__VTable vtable;
    };

    struct ConstraintRotationOffset__Fields {
        struct Constraint__Fields _;
        struct Quaternion Offset;
        struct Quaternion m_defaultLocalRotation;
        struct Quaternion m_lastLocalRotation;
        bool m_initiated;
    };

    struct ConstraintRotationOffset {
        struct ConstraintRotationOffset__Class* klass;
        MonitorData* monitor;
        struct ConstraintRotationOffset__Fields fields;
    };

    struct ConstraintRotationOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData UpdateConstraint;
    };

    struct ConstraintRotationOffset__StaticFields {
    };

    struct ConstraintRotationOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConstraintRotationOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConstraintRotationOffset__VTable vtable;
    };

    struct __declspec(align(8)) Finger__Fields {
        float weight;
        struct Transform* bone1;
        struct Transform* bone2;
        struct Transform* bone3;
        struct Transform* tip;
        struct Transform* target;
        bool _initiated_k__BackingField;
        struct IKSolverLimb* solver;
        struct Quaternion bone3RelativeToTarget;
        struct Vector3 bone3DefaultLocalPosition;
        struct Quaternion bone3DefaultLocalRotation;
    };

    struct Finger {
        struct Finger__Class* klass;
        MonitorData* monitor;
        struct Finger__Fields fields;
    };

    struct Finger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Finger__StaticFields {
    };

    struct Finger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Finger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Finger__VTable vtable;
    };

    struct FingerRig__Fields {
        struct SolverManager__Fields _;
        float weight;
        struct Finger__Array* fingers;
        bool _initiated_k__BackingField;
    };

    struct FingerRig {
        struct FingerRig__Class* klass;
        MonitorData* monitor;
        struct FingerRig__Fields fields;
    };

    struct Finger__Array {
        struct Finger__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Finger* vector[32];
    };

    struct Finger__Array__VTable {
    };

    struct Finger__Array__StaticFields {
    };

    struct Finger__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Finger__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Finger__Array__VTable vtable;
    };

    struct FingerRig__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData InitiateSolver;
        VirtualInvokeData UpdateSolver;
        VirtualInvokeData FixTransforms;
    };

    struct FingerRig__StaticFields {
    };

    struct FingerRig__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FingerRig__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FingerRig__VTable vtable;
    };

    struct Grounder__Fields {
        struct MonoBehaviour__Fields _;
        float weight;
        struct Grounding* solver;
        struct Grounder_GrounderDelegate* OnPreGrounder;
        struct Grounder_GrounderDelegate* OnPostGrounder;
        bool initiated;
    };

    struct Grounder {
        struct Grounder__Class* klass;
        MonitorData* monitor;
        struct Grounder__Fields fields;
    };

    enum class Grounding_Quality__Enum : int32_t {
        Fastest = 0x00000000,
        Simple = 0x00000001,
        Best = 0x00000002,
    };

    struct Grounding_Quality__Enum__Boxed {
        struct Grounding_Quality__Enum__Class* klass;
        MonitorData* monitor;
        Grounding_Quality__Enum value;
    };

    struct __declspec(align(8)) Grounding__Fields {
        struct LayerMask layers;
        float maxStep;
        float heightOffset;
        float footSpeed;
        float footRadius;
        float prediction;
        float footRotationWeight;
        float footRotationSpeed;
        float maxFootRotationAngle;
        bool rotateSolver;
        float pelvisSpeed;
        float pelvisDamper;
        float lowerPelvisWeight;
        float liftPelvisWeight;
        float rootSphereCastRadius;
        Grounding_Quality__Enum quality;

        struct Grounding_Leg__Array* _legs_k__BackingField;
        struct Grounding_Pelvis* _pelvis_k__BackingField;
        bool _isGrounded_k__BackingField;
        struct Transform* _root_k__BackingField;
        struct RaycastHit _rootHit_k__BackingField;
        bool initiated;
    };

    struct Grounding {
        struct Grounding__Class* klass;
        MonitorData* monitor;
        struct Grounding__Fields fields;
    };

    struct __declspec(align(8)) Grounding_Leg__Fields {
        bool _isGrounded_k__BackingField;
        struct Vector3 _IKPosition_k__BackingField;
        struct Quaternion _rotationOffset_k__BackingField;
        bool _initiated_k__BackingField;
        float _heightFromGround_k__BackingField;
        struct Vector3 _velocity_k__BackingField;
        struct Transform* _transform_k__BackingField;
        float _IKOffset_k__BackingField;
        struct Grounding* grounding;
        float lastTime;
        float deltaTime;
        struct Vector3 lastPosition;
        struct Quaternion toHitNormal;
        struct Quaternion r;
        struct RaycastHit heelHit;
        struct Vector3 up;
    };

    struct Grounding_Leg {
        struct Grounding_Leg__Class* klass;
        MonitorData* monitor;
        struct Grounding_Leg__Fields fields;
    };

    struct Grounding_Leg__Array {
        struct Grounding_Leg__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Grounding_Leg* vector[32];
    };

    struct __declspec(align(8)) Grounding_Pelvis__Fields {
        struct Vector3 _IKOffset_k__BackingField;
        float _heightOffset_k__BackingField;
        struct Grounding* grounding;
        struct Vector3 lastRootPosition;
        float damperF;
        bool initiated;
        float lastTime;
    };

    struct Grounding_Pelvis {
        struct Grounding_Pelvis__Class* klass;
        MonitorData* monitor;
        struct Grounding_Pelvis__Fields fields;
    };

    struct Grounder_GrounderDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Grounder_GrounderDelegate {
        struct Grounder_GrounderDelegate__Class* klass;
        MonitorData* monitor;
        struct Grounder_GrounderDelegate__Fields fields;
    };

    struct GrounderBipedIK__Fields {
        struct Grounder__Fields _;
        struct BipedIK* ik;
        float spineBend;
        float spineSpeed;
        struct Transform__Array* feet;
        struct Quaternion__Array* footRotations;
        struct Vector3 animatedPelvisLocalPosition;
        struct Vector3 solvedPelvisLocalPosition;
        struct Vector3 spineOffset;
        float lastWeight;
    };

    struct GrounderBipedIK {
        struct GrounderBipedIK__Class* klass;
        MonitorData* monitor;
        struct GrounderBipedIK__Fields fields;
    };

    struct Grounding_Quality__Enum__VTable {
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

    struct Grounding_Quality__Enum__StaticFields {
    };

    struct Grounding_Quality__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounding_Quality__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounding_Quality__Enum__VTable vtable;
    };

    struct Grounding_Leg__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Grounding_Leg__StaticFields {
    };

    struct Grounding_Leg__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounding_Leg__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounding_Leg__VTable vtable;
    };

    struct Grounding_Leg__Array__VTable {
    };

    struct Grounding_Leg__Array__StaticFields {
    };

    struct Grounding_Leg__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounding_Leg__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounding_Leg__Array__VTable vtable;
    };

    struct Grounding_Pelvis__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Grounding_Pelvis__StaticFields {
    };

    struct Grounding_Pelvis__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounding_Pelvis__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounding_Pelvis__VTable vtable;
    };

    struct Grounding__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Grounding__StaticFields {
    };

    struct Grounding__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounding__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounding__VTable vtable;
    };

    struct Grounder_GrounderDelegate__VTable {
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

    struct Grounder_GrounderDelegate__StaticFields {
    };

    struct Grounder_GrounderDelegate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounder_GrounderDelegate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounder_GrounderDelegate__VTable vtable;
    };

    struct GrounderBipedIK__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData ResetPosition;
        VirtualInvokeData OpenUserManual;
        VirtualInvokeData OpenScriptReference;
    };

    struct GrounderBipedIK__StaticFields {
    };

    struct GrounderBipedIK__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderBipedIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderBipedIK__VTable vtable;
    };

    struct Grounder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct Grounder__StaticFields {
    };

    struct Grounder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Grounder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Grounder__VTable vtable;
    };

    struct GrounderFBBIK__Fields {
        struct Grounder__Fields _;
        struct FullBodyBipedIK* ik;
        float spineBend;
        float spineSpeed;
        struct GrounderFBBIK_SpineEffector__Array* spine;
        struct Transform__Array* feet;
        struct Vector3 spineOffset;
        bool firstSolve;
    };

    struct GrounderFBBIK {
        struct GrounderFBBIK__Class* klass;
        MonitorData* monitor;
        struct GrounderFBBIK__Fields fields;
    };

    struct IK__Fields {
        struct SolverManager__Fields _;
    };

    struct IK {
        struct IK__Class* klass;
        MonitorData* monitor;
        struct IK__Fields fields;
    };

    struct FullBodyBipedIK__Fields {
        struct IK__Fields _;
        struct BipedReferences* references;
        struct IKSolverFullBodyBiped* solver;
    };

    struct FullBodyBipedIK {
        struct FullBodyBipedIK__Class* klass;
        MonitorData* monitor;
        struct FullBodyBipedIK__Fields fields;
    };

    struct AimIK__Fields {
        struct IK__Fields _;
        struct IKSolverAim* solver;
    };

    struct AimIK {
        struct AimIK__Class* klass;
        MonitorData* monitor;
        struct AimIK__Fields fields;
    };

    struct IKSolverFullBody__Fields {
        struct IKSolver__Fields _;
        int32_t iterations;
        struct FBIKChain__Array* chain;
        struct IKEffector__Array* effectors;
        struct IKMappingSpine* spineMapping;
        struct IKMappingBone__Array* boneMappings;
        struct IKMappingLimb__Array* limbMappings;
        struct IKSolver_UpdateDelegate* OnPreRead;
        struct IKSolver_UpdateDelegate* OnPreSolve;
        struct IKSolver_IterationDelegate* OnPreIteration;
        struct IKSolver_IterationDelegate* OnPostIteration;
        struct IKSolver_UpdateDelegate* OnPreBend;
        struct IKSolver_UpdateDelegate* OnPostSolve;
        struct IKSolver_UpdateDelegate* OnStoreDefaultLocalState;
        struct IKSolver_UpdateDelegate* OnFixTransforms;
    };

    struct IKSolverFullBody {
        struct IKSolverFullBody__Class* klass;
        MonitorData* monitor;
        struct IKSolverFullBody__Fields fields;
    };

    struct IKSolverFullBodyBiped__Fields {
        struct IKSolverFullBody__Fields _;
        struct Transform* rootNode;
        float spineStiffness;
        float pullBodyVertical;
        float pullBodyHorizontal;
        struct Vector3 _pullBodyOffset_k__BackingField;
        struct Vector3 offset;
    };

    struct IKSolverFullBodyBiped {
        struct IKSolverFullBodyBiped__Class* klass;
        MonitorData* monitor;
        struct IKSolverFullBodyBiped__Fields fields;
    };

    enum class FBIKChain_Smoothing__Enum : int32_t {
        None = 0x00000000,
        Exponential = 0x00000001,
        Cubic = 0x00000002,
    };

    struct FBIKChain_Smoothing__Enum__Boxed {
        struct FBIKChain_Smoothing__Enum__Class* klass;
        MonitorData* monitor;
        FBIKChain_Smoothing__Enum value;
    };

    struct __declspec(align(8)) FBIKChain__Fields {
        float pin;
        float pull;
        float push;
        float pushParent;
        float reach;
        FBIKChain_Smoothing__Enum reachSmoothing;

        FBIKChain_Smoothing__Enum pushSmoothing;

        struct IKSolver_Node__Array* nodes;
        struct Int32__Array* children;
        struct FBIKChain_ChildConstraint__Array* childConstraints;
        struct IKConstraintBend* bendConstraint;
        float rootLength;
        bool initiated;
        float length;
        float distance;
        struct IKSolver_Point* p;
        float reachForce;
        float pullParentSum;
        struct Single__Array* crossFades;
        float sqrMag1;
        float sqrMag2;
        float sqrMagDif;
    };

    struct FBIKChain {
        struct FBIKChain__Class* klass;
        MonitorData* monitor;
        struct FBIKChain__Fields fields;
    };

    struct IKSolver_Node__Fields {
        struct IKSolver_Point__Fields _;
        float length;
        float effectorPositionWeight;
        float effectorRotationWeight;
        struct Vector3 offset;
    };

    struct IKSolver_Node {
        struct IKSolver_Node__Class* klass;
        MonitorData* monitor;
        struct IKSolver_Node__Fields fields;
    };

    struct IKSolver_Node__Array {
        struct IKSolver_Node__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKSolver_Node* vector[32];
    };

    struct __declspec(align(8)) FBIKChain_ChildConstraint__Fields {
        float pushElasticity;
        float pullElasticity;
        struct Transform* bone1;
        struct Transform* bone2;
        float _nominalDistance_k__BackingField;
        bool _isRigid_k__BackingField;
        float crossFade;
        float inverseCrossFade;
        int32_t chain1Index;
        int32_t chain2Index;
    };

    struct FBIKChain_ChildConstraint {
        struct FBIKChain_ChildConstraint__Class* klass;
        MonitorData* monitor;
        struct FBIKChain_ChildConstraint__Fields fields;
    };

    struct FBIKChain_ChildConstraint__Array {
        struct FBIKChain_ChildConstraint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FBIKChain_ChildConstraint* vector[32];
    };

    struct __declspec(align(8)) IKConstraintBend__Fields {
        struct Transform* bone1;
        struct Transform* bone2;
        struct Transform* bone3;
        struct Transform* bendGoal;
        struct Vector3 direction;
        struct Quaternion rotationOffset;
        float weight;
        struct Vector3 defaultLocalDirection;
        struct Vector3 defaultChildDirection;
        float clampF;
        int32_t chainIndex1;
        int32_t nodeIndex1;
        int32_t chainIndex2;
        int32_t nodeIndex2;
        int32_t chainIndex3;
        int32_t nodeIndex3;
        bool _initiated_k__BackingField;
    };

    struct IKConstraintBend {
        struct IKConstraintBend__Class* klass;
        MonitorData* monitor;
        struct IKConstraintBend__Fields fields;
    };

    struct FBIKChain__Array {
        struct FBIKChain__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FBIKChain* vector[32];
    };

    struct __declspec(align(8)) IKEffector__Fields {
        struct Transform* bone;
        struct Transform* target;
        float positionWeight;
        float rotationWeight;
        struct Vector3 position;
        struct Quaternion rotation;
        struct Vector3 positionOffset;
        bool _isEndEffector_k__BackingField;
        bool effectChildNodes;
        float maintainRelativePositionWeight;
        struct Transform__Array* childBones;
        struct Transform* planeBone1;
        struct Transform* planeBone2;
        struct Transform* planeBone3;
        struct Quaternion planeRotationOffset;
        float posW;
        float rotW;
        struct Vector3__Array* localPositions;
        bool usePlaneNodes;
        struct Quaternion animatedPlaneRotation;
        struct Vector3 animatedPosition;
        bool firstUpdate;
        int32_t chainIndex;
        int32_t nodeIndex;
        int32_t plane1ChainIndex;
        int32_t plane1NodeIndex;
        int32_t plane2ChainIndex;
        int32_t plane2NodeIndex;
        int32_t plane3ChainIndex;
        int32_t plane3NodeIndex;
        struct Int32__Array* childChainIndexes;
        struct Int32__Array* childNodeIndexes;
    };

    struct IKEffector {
        struct IKEffector__Class* klass;
        MonitorData* monitor;
        struct IKEffector__Fields fields;
    };

    struct IKEffector__Array {
        struct IKEffector__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKEffector* vector[32];
    };

    struct IKMapping {
        struct IKMapping__Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) IKMappingSpine__Fields {
        struct Transform__Array* spineBones;
        struct Transform* leftUpperArmBone;
        struct Transform* rightUpperArmBone;
        struct Transform* leftThighBone;
        struct Transform* rightThighBone;
        int32_t iterations;
        float twistWeight;
        int32_t rootNodeIndex;
        struct IKMapping_BoneMap__Array* spine;
        struct IKMapping_BoneMap* leftUpperArm;
        struct IKMapping_BoneMap* rightUpperArm;
        struct IKMapping_BoneMap* leftThigh;
        struct IKMapping_BoneMap* rightThigh;
        bool useFABRIK;
    };

    struct IKMappingSpine {
        struct IKMappingSpine__Class* klass;
        MonitorData* monitor;
        struct IKMappingSpine__Fields fields;
    };

    struct __declspec(align(8)) IKMapping_BoneMap__Fields {
        struct Transform* transform;
        int32_t chainIndex;
        int32_t nodeIndex;
        struct Vector3 defaultLocalPosition;
        struct Quaternion defaultLocalRotation;
        struct Vector3 localSwingAxis;
        struct Vector3 localTwistAxis;
        struct Vector3 planePosition;
        struct Vector3 ikPosition;
        struct Quaternion defaultLocalTargetRotation;
        struct Quaternion maintainRotation;
        float length;
        struct Quaternion animatedRotation;
        struct Transform* planeBone1;
        struct Transform* planeBone2;
        struct Transform* planeBone3;
        int32_t plane1ChainIndex;
        int32_t plane1NodeIndex;
        int32_t plane2ChainIndex;
        int32_t plane2NodeIndex;
        int32_t plane3ChainIndex;
        int32_t plane3NodeIndex;
    };

    struct IKMapping_BoneMap {
        struct IKMapping_BoneMap__Class* klass;
        MonitorData* monitor;
        struct IKMapping_BoneMap__Fields fields;
    };

    struct IKMapping_BoneMap__Array {
        struct IKMapping_BoneMap__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKMapping_BoneMap* vector[32];
    };

    struct __declspec(align(8)) IKMappingBone__Fields {
        struct Transform* bone;
        float maintainRotationWeight;
        struct IKMapping_BoneMap* boneMap;
    };

    struct IKMappingBone {
        struct IKMappingBone__Class* klass;
        MonitorData* monitor;
        struct IKMappingBone__Fields fields;
    };

    struct IKMappingBone__Array {
        struct IKMappingBone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKMappingBone* vector[32];
    };

    struct __declspec(align(8)) IKMappingLimb__Fields {
        struct Transform* parentBone;
        struct Transform* bone1;
        struct Transform* bone2;
        struct Transform* bone3;
        float maintainRotationWeight;
        float weight;
        struct IKMapping_BoneMap* boneMapParent;
        struct IKMapping_BoneMap* boneMap1;
        struct IKMapping_BoneMap* boneMap2;
        struct IKMapping_BoneMap* boneMap3;
    };

} // namespace app
