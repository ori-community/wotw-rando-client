namespace app {
    struct IKMappingLimb {
        struct IKMappingLimb__Class* klass;
        MonitorData* monitor;
        struct IKMappingLimb__Fields fields;
    };

    struct IKMappingLimb__Array {
        struct IKMappingLimb__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IKMappingLimb* vector[32];
    };

    enum class FullBodyBipedEffector__Enum : int32_t {
        Body = 0x00000000,
        LeftShoulder = 0x00000001,
        RightShoulder = 0x00000002,
        LeftThigh = 0x00000003,
        RightThigh = 0x00000004,
        LeftHand = 0x00000005,
        RightHand = 0x00000006,
        LeftFoot = 0x00000007,
        RightFoot = 0x00000008,
    };

    struct FullBodyBipedEffector__Enum__Boxed {
        struct FullBodyBipedEffector__Enum__Class* klass;
        MonitorData* monitor;
        FullBodyBipedEffector__Enum value;
    };

    struct __declspec(align(8)) GrounderFBBIK_SpineEffector__Fields {
        FullBodyBipedEffector__Enum effectorType;

        float horizontalWeight;
        float verticalWeight;
    };

    struct GrounderFBBIK_SpineEffector {
        struct GrounderFBBIK_SpineEffector__Class* klass;
        MonitorData* monitor;
        struct GrounderFBBIK_SpineEffector__Fields fields;
    };

    struct GrounderFBBIK_SpineEffector__Array {
        struct GrounderFBBIK_SpineEffector__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GrounderFBBIK_SpineEffector* vector[32];
    };

    struct AimIK__VTable {
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

    struct AimIK__StaticFields {
    };

    struct AimIK__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AimIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AimIK__VTable vtable;
    };

    struct IK__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData InitiateSolver;
        VirtualInvokeData UpdateSolver;
        VirtualInvokeData FixTransforms;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct IK__StaticFields {
    };

    struct IK__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IK__VTable vtable;
    };

    struct FBIKChain_Smoothing__Enum__VTable {
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

    struct FBIKChain_Smoothing__Enum__StaticFields {
    };

    struct FBIKChain_Smoothing__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FBIKChain_Smoothing__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FBIKChain_Smoothing__Enum__VTable vtable;
    };

    struct IKSolver_Node__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IKSolver_Node__StaticFields {
    };

    struct IKSolver_Node__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolver_Node__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKSolver_Node__VTable vtable;
    };

    struct IKSolver_Node__Array__VTable {
    };

    struct IKSolver_Node__Array__StaticFields {
    };

    struct IKSolver_Node__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolver_Node__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKSolver_Node__Array__VTable vtable;
    };

    struct FBIKChain_ChildConstraint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FBIKChain_ChildConstraint__StaticFields {
    };

    struct FBIKChain_ChildConstraint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FBIKChain_ChildConstraint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FBIKChain_ChildConstraint__VTable vtable;
    };

    struct FBIKChain_ChildConstraint__Array__VTable {
    };

    struct FBIKChain_ChildConstraint__Array__StaticFields {
    };

    struct FBIKChain_ChildConstraint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FBIKChain_ChildConstraint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FBIKChain_ChildConstraint__Array__VTable vtable;
    };

    struct IKConstraintBend__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IKConstraintBend__StaticFields {
    };

    struct IKConstraintBend__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKConstraintBend__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKConstraintBend__VTable vtable;
    };

    struct FBIKChain__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct FBIKChain__StaticFields {
    };

    struct FBIKChain__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FBIKChain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FBIKChain__VTable vtable;
    };

    struct FBIKChain__Array__VTable {
    };

    struct FBIKChain__Array__StaticFields {
    };

    struct FBIKChain__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FBIKChain__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FBIKChain__Array__VTable vtable;
    };

    struct IKEffector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IKEffector__StaticFields {
    };

    struct IKEffector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKEffector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKEffector__VTable vtable;
    };

    struct IKEffector__Array__VTable {
    };

    struct IKEffector__Array__StaticFields {
    };

    struct IKEffector__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKEffector__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKEffector__Array__VTable vtable;
    };

    struct IKMapping__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValid;
        VirtualInvokeData Initiate;
    };

    struct IKMapping__StaticFields {
    };

    struct IKMapping__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMapping__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMapping__VTable vtable;
    };

    struct IKMapping_BoneMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IKMapping_BoneMap__StaticFields {
    };

    struct IKMapping_BoneMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMapping_BoneMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMapping_BoneMap__VTable vtable;
    };

    struct IKMapping_BoneMap__Array__VTable {
    };

    struct IKMapping_BoneMap__Array__StaticFields {
    };

    struct IKMapping_BoneMap__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMapping_BoneMap__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMapping_BoneMap__Array__VTable vtable;
    };

    struct IKMappingSpine__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValid;
        VirtualInvokeData Initiate;
    };

    struct IKMappingSpine__StaticFields {
    };

    struct IKMappingSpine__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMappingSpine__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMappingSpine__VTable vtable;
    };

    struct IKMappingBone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsValid;
        VirtualInvokeData Initiate;
    };

    struct IKMappingBone__StaticFields {
    };

    struct IKMappingBone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMappingBone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMappingBone__VTable vtable;
    };

    struct IKMappingBone__Array__VTable {
    };

    struct IKMappingBone__Array__StaticFields {
    };

    struct IKMappingBone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMappingBone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMappingBone__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMappingLimb__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMappingLimb__VTable vtable;
    };

    struct IKMappingLimb__Array__VTable {
    };

    struct IKMappingLimb__Array__StaticFields {
    };

    struct IKMappingLimb__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKMappingLimb__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IKMappingLimb__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolverFullBody__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolverFullBodyBiped__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FullBodyBipedIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FullBodyBipedIK__VTable vtable;
    };

    struct FullBodyBipedEffector__Enum__VTable {
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

    struct FullBodyBipedEffector__Enum__StaticFields {
    };

    struct FullBodyBipedEffector__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FullBodyBipedEffector__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FullBodyBipedEffector__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderFBBIK_SpineEffector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderFBBIK_SpineEffector__VTable vtable;
    };

    struct GrounderFBBIK_SpineEffector__Array__VTable {
    };

    struct GrounderFBBIK_SpineEffector__Array__StaticFields {
    };

    struct GrounderFBBIK_SpineEffector__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderFBBIK_SpineEffector__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderFBBIK_SpineEffector__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderFBBIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderFBBIK__VTable vtable;
    };

    struct GrounderIK__Fields {
        struct Grounder__Fields _;
        struct IK__Array* legs;
        struct Transform* pelvis;
        struct Transform* characterRoot;
        float rootRotationWeight;
        float rootRotationSpeed;
        float maxRootRotationAngle;
        struct Transform__Array* feet;
        struct Quaternion__Array* footRotations;
        struct Vector3 animatedPelvisLocalPosition;
        struct Vector3 solvedPelvisLocalPosition;
        int32_t solvedFeet;
        bool solved;
        float lastWeight;
    };

    struct GrounderIK {
        struct GrounderIK__Class* klass;
        MonitorData* monitor;
        struct GrounderIK__Fields fields;
    };

    struct IK__Array {
        struct IK__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IK* vector[32];
    };

    struct IK__Array__VTable {
    };

    struct IK__Array__StaticFields {
    };

    struct IK__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IK__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IK__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderIK__VTable vtable;
    };

    struct GrounderQuadruped__Fields {
        struct Grounder__Fields _;
        struct Grounding* forelegSolver;
        float rootRotationWeight;
        float minRootRotation;
        float maxRootRotation;
        float rootRotationSpeed;
        float maxLegOffset;
        float maxForeLegOffset;
        float maintainHeadRotationWeight;
        struct Transform* characterRoot;
        struct Transform* pelvis;
        struct Transform* lastSpineBone;
        struct Transform* head;
        struct IK__Array* legs;
        struct IK__Array* forelegs;
        struct Vector3 gravity;
        struct GrounderQuadruped_Foot__Array* feet;
        struct Vector3 animatedPelvisLocalPosition;
        struct Quaternion animatedPelvisLocalRotation;
        struct Quaternion animatedHeadLocalRotation;
        struct Vector3 solvedPelvisLocalPosition;
        struct Quaternion solvedPelvisLocalRotation;
        struct Quaternion solvedHeadLocalRotation;
        int32_t solvedFeet;
        bool solved;
        float angle;
        struct Transform* forefeetRoot;
        struct Quaternion headRotation;
        float lastWeight;
    };

    struct GrounderQuadruped {
        struct GrounderQuadruped__Class* klass;
        MonitorData* monitor;
        struct GrounderQuadruped__Fields fields;
    };

    struct GrounderQuadruped_Foot {
        struct IKSolver* solver;
        struct Transform* transform;
        struct Quaternion rotation;
        struct Grounding_Leg* leg;
    };

    struct GrounderQuadruped_Foot__Boxed {
        struct GrounderQuadruped_Foot__Class* klass;
        MonitorData* monitor;
        struct GrounderQuadruped_Foot fields;
    };

    struct GrounderQuadruped_Foot__Array {
        struct GrounderQuadruped_Foot__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderQuadruped_Foot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderQuadruped_Foot__VTable vtable;
    };

    struct GrounderQuadruped_Foot__Array__VTable {
    };

    struct GrounderQuadruped_Foot__Array__StaticFields {
    };

    struct GrounderQuadruped_Foot__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderQuadruped_Foot__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderQuadruped_Foot__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderQuadruped__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderQuadruped__VTable vtable;
    };

    struct GrounderQuadruped_Foot___VTable {
    };

    struct GrounderQuadruped_Foot___StaticFields {
    };

    struct GrounderQuadruped_Foot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GrounderQuadruped_Foot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GrounderQuadruped_Foot___VTable vtable;
    };

    struct CCDIK__Fields {
        struct IK__Fields _;
        struct IKSolverCCD* solver;
    };

    struct CCDIK {
        struct CCDIK__Class* klass;
        MonitorData* monitor;
        struct CCDIK__Fields fields;
    };

    struct IKSolverCCD__Fields {
        struct IKSolverHeuristic__Fields _;
        struct IKSolver_IterationDelegate* OnPreIteration;
    };

    struct IKSolverCCD {
        struct IKSolverCCD__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IKSolverCCD__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CCDIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CCDIK__VTable vtable;
    };

    struct FABRIK__Fields {
        struct IK__Fields _;
        struct IKSolverFABRIK* solver;
    };

    struct FABRIK {
        struct FABRIK__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FABRIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FABRIK__VTable vtable;
    };

    struct FABRIKRoot__Fields {
        struct IK__Fields _;
        struct IKSolverFABRIKRoot* solver;
    };

    struct FABRIKRoot {
        struct FABRIKRoot__Class* klass;
        MonitorData* monitor;
        struct FABRIKRoot__Fields fields;
    };

    struct IKSolverFABRIKRoot__Fields {
        struct IKSolver__Fields _;
        int32_t iterations;
        float rootPin;
        struct FABRIKChain__Array* chains;
        bool zeroWeightApplied;
        struct Boolean__Array* isRoot;
        struct Vector3 rootDefaultPosition;
    };

    struct IKSolverFABRIKRoot {
        struct IKSolverFABRIKRoot__Class* klass;
        MonitorData* monitor;
        struct IKSolverFABRIKRoot__Fields fields;
    };

    struct __declspec(align(8)) FABRIKChain__Fields {
        struct FABRIK* ik;
        float pull;
        float pin;
        struct Int32__Array* children;
    };

    struct FABRIKChain {
        struct FABRIKChain__Class* klass;
        MonitorData* monitor;
        struct FABRIKChain__Fields fields;
    };

    struct FABRIKChain__Array {
        struct FABRIKChain__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FABRIKChain* vector[32];
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct FABRIKChain__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct FABRIKChain__VTable vtable;
    };

} // namespace app
