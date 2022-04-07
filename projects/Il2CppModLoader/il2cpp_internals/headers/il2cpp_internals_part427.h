namespace app {
struct __declspec(align(8)) ComboDataEntry__Fields {
  bool Enabled;
  struct String * MoveTypeName;
  bool IsMelee;
  struct MeleeComboMoveSettings * MeleeSpecificComboSettings;
  struct ComboMoveSettings * ComboMoveSettings;
  struct Type * MoveType;
  struct List_1_Moon_ComboSystem_TransitionEntry_ * Transitions;
};
struct ComboDataEntry {
  struct ComboDataEntry__Class *klass;
  struct MonitorData *monitor;
  struct ComboDataEntry__Fields fields;
};
struct ComboDataEntry__Array {
  struct ComboDataEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ComboDataEntry * vector[32];
};
struct __declspec(align(8)) MeleeComboMoveSettings__Fields {
  struct Vector2 RootMotionMultiplier;
  float DownwardRootMotionMultiplier;
  bool DisableRootMotion;
  float Cooldown;
};
struct MeleeComboMoveSettings {
  struct MeleeComboMoveSettings__Class *klass;
  struct MonitorData *monitor;
  struct MeleeComboMoveSettings__Fields fields;
};
enum ComboMoveOrderCondition__Enum : int32_t {
  ComboMoveOrderCondition__Enum_AnyOrder = 0,
  ComboMoveOrderCondition__Enum_OnlyFirstMove = 1,
  ComboMoveOrderCondition__Enum_OnlyChainedMove = 2,
};
struct ComboMoveOrderCondition__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ComboMoveOrderCondition__Enum value;
};
struct __declspec(align(8)) ComboMoveSettings__Fields {
  enum ComboMoveOrderCondition__Enum OrderCondition;
  struct List_1_Moon_ComboSystem_InputDirection_ * ValidInputDirections;
  int32_t AmountOfUsesPerCombo;
  bool TransitionToAll;
  bool TransitionFromAll;
};
struct ComboMoveSettings {
  struct ComboMoveSettings__Class *klass;
  struct MonitorData *monitor;
  struct ComboMoveSettings__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ComboSystem_InputDirection___Fields {
  struct InputDirection__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ComboSystem_InputDirection_ {
  struct List_1_Moon_ComboSystem_InputDirection___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ComboSystem_InputDirection___Fields fields;
};
struct InputDirection__Enum__Array {
  struct InputDirection__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum InputDirection__Enum vector[32];
};
struct IEnumerator_1_Moon_ComboSystem_InputDirection_ {
  struct IEnumerator_1_Moon_ComboSystem_InputDirection___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ComboSystem_TransitionEntry___Fields {
  struct TransitionEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ComboSystem_TransitionEntry_ {
  struct List_1_Moon_ComboSystem_TransitionEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ComboSystem_TransitionEntry___Fields fields;
};
struct __declspec(align(8)) TransitionEntry__Fields {
  struct String * TypeName;
  int32_t TypeIndx;
  struct Type * Type;
};
struct TransitionEntry {
  struct TransitionEntry__Class *klass;
  struct MonitorData *monitor;
  struct TransitionEntry__Fields fields;
};
struct TransitionEntry__Array {
  struct TransitionEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TransitionEntry * vector[32];
};
struct IEnumerator_1_Moon_ComboSystem_TransitionEntry_ {
  struct IEnumerator_1_Moon_ComboSystem_TransitionEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_ComboSystem_ComboDataEntry_ {
  struct IEnumerator_1_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct ComboDataEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Fields {
  struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Fields {
  struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry___Fields fields;
};
struct ICollection_1_Moon_ComboSystem_ComboDataEntry_ {
  struct ICollection_1_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  struct Type * key;
  struct ComboDataEntry * value;
};
struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry___Boxed {
  struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry_ fields;
};
struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry___Array {
  struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ComboSystem_ComboDataEntry_ {
  struct IEnumerable_1_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_Moon_ComboSystem_IComboMove___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_Moon_ComboSystem_IComboMove_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_Moon_ComboSystem_IComboMove_ {
  struct HashSet_1_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_Moon_ComboSystem_IComboMove___Fields fields;
};
struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove_ {
  int32_t hashCode;
  int32_t next;
  struct IComboMove * value;
};
struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove___Boxed {
  struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove_ fields;
};
struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove___Array {
  struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_Moon_ComboSystem_IComboMove_ vector[32];
};
struct IEqualityComparer_1_Moon_ComboSystem_IComboMove_ {
  struct IEqualityComparer_1_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_ComboSystem_IComboMove_ {
  struct IEnumerable_1_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ComboMoveStressTest___Fields {
  struct ComboMoveStressTest__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ComboMoveStressTest_ {
  struct List_1_ComboMoveStressTest___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ComboMoveStressTest___Fields fields;
};
struct __declspec(align(8)) ComboMoveStressTest__Fields {
  struct IComboMove * _ComboMove_k__BackingField;
  float m_timer;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct ComboMoveStressTest {
  struct ComboMoveStressTest__Class *klass;
  struct MonitorData *monitor;
  struct ComboMoveStressTest__Fields fields;
};
struct ComboMoveStressTest__Array {
  struct ComboMoveStressTest__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ComboMoveStressTest * vector[32];
};
struct IEnumerator_1_ComboMoveStressTest_ {
  struct IEnumerator_1_ComboMoveStressTest___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ComboSystem_IComboMoveProvider___Fields {
  struct IComboMoveProvider__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ComboSystem_IComboMoveProvider_ {
  struct List_1_Moon_ComboSystem_IComboMoveProvider___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ComboSystem_IComboMoveProvider___Fields fields;
};
struct IComboMoveProvider {
  struct IComboMoveProvider__Class *klass;
  struct MonitorData *monitor;
};
struct IComboMoveProvider__Array {
  struct IComboMoveProvider__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IComboMoveProvider * vector[32];
};
struct IEnumerator_1_Moon_ComboSystem_IComboMoveProvider_ {
  struct IEnumerator_1_Moon_ComboSystem_IComboMoveProvider___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_ActivateCooldownRule___Fields {
  struct ActivateCooldownRule__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ActivateCooldownRule_ {
  struct List_1_ActivateCooldownRule___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ActivateCooldownRule___Fields fields;
};
struct IEnumerator_1_ActivateCooldownRule_ {
  struct IEnumerator_1_ActivateCooldownRule___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) SeinJumpHandler__Fields {
  bool m_isBlindForest;
  struct CharacterState * m_lastJumpExecuted;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  float _ProviderCooldown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
};
struct SeinJumpHandler {
  struct SeinJumpHandler__Class *klass;
  struct MonitorData *monitor;
  struct SeinJumpHandler__Fields fields;
};
struct MeleeComboMoveHammerBase__Fields {
  struct MeleeComboMove__Fields _;
  bool EnableGroundCollision;
  struct MoonTimeline * GroundImpactMiss;
  struct EventTriggerAnimator * GroundMissExitPoint;
  struct EventTriggerAnimator * StillAllowToReactToGroundHit;
  struct EventTriggerAnimator * BlastStartEvent;
  enum DamageWeight__Enum BlastDamageWeight;
  float BlastRadius;
  float BlastKickbackStrength;
  float KnockbackAddX;
  float KnockbackAddY;
  bool IsKnockbackAdditiveX;
  bool IsKnockbackAdditiveY;
  struct Vector2 OnHitRootMotionMultiplier;
  struct MeleeWeaponHammer * m_hammerWeapon;
  bool m_applyOnHitRootMotionMultiplier;
  bool m_hammerHitGround;
  bool m_moveHasFinished;
};
struct MeleeComboMoveHammerBase {
  struct MeleeComboMoveHammerBase__Class *klass;
  struct MonitorData *monitor;
  struct MeleeComboMoveHammerBase__Fields fields;
};
enum MeleeComboMoveHammer_State__Enum : int32_t {
  MeleeComboMoveHammer_State__Enum_None = 0,
  MeleeComboMoveHammer_State__Enum_Prepare = 1,
  MeleeComboMoveHammer_State__Enum_Charge = 2,
  MeleeComboMoveHammer_State__Enum_Attack = 3,
  MeleeComboMoveHammer_State__Enum_GroundMiss = 4,
  MeleeComboMoveHammer_State__Enum_GroundHit = 5,
};
struct MeleeComboMoveHammer_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeleeComboMoveHammer_State__Enum value;
};
struct MeleeComboMoveHammer__Fields {
  struct MeleeComboMoveHammerBase__Fields _;
  float PrepareDuration;
  float ChargeDuration;
  struct HammerComboMove_BalancingData * Balancing;
  enum DamageWeight__Enum QuickAttackDamageWeight;
  enum DamageWeight__Enum ChargedAttackDamageWeight;
  struct Vector2 KickbackDirection;
  float QuickAttackKickbackStrength;
  float ChargedAttackKickBackStrength;
  float ChargedHitCameraShake;
  float ChargedAttackHammerScaleMultiplier;
  struct GameObject * ShockWave;
  struct GameObject * BlockEffect;
  struct GameObject * ChargedHitEffect;
  struct GameObject * GroundHitEffect;
  struct GameObject * ChargedGroundHitEffect;
  float CollisionSpeedTreshold;
  struct SoundProvider * HitSound;
  struct SoundProvider * ChargedHitSound;
  struct SoundProvider * AttackSound;
  struct SoundProvider * ChargedAttackSound;
  struct SoundProvider * GroundHitSound;
  struct SoundProvider * ChargedGroundHitSound;
  float GravityStrength;
  float DisableEnemyFallingDuration;
  struct MoonTimeline * PrepareTimeline;
  struct MoonTimeline * AttackTimeline;
  struct MoonTimeline * ChargeTimeline;
  struct EventTriggerAnimator * SpawnEffectsTrigger;
  struct MoonTimeline * GroundHitResolveTimeline;
  float m_transitionTime;
  enum MeleeComboMoveHammer_State__Enum m_currentState;
  float m_currentStateTime;
  bool m_isChargedHit;
  struct HammerTrail * m_currentTrail;
  struct Damage * m_damage;
};
struct MeleeComboMoveHammer {
  struct MeleeComboMoveHammer__Class *klass;
  struct MonitorData *monitor;
  struct MeleeComboMoveHammer__Fields fields;
};
enum MeleeWeaponHammer_DisolveState__Enum : int32_t {
  MeleeWeaponHammer_DisolveState__Enum_Paused = 0,
  MeleeWeaponHammer_DisolveState__Enum_Disolving = 1,
  MeleeWeaponHammer_DisolveState__Enum_FadingIn = 2,
};
struct MeleeWeaponHammer_DisolveState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeleeWeaponHammer_DisolveState__Enum value;
};
struct MeleeWeaponHammer__Fields {
  struct MeleeWeapon__Fields _;
  struct GameObject * Hammer;
  struct GameObject * Trail;
  struct LegacyTimelineSequence * VanishEffect;
  struct GameObject * VanishExplosionEffect;
  struct MeleeWeaponColliderStick * WeaponCollider;
  struct Transform * TransformHammerRig;
  struct Transform * TransformTrailOrigin;
  struct Transform * TransformBase;
  struct Transform * TransformTop;
  struct Transform * TransformTip;
  struct Renderer * HammerRenderer;
  struct MoonAnimation * IdleAnimation;
  float TimeInvincibleUponSuccessfullHit;
  float HitStopDuration;
  float CriticalHitStopDuration;
  float CriticalHitDamageMultiplier;
  float GroundHitRayLenghtMultiplier;
  struct FloatAnimationParameter * AttackBlendParameter;
  struct SoundProvider * NextMoveRegisteredSound;
  float m_currentDisolveVal;
  bool m_shouldInstantiateVanishFx;
  enum MeleeWeaponHammer_DisolveState__Enum m_disolveState;
  bool m_playedVanishEffect;
  float m_disolveSpeed;
  int32_t m_hammerAnimationSpeedMultiplierId;
  struct Vector3 m_oldHammerTipPosition;
  struct Vector3 m_newHammerTipPosition;
  struct Vector3 m_previusScale;
  bool m_isInCombo;
  float _MoveDurationDept_k__BackingField;
  bool _DetectGroundCollision_k__BackingField;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
struct MeleeWeaponHammer {
  struct MeleeWeaponHammer__Class *klass;
  struct MonitorData *monitor;
  struct MeleeWeaponHammer__Fields fields;
};
struct __declspec(align(8)) MeleeWeaponColliderStick__Fields {
  bool InstanceWeaponColliderDebugEnabled;
  struct Transform * WeaponBase;
  struct Transform * WeaponTop;
  float Radius;
  float GroundCollisionOffset;
  float InterpolationStepDistanceMultiplier;
  struct LayerMask Mask;
  float RecoilRadius;
  struct LayerMask RecoilMask;
  float RecoilColliderMinGroundDistance;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * OnCollision;
  struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ * OnCollisionWithDirection;
  struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_ * OnGroundCollision;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_ * OnRecoilCollision;
  float m_debugTimer;
  struct Queue_1_MeleeWeaponColliderStick_DebugCircle_ * m_inactiveCircles;
  struct Queue_1_MeleeWeaponColliderStick_DebugCircle_ * m_activeCircles;
  struct Collider__Array * m_tempColliders;
  enum UpdateType__Enum m_updateType;
  bool m_registered;
  struct MeleePositionInterpolator * m_positionInterpolator;
  bool m_enabled;
  struct RaycastHit__Array * m_recoilHits;
  struct Entity * m_entity;
  struct SeinCharacter * m_seinCharacter;
  struct GroundEntityLocomotion * m_ownerLocomotion;
  bool m_triedGettingEntity;
  bool m_triedGettingSeinCharacter;
  struct Vector3 m_previousWeaponTopPosition;
  bool m_firstFrameEnabled;
  bool _DoGroundChecksAlongWeaponLength_k__BackingField;
  struct Vector3 m_previousAdjustedWeaponTop;
  struct Vector3 m_previousAdjustedWeaponBase;
  float m_duration;
};
struct MeleeWeaponColliderStick {
  struct MeleeWeaponColliderStick__Class *klass;
  struct MonitorData *monitor;
  struct MeleeWeaponColliderStick__Fields fields;
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_ {
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_UnityEngine_Collider_UnityEngine_Vector3___Fields fields;
};
struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_ {
  struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3___Fields fields;
};
struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_ {
  struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
  struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType___Fields fields;
};
struct __declspec(align(8)) Queue_1_MeleeWeaponColliderStick_DebugCircle___Fields {
  struct MeleeWeaponColliderStick_DebugCircle__Array * _array;
  int32_t _head;
  int32_t _tail;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Queue_1_MeleeWeaponColliderStick_DebugCircle_ {
  struct Queue_1_MeleeWeaponColliderStick_DebugCircle___Class *klass;
  struct MonitorData *monitor;
  struct Queue_1_MeleeWeaponColliderStick_DebugCircle___Fields fields;
};
struct __declspec(align(8)) MeleeWeaponColliderStick_DebugCircle__Fields {
  struct Transform * Transform;
  struct Renderer * Renderer;
  int32_t ID;
};
struct MeleeWeaponColliderStick_DebugCircle {
  struct MeleeWeaponColliderStick_DebugCircle__Class *klass;
  struct MonitorData *monitor;
  struct MeleeWeaponColliderStick_DebugCircle__Fields fields;
};
struct MeleeWeaponColliderStick_DebugCircle__Array {
  struct MeleeWeaponColliderStick_DebugCircle__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeleeWeaponColliderStick_DebugCircle * vector[32];
};
struct IEnumerator_1_MeleeWeaponColliderStick_DebugCircle_ {
  struct IEnumerator_1_MeleeWeaponColliderStick_DebugCircle___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MeleePositionInterpolator__Fields {
  struct Vector3 m_oldPosition;
  struct Vector3__Array * m_interpolatedPositions;
  int32_t Count;
};
struct MeleePositionInterpolator {
  struct MeleePositionInterpolator__Class *klass;
  struct MonitorData *monitor;
  struct MeleePositionInterpolator__Fields fields;
};
struct HammerComboMoveBase_BalancingData__Fields {
  struct OriAttackBalancingData__Fields _;
  float BlastDamage;
};
struct HammerComboMoveBase_BalancingData {
  struct HammerComboMoveBase_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct HammerComboMoveBase_BalancingData__Fields fields;
};
struct HammerComboMove_BalancingData__Fields {
  struct HammerComboMoveBase_BalancingData__Fields _;
  float QuickAttackDamage;
  float ChargedAttackDamage;
};
struct HammerComboMove_BalancingData {
  struct HammerComboMove_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct HammerComboMove_BalancingData__Fields fields;
};
struct HammerTrail__Fields {
  struct MonoBehaviour__Fields _;
  float DistanceThreshold;
  int32_t PointsPerUnitDistance;
  float Duration;
  struct LineRenderer * m_lineRenderer;
  struct Vector3 m_lastPosition;
  struct Vector3 m_lastRotationCenterPosition;
  struct HammerTrail_TrailPoint__Array * m_trail;
  int32_t m_trailBegin;
  int32_t m_trailEnd;
  struct Transform * m_tracedPoint;
  struct Transform * m_rotationCenter;
  bool m_initialized;
};
struct HammerTrail {
  struct HammerTrail__Class *klass;
  struct MonitorData *monitor;
  struct HammerTrail__Fields fields;
};
struct HammerTrail_TrailPoint {
  float TimeLeft;
  struct Vector3 Position;
};
struct HammerTrail_TrailPoint__Boxed {
  struct HammerTrail_TrailPoint__Class *klass;
  struct MonitorData *monitor;
  struct HammerTrail_TrailPoint fields;
};
struct HammerTrail_TrailPoint__Array {
  struct HammerTrail_TrailPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HammerTrail_TrailPoint vector[32];
};
struct __declspec(align(8)) Dictionary_2_Moon_WeaponJoint_System_String___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Moon_WeaponJoint_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Moon_WeaponJoint_System_String_ {
  struct Dictionary_2_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Moon_WeaponJoint_System_String___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String_ {
  int32_t hashCode;
  int32_t next;
  enum WeaponJoint__Enum key;
  struct String * value;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array {
  struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Moon_WeaponJoint_System_String_ vector[32];
};
struct IEqualityComparer_1_Moon_WeaponJoint_ {
  struct IEqualityComparer_1_Moon_WeaponJoint___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___Fields {
  struct Dictionary_2_Moon_WeaponJoint_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Moon_WeaponJoint_System_String___Fields fields;
};
struct WeaponJoint__Enum__Array {
  struct WeaponJoint__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum WeaponJoint__Enum vector[32];
};
struct IEnumerator_1_Moon_WeaponJoint_ {
  struct IEnumerator_1_Moon_WeaponJoint___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___Fields {
  struct Dictionary_2_Moon_WeaponJoint_System_String_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Moon_WeaponJoint_System_String___Fields fields;
};
struct ICollection_1_Moon_WeaponJoint_ {
  struct ICollection_1_Moon_WeaponJoint___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Moon_WeaponJoint_System_String_ {
  enum WeaponJoint__Enum key;
  struct String * value;
};
struct KeyValuePair_2_Moon_WeaponJoint_System_String___Boxed {
  struct KeyValuePair_2_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Moon_WeaponJoint_System_String_ fields;
};
struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array {
  struct KeyValuePair_2_Moon_WeaponJoint_System_String___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Moon_WeaponJoint_System_String_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String_ {
  struct IEnumerator_1_KeyValuePair_2_Moon_WeaponJoint_System_String___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Moon_WeaponJoint_ {
  struct IEnumerable_1_Moon_WeaponJoint___Class *klass;
  struct MonitorData *monitor;
};
struct MeleeWeaponChainsword__Fields {
  struct MeleeWeapon__Fields _;
  struct MeleeWeaponColliderStick * Sword1Collider;
  struct MeleeWeaponColliderStick * Sword2Collider;
  enum WeaponJoint__Enum LeftWeaponJoint;
  struct MoonAnimator * LeftAnimator;
  struct Transform * LeftWeaponRoot;
  struct Transform * m_leftTargetJoint;
};
struct MeleeWeaponChainsword {
  struct MeleeWeaponChainsword__Class *klass;
  struct MonitorData *monitor;
  struct MeleeWeaponChainsword__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrabSurface___Fields {
  bool HasState;
  struct SeinGrabSurface * State;
};
struct CharacterStateWrapper_1_SeinGrabSurface_ {
  struct CharacterStateWrapper_1_SeinGrabSurface___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGrabSurface___Fields fields;
};
enum SeinGrabSurface_AnimationState__Enum : int32_t {
  SeinGrabSurface_AnimationState__Enum_None = 0,
  SeinGrabSurface_AnimationState__Enum_Climb = 1,
  SeinGrabSurface_AnimationState__Enum_GrabWallDown = 2,
  SeinGrabSurface_AnimationState__Enum_GrabWallIdle = 3,
  SeinGrabSurface_AnimationState__Enum_GrabGroundIdle = 4,
  SeinGrabSurface_AnimationState__Enum_GrabGroundMove = 5,
};
struct SeinGrabSurface_AnimationState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGrabSurface_AnimationState__Enum value;
};
struct SeinGrabSurface__Fields {
  struct CharacterState__Fields _;
  float ClimbSpeedUp;
  float ClimbSpeedDown;
  float ClimbSpeedHorizontal;
  float ClimbSpeedForAnimationSpeed1X;
  float JumpDownReleaseMaxSpeed;
  float Acceleration;
  float MovingGrabbableVelocityMultiplier;
  struct GrabbableSurfaceSettings * GrabbableSurfaceSettings;
  struct MaterialBasedResourceMap * EffectsMap;
  struct Transform * VFXHolder;
  float DamagedCooldown;
  float ControlPointNormalInterpolationStartDistance;
  struct FloatAnimationParameter * GrabCurvatureParameter;
  float CurvatureCalculationControlPointsDistance;
  float AngleForMaxCurvature;
  float MaxTransmittedPreClimbSpeed;
  struct LayerMask GrabbableSurfaceLayerMask;
  float GrabCheckHorizontalLength;
  struct AnimationCurve * RayOffsetVsVerticalSpeed;
  struct AnimationCurve * RayOffsetVsPlayerInput;
  struct AnimationCurve * RayLengthVsVerticalSpeed;
  struct AnimationCurve * RayLengthVsPlayerInput;
  float WheelJumpAngleOffset;
  float RotationAdjustmentSpeed;
  float WheelPositionOffset;
  float WheelJumpSpeedMultiplier;
  float WheelJumpAngleAdjustment;
  float WheelRotationOffset;
  float OverrideGravity;
  float MinimumGrabbableSpeedToRideWheel;
  float DelayToFullMomentum;
  struct Event_1 * StartGrabEvent;
  struct Event_1 * StopGrabEvent;
  struct RTPC * MovementSpeedRTPC;
  struct Event_1 * StepEvent;
  float DistancePerStep;
  struct Event_1 * StartSlideDownEvent;
  struct Event_1 * StopSlideDownEvent;
  struct Event_1 * ShootOutFromWheelEvent;
  float m_distanceToNextStep;
  bool m_isGrabbing;
  float m_horizontalSpeed;
  float m_verticalSpeed;
  float m_ignoreRopeUntilTime;
  float m_damageCooldownRemaining;
  float m_pulledTowardsSurfaceTime;
  struct Vector3 m_grabPoint;
  float m_prevGravity;
  struct Vector3 Weight;
  float JumpForce;
  struct Transform * m_wheelAttachment;
  struct ActiveAnimationHandle m_activeAnim;
  struct ActiveAnimationHandle m_shootOutActiveAnim;
  struct Vector3 m_offset;
  bool m_touchedSurface;
  bool m_delayedWheelJumpCleanUpTriggered;
  float m_delayedWheelJumpCleanUpTimer;
  float m_wheelMomentumTimer;
  struct Collider__Array * m_collidersToIgnore;
  struct GrabbableSurface * m_touchedGrabSurface;
  struct Collider * m_wheelCollider;
  struct GrabbableSurfaceMovingWheel * m_wheel;
  struct GrabbableSurface * m_grabbedGrabSurface;
  float JumpAnimationTurnThresholdNormalizedTime;
  struct MoonTimeline * m_currentlyPlayingEffect;
  enum SurfaceMaterialType__Enum m_currentlyPlayingEffectSurface;
  struct Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ * m_effects;
  struct Vector3 m_overridenGrabPosition;
  bool _IsRidingWheel_k__BackingField;
  bool m_spriteMirrorLock;
  float m_currentClimbSpeed;
  enum SeinGrabSurface_AnimationState__Enum m_animationState;
};
struct SeinGrabSurface {
  struct SeinGrabSurface__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrabSurface__Fields fields;
};
struct GrabbableSurfaceMovingWheel__Fields {
  struct GrabbableSurface__Fields _;
  bool m_isMoving;
  struct AutoRotate * m_autoRotate;
};
struct GrabbableSurfaceMovingWheel {
  struct GrabbableSurfaceMovingWheel__Class *klass;
  struct MonitorData *monitor;
  struct GrabbableSurfaceMovingWheel__Fields fields;
};
struct AutoRotate__Fields {
  struct Suspendable__Fields _;
  float Speed;
  float m_currentTime;
  struct AnimationCurve * Curve;
  bool UseCurve;
  struct Condition_1 * Condition;
  float m_rotation;
  struct Rigidbody * m_rigidbody;
  bool m_raceRotationOverride;
  struct TrailRenderer * m_trailRenderer;
  float m_trailRendererTime;
  bool _IsSuspended_k__BackingField;
};
struct AutoRotate {
  struct AutoRotate__Class *klass;
  struct MonitorData *monitor;
  struct AutoRotate__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinPinned___Fields {
  bool HasState;
  struct SeinPinned * State;
};
struct CharacterStateWrapper_1_SeinPinned_ {
  struct CharacterStateWrapper_1_SeinPinned___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinPinned___Fields fields;
};
struct SeinPinned__Fields {
  struct CharacterState__Fields _;
  struct Vector3 PinnedPositionOffset;
  float RavageAnimationOffset;
  struct MoonAnimation * PinDown;
  struct MoonAnimation * PinRavage;
  bool m_wasRavage;
  float m_ravageTime;
};
struct SeinPinned {
  struct SeinPinned__Class *klass;
  struct MonitorData *monitor;
  struct SeinPinned__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinLeached___Fields {
  bool HasState;
  struct SeinLeached * State;
};
struct CharacterStateWrapper_1_SeinLeached_ {
  struct CharacterStateWrapper_1_SeinLeached___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinLeached___Fields fields;
};
struct SeinLeached__Fields {
  struct CharacterState__Fields _;
};
struct SeinLeached {
  struct SeinLeached__Class *klass;
  struct MonitorData *monitor;
  struct SeinLeached__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinRide___Fields {
  bool HasState;
  struct SeinRide * State;
};
struct CharacterStateWrapper_1_SeinRide_ {
  struct CharacterStateWrapper_1_SeinRide___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinRide___Fields fields;
};
struct SeinRide__Fields {
  struct CharacterState__Fields _;
  struct SeinRide_CartRidingState * CartRide;
  struct SeinRide_KuRidingState * KuRide;
  struct SerializedBooleanUberState * IsRidingKuUberState;
  struct Dictionary_2_RideableTypes_SeinRide_RideState_ * m_rideTypeToState;
  struct IRideable * m_rideable;
  bool m_stoppedRiding;
  struct IUberState__Array * m_uberStates;
};
struct SeinRide {
  struct SeinRide__Class *klass;
  struct MonitorData *monitor;
  struct SeinRide__Fields fields;
};
struct __declspec(align(8)) SeinRide_RideState__Fields {
  struct SeinRide * m_seinRide;
  bool m_skipMountAnimation;
};
struct SeinRide_RideState {
  struct SeinRide_RideState__Class *klass;
  struct MonitorData *monitor;
  struct SeinRide_RideState__Fields fields;
};
struct SeinRide_CartRidingState__Fields {
  struct SeinRide_RideState__Fields _;
  struct MoonAnimation * CartRidingAnimation;
  struct MoonAnimation * CartJumpAnimation;
  struct MoonAnimation * CartJumpLandAnimation;
  struct MoonAnimation * CartJumpFallAnimation;
  struct FloatAnimationParameter * CartOriIdleBlend;
  bool m_playingJumpAnim;
  bool m_playingJumpLandAnim;
};
struct SeinRide_CartRidingState {
  struct SeinRide_CartRidingState__Class *klass;
  struct MonitorData *monitor;
  struct SeinRide_CartRidingState__Fields fields;
};
struct IRideable {
  struct IRideable__Class *klass;
  struct MonitorData *monitor;
};
struct SeinRide_KuRidingState__Fields {
  struct SeinRide_RideState__Fields _;
  struct MoonAnimationAssociation * AnimationsMatch;
  struct MoonAnimation * MountFront;
  struct MoonAnimation * MountBack;
  struct AnimationCurve * MountCurve;
  struct ActiveAnimationHandle m_activeAnimation;
  struct ActiveAnimationHandle m_sourceActiveAnimation;
  struct KuState * m_previusState;
  bool m_isMounting;
  bool m_hadFeatherFlap;
  float m_mountDuration;
  float m_mountTimer;
  struct Vector3 m_originalPos;
  struct MoonAnimation * m_ignoreNextStop;
};
struct SeinRide_KuRidingState {
  struct SeinRide_KuRidingState__Class *klass;
  struct MonitorData *monitor;
  struct SeinRide_KuRidingState__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_RideableTypes_SeinRide_RideState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_RideableTypes_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_RideableTypes_SeinRide_RideState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_RideableTypes_SeinRide_RideState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_RideableTypes_SeinRide_RideState_ {
  struct Dictionary_2_RideableTypes_SeinRide_RideState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_RideableTypes_SeinRide_RideState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState_ {
  int32_t hashCode;
  int32_t next;
  enum RideableTypes__Enum key;
  struct SeinRide_RideState * value;
};
struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState___Array {
  struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_RideableTypes_SeinRide_RideState_ vector[32];
};}