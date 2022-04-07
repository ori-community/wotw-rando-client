namespace app {
struct __declspec(align(8)) HashSet_1_MasterTimelineSequence_SceneEntry___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_MasterTimelineSequence_SceneEntry_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_MasterTimelineSequence_SceneEntry_ {
  struct HashSet_1_MasterTimelineSequence_SceneEntry___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_MasterTimelineSequence_SceneEntry___Fields fields;
};
struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry_ {
  int32_t hashCode;
  int32_t next;
  struct MasterTimelineSequence_SceneEntry * value;
};
struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry___Boxed {
  struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry_ fields;
};
struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry___Array {
  struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_MasterTimelineSequence_SceneEntry_ vector[32];
};
struct IEqualityComparer_1_MasterTimelineSequence_SceneEntry_ {
  struct IEqualityComparer_1_MasterTimelineSequence_SceneEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MasterTimelineSequence_SceneEntry_ {
  struct IEnumerable_1_MasterTimelineSequence_SceneEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_LegacyTimelineSequence_SequenceEntry___Fields {
  struct LegacyTimelineSequence_SequenceEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyTimelineSequence_SequenceEntry_ {
  struct List_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyTimelineSequence_SequenceEntry___Fields fields;
};
struct __declspec(align(8)) LegacyTimelineSequence_SequenceEntry__Fields {
  struct BaseAnimator * BaseAnimator;
  bool External;
  struct LegacyTimelineSequence_SequenceEntry_Constraint * StartConstraint;
  struct LegacyTimelineSequence_SequenceEntry_Constraint * EndConstraint;
  float m_speed;
  float m_startTime;
};
struct LegacyTimelineSequence_SequenceEntry {
  struct LegacyTimelineSequence_SequenceEntry__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTimelineSequence_SequenceEntry__Fields fields;
};
struct LegacyTimelineSequence_SequenceEntry__Array {
  struct LegacyTimelineSequence_SequenceEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LegacyTimelineSequence_SequenceEntry * vector[32];
};
enum LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum : int32_t {
  LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum_ClipStart = 0,
  LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum_ClipEnd = 1,
};
struct LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum value;
};
struct __declspec(align(8)) LegacyTimelineSequence_SequenceEntry_Constraint__Fields {
  struct BaseAnimator * Animator;
  float Offset;
  enum LegacyTimelineSequence_SequenceEntry_Constraint_AnchorPoint__Enum Anchor;
  struct LegacyTimelineSequence_SequenceEntry * AnimatorEntry;
};
struct LegacyTimelineSequence_SequenceEntry_Constraint {
  struct LegacyTimelineSequence_SequenceEntry_Constraint__Class *klass;
  struct MonitorData *monitor;
  struct LegacyTimelineSequence_SequenceEntry_Constraint__Fields fields;
};
struct IEnumerator_1_LegacyTimelineSequence_SequenceEntry_ {
  struct IEnumerator_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_System_Single_ {
  struct Dictionary_2_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_System_Single_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Single___Fields {
  struct Dictionary_2_System_Int32_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_System_Single___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Single___Fields {
  struct Dictionary_2_System_Int32_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_System_Single___Fields fields;
};
struct KeyValuePair_2_System_Int32_System_Single_ {
  int32_t key;
  float value;
};
struct KeyValuePair_2_System_Int32_System_Single___Boxed {
  struct KeyValuePair_2_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_System_Single_ fields;
};
struct KeyValuePair_2_System_Int32_System_Single___Array {
  struct KeyValuePair_2_System_Int32_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_BaseAnimator_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  int32_t hashCode;
  int32_t next;
  struct BaseAnimator * key;
  struct LegacyTimelineSequence_SequenceEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ vector[32];
};
struct IEqualityComparer_1_BaseAnimator_ {
  struct IEqualityComparer_1_BaseAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields {
  struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields {
  struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Fields fields;
};
struct ICollection_1_BaseAnimator_ {
  struct ICollection_1_BaseAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_LegacyTimelineSequence_SequenceEntry_ {
  struct ICollection_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct BaseAnimator * key;
  struct LegacyTimelineSequence_SequenceEntry * value;
};
struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Boxed {
  struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ fields;
};
struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Array {
  struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_ {
  struct IEnumerator_1_KeyValuePair_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_BaseAnimator_ {
  struct IEnumerable_1_BaseAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LegacyTimelineSequence_SequenceEntry_ {
  struct IEnumerable_1_LegacyTimelineSequence_SequenceEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) HashSet_1_BaseAnimator___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_BaseAnimator___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_BaseAnimator_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_BaseAnimator_ {
  struct HashSet_1_BaseAnimator___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_BaseAnimator___Fields fields;
};
struct HashSet_1_T_Slot_BaseAnimator_ {
  int32_t hashCode;
  int32_t next;
  struct BaseAnimator * value;
};
struct HashSet_1_T_Slot_BaseAnimator___Boxed {
  struct HashSet_1_T_Slot_BaseAnimator___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_BaseAnimator_ fields;
};
struct HashSet_1_T_Slot_BaseAnimator___Array {
  struct HashSet_1_T_Slot_BaseAnimator___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_BaseAnimator_ vector[32];
};
struct __declspec(align(8)) Stack_1_UnityEngine_Transform___Fields {
  struct Transform__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_UnityEngine_Transform_ {
  struct Stack_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_UnityEngine_Transform___Fields fields;
};
struct CartAnimation__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Body;
  struct Transform * Bumper;
  struct Transform * Root;
  struct Transform * Whell;
  float BumperRotationLimit;
  float BodyNoiseFrequencyMin;
  float BodyNoiseFrequencyMax;
  float BodyNoiseMaxForce;
  struct GenericSpring1D * ScaleSpring;
  struct GenericSpring1D * BodySpring;
  struct GenericSpring1D * BumperSpring;
  struct GenericSpring1D_Particle * m_scaleSettings;
  struct GenericSpring1D_Particle * m_bodySettings;
  struct GenericSpring1D_Particle * m_bumperSettings;
  struct Cart * m_cart;
  struct Vector3 m_bodyRotation;
  struct Vector3 m_bodyScale;
  struct Vector3 m_bumperRotation;
  float m_desiredBodyRotation;
  float m_originalYLocalPosition;
  float m_timer;
  float m_additiveRotation;
};
struct CartAnimation {
  struct CartAnimation__Class *klass;
  struct MonitorData *monitor;
  struct CartAnimation__Fields fields;
};
struct __declspec(align(8)) GenericSpring1D__Fields {
  float Damping;
  float SpringPower;
  float RestVelocity;
  float MinValue;
  float MaxValue;
};
struct GenericSpring1D {
  struct GenericSpring1D__Class *klass;
  struct MonitorData *monitor;
  struct GenericSpring1D__Fields fields;
};
struct __declspec(align(8)) GenericSpring1D_Particle__Fields {
  float Value;
  float Velocity;
  float Mass;
};
struct GenericSpring1D_Particle {
  struct GenericSpring1D_Particle__Class *klass;
  struct MonitorData *monitor;
  struct GenericSpring1D_Particle__Fields fields;
};
struct CartBoost__Fields {
  struct CharacterState__Fields _;
  struct PlatformBehaviour * PlatformBehaviour;
  bool AutoRechargeBoost;
  float BoostRechargeRate;
  float BoostSpeed;
  struct LegacyTimelineSequence * BoostSequence;
  struct MoonTimeline * BoostSequenceNew;
  struct CartAnimation * CartAnimation;
  struct Cart * Cart;
  float BoostDuration;
  float BoostRecoveryDuration;
  float m_boostCharge;
  bool m_isPerforming;
  float m_timer;
  float _BoostExtraSpeed_k__BackingField;
};
struct CartBoost {
  struct CartBoost__Class *klass;
  struct MonitorData *monitor;
  struct CartBoost__Fields fields;
};
struct CartFlip__Fields {
  struct CharacterState__Fields _;
  struct PlatformBehaviour * PlatformBehaviour;
  struct CartFlipSpaceCheck * FlipSpaceCheck;
  struct LegacyTimelineSequence * FlipSequence;
  struct MoonTimeline * FlipSequenceNew;
  struct CartAnimation * CartAnimation;
  bool m_isFlippedVerticaly;
  struct Transform * m_transform;
};
struct CartFlip {
  struct CartFlip__Class *klass;
  struct MonitorData *monitor;
  struct CartFlip__Fields fields;
};
struct CartFlipSpaceCheck__Fields {
  struct MonoBehaviour__Fields _;
  struct HashSet_1_UnityEngine_Collider_ * CurrentColliders;
};
struct CartFlipSpaceCheck {
  struct CartFlipSpaceCheck__Class *klass;
  struct MonitorData *monitor;
  struct CartFlipSpaceCheck__Fields fields;
};
struct __declspec(align(8)) HashSet_1_UnityEngine_Collider___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_UnityEngine_Collider___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_UnityEngine_Collider_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_UnityEngine_Collider_ {
  struct HashSet_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_UnityEngine_Collider___Fields fields;
};
struct HashSet_1_T_Slot_UnityEngine_Collider_ {
  int32_t hashCode;
  int32_t next;
  struct Collider * value;
};
struct HashSet_1_T_Slot_UnityEngine_Collider___Boxed {
  struct HashSet_1_T_Slot_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_UnityEngine_Collider_ fields;
};
struct HashSet_1_T_Slot_UnityEngine_Collider___Array {
  struct HashSet_1_T_Slot_UnityEngine_Collider___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_UnityEngine_Collider_ vector[32];
};
struct IEqualityComparer_1_UnityEngine_Collider_ {
  struct IEqualityComparer_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Collider_ {
  struct IEnumerable_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
};
struct CartDamageCheckAction__Fields {
  struct ActionMethod__Fields _;
  struct Cart * Cart;
  struct LayerMask DamageSurfaceMask;
  int32_t AmoutOfHorizontalRays;
  int32_t AmoutOfVerticalRays;
  float RayLenght;
  struct Transform * m_transform;
  struct RaycastHit m_hit;
  float m_horizontalRayStep;
  float m_verticalRayStep;
  struct Vector2 m_rayOrigin;
  struct Vector2 m_bottonRightBoundingBox;
};
struct CartDamageCheckAction {
  struct CartDamageCheckAction__Class *klass;
  struct MonitorData *monitor;
  struct CartDamageCheckAction__Fields fields;
};
struct __declspec(align(8)) CartSettings__Fields {
  float BaseSpeed;
  float BaseAcceleration;
  float BaseDecceleration;
  float AirAcceleration;
  float AirDecceleration;
  float AdditiveControllerSpeedForward;
  float ManualAccelerationOnRail;
  float ManualAccelerationOnAir;
  float AdditiveControllerSpeedBackward;
  float ManualDeccelerationOnRail;
  float ManualDeccelerationOnAir;
  float BrakingDuration;
  float MinPercentageOfTimeToAllowBraking;
  int32_t AmountOfRailChecks;
};
struct CartSettings {
  struct CartSettings__Class *klass;
  struct MonitorData *monitor;
  struct CartSettings__Fields fields;
};
struct CartBody__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Body;
  struct Transform * Bumper;
  float BumperRotationLimit;
  float RotationScale;
  float MaxSampleSpeed;
  struct AnimationCurve * RotationNoiseCurve;
  struct Transform * m_transform;
  struct CartPlatformMovement * m_cartMov;
  struct Cart * m_cart;
  struct Vector3 m_bodyRotation;
  struct Vector3 m_bumperRotation;
  float m_desiredRotation;
  float m_rotationTimer;
  float m_additiveRotation;
};
struct CartBody {
  struct CartBody__Class *klass;
  struct MonitorData *monitor;
  struct CartBody__Fields fields;
};
struct CartPlatformMovement__Fields {
  struct CharacterPlatformMovement__Fields _;
  struct Vector3 smoothGroundNormal;
};
struct CartPlatformMovement {
  struct CartPlatformMovement__Class *klass;
  struct MonitorData *monitor;
  struct CartPlatformMovement__Fields fields;
};
struct CartStopper__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect Bounds;
  struct Collider__Array * m_overlapBuffer;
  struct LayerMask CartLayer;
};
struct CartStopper {
  struct CartStopper__Class *klass;
  struct MonitorData *monitor;
  struct CartStopper__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_CartStopper___Fields {
  struct List_1_CartStopper_ * m_objects;
};
struct AllContainer_1_CartStopper_ {
  struct AllContainer_1_CartStopper___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_CartStopper___Fields fields;
};
struct __declspec(align(8)) List_1_CartStopper___Fields {
  struct CartStopper__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CartStopper_ {
  struct List_1_CartStopper___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CartStopper___Fields fields;
};
struct CartStopper__Array {
  struct CartStopper__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CartStopper * vector[32];
};
struct IEnumerator_1_CartStopper_ {
  struct IEnumerator_1_CartStopper___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Rail___Fields {
  struct Rail__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Rail_ {
  struct List_1_Rail___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Rail___Fields fields;
};
enum RailType__Enum : int32_t {
  RailType__Enum_Default = 0,
  RailType__Enum_BoostRail = 1,
  RailType__Enum_ChargingRail = 2,
};
struct RailType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RailType__Enum value;
};
struct Rail__Fields {
  struct GravityToGroundSurface__Fields _;
  bool StartActivated;
  enum RailType__Enum RailType;
  bool m_activated;
  float MaxWidth;
  bool AllowFlipping;
  struct Renderer * m_renderer;
  struct Collider * m_collider;
  struct Dictionary_2_Cart_System_Single_ * m_ignoredCartColliders;
  struct DamageDealer * m_damageDealer;
};
struct Rail {
  struct Rail__Class *klass;
  struct MonitorData *monitor;
  struct Rail__Fields fields;
};
struct Rail__Array {
  struct Rail__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Rail * vector[32];
};
struct __declspec(align(8)) Dictionary_2_RailType_UnityEngine_Color___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_RailType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_RailType_UnityEngine_Color_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_RailType_UnityEngine_Color_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_RailType_UnityEngine_Color_ {
  struct Dictionary_2_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_RailType_UnityEngine_Color___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color_ {
  int32_t hashCode;
  int32_t next;
  enum RailType__Enum key;
  struct Color value;
};
struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color___Array {
  struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_RailType_UnityEngine_Color_ vector[32];
};
struct IEqualityComparer_1_RailType_ {
  struct IEqualityComparer_1_RailType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_RailType_UnityEngine_Color___Fields {
  struct Dictionary_2_RailType_UnityEngine_Color_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_RailType_UnityEngine_Color_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_RailType_UnityEngine_Color___Fields fields;
};
struct RailType__Enum__Array {
  struct RailType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum RailType__Enum vector[32];
};
struct IEnumerator_1_RailType_ {
  struct IEnumerator_1_RailType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_RailType_UnityEngine_Color___Fields {
  struct Dictionary_2_RailType_UnityEngine_Color_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_RailType_UnityEngine_Color_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_RailType_UnityEngine_Color___Fields fields;
};
struct ICollection_1_RailType_ {
  struct ICollection_1_RailType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_Color_ {
  struct ICollection_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_RailType_UnityEngine_Color_ {
  enum RailType__Enum key;
  struct Color value;
};
struct KeyValuePair_2_RailType_UnityEngine_Color___Boxed {
  struct KeyValuePair_2_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_RailType_UnityEngine_Color_ fields;
};
struct KeyValuePair_2_RailType_UnityEngine_Color___Array {
  struct KeyValuePair_2_RailType_UnityEngine_Color___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_RailType_UnityEngine_Color_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_RailType_UnityEngine_Color_ {
  struct IEnumerator_1_KeyValuePair_2_RailType_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_RailType_ {
  struct IEnumerable_1_RailType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_Color_ {
  struct IEnumerable_1_UnityEngine_Color___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_Cart_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_Cart_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_Cart_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_Cart_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_Cart_System_Single_ {
  struct Dictionary_2_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_Cart_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single_ {
  int32_t hashCode;
  int32_t next;
  struct Cart * key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_Cart_System_Single_ vector[32];
};
struct IEqualityComparer_1_Cart_ {
  struct IEqualityComparer_1_Cart___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Cart_System_Single___Fields {
  struct Dictionary_2_Cart_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_Cart_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_Cart_System_Single___Fields fields;
};
struct Cart__Array {
  struct Cart__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Cart * vector[32];
};
struct IEnumerator_1_Cart_ {
  struct IEnumerator_1_Cart___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Cart_System_Single___Fields {
  struct Dictionary_2_Cart_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_Cart_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_Cart_System_Single___Fields fields;
};
struct ICollection_1_Cart_ {
  struct ICollection_1_Cart___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_Cart_System_Single_ {
  struct Cart * key;
  float value;
};
struct KeyValuePair_2_Cart_System_Single___Boxed {
  struct KeyValuePair_2_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_Cart_System_Single_ fields;
};
struct KeyValuePair_2_Cart_System_Single___Array {
  struct KeyValuePair_2_Cart_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_Cart_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_Cart_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_Cart_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_Cart_ {
  struct IEnumerable_1_Cart___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Rail_ {
  struct IEnumerator_1_Rail___Class *klass;
  struct MonitorData *monitor;
};
struct PushPullBlock__Fields {
  struct MonoBehaviour__Fields _;
  bool TakesDamage;
  struct Rigidbody * m_rigidbody;
  struct Vector3 m_originalPosition;
  struct PhysicMaterial * PushPullMaterial;
  struct PhysicMaterial * PushPullMaterialMoving;
  float m_ignoreCollisionRemainingTime;
  struct LegacyAnimator__Array * HighlightAnimators;
  struct SoundSource * HighlightSound;
  struct SoundSource * DehighlightSound;
  bool StrongFrictionWhenReleased;
  float WindMultiplier;
  struct Transform * m_transform;
  struct Collider__Array * m_colliders;
  struct CollisionSoundSource * m_collisionSoundSource;
  struct BaseAnimator * BashHighlight;
  int32_t BashAttackPriority;
  bool KeepAwake;
  int32_t m_angleFixHack;
  bool IsBashable;
  struct ActionMethod * OnBashAction;
  bool CanTeleport;
  float MoveSpeedMultiplier;
  bool CollideWithPlayer;
  bool ManagedByPhysicsManager;
  bool _IsGrabbed_k__BackingField;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
  bool ForceDontRegisterWithSuspensionManager;
  bool m_hasRegisteredWithSuspensionManager;
  bool m_previousCollideWithPlayer;
  struct Action * OnBashEvent;
  struct IPressurePlate * m_pressurePlate;
  struct TrackingExclusions _TrackingExclusions_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct PushPullBlock {
  struct PushPullBlock__Class *klass;
  struct MonitorData *monitor;
  struct PushPullBlock__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_IPushable___Fields {
  struct List_1_IPushable_ * m_objects;
};
struct AllContainer_1_IPushable_ {
  struct AllContainer_1_IPushable___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_IPushable___Fields fields;
};
struct __declspec(align(8)) List_1_IPushable___Fields {
  struct IPushable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IPushable_ {
  struct List_1_IPushable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IPushable___Fields fields;
};
struct IPushable__Array {
  struct IPushable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IPushable * vector[32];
};
struct IEnumerator_1_IPushable_ {
  struct IEnumerator_1_IPushable___Class *klass;
  struct MonitorData *monitor;
};
struct CollisionSoundSource__Fields {
  struct MonoBehaviour__Fields _;
  struct CollisionBasedSoundProvider * LegacyCollisionSoundProvider;
  struct SoundSource * LegacyContinuousSoundSource;
  struct Event_1 * CollisionSound;
  struct RTPC * CollisionSoundRtpc;
  struct Event_1 * ContinuousSound;
  struct RTPC * ContinuousSoundRtpc;
  float MinImpulse;
  bool SilenceContinuousRtpc;
  float RtpcDivisor;
  int32_t m_collisionCount;
  struct Rigidbody * m_rigidbody;
  struct Collider * m_collisionReciever;
  struct SoundHost * m_soundHost;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
  float m_contactTimeout;
  float m_contactTime;
  float m_contactLostTime;
};
struct CollisionSoundSource {
  struct CollisionSoundSource__Class *klass;
  struct MonitorData *monitor;
  struct CollisionSoundSource__Fields fields;
};
struct IPressurePlate {
  struct IPressurePlate__Class *klass;
  struct MonitorData *monitor;
};
struct CameraLookAheadController__Fields {
  struct MonoBehaviour__Fields _;
  struct Rigidbody * Rigidbody;
  float XWeight;
  float YWeight;
  struct Vector2 MinOffset;
  struct Vector2 MaxOffset;
  float Speed;
  bool m_active;
};
struct CameraLookAheadController {
  struct CameraLookAheadController__Class *klass;
  struct MonitorData *monitor;
  struct CameraLookAheadController__Fields fields;
};
struct CartBouncer__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionSequence * BounceAction;
  struct Collider * m_collider;
};
struct CartBouncer {
  struct CartBouncer__Class *klass;
  struct MonitorData *monitor;
  struct CartBouncer__Fields fields;
};
enum RideableTypes__Enum : int32_t {
  RideableTypes__Enum_Invalid = -1,
  RideableTypes__Enum_Cart = 0,
  RideableTypes__Enum_Ku = 1,
};
struct RideableTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RideableTypes__Enum value;
};
struct __declspec(align(8)) CameraTargetData__Fields {
  struct Vector3 CameraTargetPosition;
  struct Vector2 CameraTargetPadding;
  struct Vector3 CameraInfluencePosition;
  float CameraInfluenceMinDist;
  float CameraInfluenceMaxDist;
};
struct CameraTargetData {
  struct CameraTargetData__Class *klass;
  struct MonitorData *monitor;
  struct CameraTargetData__Fields fields;
};
enum CameraTargetType__Enum : int32_t {
  CameraTargetType__Enum_InterestPoint = 0,
  CameraTargetType__Enum_GameplayItem = 1,
  CameraTargetType__Enum_Enemy = 2,
  CameraTargetType__Enum_NPC = 3,
};
struct CameraTargetType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CameraTargetType__Enum value;
};
struct Locomotion__Fields {
  struct MonoBehaviour__Fields _;
  bool UseStateMachine;
  float _TraversalTier_k__BackingField;
  struct Nullable_1_UnityEngine_Vector3_ _ReplacementRegisteredPoint_k__BackingField;
  struct Entity * m_entity;
  bool m_isNPC;
  struct LocomotionContext * m_locomotionContext;
  struct CharacterPlatformMovement * m_platformMovement;
  bool m_hasPlatformMovement;
  struct Rigidbody * m_rigidbody;
  struct MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask_ * m_locomotionBehaviours;
  struct EntityLocomotionTask * m_currentBehaviour;
  struct Nullable_1_UnityEngine_Vector3_ m_registeredPoint;
  struct Nullable_1_UnityEngine_Vector2_ m_registeredDirection;
  bool m_executingLocomotionBehaviour;
  int32_t m_frameCountForReset;
  struct StateMachine_2 * m_stateMachine;
  struct TransitionManager_1 * m_transManager;
  struct Dictionary_2_System_Int32_RootMotionProcessor_ * m_rootMotionProcessors;
  struct Queue_1_RootMotionProcessor_ * m_rootMotionProcessorPool;
  struct Rect m_bounds;
  bool m_isPrewarmed;
};
struct Locomotion {
  struct Locomotion__Class *klass;
  struct MonitorData *monitor;
  struct Locomotion__Fields fields;
};
struct __declspec(align(8)) LocomotionContext__Fields {
  struct Locomotion * Locomotion;
};
struct LocomotionContext {
  struct LocomotionContext__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionContext__Fields fields;
};
struct __declspec(align(8)) MoonSet_1_Moon_BehaviourSystem_EntityLocomotionTask___Fields {
  struct List_1_Moon_BehaviourSystem_EntityLocomotionTask_ * m_values;
  struct Dictionary_2_System_Type_Moon_BehaviourSystem_EntityLocomotionTask_ * m_typeToValue;
};}