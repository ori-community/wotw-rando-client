namespace app {

struct MechSpider__Fields {
  struct MonoBehaviour__Fields _;
  struct LayerMask raycastLayers;
  float scale;
  struct Transform * body;
  struct MechSpiderLeg__Array * legs;
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
  struct MechSpider__Class *klass;
  struct MonitorData *monitor;
  struct MechSpider__Fields fields;
};
struct MechSpiderLeg__Fields {
  struct MonoBehaviour__Fields _;
  struct MechSpider * mechSpider;
  struct MechSpiderLeg * unSync;
  struct Vector3 offset;
  float minDelay;
  float maxOffset;
  float stepSpeed;
  float footHeight;
  float velocityPrediction;
  float raycastFocus;
  struct AnimationCurve * yOffset;
  struct ParticleSystem * sand;
  struct IK * ik;
  float stepProgress;
  float lastStepTime;
  struct Vector3 defaultPosition;
  struct RaycastHit hit;
};
struct MechSpiderLeg {
  struct MechSpiderLeg__Class *klass;
  struct MonitorData *monitor;
  struct MechSpiderLeg__Fields fields;
};
struct MechSpiderLeg__Array {
  struct MechSpiderLeg__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MechSpiderLeg * vector[32];
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MechSpiderLeg__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MechSpiderLeg__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MechSpider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MechSpider__VTable vtable;
};

struct MechSpiderController__Fields {
  struct MonoBehaviour__Fields _;
  struct MechSpider * mechSpider;
  struct Transform * cameraTransform;
  float speed;
  float turnSpeed;
};
struct MechSpiderController {
  struct MechSpiderController__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MechSpiderController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MechSpiderController__VTable vtable;
};

struct __declspec(align(8)) MechSpiderLeg_Step_d_24__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct MechSpiderLeg * __4__this;
  struct Vector3 stepStartPosition;
  struct Vector3 targetPosition;
};
struct MechSpiderLeg_Step_d_24 {
  struct MechSpiderLeg_Step_d_24__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MechSpiderLeg_Step_d_24__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MechSpiderLeg_Step_d_24__VTable vtable;
};

struct MechSpiderParticles__Fields {
  struct MonoBehaviour__Fields _;
  struct MechSpiderController * mechSpiderController;
  struct ParticleSystem * particles;
};
struct MechSpiderParticles {
  struct MechSpiderParticles__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MechSpiderParticles__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MechSpiderParticles__VTable vtable;
};

enum AnimationWarping_EffectorMode__Enum : int32_t {
  AnimationWarping_EffectorMode__Enum_PositionOffset = 0,
  AnimationWarping_EffectorMode__Enum_Position = 1,
};
struct AnimationWarping_EffectorMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AnimationWarping_EffectorMode__Enum value;
};
struct AnimationWarping__Fields {
  struct OffsetModifier__Fields _;
  struct Animator * animator;
  enum AnimationWarping_EffectorMode__Enum effectorMode;
  struct AnimationWarping_Warp__Array * warps;
  enum AnimationWarping_EffectorMode__Enum lastMode;
};
struct AnimationWarping {
  struct AnimationWarping__Class *klass;
  struct MonitorData *monitor;
  struct AnimationWarping__Fields fields;
};
struct AnimationWarping_Warp {
  int32_t animationLayer;
  struct String * animationState;
  struct AnimationCurve * weightCurve;
  struct Transform * warpFrom;
  struct Transform * warpTo;
  enum FullBodyBipedEffector__Enum effector;
};
struct AnimationWarping_Warp__Boxed {
  struct AnimationWarping_Warp__Class *klass;
  struct MonitorData *monitor;
  struct AnimationWarping_Warp fields;
};
struct AnimationWarping_Warp__Array {
  struct AnimationWarping_Warp__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AnimationWarping_Warp vector[32];
};
struct AnimationWarping_Warp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AnimationWarping_Warp__StaticFields {
};
struct AnimationWarping_Warp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationWarping_Warp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationWarping_Warp__VTable vtable;
};
struct AnimationWarping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnModifyOffset;
  VirtualInvokeData Start;
  VirtualInvokeData OnDestroy;
};
struct AnimationWarping__StaticFields {
};
struct AnimationWarping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimationWarping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimationWarping__VTable vtable;
};

struct AnimatorController3rdPerson__Fields {
  struct MonoBehaviour__Fields _;
  float rotateSpeed;
  float blendSpeed;
  float maxAngle;
  float moveSpeed;
  float rootMotionWeight;
  struct Animator * animator;
  struct Vector3 moveBlend;
  struct Vector3 moveInput;
  struct Vector3 velocity;
};
struct AnimatorController3rdPerson {
  struct AnimatorController3rdPerson__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorController3rdPerson__Fields fields;
};
struct AnimatorController3rdPerson__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData Move;
};
struct AnimatorController3rdPerson__StaticFields {
};
struct AnimatorController3rdPerson__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorController3rdPerson__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorController3rdPerson__VTable vtable;
};

struct AnimatorController3rdPersonIK__Fields {
  struct AnimatorController3rdPerson__Fields _;
  bool useIK;
  float headLookWeight;
  struct Vector3 gunHoldOffset;
  struct Vector3 leftHandOffset;
  struct AimIK * aim;
  struct FullBodyBipedIK * ik;
  struct Vector3 headLookAxis;
  struct Vector3 leftHandPosRelToRightHand;
  struct Quaternion leftHandRotRelToRightHand;
  struct Vector3 aimTarget;
};
struct AnimatorController3rdPersonIK {
  struct AnimatorController3rdPersonIK__Class *klass;
  struct MonitorData *monitor;
  struct AnimatorController3rdPersonIK__Fields fields;
};
struct AnimatorController3rdPersonIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData Move;
};
struct AnimatorController3rdPersonIK__StaticFields {
};
struct AnimatorController3rdPersonIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AnimatorController3rdPersonIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AnimatorController3rdPersonIK__VTable vtable;
};

struct CharacterAnimationBase__Fields {
  struct MonoBehaviour__Fields _;
  bool smoothFollow;
  float smoothFollowSpeed;
  struct Vector3 lastPosition;
  struct Vector3 localPosition;
  struct Quaternion localRotation;
  struct Quaternion lastRotation;
};
struct CharacterAnimationBase {
  struct CharacterAnimationBase__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationBase__Fields fields;
};
struct CharacterAnimationThirdPerson__Fields {
  struct CharacterAnimationBase__Fields _;
  struct CharacterThirdPerson * characterController;
  float turnSensitivity;
  float turnSpeed;
  float runCycleLegOffset;
  float animSpeedMultiplier;
  struct Animator * animator;
  struct Vector3 lastForward;
};
struct CharacterAnimationThirdPerson {
  struct CharacterAnimationThirdPerson__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationThirdPerson__Fields fields;
};
struct CharacterAnimationThirdPersonIK__Fields {
  struct CharacterAnimationThirdPerson__Fields _;
  struct FullBodyBipedIK * ik;
};
struct CharacterAnimationThirdPersonIK {
  struct CharacterAnimationThirdPersonIK__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAnimationThirdPersonIK__Fields fields;
};
struct CharacterBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * gravityTarget;
  float gravityMultiplier;
  float airborneThreshold;
  float slopeStartAngle;
  float slopeEndAngle;
  float spherecastRadius;
  struct LayerMask groundLayers;
  struct PhysicMaterial * zeroFrictionMaterial;
  struct PhysicMaterial * highFrictionMaterial;
  struct Rigidbody * r;
  float originalHeight;
  struct Vector3 originalCenter;
  struct CapsuleCollider * capsule;
};
struct CharacterBase {
  struct CharacterBase__Class *klass;
  struct MonitorData *monitor;
  struct CharacterBase__Fields fields;
};
enum CharacterThirdPerson_MoveMode__Enum : int32_t {
  CharacterThirdPerson_MoveMode__Enum_Directional = 0,
  CharacterThirdPerson_MoveMode__Enum_Strafe = 1,
};
struct CharacterThirdPerson_MoveMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterThirdPerson_MoveMode__Enum value;
};
struct CharacterThirdPerson_AnimState {
  struct Vector3 moveDirection;
  bool jump;
  bool crouch;
  bool onGround;
  bool isStrafing;
  float yVelocity;
};
struct CharacterThirdPerson_AnimState__Boxed {
  struct CharacterThirdPerson_AnimState__Class *klass;
  struct MonitorData *monitor;
  struct CharacterThirdPerson_AnimState fields;
};
struct CharacterThirdPerson__Fields {
  struct CharacterBase__Fields _;
  struct CharacterAnimationBase * characterAnimation;
  struct UserControlThirdPerson * userControl;
  struct CameraController * cam;
  enum CharacterThirdPerson_MoveMode__Enum moveMode;
  bool smoothPhysics;
  float smoothAccelerationTime;
  float linearAccelerationSpeed;
  float platformFriction;
  float groundStickyEffect;
  float maxVerticalVelocityOnGround;
  float velocityToGroundTangentWeight;
  bool lookInCameraDirection;
  float turnSpeed;
  float stationaryTurnSpeedMlp;
  float airSpeed;
  float airControl;
  float jumpPower;
  float jumpRepeatDelayTime;
  struct LayerMask wallRunLayers;
  float wallRunMaxLength;
  float wallRunMinMoveMag;
  float wallRunMinVelocityY;
  float wallRunRotationSpeed;
  float wallRunMaxRotationAngle;
  float wallRunWeightSpeed;
  float crouchCapsuleScaleMlp;
  bool _onGround_k__BackingField;
  struct CharacterThirdPerson_AnimState animState;
  struct Vector3 moveDirection;
  struct Animator * animator;
  struct Vector3 normal;
  struct Vector3 platformVelocity;
  struct Vector3 platformAngularVelocity;
  struct RaycastHit hit;
  float jumpLeg;
  float jumpEndTime;
  float forwardMlp;
  float groundDistance;
  float lastAirTime;
  float stickyForce;
  struct Vector3 wallNormal;
  struct Vector3 moveDirectionVelocity;
  float wallRunWeight;
  float lastWallRunWeight;
  struct Vector3 fixedDeltaPosition;
  struct Quaternion fixedDeltaRotation;
  bool fixedFrame;
  float wallRunEndTime;
  struct Vector3 gravity;
  struct Vector3 verticalVelocity;
  float velocityY;
};
struct CharacterThirdPerson {
  struct CharacterThirdPerson__Class *klass;
  struct MonitorData *monitor;
  struct CharacterThirdPerson__Fields fields;
};
struct UserControlThirdPerson_State {
  struct Vector3 move;
  struct Vector3 lookPos;
  bool crouch;
  bool jump;
  int32_t actionIndex;
};
struct UserControlThirdPerson_State__Boxed {
  struct UserControlThirdPerson_State__Class *klass;
  struct MonitorData *monitor;
  struct UserControlThirdPerson_State fields;
};
struct UserControlThirdPerson__Fields {
  struct MonoBehaviour__Fields _;
  bool walkByDefault;
  bool canCrouch;
  bool canJump;
  struct UserControlThirdPerson_State state;
  struct Transform * cam;
};
struct UserControlThirdPerson {
  struct UserControlThirdPerson__Class *klass;
  struct MonitorData *monitor;
  struct UserControlThirdPerson__Fields fields;
};
struct CharacterAnimationBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPivotPoint;
  VirtualInvokeData get_animationGrounded;
  VirtualInvokeData Start;
  VirtualInvokeData LateUpdate;
};
struct CharacterAnimationBase__StaticFields {
};
struct CharacterAnimationBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationBase__VTable vtable;
};
struct CharacterBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData Start;
  VirtualInvokeData GetSpherecastHit;
};
struct CharacterBase__StaticFields {
};
struct CharacterBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterBase__VTable vtable;
};
struct UserControlThirdPerson_State__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UserControlThirdPerson_State__StaticFields {
};
struct UserControlThirdPerson_State__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UserControlThirdPerson_State__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UserControlThirdPerson_State__VTable vtable;
};
struct UserControlThirdPerson__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Update;
};
struct UserControlThirdPerson__StaticFields {
};
struct UserControlThirdPerson__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UserControlThirdPerson__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UserControlThirdPerson__VTable vtable;
};
struct CharacterThirdPerson_AnimState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterThirdPerson_AnimState__StaticFields {
};
struct CharacterThirdPerson_AnimState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterThirdPerson_AnimState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterThirdPerson_AnimState__VTable vtable;
};
struct CharacterThirdPerson__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Move;
  VirtualInvokeData Start;
  VirtualInvokeData GetSpherecastHit;
  VirtualInvokeData Update;
  VirtualInvokeData LateUpdate;
  VirtualInvokeData Rotate;
  VirtualInvokeData Jump;
};
struct CharacterThirdPerson__StaticFields {
};
struct CharacterThirdPerson__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterThirdPerson__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterThirdPerson__VTable vtable;
};
struct CharacterAnimationThirdPerson__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPivotPoint;
  VirtualInvokeData get_animationGrounded;
  VirtualInvokeData Start;
  VirtualInvokeData LateUpdate;
  VirtualInvokeData Update;
};
struct CharacterAnimationThirdPerson__StaticFields {
};
struct CharacterAnimationThirdPerson__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationThirdPerson__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationThirdPerson__VTable vtable;
};
struct CharacterAnimationThirdPersonIK__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetPivotPoint;
  VirtualInvokeData get_animationGrounded;
  VirtualInvokeData Start;
  VirtualInvokeData LateUpdate;
  VirtualInvokeData Update;
};
struct CharacterAnimationThirdPersonIK__StaticFields {
};
struct CharacterAnimationThirdPersonIK__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterAnimationThirdPersonIK__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterAnimationThirdPersonIK__VTable vtable;
};

struct CharacterController3rdPerson__Fields {
  struct MonoBehaviour__Fields _;
  struct CameraController * cam;
  struct AnimatorController3rdPerson * animatorController;
};
struct CharacterController3rdPerson {
  struct CharacterController3rdPerson__Class *klass;
  struct MonitorData *monitor;
  struct CharacterController3rdPerson__Fields fields;
};
struct CharacterController3rdPerson__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CharacterController3rdPerson__StaticFields {
};
struct CharacterController3rdPerson__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CharacterController3rdPerson__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CharacterController3rdPerson__VTable vtable;
};

struct EffectorOffset__Fields {
  struct OffsetModifier__Fields _;
  float handsMaintainRelativePositionWeight;
  struct Vector3 bodyOffset;
  struct Vector3 leftShoulderOffset;
  struct Vector3 rightShoulderOffset;
  struct Vector3 leftThighOffset;
  struct Vector3 rightThighOffset;
  struct Vector3 leftHandOffset;
  struct Vector3 rightHandOffset;
  struct Vector3 leftFootOffset;
  struct Vector3 rightFootOffset;
};
struct EffectorOffset {
  struct EffectorOffset__Class *klass;
  struct MonitorData *monitor;
  struct EffectorOffset__Fields fields;
};
struct EffectorOffset__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnModifyOffset;
  VirtualInvokeData Start;
  VirtualInvokeData OnDestroy;
};
struct EffectorOffset__StaticFields {
};
struct EffectorOffset__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EffectorOffset__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EffectorOffset__VTable vtable;
};

struct ExplosionDemo__Fields {
  struct MonoBehaviour__Fields _;
  struct SimpleLocomotion * character;
  float forceMlp;
  float upForce;
  float weightFalloffSpeed;
  struct AnimationCurve * weightFalloff;
  struct AnimationCurve * explosionForceByDistance;
  struct AnimationCurve * scale;
  float weight;
  struct Vector3 defaultScale;
  struct Rigidbody * r;
  struct FullBodyBipedIK * ik;
};
struct ExplosionDemo {
  struct ExplosionDemo__Class *klass;
  struct MonitorData *monitor;
  struct ExplosionDemo__Fields fields;
};
enum SimpleLocomotion_RotationMode__Enum : int32_t {
  SimpleLocomotion_RotationMode__Enum_Smooth = 0,
  SimpleLocomotion_RotationMode__Enum_Linear = 1,
};
struct SimpleLocomotion_RotationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SimpleLocomotion_RotationMode__Enum value;
};
struct SimpleLocomotion__Fields {
  struct MonoBehaviour__Fields _;
  struct CameraController * cameraController;
  float accelerationTime;
  float turnTime;
  bool walkByDefault;
  enum SimpleLocomotion_RotationMode__Enum rotationMode;
  float moveSpeed;
  bool _isGrounded_k__BackingField;
  struct Animator * animator;
  float speed;
  float angleVel;
  float speedVel;
  struct Vector3 linearTargetDirection;
  struct CharacterController * characterController;
};
struct SimpleLocomotion {
  struct SimpleLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct SimpleLocomotion__Fields fields;
};
struct SimpleLocomotion__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SimpleLocomotion__StaticFields {
};
struct SimpleLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleLocomotion__VTable vtable;
};
struct ExplosionDemo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ExplosionDemo__StaticFields {
};
struct ExplosionDemo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExplosionDemo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExplosionDemo__VTable vtable;
};

struct FBBIKSettings__Fields {
  struct MonoBehaviour__Fields _;
  struct FullBodyBipedIK * ik;
  bool disableAfterStart;
  struct FBBIKSettings_Limb * leftArm;
  struct FBBIKSettings_Limb * rightArm;
  struct FBBIKSettings_Limb * leftLeg;
  struct FBBIKSettings_Limb * rightLeg;
  float rootPin;
  bool bodyEffectChildNodes;
};
struct FBBIKSettings {
  struct FBBIKSettings__Class *klass;
  struct MonitorData *monitor;
  struct FBBIKSettings__Fields fields;
};
struct __declspec(align(8)) FBBIKSettings_Limb__Fields {
  enum FBIKChain_Smoothing__Enum reachSmoothing;
  float maintainRelativePositionWeight;
  float mappingWeight;
};
struct FBBIKSettings_Limb {
  struct FBBIKSettings_Limb__Class *klass;
  struct MonitorData *monitor;
  struct FBBIKSettings_Limb__Fields fields;
};
struct FBBIKSettings_Limb__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBBIKSettings_Limb__StaticFields {
};
struct FBBIKSettings_Limb__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBBIKSettings_Limb__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBBIKSettings_Limb__VTable vtable;
};
struct FBBIKSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBBIKSettings__StaticFields {
};
struct FBBIKSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBBIKSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBBIKSettings__VTable vtable;
};

struct FBIKBendGoal__Fields {
  struct MonoBehaviour__Fields _;
  struct FullBodyBipedIK * ik;
  enum FullBodyBipedChain__Enum chain;
  float weight;
};
struct FBIKBendGoal {
  struct FBIKBendGoal__Class *klass;
  struct MonitorData *monitor;
  struct FBIKBendGoal__Fields fields;
};
struct FBIKBendGoal__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBIKBendGoal__StaticFields {
};
struct FBIKBendGoal__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBIKBendGoal__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBIKBendGoal__VTable vtable;
};

struct FBIKBoxing__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * target;
  struct Transform * pin;
  struct FullBodyBipedIK * ik;
  struct AimIK * aim;
  float weight;
  enum FullBodyBipedEffector__Enum effector;
  struct AnimationCurve * aimWeight;
  struct Animator * animator;
};
struct FBIKBoxing {
  struct FBIKBoxing__Class *klass;
  struct MonitorData *monitor;
  struct FBIKBoxing__Fields fields;
};
struct FBIKBoxing__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBIKBoxing__StaticFields {
};
struct FBIKBoxing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBIKBoxing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBIKBoxing__VTable vtable;
};

struct FBIKHandsOnProp__Fields {
  struct MonoBehaviour__Fields _;
  struct FullBodyBipedIK * ik;
  bool leftHanded;
};
struct FBIKHandsOnProp {
  struct FBIKHandsOnProp__Class *klass;
  struct MonitorData *monitor;
  struct FBIKHandsOnProp__Fields fields;
};
struct FBIKHandsOnProp__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FBIKHandsOnProp__StaticFields {
};
struct FBIKHandsOnProp__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FBIKHandsOnProp__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FBIKHandsOnProp__VTable vtable;
};

struct FPSAiming__Fields {
  struct MonoBehaviour__Fields _;
  float aimWeight;
  float sightWeight;
  float maxAngle;
  bool animatePhysics;
  struct Transform * gun;
  struct Transform * gunTarget;
  struct FullBodyBipedIK * ik;
  struct AimIK * gunAim;
  struct CameraControllerFPS * cam;
  struct Vector3 gunTargetDefaultLocalPosition;
  struct Quaternion gunTargetDefaultLocalRotation;
  struct Vector3 camDefaultLocalPosition;
  struct Vector3 camRelativeToGunTarget;
  bool updateFrame;
  struct Recoil * recoil;
  float cameraRecoilWeight;
};
struct FPSAiming {
  struct FPSAiming__Class *klass;
  struct MonitorData *monitor;
  struct FPSAiming__Fields fields;
};
struct FPSAiming__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FPSAiming__StaticFields {
};
struct FPSAiming__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FPSAiming__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FPSAiming__VTable vtable;
};

struct FPSCharacter__Fields {
  struct MonoBehaviour__Fields _;
  float walkSpeed;
  float sVel;
  struct Animator * animator;
  struct FPSAiming * FPSAiming;
};
struct FPSCharacter {
  struct FPSCharacter__Class *klass;
  struct MonitorData *monitor;
  struct FPSCharacter__Fields fields;
};
struct FPSCharacter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}