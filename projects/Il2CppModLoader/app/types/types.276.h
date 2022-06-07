namespace app {
struct AnimationWarping_Warp__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AnimationWarping_Warp__StaticFields {
};

struct AnimationWarping_Warp__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationWarping_Warp__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationWarping_Warp__VTable vtable;
};

struct AnimationWarping_Warp__Array__VTable {
};

struct AnimationWarping_Warp__Array__StaticFields {
};

struct AnimationWarping_Warp__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationWarping_Warp__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationWarping_Warp__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimationWarping__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimationWarping__VTable vtable;
};

struct AnimatorController3rdPerson__Fields {
    struct MonoBehaviour__Fields _;
    float rotateSpeed;
    float blendSpeed;
    float maxAngle;
    float moveSpeed;
    float rootMotionWeight;
    struct Animator *animator;
    struct Vector3 moveBlend;
    struct Vector3 moveInput;
    struct Vector3 velocity;
};

struct AnimatorController3rdPerson {
    struct AnimatorController3rdPerson__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorController3rdPerson__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AnimatorController3rdPerson__VTable vtable;
};

struct AnimatorController3rdPersonIK__Fields {
    struct AnimatorController3rdPerson__Fields _;
    bool useIK;
    float headLookWeight;
    struct Vector3 gunHoldOffset;
    struct Vector3 leftHandOffset;
    struct AimIK *aim;
    struct FullBodyBipedIK *ik;
    struct Vector3 headLookAxis;
    struct Vector3 leftHandPosRelToRightHand;
    struct Quaternion leftHandRotRelToRightHand;
    struct Vector3 aimTarget;
};

struct AnimatorController3rdPersonIK {
    struct AnimatorController3rdPersonIK__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AnimatorController3rdPersonIK__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
    struct CharacterAnimationBase__Fields fields;
};

struct CharacterAnimationThirdPerson__Fields {
    struct CharacterAnimationBase__Fields _;
    struct CharacterThirdPerson *characterController;
    float turnSensitivity;
    float turnSpeed;
    float runCycleLegOffset;
    float animSpeedMultiplier;
    struct Animator *animator;
    struct Vector3 lastForward;
};

struct CharacterAnimationThirdPerson {
    struct CharacterAnimationThirdPerson__Class *klass;
    MonitorData *monitor;
    struct CharacterAnimationThirdPerson__Fields fields;
};

struct CharacterAnimationThirdPersonIK__Fields {
    struct CharacterAnimationThirdPerson__Fields _;
    struct FullBodyBipedIK *ik;
};

struct CharacterAnimationThirdPersonIK {
    struct CharacterAnimationThirdPersonIK__Class *klass;
    MonitorData *monitor;
    struct CharacterAnimationThirdPersonIK__Fields fields;
};

struct CharacterBase__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *gravityTarget;
    float gravityMultiplier;
    float airborneThreshold;
    float slopeStartAngle;
    float slopeEndAngle;
    float spherecastRadius;
    struct LayerMask groundLayers;
    struct PhysicMaterial *zeroFrictionMaterial;
    struct PhysicMaterial *highFrictionMaterial;
    struct Rigidbody *r;
    float originalHeight;
    struct Vector3 originalCenter;
    struct CapsuleCollider *capsule;
};

struct CharacterBase {
    struct CharacterBase__Class *klass;
    MonitorData *monitor;
    struct CharacterBase__Fields fields;
};

enum class CharacterThirdPerson_MoveMode__Enum : int32_t {
    Directional = 0x00000000,
    Strafe = 0x00000001,
};

struct CharacterThirdPerson_MoveMode__Enum__Boxed {
    struct CharacterThirdPerson_MoveMode__Enum__Class *klass;
    MonitorData *monitor;
    CharacterThirdPerson_MoveMode__Enum value;
    
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
    MonitorData *monitor;
    struct CharacterThirdPerson_AnimState fields;
};

struct CharacterThirdPerson__Fields {
    struct CharacterBase__Fields _;
    struct CharacterAnimationBase *characterAnimation;
    struct UserControlThirdPerson *userControl;
    struct CameraController *cam;
    CharacterThirdPerson_MoveMode__Enum moveMode;
    
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
    struct Animator *animator;
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
    MonitorData *monitor;
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
    MonitorData *monitor;
    struct UserControlThirdPerson_State fields;
};

struct UserControlThirdPerson__Fields {
    struct MonoBehaviour__Fields _;
    bool walkByDefault;
    bool canCrouch;
    bool canJump;
    struct UserControlThirdPerson_State state;
    struct Transform *cam;
};

struct UserControlThirdPerson {
    struct UserControlThirdPerson__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterAnimationBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterBase__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserControlThirdPerson_State__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UserControlThirdPerson__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UserControlThirdPerson__VTable vtable;
};

struct CharacterThirdPerson_MoveMode__Enum__VTable {
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

struct CharacterThirdPerson_MoveMode__Enum__StaticFields {
};

struct CharacterThirdPerson_MoveMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterThirdPerson_MoveMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterThirdPerson_MoveMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterThirdPerson_AnimState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterThirdPerson__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterAnimationThirdPerson__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterAnimationThirdPersonIK__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharacterAnimationThirdPersonIK__VTable vtable;
};

struct CharacterController3rdPerson__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraController *cam;
    struct AnimatorController3rdPerson *animatorController;
};

struct CharacterController3rdPerson {
    struct CharacterController3rdPerson__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharacterController3rdPerson__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EffectorOffset__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EffectorOffset__VTable vtable;
};

struct ExplosionDemo__Fields {
    struct MonoBehaviour__Fields _;
    struct SimpleLocomotion *character;
    float forceMlp;
    float upForce;
    float weightFalloffSpeed;
    struct AnimationCurve *weightFalloff;
    struct AnimationCurve *explosionForceByDistance;
    struct AnimationCurve *scale;
    float weight;
    struct Vector3 defaultScale;
    struct Rigidbody *r;
    struct FullBodyBipedIK *ik;
};

struct ExplosionDemo {
    struct ExplosionDemo__Class *klass;
    MonitorData *monitor;
    struct ExplosionDemo__Fields fields;
};

enum class SimpleLocomotion_RotationMode__Enum : int32_t {
    Smooth = 0x00000000,
    Linear = 0x00000001,
};

struct SimpleLocomotion_RotationMode__Enum__Boxed {
    struct SimpleLocomotion_RotationMode__Enum__Class *klass;
    MonitorData *monitor;
    SimpleLocomotion_RotationMode__Enum value;
    
};

struct SimpleLocomotion__Fields {
    struct MonoBehaviour__Fields _;
    struct CameraController *cameraController;
    float accelerationTime;
    float turnTime;
    bool walkByDefault;
    SimpleLocomotion_RotationMode__Enum rotationMode;
    
    float moveSpeed;
    bool _isGrounded_k__BackingField;
    struct Animator *animator;
    float speed;
    float angleVel;
    float speedVel;
    struct Vector3 linearTargetDirection;
    struct CharacterController *characterController;
};

struct SimpleLocomotion {
    struct SimpleLocomotion__Class *klass;
    MonitorData *monitor;
    struct SimpleLocomotion__Fields fields;
};

struct SimpleLocomotion_RotationMode__Enum__VTable {
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

struct SimpleLocomotion_RotationMode__Enum__StaticFields {
};

struct SimpleLocomotion_RotationMode__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleLocomotion_RotationMode__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SimpleLocomotion_RotationMode__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SimpleLocomotion__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExplosionDemo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ExplosionDemo__VTable vtable;
};

struct FBBIKSettings__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK *ik;
    bool disableAfterStart;
    struct FBBIKSettings_Limb *leftArm;
    struct FBBIKSettings_Limb *rightArm;
    struct FBBIKSettings_Limb *leftLeg;
    struct FBBIKSettings_Limb *rightLeg;
    float rootPin;
    bool bodyEffectChildNodes;
};

struct FBBIKSettings {
    struct FBBIKSettings__Class *klass;
    MonitorData *monitor;
    struct FBBIKSettings__Fields fields;
};

struct __declspec(align(8)) FBBIKSettings_Limb__Fields {
    FBIKChain_Smoothing__Enum reachSmoothing;
    
    float maintainRelativePositionWeight;
    float mappingWeight;
};

struct FBBIKSettings_Limb {
    struct FBBIKSettings_Limb__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FBBIKSettings_Limb__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FBBIKSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FBBIKSettings__VTable vtable;
};

struct FBIKBendGoal__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK *ik;
    FullBodyBipedChain__Enum chain;
    
    float weight;
};

struct FBIKBendGoal {
    struct FBIKBendGoal__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FBIKBendGoal__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FBIKBendGoal__VTable vtable;
};

struct FBIKBoxing__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *target;
    struct Transform *pin;
    struct FullBodyBipedIK *ik;
    struct AimIK *aim;
    float weight;
    FullBodyBipedEffector__Enum effector;
    
    struct AnimationCurve *aimWeight;
    struct Animator *animator;
};

struct FBIKBoxing {
    struct FBIKBoxing__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FBIKBoxing__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FBIKBoxing__VTable vtable;
};

struct FBIKHandsOnProp__Fields {
    struct MonoBehaviour__Fields _;
    struct FullBodyBipedIK *ik;
    bool leftHanded;
};

struct FBIKHandsOnProp {
    struct FBIKHandsOnProp__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FBIKHandsOnProp__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FBIKHandsOnProp__VTable vtable;
};

struct FPSAiming__Fields {
    struct MonoBehaviour__Fields _;
    float aimWeight;
    float sightWeight;
    float maxAngle;
    bool animatePhysics;
    struct Transform *gun;
    struct Transform *gunTarget;
    struct FullBodyBipedIK *ik;
    struct AimIK *gunAim;
    struct CameraControllerFPS *cam;
    struct Vector3 gunTargetDefaultLocalPosition;
    struct Quaternion gunTargetDefaultLocalRotation;
    struct Vector3 camDefaultLocalPosition;
    struct Vector3 camRelativeToGunTarget;
    bool updateFrame;
    struct Recoil *recoil;
    float cameraRecoilWeight;
};

struct FPSAiming {
    struct FPSAiming__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FPSAiming__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FPSAiming__VTable vtable;
};

struct FPSCharacter__Fields {
    struct MonoBehaviour__Fields _;
    float walkSpeed;
    float sVel;
    struct Animator *animator;
    struct FPSAiming *FPSAiming;
};

struct FPSCharacter {
    struct FPSCharacter__Class *klass;
    MonitorData *monitor;
    struct FPSCharacter__Fields fields;
};

struct FPSCharacter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FPSCharacter__StaticFields {
};

struct FPSCharacter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FPSCharacter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FPSCharacter__VTable vtable;
};

struct HitReactionTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct HitReaction *hitReaction;
    float hitForce;
    struct String *colliderName;
};

struct HitReactionTrigger {
    struct HitReactionTrigger__Class *klass;
    MonitorData *monitor;
    struct HitReactionTrigger__Fields fields;
};

}
