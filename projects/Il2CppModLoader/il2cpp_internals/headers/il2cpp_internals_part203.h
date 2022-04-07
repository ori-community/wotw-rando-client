namespace app {
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitPolygonal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitPolygonal__VTable vtable;
};

struct RotationLimitSpline__Fields {
  struct RotationLimit__Fields _;
  float twistLimit;
  struct AnimationCurve * spline;
};
struct RotationLimitSpline {
  struct RotationLimitSpline__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RotationLimitSpline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RotationLimitSpline__VTable vtable;
};

struct AimPoser__Fields {
  struct MonoBehaviour__Fields _;
  float angleBuffer;
  struct AimPoser_Pose__Array * poses;
};
struct AimPoser {
  struct AimPoser__Class *klass;
  struct MonitorData *monitor;
  struct AimPoser__Fields fields;
};
struct __declspec(align(8)) AimPoser_Pose__Fields {
  bool visualize;
  struct String * name;
  struct Vector3 direction;
  float yaw;
  float pitch;
  float angleBuffer;
};
struct AimPoser_Pose {
  struct AimPoser_Pose__Class *klass;
  struct MonitorData *monitor;
  struct AimPoser_Pose__Fields fields;
};
struct AimPoser_Pose__Array {
  struct AimPoser_Pose__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AimPoser_Pose * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AimPoser_Pose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AimPoser_Pose__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AimPoser__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AimPoser__VTable vtable;
};

struct OffsetModifier__Fields {
  struct MonoBehaviour__Fields _;
  float weight;
  struct FullBodyBipedIK * ik;
  float lastTime;
};
struct OffsetModifier {
  struct OffsetModifier__Class *klass;
  struct MonitorData *monitor;
  struct OffsetModifier__Fields fields;
};
struct Amplifier__Fields {
  struct OffsetModifier__Fields _;
  struct Amplifier_Body__Array * bodies;
};
struct Amplifier {
  struct Amplifier__Class *klass;
  struct MonitorData *monitor;
  struct Amplifier__Fields fields;
};
struct __declspec(align(8)) Amplifier_Body__Fields {
  struct Transform * transform;
  struct Transform * relativeTo;
  struct Amplifier_Body_EffectorLink__Array * effectorLinks;
  float verticalWeight;
  float horizontalWeight;
  float speed;
  struct Vector3 lastRelativePos;
  struct Vector3 smoothDelta;
  bool firstUpdate;
};
struct Amplifier_Body {
  struct Amplifier_Body__Class *klass;
  struct MonitorData *monitor;
  struct Amplifier_Body__Fields fields;
};
struct Amplifier_Body__Array {
  struct Amplifier_Body__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Amplifier_Body * vector[32];
};
struct __declspec(align(8)) Amplifier_Body_EffectorLink__Fields {
  enum FullBodyBipedEffector__Enum effector;
  float weight;
};
struct Amplifier_Body_EffectorLink {
  struct Amplifier_Body_EffectorLink__Class *klass;
  struct MonitorData *monitor;
  struct Amplifier_Body_EffectorLink__Fields fields;
};
struct Amplifier_Body_EffectorLink__Array {
  struct Amplifier_Body_EffectorLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Amplifier_Body_EffectorLink * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Amplifier_Body_EffectorLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Amplifier_Body_EffectorLink__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Amplifier_Body__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Amplifier_Body__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Amplifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Amplifier__VTable vtable;
};

struct BodyTilt__Fields {
  struct OffsetModifier__Fields _;
  float tiltSpeed;
  float tiltSensitivity;
  struct OffsetPose * poseLeft;
  struct OffsetPose * poseRight;
  float tiltAngle;
  struct Vector3 lastForward;
};
struct BodyTilt {
  struct BodyTilt__Class *klass;
  struct MonitorData *monitor;
  struct BodyTilt__Fields fields;
};
struct OffsetPose__Fields {
  struct MonoBehaviour__Fields _;
  struct OffsetPose_EffectorLink__Array * effectorLinks;
};
struct OffsetPose {
  struct OffsetPose__Class *klass;
  struct MonitorData *monitor;
  struct OffsetPose__Fields fields;
};
struct __declspec(align(8)) OffsetPose_EffectorLink__Fields {
  enum FullBodyBipedEffector__Enum effector;
  struct Vector3 offset;
  struct Vector3 pin;
  struct Vector3 pinWeight;
};
struct OffsetPose_EffectorLink {
  struct OffsetPose_EffectorLink__Class *klass;
  struct MonitorData *monitor;
  struct OffsetPose_EffectorLink__Fields fields;
};
struct OffsetPose_EffectorLink__Array {
  struct OffsetPose_EffectorLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OffsetPose_EffectorLink * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetPose_EffectorLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OffsetPose_EffectorLink__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetPose__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BodyTilt__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BodyTilt__VTable vtable;
};

struct HitReaction__Fields {
  struct OffsetModifier__Fields _;
  struct HitReaction_HitPointEffector__Array * effectorHitPoints;
  struct HitReaction_HitPointBone__Array * boneHitPoints;
};
struct HitReaction {
  struct HitReaction__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction__Fields fields;
};
struct __declspec(align(8)) HitReaction_HitPoint__Fields {
  struct String * name;
  struct Collider * collider;
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
  struct HitReaction_HitPoint__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction_HitPoint__Fields fields;
};
struct HitReaction_HitPointEffector__Fields {
  struct HitReaction_HitPoint__Fields _;
  struct AnimationCurve * offsetInForceDirection;
  struct AnimationCurve * offsetInUpDirection;
  struct HitReaction_HitPointEffector_EffectorLink__Array * effectorLinks;
};
struct HitReaction_HitPointEffector {
  struct HitReaction_HitPointEffector__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction_HitPointEffector__Fields fields;
};
struct HitReaction_HitPointEffector__Array {
  struct HitReaction_HitPointEffector__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HitReaction_HitPointEffector * vector[32];
};
struct __declspec(align(8)) HitReaction_HitPointEffector_EffectorLink__Fields {
  enum FullBodyBipedEffector__Enum effector;
  float weight;
  struct Vector3 lastValue;
  struct Vector3 current;
};
struct HitReaction_HitPointEffector_EffectorLink {
  struct HitReaction_HitPointEffector_EffectorLink__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction_HitPointEffector_EffectorLink__Fields fields;
};
struct HitReaction_HitPointEffector_EffectorLink__Array {
  struct HitReaction_HitPointEffector_EffectorLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HitReaction_HitPointEffector_EffectorLink * vector[32];
};
struct HitReaction_HitPointBone__Fields {
  struct HitReaction_HitPoint__Fields _;
  struct AnimationCurve * aroundCenterOfMass;
  struct HitReaction_HitPointBone_BoneLink__Array * boneLinks;
  struct Rigidbody * rigidbody;
};
struct HitReaction_HitPointBone {
  struct HitReaction_HitPointBone__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction_HitPointBone__Fields fields;
};
struct HitReaction_HitPointBone__Array {
  struct HitReaction_HitPointBone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HitReaction_HitPointBone * vector[32];
};
struct __declspec(align(8)) HitReaction_HitPointBone_BoneLink__Fields {
  struct Transform * bone;
  float weight;
  struct Quaternion lastValue;
  struct Quaternion current;
};
struct HitReaction_HitPointBone_BoneLink {
  struct HitReaction_HitPointBone_BoneLink__Class *klass;
  struct MonitorData *monitor;
  struct HitReaction_HitPointBone_BoneLink__Fields fields;
};
struct HitReaction_HitPointBone_BoneLink__Array {
  struct HitReaction_HitPointBone_BoneLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HitReaction_HitPointBone_BoneLink * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction_HitPoint__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction_HitPointEffector_EffectorLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReaction_HitPointEffector_EffectorLink__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction_HitPointEffector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReaction_HitPointEffector__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction_HitPointBone_BoneLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReaction_HitPointBone_BoneLink__VTable vtable;
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
struct HitReaction_HitPointBone__StaticFields {
};
struct HitReaction_HitPointBone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction_HitPointBone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReaction_HitPointBone__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReaction__VTable vtable;
};

struct Inertia__Fields {
  struct OffsetModifier__Fields _;
  struct Inertia_Body__Array * bodies;
  struct OffsetModifier_OffsetLimits__Array * limits;
};
struct Inertia {
  struct Inertia__Class *klass;
  struct MonitorData *monitor;
  struct Inertia__Fields fields;
};
struct __declspec(align(8)) Inertia_Body__Fields {
  struct Transform * transform;
  struct Inertia_Body_EffectorLink__Array * effectorLinks;
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
  struct Inertia_Body__Class *klass;
  struct MonitorData *monitor;
  struct Inertia_Body__Fields fields;
};
struct Inertia_Body__Array {
  struct Inertia_Body__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Inertia_Body * vector[32];
};
struct __declspec(align(8)) Inertia_Body_EffectorLink__Fields {
  enum FullBodyBipedEffector__Enum effector;
  float weight;
};
struct Inertia_Body_EffectorLink {
  struct Inertia_Body_EffectorLink__Class *klass;
  struct MonitorData *monitor;
  struct Inertia_Body_EffectorLink__Fields fields;
};
struct Inertia_Body_EffectorLink__Array {
  struct Inertia_Body_EffectorLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Inertia_Body_EffectorLink * vector[32];
};
struct __declspec(align(8)) OffsetModifier_OffsetLimits__Fields {
  enum FullBodyBipedEffector__Enum effector;
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
  struct OffsetModifier_OffsetLimits__Class *klass;
  struct MonitorData *monitor;
  struct OffsetModifier_OffsetLimits__Fields fields;
};
struct OffsetModifier_OffsetLimits__Array {
  struct OffsetModifier_OffsetLimits__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct OffsetModifier_OffsetLimits * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Inertia_Body_EffectorLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Inertia_Body_EffectorLink__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Inertia_Body__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Inertia_Body__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetModifier_OffsetLimits__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OffsetModifier_OffsetLimits__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Inertia__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Inertia__VTable vtable;
};

struct __declspec(align(8)) OffsetModifier_Initiate_d_8__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct OffsetModifier * __4__this;
};
struct OffsetModifier_Initiate_d_8 {
  struct OffsetModifier_Initiate_d_8__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OffsetModifier_Initiate_d_8__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OffsetModifier_Initiate_d_8__VTable vtable;
};

enum Recoil_Handedness__Enum : int32_t {
  Recoil_Handedness__Enum_Right = 0,
  Recoil_Handedness__Enum_Left = 1,
};
struct Recoil_Handedness__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Recoil_Handedness__Enum value;
};
struct Recoil__Fields {
  struct OffsetModifier__Fields _;
  struct AimIK * aimIK;
  enum Recoil_Handedness__Enum handedness;
  bool twoHanded;
  struct AnimationCurve * recoilWeight;
  float magnitudeRandom;
  struct Vector3 rotationRandom;
  struct Vector3 handRotationOffset;
  float blendTime;
  struct Recoil_RecoilOffset__Array * offsets;
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
  struct Recoil__Class *klass;
  struct MonitorData *monitor;
  struct Recoil__Fields fields;
};
struct __declspec(align(8)) Recoil_RecoilOffset__Fields {
  struct Vector3 offset;
  float additivity;
  float maxAdditiveOffsetMag;
  struct Recoil_RecoilOffset_EffectorLink__Array * effectorLinks;
  struct Vector3 additiveOffset;
  struct Vector3 lastOffset;
};
struct Recoil_RecoilOffset {
  struct Recoil_RecoilOffset__Class *klass;
  struct MonitorData *monitor;
  struct Recoil_RecoilOffset__Fields fields;
};
struct Recoil_RecoilOffset__Array {
  struct Recoil_RecoilOffset__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Recoil_RecoilOffset * vector[32];
};
struct __declspec(align(8)) Recoil_RecoilOffset_EffectorLink__Fields {
  enum FullBodyBipedEffector__Enum effector;
  float weight;
};
struct Recoil_RecoilOffset_EffectorLink {
  struct Recoil_RecoilOffset_EffectorLink__Class *klass;
  struct MonitorData *monitor;
  struct Recoil_RecoilOffset_EffectorLink__Fields fields;
};
struct Recoil_RecoilOffset_EffectorLink__Array {
  struct Recoil_RecoilOffset_EffectorLink__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Recoil_RecoilOffset_EffectorLink * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recoil_RecoilOffset_EffectorLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recoil_RecoilOffset_EffectorLink__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recoil_RecoilOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recoil_RecoilOffset__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Recoil__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Recoil__VTable vtable;
};

struct ShoulderRotator__Fields {
  struct MonoBehaviour__Fields _;
  float weight;
  float offset;
  struct FullBodyBipedIK * ik;
  bool skip;
};
struct ShoulderRotator {
  struct ShoulderRotator__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShoulderRotator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShoulderRotator__VTable vtable;
};

struct AimBoxing__Fields {
  struct MonoBehaviour__Fields _;
  struct AimIK * aimIK;
  struct Transform * pin;
};
struct AimBoxing {
  struct AimBoxing__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AimBoxing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AimBoxing__VTable vtable;
};

struct SimpleAimingSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct AimPoser * aimPoser;
  struct AimIK * aim;
  struct LookAtIK * lookAt;
  struct Animator * animator;
  float crossfadeTime;
  float minAimDistance;
  struct AimPoser_Pose * aimPose;
  struct AimPoser_Pose * lastPose;
};
struct SimpleAimingSystem {
  struct SimpleAimingSystem__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleAimingSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleAimingSystem__VTable vtable;
};

struct TerrainOffset__Fields {
  struct MonoBehaviour__Fields _;
  struct AimIK * aimIK;
  struct Vector3 raycastOffset;
  struct LayerMask raycastLayers;
  float min;
  float max;
  float lerpSpeed;
  struct RaycastHit hit;
  struct Vector3 offset;
};
struct TerrainOffset {
  struct TerrainOffset__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TerrainOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TerrainOffset__VTable vtable;
};

struct BipedIKvsAnimatorIK__Fields {
  struct MonoBehaviour__Fields _;
  struct Animator * animator;
  struct BipedIK * bipedIK;
  struct Transform * lookAtTargetBiped;
  struct Transform * lookAtTargetAnimator;
  float lookAtWeight;
  float lookAtBodyWeight;
  float lookAtHeadWeight;
  float lookAtEyesWeight;
  float lookAtClampWeight;
  float lookAtClampWeightHead;
  float lookAtClampWeightEyes;
  struct Transform * footTargetBiped;
  struct Transform * footTargetAnimator;
  float footPositionWeight;
  float footRotationWeight;
  struct Transform * handTargetBiped;
  struct Transform * handTargetAnimator;
  float handPositionWeight;
  float handRotationWeight;
};
struct BipedIKvsAnimatorIK {
  struct BipedIKvsAnimatorIK__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BipedIKvsAnimatorIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BipedIKvsAnimatorIK__VTable vtable;
};}