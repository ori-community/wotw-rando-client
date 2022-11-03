namespace app {
    struct ParticleSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem__VTable vtable;
    };

    struct ParticleSystem_Particle {
        struct Vector3 m_Position;
        struct Vector3 m_Velocity;
        struct Vector3 m_AnimatedVelocity;
        struct Vector3 m_InitialVelocity;
        struct Vector3 m_AxisOfRotation;
        struct Vector3 m_Rotation;
        struct Vector3 m_AngularVelocity;
        struct Vector3 m_StartSize;
        struct Color32 m_StartColor;
        uint32_t m_RandomSeed;
        float m_Lifetime;
        float m_StartLifetime;
        float m_EmitAccumulator0;
        float m_EmitAccumulator1;
        uint32_t m_Flags;
    };

    struct ParticleSystem_Particle__Boxed {
        struct ParticleSystem_Particle__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_Particle fields;
    };

    struct ParticleSystem_Particle__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_Particle__StaticFields {
    };

    struct ParticleSystem_Particle__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Particle__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Particle__VTable vtable;
    };

    enum class ParticleSystemSimulationSpace__Enum : int32_t {
        Local = 0x00000000,
        World = 0x00000001,
        Custom = 0x00000002,
    };

    struct ParticleSystemSimulationSpace__Enum__Boxed {
        struct ParticleSystemSimulationSpace__Enum__Class* klass;
        MonitorData* monitor;
        ParticleSystemSimulationSpace__Enum value;
    };

    struct ParticleSystemSimulationSpace__Enum__VTable {
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

    struct ParticleSystemSimulationSpace__Enum__StaticFields {
    };

    struct ParticleSystemSimulationSpace__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystemSimulationSpace__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystemSimulationSpace__Enum__VTable vtable;
    };

    struct ParticleSystem_MainModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_MainModule__Boxed {
        struct ParticleSystem_MainModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_MainModule fields;
    };

    struct ParticleSystem_MainModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_MainModule__StaticFields {
    };

    struct ParticleSystem_MainModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_MainModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_MainModule__VTable vtable;
    };

    struct ParticleSystem_EmissionModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_EmissionModule__Boxed {
        struct ParticleSystem_EmissionModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_EmissionModule fields;
    };

    struct ParticleSystem_EmissionModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_EmissionModule__StaticFields {
    };

    struct ParticleSystem_EmissionModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_EmissionModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_EmissionModule__VTable vtable;
    };

    struct ParticleSystem_ShapeModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_ShapeModule__Boxed {
        struct ParticleSystem_ShapeModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_ShapeModule fields;
    };

    struct ParticleSystem_ShapeModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_ShapeModule__StaticFields {
    };

    struct ParticleSystem_ShapeModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_ShapeModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_ShapeModule__VTable vtable;
    };

    struct ParticleSystem_VelocityOverLifetimeModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_VelocityOverLifetimeModule__Boxed {
        struct ParticleSystem_VelocityOverLifetimeModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_VelocityOverLifetimeModule fields;
    };

    struct ParticleSystem_VelocityOverLifetimeModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_VelocityOverLifetimeModule__StaticFields {
    };

    struct ParticleSystem_VelocityOverLifetimeModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_VelocityOverLifetimeModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_VelocityOverLifetimeModule__VTable vtable;
    };

    struct ParticleSystem_ForceOverLifetimeModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_ForceOverLifetimeModule__Boxed {
        struct ParticleSystem_ForceOverLifetimeModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_ForceOverLifetimeModule fields;
    };

    struct ParticleSystem_ForceOverLifetimeModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_ForceOverLifetimeModule__StaticFields {
    };

    struct ParticleSystem_ForceOverLifetimeModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_ForceOverLifetimeModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_ForceOverLifetimeModule__VTable vtable;
    };

    struct ParticleSystem_ColorOverLifetimeModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_ColorOverLifetimeModule__Boxed {
        struct ParticleSystem_ColorOverLifetimeModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_ColorOverLifetimeModule fields;
    };

    struct ParticleSystem_ColorOverLifetimeModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_ColorOverLifetimeModule__StaticFields {
    };

    struct ParticleSystem_ColorOverLifetimeModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_ColorOverLifetimeModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_ColorOverLifetimeModule__VTable vtable;
    };

    struct ParticleSystem_CollisionModule {
        struct ParticleSystem* m_ParticleSystem;
    };

    struct ParticleSystem_CollisionModule__Boxed {
        struct ParticleSystem_CollisionModule__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_CollisionModule fields;
    };

    struct ParticleSystem_CollisionModule__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_CollisionModule__StaticFields {
    };

    struct ParticleSystem_CollisionModule__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_CollisionModule__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_CollisionModule__VTable vtable;
    };

    struct ParticleSystem_Particle__Array {
        struct ParticleSystem_Particle__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ParticleSystem_Particle vector[32];
    };

    struct ParticleSystem_Particle__Array__VTable {
    };

    struct ParticleSystem_Particle__Array__StaticFields {
    };

    struct ParticleSystem_Particle__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Particle__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Particle__Array__VTable vtable;
    };

    enum class ParticleSystemStopBehavior__Enum : int32_t {
        StopEmittingAndClear = 0x00000000,
        StopEmitting = 0x00000001,
    };

    struct ParticleSystemStopBehavior__Enum__Boxed {
        struct ParticleSystemStopBehavior__Enum__Class* klass;
        MonitorData* monitor;
        ParticleSystemStopBehavior__Enum value;
    };

    struct ParticleSystemStopBehavior__Enum__VTable {
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

    struct ParticleSystemStopBehavior__Enum__StaticFields {
    };

    struct ParticleSystemStopBehavior__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystemStopBehavior__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystemStopBehavior__Enum__VTable vtable;
    };

    struct ParticleSystem_EmitParams {
        struct ParticleSystem_Particle m_Particle;
        bool m_PositionSet;
        bool m_VelocitySet;
        bool m_AxisOfRotationSet;
        bool m_RotationSet;
        bool m_AngularVelocitySet;
        bool m_StartSizeSet;
        bool m_StartColorSet;
        bool m_RandomSeedSet;
        bool m_StartLifetimeSet;
        bool m_ApplyShapeToPosition;
    };

    struct ParticleSystem_EmitParams__Boxed {
        struct ParticleSystem_EmitParams__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_EmitParams fields;
    };

    struct ParticleSystem_EmitParams__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_EmitParams__StaticFields {
    };

    struct ParticleSystem_EmitParams__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_EmitParams__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_EmitParams__VTable vtable;
    };

    struct ParticleSystem_Particle___VTable {
    };

    struct ParticleSystem_Particle___StaticFields {
    };

    struct ParticleSystem_Particle___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Particle___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Particle___VTable vtable;
    };

    struct ParticleSystem_EmitParams___VTable {
    };

    struct ParticleSystem_EmitParams___StaticFields {
    };

    struct ParticleSystem_EmitParams___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_EmitParams___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_EmitParams___VTable vtable;
    };

    enum class ParticleSystemCurveMode__Enum : int32_t {
        Constant = 0x00000000,
        Curve = 0x00000001,
        TwoCurves = 0x00000002,
        TwoConstants = 0x00000003,
    };

    struct ParticleSystemCurveMode__Enum__Boxed {
        struct ParticleSystemCurveMode__Enum__Class* klass;
        MonitorData* monitor;
        ParticleSystemCurveMode__Enum value;
    };

    struct ParticleSystem_MinMaxCurve {
        ParticleSystemCurveMode__Enum m_Mode;

        float m_CurveMultiplier;
        struct AnimationCurve* m_CurveMin;
        struct AnimationCurve* m_CurveMax;
        float m_ConstantMin;
        float m_ConstantMax;
    };

    struct ParticleSystem_MinMaxCurve__Boxed {
        struct ParticleSystem_MinMaxCurve__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_MinMaxCurve fields;
    };

    struct ParticleSystemCurveMode__Enum__VTable {
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

    struct ParticleSystemCurveMode__Enum__StaticFields {
    };

    struct ParticleSystemCurveMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystemCurveMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystemCurveMode__Enum__VTable vtable;
    };

    struct ParticleSystem_MinMaxCurve__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_MinMaxCurve__StaticFields {
    };

    struct ParticleSystem_MinMaxCurve__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_MinMaxCurve__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_MinMaxCurve__VTable vtable;
    };

    enum class ParticleSystemGradientMode__Enum : int32_t {
        Color = 0x00000000,
        Gradient = 0x00000001,
        TwoColors = 0x00000002,
        TwoGradients = 0x00000003,
        RandomColor = 0x00000004,
    };

    struct ParticleSystemGradientMode__Enum__Boxed {
        struct ParticleSystemGradientMode__Enum__Class* klass;
        MonitorData* monitor;
        ParticleSystemGradientMode__Enum value;
    };

    struct ParticleSystem_MinMaxGradient {
        ParticleSystemGradientMode__Enum m_Mode;

        struct Gradient* m_GradientMin;
        struct Gradient* m_GradientMax;
        struct Color m_ColorMin;
        struct Color m_ColorMax;
    };

    struct ParticleSystem_MinMaxGradient__Boxed {
        struct ParticleSystem_MinMaxGradient__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_MinMaxGradient fields;
    };

    struct ParticleSystemGradientMode__Enum__VTable {
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

    struct ParticleSystemGradientMode__Enum__StaticFields {
    };

    struct ParticleSystemGradientMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystemGradientMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystemGradientMode__Enum__VTable vtable;
    };

    struct ParticleSystem_MinMaxGradient__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_MinMaxGradient__StaticFields {
    };

    struct ParticleSystem_MinMaxGradient__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_MinMaxGradient__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_MinMaxGradient__VTable vtable;
    };

    struct ParticleSystem_MinMaxCurve___VTable {
    };

    struct ParticleSystem_MinMaxCurve___StaticFields {
    };

    struct ParticleSystem_MinMaxCurve___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_MinMaxCurve___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_MinMaxCurve___VTable vtable;
    };

    struct ParticleSystem_MinMaxGradient___VTable {
    };

    struct ParticleSystem_MinMaxGradient___StaticFields {
    };

    struct ParticleSystem_MinMaxGradient___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_MinMaxGradient___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_MinMaxGradient___VTable vtable;
    };

    struct ParticleSystem_Burst {
        float m_Time;
        struct ParticleSystem_MinMaxCurve m_Count;
        int32_t m_RepeatCount;
        float m_RepeatInterval;
        float m_InvProbability;
    };

    struct ParticleSystem_Burst__Boxed {
        struct ParticleSystem_Burst__Class* klass;
        MonitorData* monitor;
        struct ParticleSystem_Burst fields;
    };

    struct ParticleSystem_Burst__Array {
        struct ParticleSystem_Burst__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ParticleSystem_Burst vector[32];
    };

    struct ParticleSystem_Burst__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystem_Burst__StaticFields {
    };

    struct ParticleSystem_Burst__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Burst__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Burst__VTable vtable;
    };

    struct ParticleSystem_Burst__Array__VTable {
    };

    struct ParticleSystem_Burst__Array__StaticFields {
    };

    struct ParticleSystem_Burst__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Burst__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Burst__Array__VTable vtable;
    };

    struct ParticleSystem_Burst___VTable {
    };

    struct ParticleSystem_Burst___StaticFields {
    };

    struct ParticleSystem_Burst___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystem_Burst___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystem_Burst___VTable vtable;
    };

    struct __declspec(align(8)) List_1_UnityEngine_ParticleCollisionEvent___Fields {
        struct ParticleCollisionEvent__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_ParticleCollisionEvent_ {
        struct List_1_UnityEngine_ParticleCollisionEvent___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_ParticleCollisionEvent___Fields fields;
    };

    struct ParticleCollisionEvent {
        struct Vector3 m_Intersection;
        struct Vector3 m_Normal;
        struct Vector3 m_Velocity;
        int32_t m_ColliderInstanceID;
    };

    struct ParticleCollisionEvent__Boxed {
        struct ParticleCollisionEvent__Class* klass;
        MonitorData* monitor;
        struct ParticleCollisionEvent fields;
    };

    struct ParticleCollisionEvent__Array {
        struct ParticleCollisionEvent__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ParticleCollisionEvent vector[32];
    };

    struct IEnumerator_1_UnityEngine_ParticleCollisionEvent_ {
        struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___Class* klass;
        MonitorData* monitor;
    };

    struct ParticleCollisionEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleCollisionEvent__StaticFields {
    };

    struct ParticleCollisionEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleCollisionEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleCollisionEvent__VTable vtable;
    };

    struct ParticleCollisionEvent__Array__VTable {
    };

    struct ParticleCollisionEvent__Array__StaticFields {
    };

    struct ParticleCollisionEvent__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleCollisionEvent__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleCollisionEvent__Array__VTable vtable;
    };

    struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___StaticFields {
    };

    struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___VTable vtable;
    };

    struct List_1_UnityEngine_ParticleCollisionEvent___VTable {
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

    struct List_1_UnityEngine_ParticleCollisionEvent___StaticFields {
        struct ParticleCollisionEvent__Array* _emptyArray;
    };

    struct List_1_UnityEngine_ParticleCollisionEvent___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_ParticleCollisionEvent___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_ParticleCollisionEvent___VTable vtable;
    };

    struct ParticleSystemRenderer__Fields {
        struct Renderer__Fields _;
    };

    struct ParticleSystemRenderer {
        struct ParticleSystemRenderer__Class* klass;
        MonitorData* monitor;
        struct ParticleSystemRenderer__Fields fields;
    };

    struct ParticleSystemRenderer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ParticleSystemRenderer__StaticFields {
    };

    struct ParticleSystemRenderer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ParticleSystemRenderer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ParticleSystemRenderer__VTable vtable;
    };

    struct SoftJointLimit {
        float m_Limit;
        float m_Bounciness;
        float m_ContactDistance;
    };

    struct SoftJointLimit__Boxed {
        struct SoftJointLimit__Class* klass;
        MonitorData* monitor;
        struct SoftJointLimit fields;
    };

    struct SoftJointLimit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoftJointLimit__StaticFields {
    };

    struct SoftJointLimit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoftJointLimit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoftJointLimit__VTable vtable;
    };

    struct SoftJointLimitSpring {
        float m_Spring;
        float m_Damper;
    };

    struct SoftJointLimitSpring__Boxed {
        struct SoftJointLimitSpring__Class* klass;
        MonitorData* monitor;
        struct SoftJointLimitSpring fields;
    };

    struct SoftJointLimitSpring__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SoftJointLimitSpring__StaticFields {
    };

    struct SoftJointLimitSpring__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoftJointLimitSpring__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoftJointLimitSpring__VTable vtable;
    };

    struct JointDrive {
        float m_PositionSpring;
        float m_PositionDamper;
        float m_MaximumForce;
    };

    struct JointDrive__Boxed {
        struct JointDrive__Class* klass;
        MonitorData* monitor;
        struct JointDrive fields;
    };

    enum class JointDriveMode__Enum : int32_t {
        None = 0x00000000,
        Position = 0x00000001,
        Velocity = 0x00000002,
        PositionAndVelocity = 0x00000003,
    };

    struct JointDriveMode__Enum__Boxed {
        struct JointDriveMode__Enum__Class* klass;
        MonitorData* monitor;
        JointDriveMode__Enum value;
    };

    struct JointDrive__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JointDrive__StaticFields {
    };

    struct JointDrive__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JointDrive__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JointDrive__VTable vtable;
    };

    struct JointDriveMode__Enum__VTable {
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

} // namespace app
