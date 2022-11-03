namespace app {
    struct __declspec(align(8)) RagdollUtility_Child__Fields {
        struct Transform* t;
        struct Vector3 localPosition;
        struct Quaternion localRotation;
    };

    struct RagdollUtility_Child {
        struct RagdollUtility_Child__Class* klass;
        MonitorData* monitor;
        struct RagdollUtility_Child__Fields fields;
    };

    struct RagdollUtility_Child__Array {
        struct RagdollUtility_Child__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RagdollUtility_Child* vector[32];
    };

    struct RagdollUtility_Rigidbone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RagdollUtility_Rigidbone__StaticFields {
    };

    struct RagdollUtility_Rigidbone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility_Rigidbone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility_Rigidbone__VTable vtable;
    };

    struct RagdollUtility_Rigidbone__Array__VTable {
    };

    struct RagdollUtility_Rigidbone__Array__StaticFields {
    };

    struct RagdollUtility_Rigidbone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility_Rigidbone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility_Rigidbone__Array__VTable vtable;
    };

    struct RagdollUtility_Child__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RagdollUtility_Child__StaticFields {
    };

    struct RagdollUtility_Child__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility_Child__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility_Child__VTable vtable;
    };

    struct RagdollUtility_Child__Array__VTable {
    };

    struct RagdollUtility_Child__Array__StaticFields {
    };

    struct RagdollUtility_Child__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility_Child__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility_Child__Array__VTable vtable;
    };

    struct RagdollUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RagdollUtility__StaticFields {
    };

    struct RagdollUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility__VTable vtable;
    };

    struct __declspec(align(8)) RagdollUtility_DisableRagdollSmooth_d_21__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct RagdollUtility* __4__this;
    };

    struct RagdollUtility_DisableRagdollSmooth_d_21 {
        struct RagdollUtility_DisableRagdollSmooth_d_21__Class* klass;
        MonitorData* monitor;
        struct RagdollUtility_DisableRagdollSmooth_d_21__Fields fields;
    };

    struct RagdollUtility_DisableRagdollSmooth_d_21__VTable {
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

    struct RagdollUtility_DisableRagdollSmooth_d_21__StaticFields {
    };

    struct RagdollUtility_DisableRagdollSmooth_d_21__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RagdollUtility_DisableRagdollSmooth_d_21__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RagdollUtility_DisableRagdollSmooth_d_21__VTable vtable;
    };

    struct RotationLimitHinge__Fields {
        struct RotationLimit__Fields _;
        bool useLimits;
        float min;
        float max;
        float zeroAxisDisplayOffset;
        struct Quaternion lastRotation;
        float lastAngle;
    };

    struct RotationLimitHinge {
        struct RotationLimitHinge__Class* klass;
        MonitorData* monitor;
        struct RotationLimitHinge__Fields fields;
    };

    struct RotationLimitHinge__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData LimitRotation;
    };

    struct RotationLimitHinge__StaticFields {
    };

    struct RotationLimitHinge__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitHinge__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitHinge__VTable vtable;
    };

    struct RotationLimitPolygonal__Fields {
        struct RotationLimit__Fields _;
        float twistLimit;
        int32_t smoothIterations;
        struct RotationLimitPolygonal_LimitPoint__Array* points;
        struct Vector3__Array* P;
        struct RotationLimitPolygonal_ReachCone__Array* reachCones;
    };

    struct RotationLimitPolygonal {
        struct RotationLimitPolygonal__Class* klass;
        MonitorData* monitor;
        struct RotationLimitPolygonal__Fields fields;
    };

    struct __declspec(align(8)) RotationLimitPolygonal_LimitPoint__Fields {
        struct Vector3 point;
        float tangentWeight;
    };

    struct RotationLimitPolygonal_LimitPoint {
        struct RotationLimitPolygonal_LimitPoint__Class* klass;
        MonitorData* monitor;
        struct RotationLimitPolygonal_LimitPoint__Fields fields;
    };

    struct RotationLimitPolygonal_LimitPoint__Array {
        struct RotationLimitPolygonal_LimitPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RotationLimitPolygonal_LimitPoint* vector[32];
    };

    struct __declspec(align(8)) RotationLimitPolygonal_ReachCone__Fields {
        struct Vector3__Array* tetrahedron;
        float volume;
        struct Vector3 S;
        struct Vector3 B;
    };

    struct RotationLimitPolygonal_ReachCone {
        struct RotationLimitPolygonal_ReachCone__Class* klass;
        MonitorData* monitor;
        struct RotationLimitPolygonal_ReachCone__Fields fields;
    };

    struct RotationLimitPolygonal_ReachCone__Array {
        struct RotationLimitPolygonal_ReachCone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RotationLimitPolygonal_ReachCone* vector[32];
    };

    struct RotationLimitPolygonal_LimitPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RotationLimitPolygonal_LimitPoint__StaticFields {
    };

    struct RotationLimitPolygonal_LimitPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitPolygonal_LimitPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitPolygonal_LimitPoint__VTable vtable;
    };

    struct RotationLimitPolygonal_LimitPoint__Array__VTable {
    };

    struct RotationLimitPolygonal_LimitPoint__Array__StaticFields {
    };

    struct RotationLimitPolygonal_LimitPoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitPolygonal_LimitPoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitPolygonal_LimitPoint__Array__VTable vtable;
    };

    struct RotationLimitPolygonal_ReachCone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RotationLimitPolygonal_ReachCone__StaticFields {
    };

    struct RotationLimitPolygonal_ReachCone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitPolygonal_ReachCone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitPolygonal_ReachCone__VTable vtable;
    };

    struct RotationLimitPolygonal_ReachCone__Array__VTable {
    };

    struct RotationLimitPolygonal_ReachCone__Array__StaticFields {
    };

    struct RotationLimitPolygonal_ReachCone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitPolygonal_ReachCone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitPolygonal_ReachCone__Array__VTable vtable;
    };

    struct RotationLimitPolygonal__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData LimitRotation;
    };

    struct RotationLimitPolygonal__StaticFields {
    };

    struct RotationLimitPolygonal__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitPolygonal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitPolygonal__VTable vtable;
    };

    struct RotationLimitSpline__Fields {
        struct RotationLimit__Fields _;
        float twistLimit;
        struct AnimationCurve* spline;
    };

    struct RotationLimitSpline {
        struct RotationLimitSpline__Class* klass;
        MonitorData* monitor;
        struct RotationLimitSpline__Fields fields;
    };

    struct RotationLimitSpline__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData LimitRotation;
    };

    struct RotationLimitSpline__StaticFields {
    };

    struct RotationLimitSpline__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RotationLimitSpline__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RotationLimitSpline__VTable vtable;
    };

    struct AimPoser__Fields {
        struct MonoBehaviour__Fields _;
        float angleBuffer;
        struct AimPoser_Pose__Array* poses;
    };

    struct AimPoser {
        struct AimPoser__Class* klass;
        MonitorData* monitor;
        struct AimPoser__Fields fields;
    };

    struct __declspec(align(8)) AimPoser_Pose__Fields {
        bool visualize;
        struct String* name;
        struct Vector3 direction;
        float yaw;
        float pitch;
        float angleBuffer;
    };

    struct AimPoser_Pose {
        struct AimPoser_Pose__Class* klass;
        MonitorData* monitor;
        struct AimPoser_Pose__Fields fields;
    };

    struct AimPoser_Pose__Array {
        struct AimPoser_Pose__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AimPoser_Pose* vector[32];
    };

    struct AimPoser_Pose__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AimPoser_Pose__StaticFields {
    };

    struct AimPoser_Pose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AimPoser_Pose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AimPoser_Pose__VTable vtable;
    };

    struct AimPoser_Pose__Array__VTable {
    };

    struct AimPoser_Pose__Array__StaticFields {
    };

    struct AimPoser_Pose__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AimPoser_Pose__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AimPoser_Pose__Array__VTable vtable;
    };

    struct AimPoser__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AimPoser__StaticFields {
    };

    struct AimPoser__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AimPoser__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AimPoser__VTable vtable;
    };

    struct OffsetModifier__Fields {
        struct MonoBehaviour__Fields _;
        float weight;
        struct FullBodyBipedIK* ik;
        float lastTime;
    };

    struct OffsetModifier {
        struct OffsetModifier__Class* klass;
        MonitorData* monitor;
        struct OffsetModifier__Fields fields;
    };

    struct Amplifier__Fields {
        struct OffsetModifier__Fields _;
        struct Amplifier_Body__Array* bodies;
    };

    struct Amplifier {
        struct Amplifier__Class* klass;
        MonitorData* monitor;
        struct Amplifier__Fields fields;
    };

    struct __declspec(align(8)) Amplifier_Body__Fields {
        struct Transform* transform;
        struct Transform* relativeTo;
        struct Amplifier_Body_EffectorLink__Array* effectorLinks;
        float verticalWeight;
        float horizontalWeight;
        float speed;
        struct Vector3 lastRelativePos;
        struct Vector3 smoothDelta;
        bool firstUpdate;
    };

    struct Amplifier_Body {
        struct Amplifier_Body__Class* klass;
        MonitorData* monitor;
        struct Amplifier_Body__Fields fields;
    };

    struct __declspec(align(8)) Amplifier_Body_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effector;

        float weight;
    };

    struct Amplifier_Body_EffectorLink {
        struct Amplifier_Body_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct Amplifier_Body_EffectorLink__Fields fields;
    };

    struct Amplifier_Body_EffectorLink__Array {
        struct Amplifier_Body_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Amplifier_Body_EffectorLink* vector[32];
    };

    struct Amplifier_Body__Array {
        struct Amplifier_Body__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Amplifier_Body* vector[32];
    };

    struct OffsetModifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct OffsetModifier__StaticFields {
    };

    struct OffsetModifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetModifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetModifier__VTable vtable;
    };

    struct Amplifier_Body_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Amplifier_Body_EffectorLink__StaticFields {
    };

    struct Amplifier_Body_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Amplifier_Body_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Amplifier_Body_EffectorLink__VTable vtable;
    };

    struct Amplifier_Body_EffectorLink__Array__VTable {
    };

    struct Amplifier_Body_EffectorLink__Array__StaticFields {
    };

    struct Amplifier_Body_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Amplifier_Body_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Amplifier_Body_EffectorLink__Array__VTable vtable;
    };

    struct Amplifier_Body__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Amplifier_Body__StaticFields {
    };

    struct Amplifier_Body__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Amplifier_Body__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Amplifier_Body__VTable vtable;
    };

    struct Amplifier_Body__Array__VTable {
    };

    struct Amplifier_Body__Array__StaticFields {
    };

    struct Amplifier_Body__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Amplifier_Body__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Amplifier_Body__Array__VTable vtable;
    };

    struct Amplifier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct Amplifier__StaticFields {
    };

    struct Amplifier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Amplifier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Amplifier__VTable vtable;
    };

    struct BodyTilt__Fields {
        struct OffsetModifier__Fields _;
        float tiltSpeed;
        float tiltSensitivity;
        struct OffsetPose* poseLeft;
        struct OffsetPose* poseRight;
        float tiltAngle;
        struct Vector3 lastForward;
    };

    struct BodyTilt {
        struct BodyTilt__Class* klass;
        MonitorData* monitor;
        struct BodyTilt__Fields fields;
    };

    struct OffsetPose__Fields {
        struct MonoBehaviour__Fields _;
        struct OffsetPose_EffectorLink__Array* effectorLinks;
    };

    struct OffsetPose {
        struct OffsetPose__Class* klass;
        MonitorData* monitor;
        struct OffsetPose__Fields fields;
    };

    struct __declspec(align(8)) OffsetPose_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effector;

        struct Vector3 offset;
        struct Vector3 pin;
        struct Vector3 pinWeight;
    };

    struct OffsetPose_EffectorLink {
        struct OffsetPose_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct OffsetPose_EffectorLink__Fields fields;
    };

    struct OffsetPose_EffectorLink__Array {
        struct OffsetPose_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct OffsetPose_EffectorLink* vector[32];
    };

    struct OffsetPose_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OffsetPose_EffectorLink__StaticFields {
    };

    struct OffsetPose_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetPose_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetPose_EffectorLink__VTable vtable;
    };

    struct OffsetPose_EffectorLink__Array__VTable {
    };

    struct OffsetPose_EffectorLink__Array__StaticFields {
    };

    struct OffsetPose_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetPose_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetPose_EffectorLink__Array__VTable vtable;
    };

    struct OffsetPose__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OffsetPose__StaticFields {
    };

    struct OffsetPose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OffsetPose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OffsetPose__VTable vtable;
    };

    struct BodyTilt__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnModifyOffset;
        VirtualInvokeData Start;
        VirtualInvokeData OnDestroy;
    };

    struct BodyTilt__StaticFields {
    };

    struct BodyTilt__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BodyTilt__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BodyTilt__VTable vtable;
    };

    struct HitReaction__Fields {
        struct OffsetModifier__Fields _;
        struct HitReaction_HitPointEffector__Array* effectorHitPoints;
        struct HitReaction_HitPointBone__Array* boneHitPoints;
    };

    struct HitReaction {
        struct HitReaction__Class* klass;
        MonitorData* monitor;
        struct HitReaction__Fields fields;
    };

    struct __declspec(align(8)) HitReaction_HitPoint__Fields {
        struct String* name;
        struct Collider* collider;
        float crossFadeTime;
        float _crossFader_k__BackingField;
        float _timer_k__BackingField;
        struct Vector3 _force_k__BackingField;
        struct Vector3 _point_k__BackingField;
        float length;
        float crossFadeSpeed;
        float lastTime;
    };

    struct HitReaction_HitPoint {
        struct HitReaction_HitPoint__Class* klass;
        MonitorData* monitor;
        struct HitReaction_HitPoint__Fields fields;
    };

    struct HitReaction_HitPointEffector__Fields {
        struct HitReaction_HitPoint__Fields _;
        struct AnimationCurve* offsetInForceDirection;
        struct AnimationCurve* offsetInUpDirection;
        struct HitReaction_HitPointEffector_EffectorLink__Array* effectorLinks;
    };

    struct HitReaction_HitPointEffector {
        struct HitReaction_HitPointEffector__Class* klass;
        MonitorData* monitor;
        struct HitReaction_HitPointEffector__Fields fields;
    };

    struct __declspec(align(8)) HitReaction_HitPointEffector_EffectorLink__Fields {
        FullBodyBipedEffector__Enum effector;

        float weight;
        struct Vector3 lastValue;
        struct Vector3 current;
    };

    struct HitReaction_HitPointEffector_EffectorLink {
        struct HitReaction_HitPointEffector_EffectorLink__Class* klass;
        MonitorData* monitor;
        struct HitReaction_HitPointEffector_EffectorLink__Fields fields;
    };

    struct HitReaction_HitPointEffector_EffectorLink__Array {
        struct HitReaction_HitPointEffector_EffectorLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReaction_HitPointEffector_EffectorLink* vector[32];
    };

    struct HitReaction_HitPointEffector__Array {
        struct HitReaction_HitPointEffector__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReaction_HitPointEffector* vector[32];
    };

    struct HitReaction_HitPointBone__Fields {
        struct HitReaction_HitPoint__Fields _;
        struct AnimationCurve* aroundCenterOfMass;
        struct HitReaction_HitPointBone_BoneLink__Array* boneLinks;
        struct Rigidbody* rigidbody;
    };

    struct HitReaction_HitPointBone {
        struct HitReaction_HitPointBone__Class* klass;
        MonitorData* monitor;
        struct HitReaction_HitPointBone__Fields fields;
    };

    struct __declspec(align(8)) HitReaction_HitPointBone_BoneLink__Fields {
        struct Transform* bone;
        float weight;
        struct Quaternion lastValue;
        struct Quaternion current;
    };

    struct HitReaction_HitPointBone_BoneLink {
        struct HitReaction_HitPointBone_BoneLink__Class* klass;
        MonitorData* monitor;
        struct HitReaction_HitPointBone_BoneLink__Fields fields;
    };

    struct HitReaction_HitPointBone_BoneLink__Array {
        struct HitReaction_HitPointBone_BoneLink__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReaction_HitPointBone_BoneLink* vector[32];
    };

    struct HitReaction_HitPointBone__Array {
        struct HitReaction_HitPointBone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HitReaction_HitPointBone* vector[32];
    };

    struct HitReaction_HitPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct HitReaction_HitPoint__StaticFields {
    };

    struct HitReaction_HitPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPoint__VTable vtable;
    };

    struct HitReaction_HitPointEffector_EffectorLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HitReaction_HitPointEffector_EffectorLink__StaticFields {
    };

    struct HitReaction_HitPointEffector_EffectorLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointEffector_EffectorLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointEffector_EffectorLink__VTable vtable;
    };

    struct HitReaction_HitPointEffector_EffectorLink__Array__VTable {
    };

    struct HitReaction_HitPointEffector_EffectorLink__Array__StaticFields {
    };

    struct HitReaction_HitPointEffector_EffectorLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointEffector_EffectorLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointEffector_EffectorLink__Array__VTable vtable;
    };

    struct HitReaction_HitPointEffector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetLength;
        VirtualInvokeData CrossFadeStart;
        VirtualInvokeData OnApply;
    };

    struct HitReaction_HitPointEffector__StaticFields {
    };

    struct HitReaction_HitPointEffector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointEffector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointEffector__VTable vtable;
    };

    struct HitReaction_HitPointEffector__Array__VTable {
    };

    struct HitReaction_HitPointEffector__Array__StaticFields {
    };

    struct HitReaction_HitPointEffector__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointEffector__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointEffector__Array__VTable vtable;
    };

    struct HitReaction_HitPointBone_BoneLink__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HitReaction_HitPointBone_BoneLink__StaticFields {
    };

    struct HitReaction_HitPointBone_BoneLink__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointBone_BoneLink__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointBone_BoneLink__VTable vtable;
    };

    struct HitReaction_HitPointBone_BoneLink__Array__VTable {
    };

    struct HitReaction_HitPointBone_BoneLink__Array__StaticFields {
    };

    struct HitReaction_HitPointBone_BoneLink__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitReaction_HitPointBone_BoneLink__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitReaction_HitPointBone_BoneLink__Array__VTable vtable;
    };

    struct HitReaction_HitPointBone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetLength;
        VirtualInvokeData CrossFadeStart;
        VirtualInvokeData OnApply;
    };

} // namespace app
