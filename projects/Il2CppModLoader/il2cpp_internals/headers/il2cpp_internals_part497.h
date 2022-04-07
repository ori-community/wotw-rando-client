namespace app {

struct MeleeWeapon_c {
  struct MeleeWeapon_c__Class *klass;
  struct MonitorData *monitor;
};
struct MeleeWeapon_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MeleeWeapon_c__StaticFields {
  struct MeleeWeapon_c * __9;
  struct Action_1_DamageResult_ * __9__118_0;
};
struct MeleeWeapon_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeleeWeapon_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeleeWeapon_c__VTable vtable;
};

struct MeleeWeaponColliderStick_c {
  struct MeleeWeaponColliderStick_c__Class *klass;
  struct MonitorData *monitor;
};
struct MeleeWeaponColliderStick_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MeleeWeaponColliderStick_c__StaticFields {
  struct MeleeWeaponColliderStick_c * __9;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * __9__73_0;
  struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * __9__73_1;
  struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_ * __9__73_2;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * __9__73_3;
};
struct MeleeWeaponColliderStick_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeleeWeaponColliderStick_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeleeWeaponColliderStick_c__VTable vtable;
};

struct MeleeWeaponHammer_c {
  struct MeleeWeaponHammer_c__Class *klass;
  struct MonitorData *monitor;
};
struct MeleeWeaponHammer_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MeleeWeaponHammer_c__StaticFields {
  struct MeleeWeaponHammer_c * __9;
  struct Func_1_Boolean_ * __9__60_0;
};
struct MeleeWeaponHammer_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MeleeWeaponHammer_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MeleeWeaponHammer_c__VTable vtable;
};

struct HoldableRigidBody__Fields {
  struct MonoBehaviour__Fields _;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct MessageProvider * PickupMessage;
  struct MessageBox * m_message;
  float m_timeNotToShowMessage;
  struct Varying2DSoundProvider * OnPickUpSoundProvider;
  struct Varying2DSoundProvider * OnPutDownSoundProvider;
  struct Varying2DSoundProvider * OnHitGroundSoundProvider;
  struct LayerMask RaycastLayerMask;
  float LiftUpForDrop;
  struct Collider * Collider;
  struct Transform * DropTranform;
  struct Renderer * Renderer;
  struct AnimationCurve * MultiplyColorCurve;
  float OriNearDistanceThreshold;
  struct Rigidbody * m_rigidbody;
  struct Transform * m_transform;
  struct Vector3 m_initialScale;
  bool m_isHeld;
  float m_multiplyCurveTime;
  bool m_keepKinematicTriggerOnDrop;
  bool m_canBeHeld;
  bool m_canBeDropped;
};
struct HoldableRigidBody {
  struct HoldableRigidBody__Class *klass;
  struct MonitorData *monitor;
  struct HoldableRigidBody__Fields fields;
};
enum FireStick_Usability__Enum : int32_t {
  FireStick_Usability__Enum_None = 0,
  FireStick_Usability__Enum_Ignite = 1,
  FireStick_Usability__Enum_SetOnFire = 2,
};
struct FireStick_Usability__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FireStick_Usability__Enum value;
};
struct FireStick__Fields {
  struct HoldableRigidBody__Fields _;
  struct SoundProvider * IgniteSound;
  struct GameObject * Highlight;
  struct GameObject * GraphicsLitRed;
  struct GameObject * GraphicsLitBlue;
  struct GameObject * ExtinguishEffectPrefab;
  struct MoonAnimation * LightTorch;
  struct MoonAnimation * PlaceTorch;
  struct MoonAnimation * LightTorchFinish;
  struct MoonAnimation * PlaceTorchFinish;
  struct AnimationPostprocess * HoldTorchMask;
  float _CurrentHoldMaskTargetWeight_k__BackingField;
  float _CurrentHoldMaskBlendSpeed_k__BackingField;
  float HoldUpMaskTargetWeight;
  float HoldUpMaskBlendSpeed;
  float HoldCloseMaskTargetWeight;
  float HoldCloseMaskBlendSpeed;
  struct Flammable * Flame;
  struct GameObject * RedSparkPrefab;
  struct GameObject * BlueSparkPrefab;
  struct CollisionBasedPrefabSpawner * SparkSpawner;
  struct BaseAnimator * GlowTransparency;
  struct Transform * LightTransform;
  struct Transform * LightReferenceTransform;
  float ThrowVelocityMultiplier;
  struct Vector3 ThrowAngularVelocity;
  float Gravity;
  enum ThrowAnimationType__Enum ThrowAnimationType;
  float HoldMaskThrowBlendOutSpeed;
  struct SoundProvider * ThrowSoundProvider;
  struct Vector3 StickEulerInThrowingHand;
  struct ActionSequence * OnHitActionSequence;
  struct ActionSequence * OnBreakActionSequence;
  int32_t HitsToBreak;
  struct UberDelegate * OnUsed;
  enum FireStick_Usability__Enum m_usability;
  struct Vector3 m_interactorPosition;
  int32_t m_currentHits;
  struct Transform * m_previousParent;
  struct Quaternion m_previousRotation;
  struct Vector2 _PreviusPositionForWaterfallInteraction_k__BackingField;
  struct Rect Bounds;
};
struct FireStick {
  struct FireStick__Class *klass;
  struct MonitorData *monitor;
  struct FireStick__Fields fields;
};
enum Flammable_FlameColor__Enum : int32_t {
  Flammable_FlameColor__Enum_Red = 0,
  Flammable_FlameColor__Enum_Blue = 1,
};
struct Flammable_FlameColor__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Flammable_FlameColor__Enum value;
};
enum Flammable_FlameState__Enum : int32_t {
  Flammable_FlameState__Enum_Extinguished = 0,
  Flammable_FlameState__Enum_Burning = 1,
};
struct Flammable_FlameState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Flammable_FlameState__Enum value;
};
struct Flammable__Fields {
  struct GuidOwner__Fields _;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  enum Flammable_FlameColor__Enum Color;
  int32_t FlameColorPriority;
  float BurningDuration;
  bool BurnOnEnter;
  bool ExtinguishOnWind;
  bool DestroyOnEnter;
  bool SetToBurnOnStart;
  bool DestroyProjectile;
  bool ToggleableOnlyWhenTimelinesStopped;
  struct SerializedBooleanUberState * UberState;
  struct MoonTimeline * OnStartBurning;
  struct MoonTimeline * OnExtinguished;
  struct Action_1_Moon_Flammable_ * OnFlammableStateChange;
  struct GameObject * Flame;
  float m_remainingBurningDuration;
  enum Flammable_FlameState__Enum m_state;
  struct IUberState__Array * m_states;
  struct List_1_UnityEngine_GameObject_ * m_targets;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct Flammable {
  struct Flammable__Class *klass;
  struct MonitorData *monitor;
  struct Flammable__Fields fields;
};
struct Action_1_Moon_Flammable___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Flammable_ {
  struct Action_1_Moon_Flammable___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Flammable___Fields fields;
};
enum CollisionBasedPrefabSpawner_VelocityCheckMode__Enum : int32_t {
  CollisionBasedPrefabSpawner_VelocityCheckMode__Enum_Self = 0,
  CollisionBasedPrefabSpawner_VelocityCheckMode__Enum_Other = 1,
};
struct CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CollisionBasedPrefabSpawner_VelocityCheckMode__Enum value;
};
struct CollisionBasedPrefabSpawner__Fields {
  struct MonoBehaviour__Fields _;
  struct Func_1_UnityEngine_GameObject_ * GetPrefabOverride;
  struct GameObject__Array * Prefabs;
  enum CollisionBasedPrefabSpawner_VelocityCheckMode__Enum VelocityCheckObject;
  float MinimumVelocity;
  bool UseCollisionNormalAsUpRotation;
  struct Transform * SpecificSpawnPoint;
  struct Rigidbody * m_rigidbody;
};
struct CollisionBasedPrefabSpawner {
  struct CollisionBasedPrefabSpawner__Class *klass;
  struct MonitorData *monitor;
  struct CollisionBasedPrefabSpawner__Fields fields;
};
struct Func_1_UnityEngine_GameObject___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_UnityEngine_GameObject_ {
  struct Func_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_UnityEngine_GameObject___Fields fields;
};
struct HoldableRigidBody__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_CanBeHeld;
  VirtualInvokeData get_CanBeUsed;
  VirtualInvokeData get_CanBeDropped;
  VirtualInvokeData OnPickedUp;
  VirtualInvokeData OnDropped;
  VirtualInvokeData get_Weapon;
  VirtualInvokeData BeginUse;
  VirtualInvokeData EndUse;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CanBeUsed_1;
  VirtualInvokeData get_Weapon_1;
  VirtualInvokeData SafeDestroy;
  VirtualInvokeData OnPickedUp_1;
  VirtualInvokeData OnDropped_1;
  VirtualInvokeData BeginUse_1;
  VirtualInvokeData EndUse_1;
};
struct HoldableRigidBody__StaticFields {
};
struct HoldableRigidBody__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HoldableRigidBody__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HoldableRigidBody__VTable vtable;
};
struct Action_1_Moon_Flammable___VTable {
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
struct Action_1_Moon_Flammable___StaticFields {
};
struct Action_1_Moon_Flammable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_Flammable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_Flammable___VTable vtable;
};
struct Flammable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFlameEnter;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Apply;
  VirtualInvokeData get_ApplyOnEditor;
  VirtualInvokeData get_AffectingUberStates;
  VirtualInvokeData get_AllTargets;
  VirtualInvokeData GetRequirementsForTimeline;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_InvalidateParentTimelineCache;
  VirtualInvokeData set_InvalidateParentTimelineCache;
};
struct Flammable__StaticFields {
};
struct Flammable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Flammable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Flammable__VTable vtable;
};
struct Func_1_UnityEngine_GameObject___VTable {
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
struct Func_1_UnityEngine_GameObject___StaticFields {
};
struct Func_1_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_UnityEngine_GameObject___VTable vtable;
};
struct CollisionBasedPrefabSpawner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CollisionBasedPrefabSpawner__StaticFields {
};
struct CollisionBasedPrefabSpawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CollisionBasedPrefabSpawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CollisionBasedPrefabSpawner__VTable vtable;
};
struct FireStick__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_CanBeHeld;
  VirtualInvokeData get_CanBeUsed;
  VirtualInvokeData get_CanBeDropped;
  VirtualInvokeData OnPickedUp;
  VirtualInvokeData OnDropped;
  VirtualInvokeData get_Weapon;
  VirtualInvokeData BeginUse;
  VirtualInvokeData EndUse;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CanBeUsed_1;
  VirtualInvokeData get_Weapon_1;
  VirtualInvokeData SafeDestroy;
  VirtualInvokeData OnPickedUp_1;
  VirtualInvokeData OnDropped_1;
  VirtualInvokeData BeginUse_1;
  VirtualInvokeData EndUse_1;
  VirtualInvokeData GetAnimationType;
  VirtualInvokeData GetGravity;
  VirtualInvokeData GetThrowVelocityMultiplier;
  VirtualInvokeData OnStartAim;
  VirtualInvokeData OnUpdateAim;
  VirtualInvokeData OnThrow;
  VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
  VirtualInvokeData get_PositionForWaterfallInteraction;
  VirtualInvokeData get_SpeedForWaterfallInteraction;
  VirtualInvokeData set_SpeedForWaterfallInteraction;
  VirtualInvokeData get_BoundsForWaterfallInteraction;
  VirtualInvokeData get_WaterfallIntersectionMode;
  VirtualInvokeData get_RigidbodyForWaterfallInteraction;
  VirtualInvokeData get_IsFlamable;
};
struct FireStick__StaticFields {
  struct FireStick * Instance;
};
struct FireStick__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FireStick__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FireStick__VTable vtable;
};

struct ChargeFlameBurst__Fields {
  struct MonoBehaviour__Fields _;
  float BurstRadius;
  float DamageAmount;
  struct GameObject * BurstImpactEffectPrefab;
  float DealDamageDuration;
  float m_time;
  float m_waitDelay;
  struct HashSet_1_IAttackable_ * m_damageAttackables;
  int32_t m_simultaneousEnemies;
  bool m_suspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ChargeFlameBurst {
  struct ChargeFlameBurst__Class *klass;
  struct MonitorData *monitor;
  struct ChargeFlameBurst__Fields fields;
};
struct ChargeFlameBurst__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
};
struct ChargeFlameBurst__StaticFields {
  struct ChargeFlameBurst * m_lastInstance;
};
struct ChargeFlameBurst__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChargeFlameBurst__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChargeFlameBurst__VTable vtable;
};

enum SpiritFlameProjectile_State__Enum : int32_t {
  SpiritFlameProjectile_State__Enum_Throwing = 0,
  SpiritFlameProjectile_State__Enum_Fading = 1,
};
struct SpiritFlameProjectile_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritFlameProjectile_State__Enum value;
};
struct SpiritFlameProjectile_PointOnArc {
  float frac;
  float curve;
};
struct SpiritFlameProjectile_PointOnArc__Boxed {
  struct SpiritFlameProjectile_PointOnArc__Class *klass;
  struct MonitorData *monitor;
  struct SpiritFlameProjectile_PointOnArc fields;
};
struct SpiritFlameProjectile__Fields {
  struct MonoBehaviour__Fields _;
  float Duration;
  struct LineRenderer * LineRenderer;
  int32_t LineVertexCount;
  struct AnimationCurve * TextureOffsetCurve;
  struct AnimationCurve * SpeedCurve;
  float DestroyDelay;
  struct SoundProvider * HitSound;
  struct Event_1 * HitSoundEvent;
  struct SoundProvider * KillEntitySound;
  struct Event_1 * KillEntitySoundEvent;
  struct SoundProvider * ThrowSound;
  struct Event_1 * ThrowSoundEvent;
  struct GameObject * ImpactEffectGameObject;
  struct GameObject * ThrowEffectGameObject;
  struct AnimationCurve * DisplacementCurve;
  float DisplacementCurveOffset;
  enum DamageType__Enum DamageType;
  enum AbilityType__Enum AbilityType;
  bool HasARealTarget;
  bool m_suspended;
  enum SuspendableMask__Enum m_suspensionMask;
  struct Transform * _StartTarget_k__BackingField;
  struct SeinCharacter * _Sein_k__BackingField;
  struct Transform * _AttackableTargetTransform_k__BackingField;
  struct IAttackable * _AttackableTarget_k__BackingField;
  struct Vector3 _StartPosition_k__BackingField;
  struct SpiritFlame * _SpiritFlame_k__BackingField;
  float _Damage_k__BackingField;
  enum DamageWeight__Enum _DamageWeight_k__BackingField;
  bool _PreventKickback_k__BackingField;
  struct Vector2 ImpactOffset;
  bool DoImpact;
  struct GameObject * m_hitEffect;
  struct List_1_UnityEngine_Vector3_ * m_points;
  struct Vector3 m_finalPosition;
  float m_arcOffset;
  float m_currentTime;
  struct Vector3 m_lastTargetPosition;
  enum SpiritFlameProjectile_State__Enum m_currentState;
  struct SoundHost * m_soundHost;
  int32_t m_frame;
  struct Vector3 m_arcDir;
  struct Vector3 m_arcNormalOffset;
  struct SpiritFlameProjectile_PointOnArc m_poaFwd0;
  struct SpiritFlameProjectile_PointOnArc m_poaFwd4;
  struct SpiritFlameProjectile_PointOnArc m_poaBwd8;
  struct SpiritFlameProjectile_PointOnArc m_poaBwd4;
  struct SpiritFlameProjectile_PointOnArc m_poaBwd1;
};
struct SpiritFlameProjectile {
  struct SpiritFlameProjectile__Class *klass;
  struct MonitorData *monitor;
  struct SpiritFlameProjectile__Fields fields;
};
struct IceSpiritFlameProjectile__Fields {
  struct SpiritFlameProjectile__Fields _;
};
struct IceSpiritFlameProjectile {
  struct IceSpiritFlameProjectile__Class *klass;
  struct MonitorData *monitor;
  struct IceSpiritFlameProjectile__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyEntityDamageReciever___Fields {
  struct LegacyEntityDamageReciever__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyEntityDamageReciever_ {
  struct List_1_LegacyEntityDamageReciever___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyEntityDamageReciever___Fields fields;
};
struct LegacyEntityDamageReciever__Array {
  struct LegacyEntityDamageReciever__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyEntityDamageReciever * vector[32];
};
struct IEnumerator_1_LegacyEntityDamageReciever_ {
  struct IEnumerator_1_LegacyEntityDamageReciever___Class *klass;
  struct MonitorData *monitor;
};
struct SpiritFlameProjectile_PointOnArc__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritFlameProjectile_PointOnArc__StaticFields {
};
struct SpiritFlameProjectile_PointOnArc__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritFlameProjectile_PointOnArc__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritFlameProjectile_PointOnArc__VTable vtable;
};
struct IEnumerator_1_LegacyEntityDamageReciever___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LegacyEntityDamageReciever___StaticFields {
};
struct IEnumerator_1_LegacyEntityDamageReciever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LegacyEntityDamageReciever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LegacyEntityDamageReciever___VTable vtable;
};
struct List_1_LegacyEntityDamageReciever___VTable {
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
struct List_1_LegacyEntityDamageReciever___StaticFields {
  struct LegacyEntityDamageReciever__Array * _emptyArray;
};
struct List_1_LegacyEntityDamageReciever___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LegacyEntityDamageReciever___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LegacyEntityDamageReciever___VTable vtable;
};
struct SpiritFlameProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct SpiritFlameProjectile__StaticFields {
  float s_lastFlameArcOffsetSign;
  struct List_1_LegacyEntityDamageReciever_ * s_enityDamageRecieverList;
};
struct SpiritFlameProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritFlameProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritFlameProjectile__VTable vtable;
};
struct IceSpiritFlameProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct IceSpiritFlameProjectile__StaticFields {
};
struct IceSpiritFlameProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IceSpiritFlameProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IceSpiritFlameProjectile__VTable vtable;
};

struct StandardSpiritFlameProjectile__Fields {
  struct SpiritFlameProjectile__Fields _;
};
struct StandardSpiritFlameProjectile {
  struct StandardSpiritFlameProjectile__Class *klass;
  struct MonitorData *monitor;
  struct StandardSpiritFlameProjectile__Fields fields;
};
struct StandardSpiritFlameProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct StandardSpiritFlameProjectile__StaticFields {
};
struct StandardSpiritFlameProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StandardSpiritFlameProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StandardSpiritFlameProjectile__VTable vtable;
};

struct StandardSpiritFlameThirdShotProjectile__Fields {
  struct SpiritFlameProjectile__Fields _;
};
struct StandardSpiritFlameThirdShotProjectile {
  struct StandardSpiritFlameThirdShotProjectile__Class *klass;
  struct MonitorData *monitor;
  struct StandardSpiritFlameThirdShotProjectile__Fields fields;
};
struct StandardSpiritFlameThirdShotProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct StandardSpiritFlameThirdShotProjectile__StaticFields {
};
struct StandardSpiritFlameThirdShotProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StandardSpiritFlameThirdShotProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StandardSpiritFlameThirdShotProjectile__VTable vtable;
};

struct __declspec(align(8)) LeashMarkEffect_DelayedDestroyInactive_d_18__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct LeashMarkEffect * __4__this;
};
struct LeashMarkEffect_DelayedDestroyInactive_d_18 {
  struct LeashMarkEffect_DelayedDestroyInactive_d_18__Class *klass;
  struct MonitorData *monitor;
  struct LeashMarkEffect_DelayedDestroyInactive_d_18__Fields fields;
};
struct LeashMarkEffect_DelayedDestroyInactive_d_18__VTable {
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
struct LeashMarkEffect_DelayedDestroyInactive_d_18__StaticFields {
};
struct LeashMarkEffect_DelayedDestroyInactive_d_18__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeashMarkEffect_DelayedDestroyInactive_d_18__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeashMarkEffect_DelayedDestroyInactive_d_18__VTable vtable;
};

struct SeinLeashPuppet__Fields {
  struct CharacterStatePuppet__Fields _;
  struct FloatAnimationParameter * AimAngleectionAnimationParameter;
  struct MoonAnimation * WatermillHangAnimation;
  struct BlendAnimation * CeilingHookJumpBlend;
  struct BlendAnimation * WallHookJumpBlend;
  struct BlendAnimation * Throw;
  struct BlendAnimation * ThrowAir;
  struct BlendAnimation * Pull;
  struct BlendAnimation * PullAir;
  struct BlendAnimation * GrabWallHook;
  struct BlendAnimation * GrabCeilingHook;
  struct BlendAnimation * Pulled;
  struct MoonAnimation * WallHookIdle;
  struct MoonAnimation * CeilingHookIdle;
  struct MoonAnimation * FlingJumpBlend;
  struct GameObject * SpiritLeashEffect;
  struct SpiritLeashEffectPose * SpiritLeashCurlPose;
};
struct SeinLeashPuppet {
  struct SeinLeashPuppet__Class *klass;
  struct MonitorData *monitor;
  struct SeinLeashPuppet__Fields fields;
};
struct SeinLeashPuppet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_Id;
  VirtualInvokeData get_UniqueRecordingId;
  VirtualInvokeData get_IsRecording;
  VirtualInvokeData OnInitializeGhostRecorder;
  VirtualInvokeData OnFinishedRecording;
  VirtualInvokeData OnFinishedPlayback;
  VirtualInvokeData OnPerform;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnInitializeLivePuppetMaster;
  VirtualInvokeData OnInitializeGhostPuppetMaster;
};
struct SeinLeashPuppet__StaticFields {
};
struct SeinLeashPuppet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinLeashPuppet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinLeashPuppet__VTable vtable;
};

struct DebugSeinAbilityOverride__Fields {
  struct MonoBehaviour__Fields _;
  enum AbilityType__Enum m_Ability;
  bool m_DisableDebugControls;
  bool m_Applied;
  enum AbilityType__Enum m_LastOverriden;
};
struct DebugSeinAbilityOverride {
  struct DebugSeinAbilityOverride__Class *klass;
  struct MonitorData *monitor;
  struct DebugSeinAbilityOverride__Fields fields;
};
struct DebugSeinAbilityOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DebugSeinAbilityOverride__StaticFields {
};
struct DebugSeinAbilityOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DebugSeinAbilityOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DebugSeinAbilityOverride__VTable vtable;
};

enum UberAtlassingPlatform__Enum : int32_t {
  UberAtlassingPlatform__Enum_HD = 0,
  UberAtlassingPlatform__Enum_Switch = 1,
  UberAtlassingPlatform__Enum_FourK = 2,
};
struct UberAtlassingPlatform__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberAtlassingPlatform__Enum value;
};
struct GamePlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  enum UberAtlassingPlatform__Enum AtlasPlatform;
  struct SceneRoot * SceneRoot;
  struct GameObject * GameControllerPrefab;
};
struct GamePlaceholder {
  struct GamePlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct GamePlaceholder__Fields fields;
};
struct GamePlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GamePlaceholder__StaticFields {
};
struct GamePlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GamePlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GamePlaceholder__VTable vtable;
};

struct GameplaySystemsCreator__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * OriPrefab;
  struct GameObject * WorldMapLogicPrefab;
  struct GameObject * SeinUIPrefab;
  struct GameObject * SpellSettingsPrefab;
  struct GameObject * SpiritShardSettingsPrefab;
  struct GameObject * QuestsControllerPrefab;
  struct GameObject * EquipmentWheelPrefab;
  struct GameObject * SeinStatsPrefab;
  struct GameObject * DamageByAreaResolver;
  struct GameObject * MaterialVFXManagerPrefab;
  struct GameObject * BehaviourTreeEvaluationSystemPrefab;
  bool LoadSystemsScene;
  bool LoadInGameUIScene;
};
struct GameplaySystemsCreator {
  struct GameplaySystemsCreator__Class *klass;
  struct MonitorData *monitor;
  struct GameplaySystemsCreator__Fields fields;
};
struct GameplaySystemsCreator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameplaySystemsCreator__StaticFields {
  struct AsyncOperation_1 * GameSystemLoadingOp;
  bool HasCreatedGameplaySystems;
};
struct GameplaySystemsCreator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplaySystemsCreator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplaySystemsCreator__VTable vtable;
};

struct __declspec(align(8)) GameplaySystemsCreator_CreateSetups_d_17__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct GameplaySystemsCreator * __4__this;
};
struct GameplaySystemsCreator_CreateSetups_d_17 {
  struct GameplaySystemsCreator_CreateSetups_d_17__Class *klass;
  struct MonitorData *monitor;
  struct GameplaySystemsCreator_CreateSetups_d_17__Fields fields;
};
struct GameplaySystemsCreator_CreateSetups_d_17__VTable {
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
struct GameplaySystemsCreator_CreateSetups_d_17__StaticFields {
};
struct GameplaySystemsCreator_CreateSetups_d_17__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameplaySystemsCreator_CreateSetups_d_17__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameplaySystemsCreator_CreateSetups_d_17__VTable vtable;
};

struct GameSystemsEnabler__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform__Array * Systems;
  struct Transform * SystemRoot;
};
struct GameSystemsEnabler {
  struct GameSystemsEnabler__Class *klass;
  struct MonitorData *monitor;
  struct GameSystemsEnabler__Fields fields;
};
struct GameSystemsEnabler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}