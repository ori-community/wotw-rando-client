namespace app {
struct ApplyForceToPhysicsSystem_ExplosionSettings__Boxed {
  struct ApplyForceToPhysicsSystem_ExplosionSettings__Class *klass;
  struct MonitorData *monitor;
  struct ApplyForceToPhysicsSystem_ExplosionSettings fields;
};
struct ApplyForceToPhysicsSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct PhysicalSystemManager * PhysicalSystemManager;
  struct Rigidbody * ApplyToSpecificBody;
  struct EventTriggerAnimator * TimelineTrigger;
  struct FloatAnimator * TimelineForceCurve;
  struct ApplyForceToPhysicsSystem_ExplosionSettings Explosion;
  bool ReverseForceEveryFrameShaking;
  struct Vector3 setVelocity;
  bool m_isSuspended;
  float m_reversing;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ApplyForceToPhysicsSystem {
  struct ApplyForceToPhysicsSystem__Class *klass;
  struct MonitorData *monitor;
  struct ApplyForceToPhysicsSystem__Fields fields;
};
struct ApplyForceToPhysicsSystem_ExplosionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ApplyForceToPhysicsSystem_ExplosionSettings__StaticFields {
};
struct ApplyForceToPhysicsSystem_ExplosionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ApplyForceToPhysicsSystem_ExplosionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ApplyForceToPhysicsSystem_ExplosionSettings__VTable vtable;
};
struct ApplyForceToPhysicsSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnUpdatePhysics;
};
struct ApplyForceToPhysicsSystem__StaticFields {
};
struct ApplyForceToPhysicsSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ApplyForceToPhysicsSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ApplyForceToPhysicsSystem__VTable vtable;
};

struct AttachInteractionToPhysicsSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct AttachInteractionToPhysicsSystem_SoundInteractionSettings * sound;
  float movementThreshold;
  float rotationThreshold;
  float stretchThreshold;
  float sampleTime;
  float cooldownTime;
  struct Transform * attachToSystem;
  bool use2Points;
  struct Vector3 anchor1;
  struct Vector3 anchor2;
  struct Transform * m_connectedTransform1;
  struct Transform * m_connectedTransform2;
  struct IPhysicsAttachable * m_physicsSystem;
  struct Vector3 m_connectedAnchor1;
  struct Vector3 m_connectedAnchor2;
  float m_initiaStretchDistance;
  bool m_isSuspended;
  struct Vector3 m_oldPosition;
  float m_oldRotation;
  float m_oldLength;
  float m_time;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct AttachInteractionToPhysicsSystem {
  struct AttachInteractionToPhysicsSystem__Class *klass;
  struct MonitorData *monitor;
  struct AttachInteractionToPhysicsSystem__Fields fields;
};
struct __declspec(align(8)) AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields {
  struct Rect movementVolumeRemapping;
  struct Rect rotationVolumeRemapping;
  struct Rect stretchVolumeRemapping;
  struct SoundProvider * SoundProvider;
  struct Event_1 * WiseEvent;
  struct RTPC * ImpactRtpc;
  float volume;
};
struct AttachInteractionToPhysicsSystem_SoundInteractionSettings {
  struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class *klass;
  struct MonitorData *monitor;
  struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Fields fields;
};
struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__StaticFields {
};
struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachInteractionToPhysicsSystem_SoundInteractionSettings__VTable vtable;
};
struct AttachInteractionToPhysicsSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PerformAttachment;
  VirtualInvokeData OnUpdatePhysics;
};
struct AttachInteractionToPhysicsSystem__StaticFields {
  bool LogDetailsAboutIssues;
};
struct AttachInteractionToPhysicsSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachInteractionToPhysicsSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachInteractionToPhysicsSystem__VTable vtable;
};

enum AttachSoundToPhysicsSystem_SoundTypes__Enum : int32_t {
  AttachSoundToPhysicsSystem_SoundTypes__Enum_Stretching = 0,
  AttachSoundToPhysicsSystem_SoundTypes__Enum_Bending = 1,
};
struct AttachSoundToPhysicsSystem_SoundTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AttachSoundToPhysicsSystem_SoundTypes__Enum value;
};
struct AttachSoundToPhysicsSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundHost * SoundHost;
  struct RTPC * RTPC;
  enum AttachSoundToPhysicsSystem_SoundTypes__Enum SoundType;
  float SpeedScaling;
  struct Transform * attachToSystem;
  bool AttachToWorld;
  struct Vector3 anchor1;
  struct Vector3 anchor2;
  struct Transform * m_connectedTransform1;
  struct Transform * m_connectedTransform2;
  struct IPhysicsAttachable * m_physicsSystem;
  struct Vector3 m_connectedAnchor1;
  struct Vector3 m_connectedAnchor2;
  float m_initiaStretchDistance;
  bool m_isSuspended;
  struct Transform * m_transform;
  float m_oldDistance;
  float m_oldDeltaAngle;
  float m_oldAngle;
  float m_rtpcValue;
  float m_distanceSpeed;
  float m_rotationSpeed;
  bool m_initialized;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct AttachSoundToPhysicsSystem {
  struct AttachSoundToPhysicsSystem__Class *klass;
  struct MonitorData *monitor;
  struct AttachSoundToPhysicsSystem__Fields fields;
};
struct AttachSoundToPhysicsSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnUpdatePhysics;
  VirtualInvokeData PerformAttachment;
};
struct AttachSoundToPhysicsSystem__StaticFields {
};
struct AttachSoundToPhysicsSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSoundToPhysicsSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSoundToPhysicsSystem__VTable vtable;
};

struct AttachSpriteToPhysicsSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * attachToSystem;
  bool use2Points;
  bool attachToWorld;
  float movementAmount;
  float rotationAmount;
  float stretchAmount;
  struct Vector3 anchor1;
  struct Vector3 anchor2;
  struct PhysicMaterial * overridePhysicsMaterial;
  bool Record;
  struct Transform * m_connectedTransform1;
  struct Transform * m_connectedTransform2;
  struct Vector3 m_connectedAnchor1;
  struct Vector3 m_connectedAnchor2;
  struct Vector3 m_initialPosition;
  struct Quaternion m_InitialRotation;
  struct Quaternion m_rotationDelta;
  struct Vector3 m_initialScale;
  float m_initiaStretchDistance;
  bool m_stretchHorizontally;
  struct Transform * transform;
  bool _Moon_ISuspendable_IsSuspended_k__BackingField;
  enum SuspendableMask__Enum _Moon_ISuspendable_Mask_k__BackingField;
  struct Matrix4x4 m_connectedTransform1Matrix;
  bool m_connectedTransform2Valid;
  struct Matrix4x4 m_connectedTransform2Matrix;
};
struct AttachSpriteToPhysicsSystem {
  struct AttachSpriteToPhysicsSystem__Class *klass;
  struct MonitorData *monitor;
  struct AttachSpriteToPhysicsSystem__Fields fields;
};
struct AttachSpriteToPhysicsSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Moon_ISuspendable_get_Mask;
  VirtualInvokeData Moon_ISuspendable_set_Mask;
  VirtualInvokeData Moon_ISuspendable_get_IsSuspended;
  VirtualInvokeData Moon_ISuspendable_set_IsSuspended;
  VirtualInvokeData Moon_IPhysicsUpdateHandler_OnUpdatePhysics;
  VirtualInvokeData Moon_IPhysicsUpdateHandlerValidable_get_IsValid;
  VirtualInvokeData IRecordableTransform_get_TrackTranformChangesForRecording;
  VirtualInvokeData IRecordableTransform_get_TrackingExclusions;
  VirtualInvokeData IRecordable_get_ParsingGroup;
};
struct AttachSpriteToPhysicsSystem__StaticFields {
};
struct AttachSpriteToPhysicsSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem__VTable vtable;
};

struct __declspec(align(8)) AttachSpriteToPhysicsSystem_JobSystem__Fields {
  struct AttachSpriteToPhysicsSystem__Array * entities;
  bool isInit;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour * systemWithMonoBehaviour;
};
struct AttachSpriteToPhysicsSystem_JobSystem {
  struct AttachSpriteToPhysicsSystem_JobSystem__Class *klass;
  struct MonitorData *monitor;
  struct AttachSpriteToPhysicsSystem_JobSystem__Fields fields;
};
struct AttachSpriteToPhysicsSystem__Array {
  struct AttachSpriteToPhysicsSystem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AttachSpriteToPhysicsSystem * vector[32];
};
struct __declspec(align(8)) AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Fields {
  struct AttachSpriteToPhysicsSystem__Array * entities;
  struct TransformAccessArray transforms;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Fields fields;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__StaticFields {
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__VTable vtable;
};
struct AttachSpriteToPhysicsSystem_JobSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Execute;
  VirtualInvokeData ExecuteLate;
  VirtualInvokeData Dispose;
};
struct AttachSpriteToPhysicsSystem_JobSystem__StaticFields {
  enum JobMode__Enum jobMode;
  bool forceComplete;
};
struct AttachSpriteToPhysicsSystem_JobSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem_JobSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem_JobSystem__VTable vtable;
};

struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_ {
  struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___Class *klass;
  struct MonitorData *monitor;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers {
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class *klass;
  struct MonitorData *monitor;
};
struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___StaticFields {
  struct CustomSampler * Pre;
  struct CustomSampler * Post;
  struct CustomSampler * Schedule;
  struct CustomSampler * Complete;
  struct CustomSampler * ScheduleBatchedJobs;
};
struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Samplers_1_AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour___VTable vtable;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__StaticFields {
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c {
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Fields {
  struct MulticastDelegate__Fields _;
};
struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform_ {
  struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
  struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Fields fields;
};
struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___StaticFields {
};
struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform___VTable vtable;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__StaticFields {
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c * __9;
  struct Converter_2_AttachSpriteToPhysicsSystem_UnityEngine_Transform_ * __9__2_0;
};
struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__VTable vtable;
};

struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
  struct AttachSpriteToPhysicsSystem__Array * items;
};
struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed {
  struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour fields;
};
struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Execute;
};
struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__StaticFields {
};
struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__VTable vtable;
};

struct AttachSpriteToTransform__Fields {
  struct MonoBehaviour__Fields _;
  bool use2Points;
  bool attachToWorld;
  float movementAmount;
  float rotationAmount;
  float stretchAmount;
  struct Vector3 anchor1;
  struct Vector3 anchor2;
  struct Transform * ConnectedTransform1;
  struct Transform * ConnectedTransform2;
  struct Vector3 m_connectedAnchor1;
  struct Vector3 m_connectedAnchor2;
  struct Vector3 m_initialPosition;
  struct Quaternion m_InitialRotation;
  struct Quaternion m_rotationDelta;
  struct Vector3 m_initialScale;
  float m_initiaStretchDistance;
  bool m_stretchHorizontally;
  bool m_shouldBeAttachedAfterLoading;
  bool m_isSuspended;
  struct Transform * m_transform;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct AttachSpriteToTransform {
  struct AttachSpriteToTransform__Class *klass;
  struct MonitorData *monitor;
  struct AttachSpriteToTransform__Fields fields;
};
struct AttachSpriteToTransform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
};
struct AttachSpriteToTransform__StaticFields {
};
struct AttachSpriteToTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachSpriteToTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachSpriteToTransform__VTable vtable;
};

struct AttachToPhysicsSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * attachToSystem;
  struct Rigidbody * attachToSpecificBody;
  struct Vector3 anchor;
  struct AttachJointSettings * jointSettings;
  bool UseDebug;
  struct ConfigurableJoint * m_generatedConfigurableJoint;
  struct IPhysicsAttachable * m_physicsSystem;
};
struct AttachToPhysicsSystem {
  struct AttachToPhysicsSystem__Class *klass;
  struct MonitorData *monitor;
  struct AttachToPhysicsSystem__Fields fields;
};
struct AttachToPhysicsSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData PerformAttachment;
};
struct AttachToPhysicsSystem__StaticFields {
};
struct AttachToPhysicsSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachToPhysicsSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachToPhysicsSystem__VTable vtable;
};

struct LimitRigidbodyMovement__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * attachToSystem;
  struct Bounds bounds;
  float limitForce;
  float feedback;
  struct Vector3 anchor;
  struct Rigidbody * m_rigidBody;
  struct Vector3 m_connectedAnchor;
  struct IPhysicsAttachable * m_physicsSystem;
};
struct LimitRigidbodyMovement {
  struct LimitRigidbodyMovement__Class *klass;
  struct MonitorData *monitor;
  struct LimitRigidbodyMovement__Fields fields;
};
struct LimitRigidbodyMovement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnUpdatePhysics;
  VirtualInvokeData PerformAttachment;
};
struct LimitRigidbodyMovement__StaticFields {
};
struct LimitRigidbodyMovement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LimitRigidbodyMovement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LimitRigidbodyMovement__VTable vtable;
};

struct PhysicalInteractable__Fields {
  struct MonoBehaviour__Fields _;
  float Radius;
  float AddFallGravityMultiplier;
  struct MoonTimeline * DamageTimeline;
  float Cooldown;
  float ContactDamageReceived;
  struct FloatRange_1 ForceRandomness;
  struct Vector2 InteractionMinForceToReact;
  float InteractionForceMultipler;
  struct FloatRange_1 InteractionXVelocityRange;
  struct FloatRange_1 InteractionYVelocityRange;
  struct Vector2 DamageMinForceToReact;
  float DamageForceMultipler;
  struct FloatRange_1 DamageXVelocityRange;
  struct FloatRange_1 DamageYVelocityRange;
  struct Event_1 * ForceAppliedEvent;
  struct Event_1 * CollisionEvent;
  struct RTPC * ForceRtpc;
  struct SoundHost * SoundHost;
  struct DamageReceiver * m_damageReceiver;
  struct Rigidbody * m_rigidBody;
  struct Transform * m_transform;
  float m_timer;
  struct Damage * m_interactionDamage;
  bool m_canApplyExtraGravity;
  int32_t _Index_k__BackingField;
  bool _IsRegistered_k__BackingField;
  enum SuspendableMask__Enum _Mask_k__BackingField;
  bool _IsSuspended_k__BackingField;
};
struct PhysicalInteractable {
  struct PhysicalInteractable__Class *klass;
  struct MonitorData *monitor;
  struct PhysicalInteractable__Fields fields;
};
struct PhysicalInteractable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetInteraction;
  VirtualInvokeData RemoveInteraction;
  VirtualInvokeData DoesOverlap;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetExplodePoint;
  VirtualInvokeData MaxRadius;
  VirtualInvokeData OnRegistered;
  VirtualInvokeData IsWater;
  VirtualInvokeData get_Index;
  VirtualInvokeData set_Index;
  VirtualInvokeData get_IsRegistered;
  VirtualInvokeData set_IsRegistered;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_IsStatic;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct PhysicalInteractable__StaticFields {
};
struct PhysicalInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalInteractable__VTable vtable;
};

struct PhysicalSoftInteraction__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 anchor1;
  struct Vector3 anchor2;
  float radius;
  float velocityInteractionForce;
  bool drawGizmo;
  struct Rigidbody * RigidBody;
  struct Transform * m_transform;
  int32_t _Index_k__BackingField;
  bool _IsRegistered_k__BackingField;
  bool _WantsToRegister_k__BackingField;
};
struct PhysicalSoftInteraction {
  struct PhysicalSoftInteraction__Class *klass;
  struct MonitorData *monitor;
  struct PhysicalSoftInteraction__Fields fields;
};
struct PhysicalSoftInteraction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetInteraction;
  VirtualInvokeData RemoveInteraction;
  VirtualInvokeData DoesOverlap;
  VirtualInvokeData GetPosition;
  VirtualInvokeData GetExplodePoint;
  VirtualInvokeData MaxRadius;
  VirtualInvokeData OnRegistered;
  VirtualInvokeData IsWater;
  VirtualInvokeData get_Index;
  VirtualInvokeData set_Index;
  VirtualInvokeData get_IsRegistered;
  VirtualInvokeData set_IsRegistered;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_IsStatic;
};
struct PhysicalSoftInteraction__StaticFields {
  bool DisableDeltaTimeBasedScaling;
};
struct PhysicalSoftInteraction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalSoftInteraction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalSoftInteraction__VTable vtable;
};

struct __declspec(align(8)) PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct PhysicalSystemManager * __4__this;
  struct PhysicalSystemState * _state_5__2;
  int32_t _i_5__3;
};
struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157 {
  struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class *klass;
  struct MonitorData *monitor;
  struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Fields fields;
};
struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__VTable {
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
struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__StaticFields {
};
struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalSystemManager_TimeSliceDisablePhysics_d_157__VTable vtable;
};

struct __declspec(align(8)) PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct PhysicalSystemManager * __4__this;
  struct PhysicalSystemState * _state_5__2;
  int32_t _i_5__3;
};
struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159 {
  struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class *klass;
  struct MonitorData *monitor;
  struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Fields fields;
};
struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__VTable {
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
struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__StaticFields {
};
struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalSystemManager_TimeSliceActivatePhysics_d_159__VTable vtable;
};

struct PhysicalSystemStateModifier__Fields {
  struct SetupStateModifierData__Fields _;
};
struct PhysicalSystemStateModifier {
  struct PhysicalSystemStateModifier__Class *klass;
  struct MonitorData *monitor;
  struct PhysicalSystemStateModifier__Fields fields;
};
struct PhysicalSystemStateModifier__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData GetIdToTypeMap;
  VirtualInvokeData Apply;
  VirtualInvokeData OnTargetChange;
  VirtualInvokeData CaptureCurrentTargetState;
  VirtualInvokeData GetIdToTypeMap_1;
};
struct PhysicalSystemStateModifier__StaticFields {
};
struct PhysicalSystemStateModifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PhysicalSystemStateModifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PhysicalSystemStateModifier__VTable vtable;
};

struct PhysicsCage__Fields {
  struct CageStructureTool__Fields _;
  int32_t solverIterations;
  struct PhysicMaterial * physicMaterial;
  float tension;
  struct PhysicsEdgeMetaData * edgeMetadata;
  struct List_1_SkinningModifier_ * skinnedSprites;
  bool rail;
  bool railStartActivated;
  enum RailType__Enum railType;
  float railMaxWidth;
  bool railAllowFlipping;
  bool EditorSpriteMovement;
  bool SegmentPivotAtVertex;
  bool GenerateAngularDriveForWorld;
  bool m_isSuspended;
};
struct PhysicsCage {
  struct PhysicsCage__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsCage__Fields fields;
};
struct CageMetaData_1_PhysicsEdge___Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_System_Int32_ * IDs;
  struct List_1_PhysicsEdge_ * Data;
  struct PhysicsEdge * DefaultValue;
  struct CageStructureTool * CageStructureTool;
  bool ShouldSerialize;
};
struct CageMetaData_1_PhysicsEdge_ {
  struct CageMetaData_1_PhysicsEdge___Class *klass;
  struct MonitorData *monitor;
  struct CageMetaData_1_PhysicsEdge___Fields fields;
};
struct CageEdgeMetaData_1_PhysicsEdge___Fields {
  struct CageMetaData_1_PhysicsEdge___Fields _;
};
struct CageEdgeMetaData_1_PhysicsEdge_ {
  struct CageEdgeMetaData_1_PhysicsEdge___Class *klass;
  struct MonitorData *monitor;
  struct CageEdgeMetaData_1_PhysicsEdge___Fields fields;
};
struct PhysicsEdgeMetaData__Fields {
  struct CageEdgeMetaData_1_PhysicsEdge___Fields _;
};
struct PhysicsEdgeMetaData {
  struct PhysicsEdgeMetaData__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsEdgeMetaData__Fields fields;
};
struct __declspec(align(8)) List_1_PhysicsEdge___Fields {
  struct PhysicsEdge__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_PhysicsEdge_ {
  struct List_1_PhysicsEdge___Class *klass;
  struct MonitorData *monitor;
  struct List_1_PhysicsEdge___Fields fields;
};
struct __declspec(align(8)) SkinningEdge__Fields {
  struct List_1_SkinningEdge_SkinningCapsule_ * skinningCapsules;
};
struct SkinningEdge {
  struct SkinningEdge__Class *klass;
  struct MonitorData *monitor;
  struct SkinningEdge__Fields fields;
};
struct PhysicsEdge__Fields {
  struct SkinningEdge__Fields _;
  struct CageStructureTool_Edge * tempEdge;
  bool useCapsuleCollider;
  bool useHinge;
  bool usePositionSpring;
  bool useWorldSpring;
  bool useHingeSpring;
  struct Vector3 intialPosition;
  float radius;
  bool useGravity;
  bool lockRotation;
  bool lockPosition;
  float length;
  float mass;
  float inertia;
  float drag;
  float angularDrag;
  bool goThrough;
  float hingeAngleLimit;
  float hingeSpring;
  float hingeDamper;
  float positionLimit;
  float positionSpring;
  float positionDamper;
  bool lockHorizontalMovement;
  bool allowExternalAttachments;
  bool useAngularDriveSpring;
  float angularDriveSpring;
  float angularDriveDamper;
  struct PhysicsEdge_EdgeTurbulence * turbulence;
  struct PhysicsEdge_EdgeSoftInteraction * softIntearction;
};
struct PhysicsEdge {
  struct PhysicsEdge__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsEdge__Fields fields;
};
struct PhysicsEdge__Array {
  struct PhysicsEdge__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct PhysicsEdge * vector[32];
};
struct __declspec(align(8)) List_1_SkinningEdge_SkinningCapsule___Fields {
  struct SkinningEdge_SkinningCapsule__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SkinningEdge_SkinningCapsule_ {
  struct List_1_SkinningEdge_SkinningCapsule___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SkinningEdge_SkinningCapsule___Fields fields;
};
struct __declspec(align(8)) SkinningEdge_SkinningCapsule__Fields {
  float coreRadius1;
  float faloffWidth1;
  float coreRadius2;
  float faloffWidth2;
  struct UberShaderModifier * sprite;
};
struct SkinningEdge_SkinningCapsule {
  struct SkinningEdge_SkinningCapsule__Class *klass;
  struct MonitorData *monitor;
  struct SkinningEdge_SkinningCapsule__Fields fields;
};
struct SkinningEdge_SkinningCapsule__Array {
  struct SkinningEdge_SkinningCapsule__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SkinningEdge_SkinningCapsule * vector[32];
};
struct IEnumerator_1_SkinningEdge_SkinningCapsule_ {
  struct IEnumerator_1_SkinningEdge_SkinningCapsule___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) PhysicsEdge_EdgeTurbulence__Fields {
  bool active;
  struct Vector2 force;
  float frequency;
  float magnitude;
  float offset;
};
struct PhysicsEdge_EdgeTurbulence {
  struct PhysicsEdge_EdgeTurbulence__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsEdge_EdgeTurbulence__Fields fields;
};
struct __declspec(align(8)) PhysicsEdge_EdgeSoftInteraction__Fields {
  bool active;
  float radius;
  float velocityInteractionForce;
};
struct PhysicsEdge_EdgeSoftInteraction {
  struct PhysicsEdge_EdgeSoftInteraction__Class *klass;
  struct MonitorData *monitor;
  struct PhysicsEdge_EdgeSoftInteraction__Fields fields;
};
struct IEnumerator_1_PhysicsEdge_ {
  struct IEnumerator_1_PhysicsEdge___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SkinningModifier___Fields {
  struct SkinningModifier__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SkinningModifier_ {
  struct List_1_SkinningModifier___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SkinningModifier___Fields fields;
};
struct SkinningModifier__Array {
  struct SkinningModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SkinningModifier * vector[32];
};
struct IEnumerator_1_SkinningModifier_ {
  struct IEnumerator_1_SkinningModifier___Class *klass;
  struct MonitorData *monitor;
};}