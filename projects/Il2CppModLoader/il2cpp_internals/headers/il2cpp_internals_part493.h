namespace app {
struct CC_HueSaturationValue {
  struct CC_HueSaturationValue__Class *klass;
  struct MonitorData *monitor;
  struct CC_HueSaturationValue__Fields fields;
};
struct CC_HueSaturationValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_HueSaturationValue__StaticFields {
};
struct CC_HueSaturationValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_HueSaturationValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_HueSaturationValue__VTable vtable;
};

struct CC_Led__Fields {
  struct CC_Base__Fields _;
  float scale;
  float brightness;
};
struct CC_Led {
  struct CC_Led__Class *klass;
  struct MonitorData *monitor;
  struct CC_Led__Fields fields;
};
struct CC_Led__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Led__StaticFields {
};
struct CC_Led__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Led__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Led__VTable vtable;
};

struct CC_Levels__Fields {
  struct CC_Base__Fields _;
  int32_t mode;
  float inputMinL;
  float inputMaxL;
  float inputGammaL;
  float inputMinR;
  float inputMaxR;
  float inputGammaR;
  float inputMinG;
  float inputMaxG;
  float inputGammaG;
  float inputMinB;
  float inputMaxB;
  float inputGammaB;
  float outputMinL;
  float outputMaxL;
  float outputMinR;
  float outputMaxR;
  float outputMinG;
  float outputMaxG;
  float outputMinB;
  float outputMaxB;
};
struct CC_Levels {
  struct CC_Levels__Class *klass;
  struct MonitorData *monitor;
  struct CC_Levels__Fields fields;
};
struct CC_Levels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Levels__StaticFields {
};
struct CC_Levels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Levels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Levels__VTable vtable;
};

struct CC_PhotoFilter__Fields {
  struct CC_Base__Fields _;
  struct Color color;
  float density;
};
struct CC_PhotoFilter {
  struct CC_PhotoFilter__Class *klass;
  struct MonitorData *monitor;
  struct CC_PhotoFilter__Fields fields;
};
struct CC_PhotoFilter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_PhotoFilter__StaticFields {
};
struct CC_PhotoFilter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_PhotoFilter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_PhotoFilter__VTable vtable;
};

struct CC_Pixelate__Fields {
  struct CC_Base__Fields _;
  float scale;
};
struct CC_Pixelate {
  struct CC_Pixelate__Class *klass;
  struct MonitorData *monitor;
  struct CC_Pixelate__Fields fields;
};
struct CC_Pixelate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Pixelate__StaticFields {
};
struct CC_Pixelate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Pixelate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Pixelate__VTable vtable;
};

struct CC_Posterize__Fields {
  struct CC_Base__Fields _;
  int32_t levels;
};
struct CC_Posterize {
  struct CC_Posterize__Class *klass;
  struct MonitorData *monitor;
  struct CC_Posterize__Fields fields;
};
struct CC_Posterize__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Posterize__StaticFields {
};
struct CC_Posterize__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Posterize__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Posterize__VTable vtable;
};

struct CC_RadialBlur__Fields {
  struct MonoBehaviour__Fields _;
  float amount;
  struct Vector2 center;
  int32_t quality;
  struct Shader * shaderLow;
  struct Shader * shaderMed;
  struct Shader * shaderHigh;
  struct Shader * _currentShader;
  struct Material * _material;
};
struct CC_RadialBlur {
  struct CC_RadialBlur__Class *klass;
  struct MonitorData *monitor;
  struct CC_RadialBlur__Fields fields;
};
struct CC_RadialBlur__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CC_RadialBlur__StaticFields {
};
struct CC_RadialBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_RadialBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_RadialBlur__VTable vtable;
};

struct CC_Threshold__Fields {
  struct CC_Base__Fields _;
  float threshold;
};
struct CC_Threshold {
  struct CC_Threshold__Class *klass;
  struct MonitorData *monitor;
  struct CC_Threshold__Fields fields;
};
struct CC_Threshold__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Threshold__StaticFields {
};
struct CC_Threshold__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Threshold__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Threshold__VTable vtable;
};

struct CC_Vibrance__Fields {
  struct CC_Base__Fields _;
  float amount;
};
struct CC_Vibrance {
  struct CC_Vibrance__Class *klass;
  struct MonitorData *monitor;
  struct CC_Vibrance__Fields fields;
};
struct CC_Vibrance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Start;
  VirtualInvokeData OnDisable;
};
struct CC_Vibrance__StaticFields {
};
struct CC_Vibrance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CC_Vibrance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CC_Vibrance__VTable vtable;
};

struct BabySein__Fields {
  struct MonoBehaviour__Fields _;
  struct PlatformBehaviour * PlatformBehaviour;
  struct BabySeinController * Controller;
  struct CharacterAnimationSystem * Animation;
  struct BabySeinSounds * Sounds;
  struct DamageOwner * _DamageOwner_k__BackingField;
};
struct BabySein {
  struct BabySein__Class *klass;
  struct MonitorData *monitor;
  struct BabySein__Fields fields;
};
struct BabySeinController__Fields {
  struct MonoBehaviour__Fields _;
  struct BabySein * BabySein;
  struct BabySeinController_AnimationSet * Animations;
  float JumpHeight;
  bool IgnoreControllerInput;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct BabySeinController {
  struct BabySeinController__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinController__Fields fields;
};
struct __declspec(align(8)) BabySeinController_AnimationSet__Fields {
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * FallIdle;
  struct TextureAnimationWithTransitions * GrabBoxIdle;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * JumpIdle;
  struct TextureAnimationWithTransitions * Jump;
  struct TextureAnimationWithTransitions * Walk;
};
struct BabySeinController_AnimationSet {
  struct BabySeinController_AnimationSet__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinController_AnimationSet__Fields fields;
};
struct BabySeinSounds__Fields {
  struct MonoBehaviour__Fields _;
  struct BabySein * BabySein;
  struct GameObject * FootstepsEffectPrefab;
  struct SurfaceToSoundProviderMap * FootstepsSounds;
  struct GameObject * JumpEffectPrefab;
  struct SurfaceToSoundProviderMap * JumpSound;
  struct GameObject * LandEffectPrefab;
  struct SurfaceToSoundProviderMap * LandSound;
  struct AnimationCurve * SoundsPerSecondOverSpeed;
  float m_nextStepTime;
  struct Transform * m_transform;
};
struct BabySeinSounds {
  struct BabySeinSounds__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinSounds__Fields fields;
};
struct BabySeinController_AnimationSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BabySeinController_AnimationSet__StaticFields {
};
struct BabySeinController_AnimationSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinController_AnimationSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinController_AnimationSet__VTable vtable;
};
struct BabySeinController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct BabySeinController__StaticFields {
};
struct BabySeinController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinController__VTable vtable;
};
struct BabySeinSounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BabySeinSounds__StaticFields {
};
struct BabySeinSounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinSounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinSounds__VTable vtable;
};
struct BabySein__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_MapDisplayPosition;
  VirtualInvokeData get_DeltaPosition;
  VirtualInvokeData Activate;
  VirtualInvokeData get_GameObject;
  VirtualInvokeData get_FaceLeft;
  VirtualInvokeData set_FaceLeft;
  VirtualInvokeData get_Speed;
  VirtualInvokeData set_Speed;
  VirtualInvokeData get_PhysicsSpeed;
  VirtualInvokeData get_Transform;
  VirtualInvokeData get_CameraTarget;
  VirtualInvokeData get_CapsuleController;
  VirtualInvokeData get_DamageOwner;
  VirtualInvokeData get_IsOnGround;
  VirtualInvokeData get_IsAlive;
  VirtualInvokeData PlaceOnGround;
};
struct BabySein__StaticFields {
};
struct BabySein__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySein__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySein__VTable vtable;
};

struct BabySeinSpriteRotationController__Fields {
  struct Suspendable__Fields _;
  float Angle;
  struct BabySein * BabySein;
  bool _IsSuspended_k__BackingField;
};
struct BabySeinSpriteRotationController {
  struct BabySeinSpriteRotationController__Class *klass;
  struct MonitorData *monitor;
  struct BabySeinSpriteRotationController__Fields fields;
};
struct BabySeinSpriteRotationController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct BabySeinSpriteRotationController__StaticFields {
};
struct BabySeinSpriteRotationController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BabySeinSpriteRotationController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BabySeinSpriteRotationController__VTable vtable;
};

struct Ku_c {
  struct Ku_c__Class *klass;
  struct MonitorData *monitor;
};
struct Ku_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Ku_c__StaticFields {
  struct Ku_c * __9;
  struct Action * __9__122_0;
};
struct Ku_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Ku_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Ku_c__VTable vtable;
};

struct KuDamageReceiver__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonAnimation * HurtAnimation;
  float RootMotionMultiplier;
  struct Vector2 HurtSpeed;
  struct ActiveAnimationHandle m_activeAnim;
  struct Vector2 m_damageForce;
  struct Event_1 * DamageWwiseEvent;
  struct Ku * m_ku;
};
struct KuDamageReceiver {
  struct KuDamageReceiver__Class *klass;
  struct MonitorData *monitor;
  struct KuDamageReceiver__Fields fields;
};
struct KuDamageReceiver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData SetReferenceToKu;
};
struct KuDamageReceiver__StaticFields {
};
struct KuDamageReceiver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KuDamageReceiver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KuDamageReceiver__VTable vtable;
};

struct KuDash_c {
  struct KuDash_c__Class *klass;
  struct MonitorData *monitor;
};
struct KuDash_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KuDash_c__StaticFields {
  struct KuDash_c * __9;
  struct KuDash_PreDashDelegateType * __9__124_0;
};
struct KuDash_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KuDash_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KuDash_c__VTable vtable;
};

struct KuPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * KuPrefab;
  struct SceneRoot * SceneRoot;
};
struct KuPlaceholder {
  struct KuPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct KuPlaceholder__Fields fields;
};
struct KuPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnSceneRootPostEnable;
};
struct KuPlaceholder__StaticFields {
  bool CharacterPositionSet;
};
struct KuPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KuPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KuPlaceholder__VTable vtable;
};

struct Naru__Fields {
  struct MonoBehaviour__Fields _;
  struct CharacterAnimationSystem * Animation;
  struct NaruController * Controller;
  struct PlatformBehaviour * PlatformBehaviour;
  bool SeinNaruComboEnabled;
  struct NaruSounds * Sounds;
  struct DamageOwner * _DamageOwner_k__BackingField;
};
struct Naru {
  struct Naru__Class *klass;
  struct MonitorData *monitor;
  struct Naru__Fields fields;
};
struct NaruController__Fields {
  struct MonoBehaviour__Fields _;
  struct NaruController_AnimationSet * Animations;
  float JumpHeight;
  struct StateMachine_2 * Logic;
  struct Naru * Naru;
  float m_lockHorizontalMovementDuration;
  float m_lockChangingDirectionDuration;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct NaruController {
  struct NaruController__Class *klass;
  struct MonitorData *monitor;
  struct NaruController__Fields fields;
};
struct __declspec(align(8)) NaruController_AnimationSet__Fields {
  struct TextureAnimationWithTransitions * Fall;
  struct TextureAnimationWithTransitions * FallIdle;
  struct TextureAnimationWithTransitions * Idle;
  struct TextureAnimationWithTransitions * Jump;
  struct TextureAnimationWithTransitions * JumpIdle;
  struct TextureAnimationWithTransitions * Walk;
  struct TextureAnimationWithTransitions * AgainstWall;
  struct TextureAnimationWithTransitions * LookUp;
};
struct NaruController_AnimationSet {
  struct NaruController_AnimationSet__Class *klass;
  struct MonitorData *monitor;
  struct NaruController_AnimationSet__Fields fields;
};
struct NaruSounds__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * FootstepsEffectPrefab;
  struct SurfaceToSoundProviderMap * FootstepsSounds;
  struct GameObject * JumpEffectPrefab;
  struct SurfaceToSoundProviderMap * JumpSound;
  struct GameObject * LandEffectPrefab;
  struct Naru * Naru;
  struct AnimationCurve * SoundsPerSecondOverSpeed;
  float m_nextStepTime;
  struct Transform * m_transform;
};
struct NaruSounds {
  struct NaruSounds__Class *klass;
  struct MonitorData *monitor;
  struct NaruSounds__Fields fields;
};
struct NaruController_AnimationSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NaruController_AnimationSet__StaticFields {
};
struct NaruController_AnimationSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NaruController_AnimationSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NaruController_AnimationSet__VTable vtable;
};
struct NaruController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct NaruController__StaticFields {
};
struct NaruController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NaruController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NaruController__VTable vtable;
};
struct NaruSounds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NaruSounds__StaticFields {
};
struct NaruSounds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NaruSounds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NaruSounds__VTable vtable;
};
struct Naru__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_MapDisplayPosition;
  VirtualInvokeData get_DeltaPosition;
  VirtualInvokeData Activate;
  VirtualInvokeData get_GameObject;
  VirtualInvokeData get_FaceLeft;
  VirtualInvokeData set_FaceLeft;
  VirtualInvokeData get_Speed;
  VirtualInvokeData set_Speed;
  VirtualInvokeData get_PhysicsSpeed;
  VirtualInvokeData get_Transform;
  VirtualInvokeData get_CameraTarget;
  VirtualInvokeData get_CapsuleController;
  VirtualInvokeData get_DamageOwner;
  VirtualInvokeData get_IsOnGround;
  VirtualInvokeData get_IsAlive;
  VirtualInvokeData PlaceOnGround;
};
struct Naru__StaticFields {
};
struct Naru__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Naru__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Naru__VTable vtable;
};

struct NaruLookUpZone__Fields {
  struct MonoBehaviour__Fields _;
  bool m_inside;
  struct Rect m_bounds;
};
struct NaruLookUpZone {
  struct NaruLookUpZone__Class *klass;
  struct MonitorData *monitor;
  struct NaruLookUpZone__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_NaruLookUpZone___Fields {
  struct List_1_NaruLookUpZone_ * m_objects;
};
struct AllContainer_1_NaruLookUpZone_ {
  struct AllContainer_1_NaruLookUpZone___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_NaruLookUpZone___Fields fields;
};
struct __declspec(align(8)) List_1_NaruLookUpZone___Fields {
  struct NaruLookUpZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_NaruLookUpZone_ {
  struct List_1_NaruLookUpZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_NaruLookUpZone___Fields fields;
};
struct NaruLookUpZone__Array {
  struct NaruLookUpZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NaruLookUpZone * vector[32];
};
struct IEnumerator_1_NaruLookUpZone_ {
  struct IEnumerator_1_NaruLookUpZone___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_NaruLookUpZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_NaruLookUpZone___StaticFields {
};
struct IEnumerator_1_NaruLookUpZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_NaruLookUpZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_NaruLookUpZone___VTable vtable;
};
struct List_1_NaruLookUpZone___VTable {
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
struct List_1_NaruLookUpZone___StaticFields {
  struct NaruLookUpZone__Array * _emptyArray;
};
struct List_1_NaruLookUpZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_NaruLookUpZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_NaruLookUpZone___VTable vtable;
};
struct AllContainer_1_NaruLookUpZone___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_NaruLookUpZone___StaticFields {
};
struct AllContainer_1_NaruLookUpZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_NaruLookUpZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_NaruLookUpZone___VTable vtable;
};
struct NaruLookUpZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NaruLookUpZone__StaticFields {
  struct AllContainer_1_NaruLookUpZone_ * All;
};
struct NaruLookUpZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NaruLookUpZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NaruLookUpZone__VTable vtable;
};

struct NaruSpriteRotationController__Fields {
  struct Suspendable__Fields _;
  float Angle;
  struct Naru * Naru;
  bool _IsSuspended_k__BackingField;
  struct Transform * m_transform;
};
struct NaruSpriteRotationController {
  struct NaruSpriteRotationController__Class *klass;
  struct MonitorData *monitor;
  struct NaruSpriteRotationController__Fields fields;
};
struct NaruSpriteRotationController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
};
struct NaruSpriteRotationController__StaticFields {
};
struct NaruSpriteRotationController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NaruSpriteRotationController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NaruSpriteRotationController__VTable vtable;
};

struct SeinNaruComboAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct Atlas__Array * Atlases;
  struct Naru * Naru;
  bool CorrectUvs;
  struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ * m_nameToFrames;
  struct MeshFilter * m_meshFilter;
  struct Renderer * m_renderer;
  struct Mesh * m_mesh;
  struct AtlasSpriteTextureBinder * m_binder;
};
struct SeinNaruComboAnimator {
  struct SeinNaruComboAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SeinNaruComboAnimator__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_String_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields fields;
};
struct SeinNaruComboAnimator_AtlasAndSpriteTexture {
  struct Atlas * Atlas;
  struct AtlasSpriteTexture * AtlasSpriteTexture;
};
struct SeinNaruComboAnimator_AtlasAndSpriteTexture__Boxed {
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture__Class *klass;
  struct MonitorData *monitor;
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  int32_t hashCode;
  int32_t next;
  struct String * key;
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture value;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields {
  struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields {
  struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Fields fields;
};
struct SeinNaruComboAnimator_AtlasAndSpriteTexture__Array {
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture vector[32];
};
struct IEnumerator_1_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct IEnumerator_1_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct ICollection_1_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct String * key;
  struct SeinNaruComboAnimator_AtlasAndSpriteTexture value;
};
struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Boxed {
  struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ fields;
};
struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Array {
  struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_ {
  struct IEnumerator_1_KeyValuePair_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture___Class *klass;
  struct MonitorData *monitor;
};}