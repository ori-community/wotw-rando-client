namespace app {
    struct JointDriveMode__Enum__StaticFields {
    };

    struct JointDriveMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JointDriveMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JointDriveMode__Enum__VTable vtable;
    };

    struct __declspec(align(8)) Collision__Fields {
        struct Vector3 m_Impulse;
        struct Vector3 m_RelativeVelocity;
        struct Rigidbody* m_Rigidbody;
        struct Collider* m_Collider;
        int32_t m_ContactCount;
        struct ContactPoint__Array* m_RecycledContacts;
        struct ContactPoint__Array* m_LegacyContacts;
    };

    struct Collision {
        struct Collision__Class* klass;
        MonitorData* monitor;
        struct Collision__Fields fields;
    };

    struct Rigidbody__Fields {
        struct Component_1__Fields _;
    };

    struct Rigidbody {
        struct Rigidbody__Class* klass;
        MonitorData* monitor;
        struct Rigidbody__Fields fields;
    };

    struct Collider__Fields {
        struct Component_1__Fields _;
    };

    struct Collider {
        struct Collider__Class* klass;
        MonitorData* monitor;
        struct Collider__Fields fields;
    };

    struct ContactPoint {
        struct Vector3 m_Point;
        struct Vector3 m_Normal;
        int32_t m_ThisColliderInstanceID;
        int32_t m_OtherColliderInstanceID;
        float m_Separation;
    };

    struct ContactPoint__Boxed {
        struct ContactPoint__Class* klass;
        MonitorData* monitor;
        struct ContactPoint fields;
    };

    struct ContactPoint__Array {
        struct ContactPoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ContactPoint vector[32];
    };

    struct Rigidbody__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Rigidbody__StaticFields {
    };

    struct Rigidbody__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Rigidbody__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Rigidbody__VTable vtable;
    };

    struct Collider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Collider__StaticFields {
    };

    struct Collider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collider__VTable vtable;
    };

    struct ContactPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ContactPoint__StaticFields {
    };

    struct ContactPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactPoint__VTable vtable;
    };

    struct ContactPoint__Array__VTable {
    };

    struct ContactPoint__Array__StaticFields {
    };

    struct ContactPoint__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContactPoint__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContactPoint__Array__VTable vtable;
    };

    struct Collision__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Collision__StaticFields {
    };

    struct Collision__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Collision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Collision__VTable vtable;
    };

    struct PhysicMaterial__Fields {
        struct Object_1__Fields _;
    };

    struct PhysicMaterial {
        struct PhysicMaterial__Class* klass;
        MonitorData* monitor;
        struct PhysicMaterial__Fields fields;
    };

    struct PhysicMaterial__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PhysicMaterial__StaticFields {
    };

    struct PhysicMaterial__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicMaterial__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicMaterial__VTable vtable;
    };

    enum class PhysicMaterialCombine__Enum : int32_t {
        Average = 0x00000000,
        Minimum = 0x00000002,
        Multiply = 0x00000001,
        Maximum = 0x00000003,
    };

    struct PhysicMaterialCombine__Enum__Boxed {
        struct PhysicMaterialCombine__Enum__Class* klass;
        MonitorData* monitor;
        PhysicMaterialCombine__Enum value;
    };

    struct PhysicMaterialCombine__Enum__VTable {
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

    struct PhysicMaterialCombine__Enum__StaticFields {
    };

    struct PhysicMaterialCombine__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PhysicMaterialCombine__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PhysicMaterialCombine__Enum__VTable vtable;
    };

    struct RaycastHit {
        struct Vector3 m_Point;
        struct Vector3 m_Normal;
        uint32_t m_FaceID;
        float m_Distance;
        struct Vector2 m_UV;
        int32_t m_Collider;
    };

    struct RaycastHit__Boxed {
        struct RaycastHit__Class* klass;
        MonitorData* monitor;
        struct RaycastHit fields;
    };

    struct RaycastHit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RaycastHit__StaticFields {
    };

    struct RaycastHit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit__VTable vtable;
    };

    enum class RigidbodyConstraints__Enum : int32_t {
        None = 0x00000000,
        FreezePositionX = 0x00000002,
        FreezePositionY = 0x00000004,
        FreezePositionZ = 0x00000008,
        FreezeRotationX = 0x00000010,
        FreezeRotationY = 0x00000020,
        FreezeRotationZ = 0x00000040,
        FreezePosition = 0x0000000e,
        FreezeRotation = 0x00000070,
        FreezeAll = 0x0000007e,
    };

    struct RigidbodyConstraints__Enum__Boxed {
        struct RigidbodyConstraints__Enum__Class* klass;
        MonitorData* monitor;
        RigidbodyConstraints__Enum value;
    };

    struct RigidbodyConstraints__Enum__VTable {
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

    struct RigidbodyConstraints__Enum__StaticFields {
    };

    struct RigidbodyConstraints__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyConstraints__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyConstraints__Enum__VTable vtable;
    };

    enum class CollisionDetectionMode__Enum : int32_t {
        Discrete = 0x00000000,
        Continuous = 0x00000001,
        ContinuousDynamic = 0x00000002,
        ContinuousSpeculative = 0x00000003,
    };

    struct CollisionDetectionMode__Enum__Boxed {
        struct CollisionDetectionMode__Enum__Class* klass;
        MonitorData* monitor;
        CollisionDetectionMode__Enum value;
    };

    struct CollisionDetectionMode__Enum__VTable {
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

    struct CollisionDetectionMode__Enum__StaticFields {
    };

    struct CollisionDetectionMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionDetectionMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionDetectionMode__Enum__VTable vtable;
    };

    enum class RigidbodyInterpolation__Enum : int32_t {
        None = 0x00000000,
        Interpolate = 0x00000001,
        Extrapolate = 0x00000002,
    };

    struct RigidbodyInterpolation__Enum__Boxed {
        struct RigidbodyInterpolation__Enum__Class* klass;
        MonitorData* monitor;
        RigidbodyInterpolation__Enum value;
    };

    struct RigidbodyInterpolation__Enum__VTable {
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

    struct RigidbodyInterpolation__Enum__StaticFields {
    };

    struct RigidbodyInterpolation__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidbodyInterpolation__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidbodyInterpolation__Enum__VTable vtable;
    };

    enum class ForceMode__Enum : int32_t {
        Force = 0x00000000,
        Acceleration = 0x00000005,
        Impulse = 0x00000001,
        VelocityChange = 0x00000002,
    };

    struct ForceMode__Enum__Boxed {
        struct ForceMode__Enum__Class* klass;
        MonitorData* monitor;
        ForceMode__Enum value;
    };

    struct ForceMode__Enum__VTable {
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

    struct ForceMode__Enum__StaticFields {
    };

    struct ForceMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ForceMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ForceMode__Enum__VTable vtable;
    };

    enum class QueryTriggerInteraction__Enum : int32_t {
        UseGlobal = 0x00000000,
        Ignore = 0x00000001,
        Collide = 0x00000002,
    };

    struct QueryTriggerInteraction__Enum__Boxed {
        struct QueryTriggerInteraction__Enum__Class* klass;
        MonitorData* monitor;
        QueryTriggerInteraction__Enum value;
    };

    struct QueryTriggerInteraction__Enum__VTable {
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

    struct QueryTriggerInteraction__Enum__StaticFields {
    };

    struct QueryTriggerInteraction__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct QueryTriggerInteraction__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct QueryTriggerInteraction__Enum__VTable vtable;
    };

    struct RaycastHit___VTable {
    };

    struct RaycastHit___StaticFields {
    };

    struct RaycastHit___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit___VTable vtable;
    };

    struct RaycastHit__Array {
        struct RaycastHit__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RaycastHit vector[32];
    };

    struct RaycastHit__Array__VTable {
    };

    struct RaycastHit__Array__StaticFields {
    };

    struct RaycastHit__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RaycastHit__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RaycastHit__Array__VTable vtable;
    };

    struct Rigidbody__Array {
        struct Rigidbody__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Rigidbody* vector[32];
    };

    struct Rigidbody__Array__VTable {
    };

    struct Rigidbody__Array__StaticFields {
    };

    struct Rigidbody__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Rigidbody__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Rigidbody__Array__VTable vtable;
    };

    struct CharacterController__Fields {
        struct Collider__Fields _;
    };

    struct CharacterController {
        struct CharacterController__Class* klass;
        MonitorData* monitor;
        struct CharacterController__Fields fields;
    };

    struct CharacterController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CharacterController__StaticFields {
    };

    struct CharacterController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterController__VTable vtable;
    };

    enum class CollisionFlags__Enum : int32_t {
        None = 0x00000000,
        Sides = 0x00000001,
        Above = 0x00000002,
        Below = 0x00000004,
        CollidedSides = 0x00000001,
        CollidedAbove = 0x00000002,
        CollidedBelow = 0x00000004,
    };

    struct CollisionFlags__Enum__Boxed {
        struct CollisionFlags__Enum__Class* klass;
        MonitorData* monitor;
        CollisionFlags__Enum value;
    };

    struct CollisionFlags__Enum__VTable {
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

    struct CollisionFlags__Enum__StaticFields {
    };

    struct CollisionFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CollisionFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CollisionFlags__Enum__VTable vtable;
    };

    struct MeshCollider__Fields {
        struct Collider__Fields _;
    };

    struct MeshCollider {
        struct MeshCollider__Class* klass;
        MonitorData* monitor;
        struct MeshCollider__Fields fields;
    };

    struct MeshCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MeshCollider__StaticFields {
    };

    struct MeshCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MeshCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MeshCollider__VTable vtable;
    };

    struct CapsuleCollider__Fields {
        struct Collider__Fields _;
    };

    struct CapsuleCollider {
        struct CapsuleCollider__Class* klass;
        MonitorData* monitor;
        struct CapsuleCollider__Fields fields;
    };

    struct CapsuleCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CapsuleCollider__StaticFields {
    };

    struct CapsuleCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CapsuleCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CapsuleCollider__VTable vtable;
    };

    struct CapsuleCollider__Array {
        struct CapsuleCollider__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct CapsuleCollider* vector[32];
    };

    struct CapsuleCollider__Array__VTable {
    };

    struct CapsuleCollider__Array__StaticFields {
    };

    struct CapsuleCollider__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CapsuleCollider__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CapsuleCollider__Array__VTable vtable;
    };

    struct BoxCollider__Fields {
        struct Collider__Fields _;
    };

    struct BoxCollider {
        struct BoxCollider__Class* klass;
        MonitorData* monitor;
        struct BoxCollider__Fields fields;
    };

    struct BoxCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BoxCollider__StaticFields {
    };

    struct BoxCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BoxCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BoxCollider__VTable vtable;
    };

    struct SphereCollider__Fields {
        struct Collider__Fields _;
    };

    struct SphereCollider {
        struct SphereCollider__Class* klass;
        MonitorData* monitor;
        struct SphereCollider__Fields fields;
    };

    struct SphereCollider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SphereCollider__StaticFields {
    };

    struct SphereCollider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SphereCollider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SphereCollider__VTable vtable;
    };

    struct Joint__Fields {
        struct Component_1__Fields _;
    };

    struct Joint {
        struct Joint__Class* klass;
        MonitorData* monitor;
        struct Joint__Fields fields;
    };

    struct Joint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Joint__StaticFields {
    };

    struct Joint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Joint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Joint__VTable vtable;
    };

    struct CharacterJoint__Fields {
        struct Joint__Fields _;
        struct Quaternion targetRotation;
        struct Vector3 targetAngularVelocity;
        struct JointDrive rotationDrive;
    };

    struct CharacterJoint {
        struct CharacterJoint__Class* klass;
        MonitorData* monitor;
        struct CharacterJoint__Fields fields;
    };

    struct CharacterJoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CharacterJoint__StaticFields {
    };

    struct CharacterJoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CharacterJoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CharacterJoint__VTable vtable;
    };

    struct SoftJointLimitSpring___VTable {
    };

    struct SoftJointLimitSpring___StaticFields {
    };

    struct SoftJointLimitSpring___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoftJointLimitSpring___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoftJointLimitSpring___VTable vtable;
    };

    struct SoftJointLimit___VTable {
    };

    struct SoftJointLimit___StaticFields {
    };

    struct SoftJointLimit___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SoftJointLimit___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SoftJointLimit___VTable vtable;
    };

    struct ConfigurableJoint__Fields {
        struct Joint__Fields _;
    };

    struct ConfigurableJoint {
        struct ConfigurableJoint__Class* klass;
        MonitorData* monitor;
        struct ConfigurableJoint__Fields fields;
    };

    struct ConfigurableJoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConfigurableJoint__StaticFields {
    };

    struct ConfigurableJoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConfigurableJoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConfigurableJoint__VTable vtable;
    };

    enum class ConfigurableJointMotion__Enum : int32_t {
        Locked = 0x00000000,
        Limited = 0x00000001,
        Free = 0x00000002,
    };

    struct ConfigurableJointMotion__Enum__Boxed {
        struct ConfigurableJointMotion__Enum__Class* klass;
        MonitorData* monitor;
        ConfigurableJointMotion__Enum value;
    };

    struct ConfigurableJointMotion__Enum__VTable {
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

    struct ConfigurableJointMotion__Enum__StaticFields {
    };

    struct ConfigurableJointMotion__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConfigurableJointMotion__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConfigurableJointMotion__Enum__VTable vtable;
    };

    enum class RotationDriveMode__Enum : int32_t {
        XYAndZ = 0x00000000,
        Slerp = 0x00000001,
    };

    struct RotationDriveMode__Enum__Boxed {
        struct RotationDriveMode__Enum__Class* klass;
        MonitorData* monitor;
        RotationDriveMode__Enum value;
    };

} // namespace app
