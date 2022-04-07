namespace app {
struct ParticleSystemGradientMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ParticleSystemGradientMode__Enum value;
};
struct ParticleSystem_MinMaxGradient {
  enum ParticleSystemGradientMode__Enum m_Mode;
  struct Gradient * m_GradientMin;
  struct Gradient * m_GradientMax;
  struct Color m_ColorMin;
  struct Color m_ColorMax;
};
struct ParticleSystem_MinMaxGradient__Boxed {
  struct ParticleSystem_MinMaxGradient__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_MinMaxGradient fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_MinMaxGradient__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_MinMaxGradient__VTable vtable;
};

struct ParticleSystem_Burst {
  float m_Time;
  struct ParticleSystem_MinMaxCurve m_Count;
  int32_t m_RepeatCount;
  float m_RepeatInterval;
  float m_InvProbability;
};
struct ParticleSystem_Burst__Boxed {
  struct ParticleSystem_Burst__Class *klass;
  struct MonitorData *monitor;
  struct ParticleSystem_Burst fields;
};
struct ParticleSystem_Burst__Array {
  struct ParticleSystem_Burst__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystem_Burst__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystem_Burst__VTable vtable;
};

struct __declspec(align(8)) List_1_UnityEngine_ParticleCollisionEvent___Fields {
  struct ParticleCollisionEvent__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_ParticleCollisionEvent_ {
  struct List_1_UnityEngine_ParticleCollisionEvent___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_ParticleCollisionEvent___Fields fields;
};
struct ParticleCollisionEvent {
  struct Vector3 m_Intersection;
  struct Vector3 m_Normal;
  struct Vector3 m_Velocity;
  int32_t m_ColliderInstanceID;
};
struct ParticleCollisionEvent__Boxed {
  struct ParticleCollisionEvent__Class *klass;
  struct MonitorData *monitor;
  struct ParticleCollisionEvent fields;
};
struct ParticleCollisionEvent__Array {
  struct ParticleCollisionEvent__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ParticleCollisionEvent vector[32];
};
struct IEnumerator_1_UnityEngine_ParticleCollisionEvent_ {
  struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleCollisionEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleCollisionEvent__VTable vtable;
};
struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___StaticFields {
};
struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_ParticleCollisionEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct ParticleCollisionEvent__Array * _emptyArray;
};
struct List_1_UnityEngine_ParticleCollisionEvent___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_ParticleCollisionEvent___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_ParticleCollisionEvent___VTable vtable;
};

struct ParticleSystemRenderer__Fields {
  struct Renderer__Fields _;
};
struct ParticleSystemRenderer {
  struct ParticleSystemRenderer__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ParticleSystemRenderer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ParticleSystemRenderer__VTable vtable;
};

struct SoftJointLimit {
  float m_Limit;
  float m_Bounciness;
  float m_ContactDistance;
};
struct SoftJointLimit__Boxed {
  struct SoftJointLimit__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoftJointLimit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoftJointLimit__VTable vtable;
};

struct SoftJointLimitSpring {
  float m_Spring;
  float m_Damper;
};
struct SoftJointLimitSpring__Boxed {
  struct SoftJointLimitSpring__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SoftJointLimitSpring__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SoftJointLimitSpring__VTable vtable;
};

struct JointDrive {
  float m_PositionSpring;
  float m_PositionDamper;
  float m_MaximumForce;
};
struct JointDrive__Boxed {
  struct JointDrive__Class *klass;
  struct MonitorData *monitor;
  struct JointDrive fields;
};
enum JointDriveMode__Enum : int32_t {
  JointDriveMode__Enum_None = 0,
  JointDriveMode__Enum_Position = 1,
  JointDriveMode__Enum_Velocity = 2,
  JointDriveMode__Enum_PositionAndVelocity = 3,
};
struct JointDriveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JointDriveMode__Enum value;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JointDrive__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JointDrive__VTable vtable;
};

struct __declspec(align(8)) Collision__Fields {
  struct Vector3 m_Impulse;
  struct Vector3 m_RelativeVelocity;
  struct Rigidbody * m_Rigidbody;
  struct Collider * m_Collider;
  int32_t m_ContactCount;
  struct ContactPoint__Array * m_RecycledContacts;
  struct ContactPoint__Array * m_LegacyContacts;
};
struct Collision {
  struct Collision__Class *klass;
  struct MonitorData *monitor;
  struct Collision__Fields fields;
};
struct Rigidbody__Fields {
  struct Component_1__Fields _;
};
struct Rigidbody {
  struct Rigidbody__Class *klass;
  struct MonitorData *monitor;
  struct Rigidbody__Fields fields;
};
struct Collider__Fields {
  struct Component_1__Fields _;
};
struct Collider {
  struct Collider__Class *klass;
  struct MonitorData *monitor;
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
  struct ContactPoint__Class *klass;
  struct MonitorData *monitor;
  struct ContactPoint fields;
};
struct ContactPoint__Array {
  struct ContactPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Rigidbody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Collider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContactPoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContactPoint__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Collision__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Collision__VTable vtable;
};

struct PhysicMaterial__Fields {
  struct Object_1__Fields _;
};
struct PhysicMaterial {
  struct PhysicMaterial__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicMaterial__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicMaterial__VTable vtable;
};

enum PhysicMaterialCombine__Enum : int32_t {
  PhysicMaterialCombine__Enum_Average = 0,
  PhysicMaterialCombine__Enum_Minimum = 2,
  PhysicMaterialCombine__Enum_Multiply = 1,
  PhysicMaterialCombine__Enum_Maximum = 3,
};
struct PhysicMaterialCombine__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PhysicMaterialCombine__Enum value;
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
  struct RaycastHit__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaycastHit__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaycastHit__VTable vtable;
};

enum RigidbodyConstraints__Enum : int32_t {
  RigidbodyConstraints__Enum_None = 0,
  RigidbodyConstraints__Enum_FreezePositionX = 2,
  RigidbodyConstraints__Enum_FreezePositionY = 4,
  RigidbodyConstraints__Enum_FreezePositionZ = 8,
  RigidbodyConstraints__Enum_FreezeRotationX = 16,
  RigidbodyConstraints__Enum_FreezeRotationY = 32,
  RigidbodyConstraints__Enum_FreezeRotationZ = 64,
  RigidbodyConstraints__Enum_FreezePosition = 14,
  RigidbodyConstraints__Enum_FreezeRotation = 112,
  RigidbodyConstraints__Enum_FreezeAll = 126,
};
struct RigidbodyConstraints__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RigidbodyConstraints__Enum value;
};

enum CollisionDetectionMode__Enum : int32_t {
  CollisionDetectionMode__Enum_Discrete = 0,
  CollisionDetectionMode__Enum_Continuous = 1,
  CollisionDetectionMode__Enum_ContinuousDynamic = 2,
  CollisionDetectionMode__Enum_ContinuousSpeculative = 3,
};
struct CollisionDetectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CollisionDetectionMode__Enum value;
};

enum RigidbodyInterpolation__Enum : int32_t {
  RigidbodyInterpolation__Enum_None = 0,
  RigidbodyInterpolation__Enum_Interpolate = 1,
  RigidbodyInterpolation__Enum_Extrapolate = 2,
};
struct RigidbodyInterpolation__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RigidbodyInterpolation__Enum value;
};

enum ForceMode__Enum : int32_t {
  ForceMode__Enum_Force = 0,
  ForceMode__Enum_Acceleration = 5,
  ForceMode__Enum_Impulse = 1,
  ForceMode__Enum_VelocityChange = 2,
};
struct ForceMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ForceMode__Enum value;
};

enum QueryTriggerInteraction__Enum : int32_t {
  QueryTriggerInteraction__Enum_UseGlobal = 0,
  QueryTriggerInteraction__Enum_Ignore = 1,
  QueryTriggerInteraction__Enum_Collide = 2,
};
struct QueryTriggerInteraction__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum QueryTriggerInteraction__Enum value;
};

struct RaycastHit__Array {
  struct RaycastHit__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaycastHit vector[32];
};

struct Rigidbody__Array {
  struct Rigidbody__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Rigidbody * vector[32];
};

struct CharacterController__Fields {
  struct Collider__Fields _;
};
struct CharacterController {
  struct CharacterController__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterController__VTable vtable;
};

enum CollisionFlags__Enum : int32_t {
  CollisionFlags__Enum_None = 0,
  CollisionFlags__Enum_Sides = 1,
  CollisionFlags__Enum_Above = 2,
  CollisionFlags__Enum_Below = 4,
  CollisionFlags__Enum_CollidedSides = 1,
  CollisionFlags__Enum_CollidedAbove = 2,
  CollisionFlags__Enum_CollidedBelow = 4,
};
struct CollisionFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CollisionFlags__Enum value;
};

struct MeshCollider__Fields {
  struct Collider__Fields _;
};
struct MeshCollider {
  struct MeshCollider__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeshCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeshCollider__VTable vtable;
};

struct CapsuleCollider__Fields {
  struct Collider__Fields _;
};
struct CapsuleCollider {
  struct CapsuleCollider__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CapsuleCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CapsuleCollider__VTable vtable;
};

struct CapsuleCollider__Array {
  struct CapsuleCollider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CapsuleCollider * vector[32];
};

struct BoxCollider__Fields {
  struct Collider__Fields _;
};
struct BoxCollider {
  struct BoxCollider__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BoxCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BoxCollider__VTable vtable;
};

struct SphereCollider__Fields {
  struct Collider__Fields _;
};
struct SphereCollider {
  struct SphereCollider__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SphereCollider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SphereCollider__VTable vtable;
};

struct Joint__Fields {
  struct Component_1__Fields _;
};
struct Joint {
  struct Joint__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Joint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Joint__VTable vtable;
};

struct CharacterJoint__Fields {
  struct Joint__Fields _;
  struct Quaternion targetRotation;
  struct Vector3 targetAngularVelocity;
  struct JointDrive rotationDrive;
};
struct CharacterJoint {
  struct CharacterJoint__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterJoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterJoint__VTable vtable;
};

struct ConfigurableJoint__Fields {
  struct Joint__Fields _;
};
struct ConfigurableJoint {
  struct ConfigurableJoint__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ConfigurableJoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ConfigurableJoint__VTable vtable;
};

enum ConfigurableJointMotion__Enum : int32_t {
  ConfigurableJointMotion__Enum_Locked = 0,
  ConfigurableJointMotion__Enum_Limited = 1,
  ConfigurableJointMotion__Enum_Free = 2,
};
struct ConfigurableJointMotion__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ConfigurableJointMotion__Enum value;
};

enum RotationDriveMode__Enum : int32_t {
  RotationDriveMode__Enum_XYAndZ = 0,
  RotationDriveMode__Enum_Slerp = 1,
};
struct RotationDriveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RotationDriveMode__Enum value;
};

enum JointProjectionMode__Enum : int32_t {
  JointProjectionMode__Enum_None = 0,
  JointProjectionMode__Enum_PositionAndRotation = 1,
  JointProjectionMode__Enum_PositionOnly = 2,
};
struct JointProjectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum JointProjectionMode__Enum value;
};

struct ConfigurableJoint__Array {
  struct ConfigurableJoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ConfigurableJoint * vector[32];
};

struct PhysicsScene {
  int32_t m_Handle;
};
struct PhysicsScene__Boxed {
  struct PhysicsScene__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsScene fields;
};
struct PhysicsScene__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Equals_1;
};
struct PhysicsScene__StaticFields {
};
struct PhysicsScene__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicsScene__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicsScene__VTable vtable;
};

struct Collider__Array {
  struct Collider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Collider * vector[32];
};

struct RaycastCommand {
  struct Vector3 _from_k__BackingField;
  struct Vector3 _direction_k__BackingField;
  float _distance_k__BackingField;
  int32_t _layerMask_k__BackingField;
  int32_t _maxHits_k__BackingField;
};
struct RaycastCommand__Boxed {
  struct RaycastCommand__Class *klass;
  struct MonitorData *monitor;
  struct RaycastCommand fields;
};
struct RaycastCommand__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaycastCommand__StaticFields {
};
struct RaycastCommand__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaycastCommand__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaycastCommand__VTable vtable;
};

struct NativeArray_1_UnityEngine_RaycastCommand_ {
  struct Void * m_Buffer;
  int32_t m_Length;
  enum Allocator__Enum m_AllocatorLabel;
};
struct NativeArray_1_UnityEngine_RaycastCommand___Boxed {
  struct NativeArray_1_UnityEngine_RaycastCommand___Class *klass;
  struct MonitorData *monitor;
  struct NativeArray_1_UnityEngine_RaycastCommand_ fields;
};
struct IEnumerator_1_UnityEngine_RaycastCommand_ {
  struct IEnumerator_1_UnityEngine_RaycastCommand___Class *klass;
  struct MonitorData *monitor;
};
struct NativeArray_1_UnityEngine_RaycastHit_ {
  struct Void * m_Buffer;
  int32_t m_Length;
  enum Allocator__Enum m_AllocatorLabel;
};
struct NativeArray_1_UnityEngine_RaycastHit___Boxed {
  struct NativeArray_1_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
  struct NativeArray_1_UnityEngine_RaycastHit_ fields;
};
struct IEnumerator_1_UnityEngine_RaycastHit_ {
  struct IEnumerator_1_UnityEngine_RaycastHit___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_RaycastCommand___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_RaycastCommand___StaticFields {
};
struct IEnumerator_1_UnityEngine_RaycastCommand___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_RaycastCommand___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_RaycastCommand___VTable vtable;
};
struct NativeArray_1_UnityEngine_RaycastCommand___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Equals_1;
};
struct NativeArray_1_UnityEngine_RaycastCommand___StaticFields {
};
struct NativeArray_1_UnityEngine_RaycastCommand___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeArray_1_UnityEngine_RaycastCommand___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeArray_1_UnityEngine_RaycastCommand___VTable vtable;
};
struct IEnumerator_1_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_RaycastHit___StaticFields {
};
struct IEnumerator_1_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_RaycastHit___VTable vtable;
};
struct NativeArray_1_UnityEngine_RaycastHit___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData Equals_1;
};
struct NativeArray_1_UnityEngine_RaycastHit___StaticFields {
};
struct NativeArray_1_UnityEngine_RaycastHit___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeArray_1_UnityEngine_RaycastHit___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeArray_1_UnityEngine_RaycastHit___VTable vtable;
};

struct SpherecastCommand {
  struct Vector3 _origin_k__BackingField;
  float _radius_k__BackingField;
  struct Vector3 _direction_k__BackingField;
  float _distance_k__BackingField;
  int32_t _layerMask_k__BackingField;
  int32_t _maxHits_k__BackingField;
};
struct SpherecastCommand__Boxed {
  struct SpherecastCommand__Class *klass;
  struct MonitorData *monitor;
  struct SpherecastCommand fields;
};
struct SpherecastCommand__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}