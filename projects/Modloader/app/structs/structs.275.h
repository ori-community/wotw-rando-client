namespace app {
    struct HitReaction_HitPointBone__StaticFields {
    };

    struct HitReaction_HitPointBone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointBone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointBone__VTable vtable;
    };

    struct HitReaction_HitPointBone__Array__VTable {
    };

    struct HitReaction_HitPointBone__Array__StaticFields {
    };

    struct HitReaction_HitPointBone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointBone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointBone__Array__VTable vtable;
    };

    struct HitReaction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct HitReaction__StaticFields {
    };

    struct HitReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction__VTable vtable;
    };

    struct Inertia__Fields {
        struct OffsetModifier__Fields _;
        struct Inertia_Body__Array* bodies;
        struct OffsetModifier_OffsetLimits__Array* limits;
    };

    struct Inertia {
        struct Inertia__Class* klass;
        MonitorData* monitor;
        struct Inertia__Fields fields;
    };

    struct __declspec(align(8)) Inertia_Body__Fields {
        struct Transform* transform;
        struct Inertia_Body_EffectorLink__Array* effectorLinks;
        float speed;
        float acceleration;
        float matchVelocity;
        float gravity;
        struct Vector3 delta;
        struct Vector3 lazyPoint;
        struct Vector3 direction;
        struct Vector3 lastPosition;
        bool firstUpdate;
    };

    struct Inertia_Body {
        struct Inertia_Body__Class* klass;
        MonitorData* monitor;
        struct Inertia_Body__Fields fields;
    };

    struct __declspec(align(8)) Inertia_Body_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effector;

        float weight;
    };

    struct Inertia_Body_EffectorLink {
        struct Inertia_Body_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct Inertia_Body_EffectorLink__Fields fields;
    };

    struct Inertia_Body_EffectorLink__Array {
        struct Inertia_Body_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Inertia_Body_EffectorLink* vector[32];
    };

    struct Inertia_Body__Array {
        struct Inertia_Body__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Inertia_Body* vector[32];
    };

    struct __declspec(align(8)) OffsetModifier_OffsetLimits__Fields {
        FullBodyBipedEffector__Enum effector;

        float spring;
        bool x;
        bool y;
        bool z;
        float minX;
        float maxX;
        float minY;
        float maxY;
        float minZ;
        float maxZ;
    };

    struct OffsetModifier_OffsetLimits {
        struct OffsetModifier_OffsetLimits__Class* klass;
        MonitorData* monitor;
        struct OffsetModifier_OffsetLimits__Fields fields;
    };

    struct OffsetModifier_OffsetLimits__Array {
        struct OffsetModifier_OffsetLimits__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OffsetModifier_OffsetLimits* vector[32];
    };

    struct Inertia_Body_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Inertia_Body_EffectorLink__StaticFields {
    };

    struct Inertia_Body_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Inertia_Body_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Inertia_Body_EffectorLink__VTable vtable;
    };

    struct Inertia_Body_EffectorLink__Array__VTable {
    };

    struct Inertia_Body_EffectorLink__Array__StaticFields {
    };

    struct Inertia_Body_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Inertia_Body_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Inertia_Body_EffectorLink__Array__VTable vtable;
    };

    struct Inertia_Body__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Inertia_Body__StaticFields {
    };

    struct Inertia_Body__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Inertia_Body__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Inertia_Body__VTable vtable;
    };

    struct Inertia_Body__Array__VTable {
    };

    struct Inertia_Body__Array__StaticFields {
    };

    struct Inertia_Body__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Inertia_Body__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Inertia_Body__Array__VTable vtable;
    };

    struct OffsetModifier_OffsetLimits__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OffsetModifier_OffsetLimits__StaticFields {
    };

    struct OffsetModifier_OffsetLimits__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetModifier_OffsetLimits__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetModifier_OffsetLimits__VTable vtable;
    };

    struct OffsetModifier_OffsetLimits__Array__VTable {
    };

    struct OffsetModifier_OffsetLimits__Array__StaticFields {
    };

    struct OffsetModifier_OffsetLimits__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetModifier_OffsetLimits__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetModifier_OffsetLimits__Array__VTable vtable;
    };

    struct Inertia__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct Inertia__StaticFields {
    };

    struct Inertia__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Inertia__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Inertia__VTable vtable;
    };

    struct __declspec(align(8)) OffsetModifier_Initiate_d_8__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct OffsetModifier* __4__this;
    };

    struct OffsetModifier_Initiate_d_8 {
        struct OffsetModifier_Initiate_d_8__Class* klass;
        MonitorData* monitor;
        struct OffsetModifier_Initiate_d_8__Fields fields;
    };

    struct OffsetModifier_Initiate_d_8__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct OffsetModifier_Initiate_d_8__StaticFields {
    };

    struct OffsetModifier_Initiate_d_8__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetModifier_Initiate_d_8__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetModifier_Initiate_d_8__VTable vtable;
    };

    enum class Recoil_Handedness__Enum : int32_t {
        Right = 0x00000000,
        Left = 0x00000001,
    };

    struct Recoil_Handedness__Enum__Boxed {
        struct Recoil_Handedness__Enum__Class* klass;
        MonitorData* monitor;
        Recoil_Handedness__Enum value;
    };

    struct Recoil__Fields {
        struct OffsetModifier__Fields _;
        struct AimIK* aimIK;
        Recoil_Handedness__Enum handedness;

        bool twoHanded;
        struct AnimationCurve* recoilWeight;
        float magnitudeRandom;
        struct Vector3 rotationRandom;
        struct Vector3 handRotationOffset;
        float blendTime;
        struct Recoil_RecoilOffset__Array* offsets;
        struct Quaternion rotationOffset;
        float magnitudeMlp;
        float endTime;
        struct Quaternion handRotation;
        struct Quaternion secondaryHandRelativeRotation;
        struct Quaternion randomRotation;
        float length;
        bool initiated;
        float blendWeight;
        float w;
        struct Quaternion primaryHandRotation;
        bool handRotationsSet;
    };

    struct Recoil {
        struct Recoil__Class* klass;
        MonitorData* monitor;
        struct Recoil__Fields fields;
    };

    struct __declspec(align(8)) Recoil_RecoilOffset__Fields {
        struct Vector3 offset;
        float additivity;
        float maxAdditiveOffsetMag;
        struct Recoil_RecoilOffset_EffectorLink__Array* effectorLinks;
        struct Vector3 additiveOffset;
        struct Vector3 lastOffset;
    };

    struct Recoil_RecoilOffset {
        struct Recoil_RecoilOffset__Class* klass;
        MonitorData* monitor;
        struct Recoil_RecoilOffset__Fields fields;
    };

    struct __declspec(align(8)) Recoil_RecoilOffset_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effector;

        float weight;
    };

    struct Recoil_RecoilOffset_EffectorLink {
        struct Recoil_RecoilOffset_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct Recoil_RecoilOffset_EffectorLink__Fields fields;
    };

    struct Recoil_RecoilOffset_EffectorLink__Array {
        struct Recoil_RecoilOffset_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Recoil_RecoilOffset_EffectorLink* vector[32];
    };

    struct Recoil_RecoilOffset__Array {
        struct Recoil_RecoilOffset__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Recoil_RecoilOffset* vector[32];
    };

    struct Recoil_Handedness__Enum__VTable {
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

    struct Recoil_Handedness__Enum__StaticFields {
    };

    struct Recoil_Handedness__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil_Handedness__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil_Handedness__Enum__VTable vtable;
    };

    struct Recoil_RecoilOffset_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Recoil_RecoilOffset_EffectorLink__StaticFields {
    };

    struct Recoil_RecoilOffset_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil_RecoilOffset_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil_RecoilOffset_EffectorLink__VTable vtable;
    };

    struct Recoil_RecoilOffset_EffectorLink__Array__VTable {
    };

    struct Recoil_RecoilOffset_EffectorLink__Array__StaticFields {
    };

    struct Recoil_RecoilOffset_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil_RecoilOffset_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil_RecoilOffset_EffectorLink__Array__VTable vtable;
    };

    struct Recoil_RecoilOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Recoil_RecoilOffset__StaticFields {
    };

    struct Recoil_RecoilOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil_RecoilOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil_RecoilOffset__VTable vtable;
    };

    struct Recoil_RecoilOffset__Array__VTable {
    };

    struct Recoil_RecoilOffset__Array__StaticFields {
    };

    struct Recoil_RecoilOffset__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil_RecoilOffset__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil_RecoilOffset__Array__VTable vtable;
    };

    struct Recoil__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct Recoil__StaticFields {
    };

    struct Recoil__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Recoil__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Recoil__VTable vtable;
    };

    struct ShoulderRotator__Fields {
        struct MonoBehaviour__Fields _;
        float weight;
        float offset;
        struct FullBodyBipedIK* ik;
        bool skip;
    };

    struct ShoulderRotator {
        struct ShoulderRotator__Class* klass;
        MonitorData* monitor;
        struct ShoulderRotator__Fields fields;
    };

    struct ShoulderRotator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ShoulderRotator__StaticFields {
    };

    struct ShoulderRotator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShoulderRotator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShoulderRotator__VTable vtable;
    };

    struct AimBoxing__Fields {
        struct MonoBehaviour__Fields _;
        struct AimIK* aimIK;
        struct Transform* pin;
    };

    struct AimBoxing {
        struct AimBoxing__Class* klass;
        MonitorData* monitor;
        struct AimBoxing__Fields fields;
    };

    struct AimBoxing__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AimBoxing__StaticFields {
    };

    struct AimBoxing__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AimBoxing__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AimBoxing__VTable vtable;
    };

    struct SimpleAimingSystem__Fields {
        struct MonoBehaviour__Fields _;
        struct AimPoser* aimPoser;
        struct AimIK* aim;
        struct LookAtIK* lookAt;
        struct Animator* animator;
        float crossfadeTime;
        float minAimDistance;
        struct AimPoser_Pose* aimPose;
        struct AimPoser_Pose* lastPose;
    };

    struct SimpleAimingSystem {
        struct SimpleAimingSystem__Class* klass;
        MonitorData* monitor;
        struct SimpleAimingSystem__Fields fields;
    };

    struct SimpleAimingSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SimpleAimingSystem__StaticFields {
    };

    struct SimpleAimingSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SimpleAimingSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SimpleAimingSystem__VTable vtable;
    };

    struct TerrainOffset__Fields {
        struct MonoBehaviour__Fields _;
        struct AimIK* aimIK;
        struct Vector3 raycastOffset;
        struct LayerMask raycastLayers;
        float min;
        float max;
        float lerpSpeed;
        struct RaycastHit hit;
        struct Vector3 offset;
    };

    struct TerrainOffset {
        struct TerrainOffset__Class* klass;
        MonitorData* monitor;
        struct TerrainOffset__Fields fields;
    };

    struct TerrainOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TerrainOffset__StaticFields {
    };

    struct TerrainOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TerrainOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TerrainOffset__VTable vtable;
    };

    struct BipedIKvsAnimatorIK__Fields {
        struct MonoBehaviour__Fields _;
        struct Animator* animator;
        struct BipedIK* bipedIK;
        struct Transform* lookAtTargetBiped;
        struct Transform* lookAtTargetAnimator;
        float lookAtWeight;
        float lookAtBodyWeight;
        float lookAtHeadWeight;
        float lookAtEyesWeight;
        float lookAtClampWeight;
        float lookAtClampWeightHead;
        float lookAtClampWeightEyes;
        struct Transform* footTargetBiped;
        struct Transform* footTargetAnimator;
        float footPositionWeight;
        float footRotationWeight;
        struct Transform* handTargetBiped;
        struct Transform* handTargetAnimator;
        float handPositionWeight;
        float handRotationWeight;
    };

    struct BipedIKvsAnimatorIK {
        struct BipedIKvsAnimatorIK__Class* klass;
        MonitorData* monitor;
        struct BipedIKvsAnimatorIK__Fields fields;
    };

    struct BipedIKvsAnimatorIK__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BipedIKvsAnimatorIK__StaticFields {
    };

    struct BipedIKvsAnimatorIK__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BipedIKvsAnimatorIK__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BipedIKvsAnimatorIK__VTable vtable;
    };

    struct MechSpider__Fields {
        struct MonoBehaviour__Fields _;
        struct LayerMask raycastLayers;
        float scale;
        struct Transform* body;
        struct MechSpiderLeg__Array* legs;
        float legRotationWeight;
        float rootPositionSpeed;
        float rootRotationSpeed;
        float breatheSpeed;
        float breatheMagnitude;
        float height;
        float minHeight;
        float raycastHeight;
        float raycastDistance;
        struct Vector3 lastPosition;
        struct Vector3 defaultBodyLocalPosition;
        float sine;
        struct RaycastHit rootHit;
    };

    struct MechSpider {
        struct MechSpider__Class* klass;
        MonitorData* monitor;
        struct MechSpider__Fields fields;
    };

    struct MechSpiderLeg__Fields {
        struct MonoBehaviour__Fields _;
        struct MechSpider* mechSpider;
        struct MechSpiderLeg* unSync;
        struct Vector3 offset;
        float minDelay;
        float maxOffset;
        float stepSpeed;
        float footHeight;
        float velocityPrediction;
        float raycastFocus;
        struct AnimationCurve* yOffset;
        struct ParticleSystem* sand;
        struct IK* ik;
        float stepProgress;
        float lastStepTime;
        struct Vector3 defaultPosition;
        struct RaycastHit hit;
    };

    struct MechSpiderLeg {
        struct MechSpiderLeg__Class* klass;
        MonitorData* monitor;
        struct MechSpiderLeg__Fields fields;
    };

    struct MechSpiderLeg__Array {
        struct MechSpiderLeg__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MechSpiderLeg* vector[32];
    };

    struct MechSpiderLeg__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MechSpiderLeg__StaticFields {
    };

    struct MechSpiderLeg__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpiderLeg__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpiderLeg__VTable vtable;
    };

    struct MechSpiderLeg__Array__VTable {
    };

    struct MechSpiderLeg__Array__StaticFields {
    };

    struct MechSpiderLeg__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpiderLeg__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpiderLeg__Array__VTable vtable;
    };

    struct MechSpider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MechSpider__StaticFields {
    };

    struct MechSpider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpider__VTable vtable;
    };

    struct MechSpiderController__Fields {
        struct MonoBehaviour__Fields _;
        struct MechSpider* mechSpider;
        struct Transform* cameraTransform;
        float speed;
        float turnSpeed;
    };

    struct MechSpiderController {
        struct MechSpiderController__Class* klass;
        MonitorData* monitor;
        struct MechSpiderController__Fields fields;
    };

    struct MechSpiderController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MechSpiderController__StaticFields {
    };

    struct MechSpiderController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpiderController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpiderController__VTable vtable;
    };

    struct __declspec(align(8)) MechSpiderLeg_Step_d_24__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct MechSpiderLeg* __4__this;
        struct Vector3 stepStartPosition;
        struct Vector3 targetPosition;
    };

    struct MechSpiderLeg_Step_d_24 {
        struct MechSpiderLeg_Step_d_24__Class* klass;
        MonitorData* monitor;
        struct MechSpiderLeg_Step_d_24__Fields fields;
    };

    struct MechSpiderLeg_Step_d_24__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct MechSpiderLeg_Step_d_24__StaticFields {
    };

    struct MechSpiderLeg_Step_d_24__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpiderLeg_Step_d_24__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpiderLeg_Step_d_24__VTable vtable;
    };

    struct MechSpiderParticles__Fields {
        struct MonoBehaviour__Fields _;
        struct MechSpiderController* mechSpiderController;
        struct ParticleSystem* particles;
    };

    struct MechSpiderParticles {
        struct MechSpiderParticles__Class* klass;
        MonitorData* monitor;
        struct MechSpiderParticles__Fields fields;
    };

    struct MechSpiderParticles__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MechSpiderParticles__StaticFields {
    };

    struct MechSpiderParticles__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MechSpiderParticles__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MechSpiderParticles__VTable vtable;
    };

    enum class AnimationWarping_EffectorMode__Enum : int32_t {
        PositionOffset = 0x00000000,
        Position = 0x00000001,
    };

    struct AnimationWarping_EffectorMode__Enum__Boxed {
        struct AnimationWarping_EffectorMode__Enum__Class* klass;
        MonitorData* monitor;
        AnimationWarping_EffectorMode__Enum value;
    };

    struct AnimationWarping__Fields {
        struct OffsetModifier__Fields _;
        struct Animator* animator;
        AnimationWarping_EffectorMode__Enum effectorMode;

        struct AnimationWarping_Warp__Array* warps;
        AnimationWarping_EffectorMode__Enum lastMode;
    };

    struct AnimationWarping {
        struct AnimationWarping__Class* klass;
        MonitorData* monitor;
        struct AnimationWarping__Fields fields;
    };

    struct AnimationWarping_Warp {
        int32_t animationLayer;
        struct String* animationState;
        struct AnimationCurve* weightCurve;
        struct Transform* warpFrom;
        struct Transform* warpTo;
        FullBodyBipedEffector__Enum effector;
    };

    struct AnimationWarping_Warp__Boxed {
        struct AnimationWarping_Warp__Class* klass;
        MonitorData* monitor;
        struct AnimationWarping_Warp fields;
    };

    struct AnimationWarping_Warp__Array {
        struct AnimationWarping_Warp__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AnimationWarping_Warp vector[32];
    };

    struct AnimationWarping_EffectorMode__Enum__VTable {
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

    struct AnimationWarping_EffectorMode__Enum__StaticFields {
    };

    struct AnimationWarping_EffectorMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AnimationWarping_EffectorMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AnimationWarping_EffectorMode__Enum__VTable vtable;
    };

} // namespace app
