namespace app {
struct List_1_Damage___StaticFields {
  struct Damage__Array * _emptyArray;
};
struct List_1_Damage___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Damage___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Damage___VTable vtable;
};

struct WaterPoisonCloud__Fields {
  struct MonoBehaviour__Fields _;
  bool ClipToWaterZone;
  bool ClipUVsToWaterZone;
  float BlobSizeMultiplierForDamage;
  float DamageAmound;
  float DamageKickbackForce;
  enum DamageType__Enum DamageType;
  struct DamageOwner * Owner;
  enum AbilityType__Enum AbilityType;
  enum DamageWeight__Enum DamageWeight;
  bool DebugDrawDamageZones;
  struct Color DebugDamageZoneColor;
  struct Color DebugDamageZoneOutlineColor;
  struct Mesh * m_mesh;
  struct List_1_UnityEngine_Vector3_ * m_vertices;
  struct List_1_UnityEngine_Vector3_ * m_normals;
  struct List_1_UnityEngine_Vector3_ * m_uvs;
  struct List_1_UnityEngine_Color_ * m_colors;
  struct List_1_System_Int32_ * m_triangles;
  struct List_1_WaterPoisonCloud_Blob_ * m_blobs;
  struct Vector3 m_vertexCache0;
  struct Vector3 m_vertexCache1;
  struct Vector3 m_vertexCache2;
  struct Vector3 m_vertexCache3;
  struct Vector2 m_uvUpperLeftCache;
  struct Vector2 m_uvLowerRightCache;
  struct Vector3 m_boundMin;
  struct Vector3 m_boundMax;
  bool m_destroyOnCleared;
};
struct WaterPoisonCloud {
  struct WaterPoisonCloud__Class *klass;
  struct MonitorData *monitor;
  struct WaterPoisonCloud__Fields fields;
};
struct __declspec(align(8)) List_1_WaterPoisonCloud_Blob___Fields {
  struct WaterPoisonCloud_Blob__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_WaterPoisonCloud_Blob_ {
  struct List_1_WaterPoisonCloud_Blob___Class *klass;
  struct MonitorData *monitor;
  struct List_1_WaterPoisonCloud_Blob___Fields fields;
};
struct WaterPoisonCloud_Blob {
  struct Vector3 Position;
  float Size;
  float Alpha;
  float CurrentTime;
};
struct WaterPoisonCloud_Blob__Boxed {
  struct WaterPoisonCloud_Blob__Class *klass;
  struct MonitorData *monitor;
  struct WaterPoisonCloud_Blob fields;
};
struct WaterPoisonCloud_Blob__Array {
  struct WaterPoisonCloud_Blob__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WaterPoisonCloud_Blob vector[32];
};
struct IEnumerator_1_WaterPoisonCloud_Blob_ {
  struct IEnumerator_1_WaterPoisonCloud_Blob___Class *klass;
  struct MonitorData *monitor;
};
struct WaterPoisonCloud_Blob__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterPoisonCloud_Blob__StaticFields {
};
struct WaterPoisonCloud_Blob__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterPoisonCloud_Blob__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterPoisonCloud_Blob__VTable vtable;
};
struct IEnumerator_1_WaterPoisonCloud_Blob___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_WaterPoisonCloud_Blob___StaticFields {
};
struct IEnumerator_1_WaterPoisonCloud_Blob___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_WaterPoisonCloud_Blob___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_WaterPoisonCloud_Blob___VTable vtable;
};
struct List_1_WaterPoisonCloud_Blob___VTable {
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
struct List_1_WaterPoisonCloud_Blob___StaticFields {
  struct WaterPoisonCloud_Blob__Array * _emptyArray;
};
struct List_1_WaterPoisonCloud_Blob___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_WaterPoisonCloud_Blob___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_WaterPoisonCloud_Blob___VTable vtable;
};
struct WaterPoisonCloud__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetDamageForPosition;
};
struct WaterPoisonCloud__StaticFields {
};
struct WaterPoisonCloud__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterPoisonCloud__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterPoisonCloud__VTable vtable;
};

struct WaterPoisonCloudTrail__Fields {
  struct MonoBehaviour__Fields _;
  struct WaterPoisonCloud * Cloud;
  float SpawnEveryDistance;
  struct AnimationCurve * VertexAlphaOverLifetime;
  float MinSize;
  float MaxSize;
  struct AnimationCurve * SizeOverLifetime;
  float BlobLifeTime;
  struct Vector3 m_lastPosition;
  bool m_spawnActive;
};
struct WaterPoisonCloudTrail {
  struct WaterPoisonCloudTrail__Class *klass;
  struct MonitorData *monitor;
  struct WaterPoisonCloudTrail__Fields fields;
};
struct WaterPoisonCloudTrail__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WaterPoisonCloudTrail__StaticFields {
};
struct WaterPoisonCloudTrail__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaterPoisonCloudTrail__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaterPoisonCloudTrail__VTable vtable;
};

struct KillVolumeChaseController__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * EscapeTimeline;
  struct List_1_Moon_ScalableAnimationPlayer_ * m_scalableAnimations;
  struct Transform * ReferencePosition;
  struct RubberBandedValueProvider * RubberBanding;
  enum SuspendableMask__Enum _Mask_k__BackingField;
  bool _IsSuspended_k__BackingField;
};
struct KillVolumeChaseController {
  struct KillVolumeChaseController__Class *klass;
  struct MonitorData *monitor;
  struct KillVolumeChaseController__Fields fields;
};
struct KillVolumeChaseController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct KillVolumeChaseController__StaticFields {
};
struct KillVolumeChaseController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KillVolumeChaseController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KillVolumeChaseController__VTable vtable;
};

struct FoxArmor__Fields {
  struct MonoBehaviour__Fields _;
  struct Rigidbody__Array * pieces;
  struct Vector3__Array * piecesInitialPositions;
  struct Quaternion__Array * piecesInitialRotations;
  float angleMin;
  float angleMax;
  float speedMin;
  float speedMax;
  float timeUntilDisappear;
  struct IEnumerator * HidePiecesTempEnum;
};
struct FoxArmor {
  struct FoxArmor__Class *klass;
  struct MonitorData *monitor;
  struct FoxArmor__Fields fields;
};
struct FoxArmor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxArmor__StaticFields {
};
struct FoxArmor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxArmor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxArmor__VTable vtable;
};

struct __declspec(align(8)) FoxArmor_HidePiecesTemp_d_12__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  float seconds;
  struct FoxArmor * __4__this;
};
struct FoxArmor_HidePiecesTemp_d_12 {
  struct FoxArmor_HidePiecesTemp_d_12__Class *klass;
  struct MonitorData *monitor;
  struct FoxArmor_HidePiecesTemp_d_12__Fields fields;
};
struct FoxArmor_HidePiecesTemp_d_12__VTable {
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
struct FoxArmor_HidePiecesTemp_d_12__StaticFields {
};
struct FoxArmor_HidePiecesTemp_d_12__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxArmor_HidePiecesTemp_d_12__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxArmor_HidePiecesTemp_d_12__VTable vtable;
};

struct FoxBehaviour__Fields {
  struct MonoBehaviour__Fields _;
};
struct FoxBehaviour {
  struct FoxBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct FoxBehaviour__Fields fields;
};
struct FoxBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxBehaviour__StaticFields {
};
struct FoxBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxBehaviour__VTable vtable;
};

struct FoxGrabber__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * LegA;
  struct Transform * LegB;
  struct FoxGrabber_Receiver * m_Receiver;
};
struct FoxGrabber {
  struct FoxGrabber__Class *klass;
  struct MonitorData *monitor;
  struct FoxGrabber__Fields fields;
};
struct FoxGrabber_Receiver {
  struct FoxGrabber_Receiver__Class *klass;
  struct MonitorData *monitor;
};
struct FoxGrabber_Receiver__VTable {
  VirtualInvokeData OnGrabbed;
};
struct FoxGrabber_Receiver__StaticFields {
};
struct FoxGrabber_Receiver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxGrabber_Receiver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxGrabber_Receiver__VTable vtable;
};
struct FoxGrabber__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxGrabber__StaticFields {
};
struct FoxGrabber__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxGrabber__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxGrabber__VTable vtable;
};

struct FoxHeadHurtZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_Damage_ * ReceiveDamageCallback;
};
struct FoxHeadHurtZone {
  struct FoxHeadHurtZone__Class *klass;
  struct MonitorData *monitor;
  struct FoxHeadHurtZone__Fields fields;
};
struct FoxHeadHurtZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnRecieveDamage;
};
struct FoxHeadHurtZone__StaticFields {
};
struct FoxHeadHurtZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxHeadHurtZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxHeadHurtZone__VTable vtable;
};

struct FoxHeadHurtZone_c {
  struct FoxHeadHurtZone_c__Class *klass;
  struct MonitorData *monitor;
};
struct FoxHeadHurtZone_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxHeadHurtZone_c__StaticFields {
  struct FoxHeadHurtZone_c * __9;
  struct Action_1_Damage_ * __9__4_0;
};
struct FoxHeadHurtZone_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxHeadHurtZone_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxHeadHurtZone_c__VTable vtable;
};

struct FoxPlatformingMovement__Fields {
  struct CharacterPlatformMovement__Fields _;
  struct Kickback * Kickback;
};
struct FoxPlatformingMovement {
  struct FoxPlatformingMovement__Class *klass;
  struct MonitorData *monitor;
  struct FoxPlatformingMovement__Fields fields;
};
struct FoxPlatformingMovement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsOnGround;
  VirtualInvokeData get_HasWallLeft;
  VirtualInvokeData get_HasWallRight;
  VirtualInvokeData get_IsOnWall;
  VirtualInvokeData get_MovingHorizontally;
  VirtualInvokeData get_Jumping;
  VirtualInvokeData get_LocalSpeed;
  VirtualInvokeData set_LocalSpeed;
  VirtualInvokeData get_WorldSpeed;
  VirtualInvokeData set_WorldSpeed;
  VirtualInvokeData get_GravityAngle;
  VirtualInvokeData set_GravityAngle;
  VirtualInvokeData get_GroundAngle;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_FeetPosition;
  VirtualInvokeData set_FeetPosition;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_GoThroughPlatformTestingRayLeft;
  VirtualInvokeData get_GoThroughPlatformTestingRayRight;
  VirtualInvokeData GoThroughPlatformTestingRayLeftRight;
  VirtualInvokeData get_GoThroughPlatformTesterCollider;
  VirtualInvokeData get_GoThroughPlatformTestingRayRadius;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_OnGroundSpeedTreshold;
  VirtualInvokeData get_IsOnGround_1;
  VirtualInvokeData get_IsGroundHurting;
  VirtualInvokeData get_LocalSpeed_1;
  VirtualInvokeData set_LocalSpeed_1;
  VirtualInvokeData get_LocalSpeedX;
  VirtualInvokeData set_LocalSpeedX;
  VirtualInvokeData get_LocalSpeedY;
  VirtualInvokeData set_LocalSpeedY;
  VirtualInvokeData get_WorldSpeed_1;
  VirtualInvokeData set_WorldSpeed_1;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData set_Position_1;
  VirtualInvokeData get_IsAllowedNonZeroZPosition;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData WorldToLocal;
  VirtualInvokeData LocalToWorld;
  VirtualInvokeData OnAwake;
  VirtualInvokeData OnPrewarm;
  VirtualInvokeData OnCacheNonSerializedComponents;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnDisable;
  VirtualInvokeData PlaceOnGround;
  VirtualInvokeData get_StickToMovingPlatform;
  VirtualInvokeData Move;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData ScheduleJobs;
  VirtualInvokeData CompleteUpdate;
  VirtualInvokeData CalculatePositionDelta;
  VirtualInvokeData get_FeetRayPosition;
  VirtualInvokeData get_HeadRayPosition;
};
struct FoxPlatformingMovement__StaticFields {
};
struct FoxPlatformingMovement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxPlatformingMovement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxPlatformingMovement__VTable vtable;
};

struct FoxTailHurtZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Action_1_Damage_ * ReceiveDamageCallback;
};
struct FoxTailHurtZone {
  struct FoxTailHurtZone__Class *klass;
  struct MonitorData *monitor;
  struct FoxTailHurtZone__Fields fields;
};
struct FoxTailHurtZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnRecieveDamage;
};
struct FoxTailHurtZone__StaticFields {
};
struct FoxTailHurtZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxTailHurtZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxTailHurtZone__VTable vtable;
};

struct FoxTailHurtZone_c {
  struct FoxTailHurtZone_c__Class *klass;
  struct MonitorData *monitor;
};
struct FoxTailHurtZone_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxTailHurtZone_c__StaticFields {
  struct FoxTailHurtZone_c * __9;
  struct Action_1_Damage_ * __9__4_0;
};
struct FoxTailHurtZone_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxTailHurtZone_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxTailHurtZone_c__VTable vtable;
};

struct PlayerDetector__Fields {
  struct MonoBehaviour__Fields _;
  bool targetDetected;
};
struct PlayerDetector {
  struct PlayerDetector__Class *klass;
  struct MonitorData *monitor;
  struct PlayerDetector__Fields fields;
};
struct PlayerDetector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerDetector__StaticFields {
};
struct PlayerDetector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerDetector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerDetector__VTable vtable;
};

struct Enemy3D__Fields {
  struct Enemy__Fields _;
  struct Animator * Animator;
  struct Transform * Direction;
  bool m_faceLeft;
};
struct Enemy3D {
  struct Enemy3D__Class *klass;
  struct MonitorData *monitor;
  struct Enemy3D__Fields fields;
};
struct GroundEnemy3D__Fields {
  struct Enemy3D__Fields _;
  struct PlatformMovement * PlatformMovement;
  struct PlatformMovementListOfColliders * PlatformMovementListOfColliders;
  struct Transform * FeetTransform;
};
struct GroundEnemy3D {
  struct GroundEnemy3D__Class *klass;
  struct MonitorData *monitor;
  struct GroundEnemy3D__Fields fields;
};
struct FoxEnemy2__Fields {
  struct GroundEnemy3D__Fields _;
  struct FoxEnemy2_FoxEnemySettings * Settings;
  struct FoxEnemy2_FoxEnemyJumpAttackSettings * JumpAttackSettings;
  struct GameObject * Grabber;
  struct Vector3 m_SpawnPoint;
  struct Vector3 m_DesirePoint;
  float m_PatrolDistance;
  bool m_NeedsToTurnAround;
  float m_SpeedDirection;
  float m_SpeedMultiplier;
  struct Vector3 m_JumpAttackTarget;
  bool m_CanJumpAttack;
  bool m_NeedsToJumpAttack;
  struct IPinnable * m_AttackPinnable;
  bool TestEnableJumpAttack;
  bool ViewIsGrounded;
  int32_t kMovingTag;
  int32_t kTurningTag;
};
struct FoxEnemy2 {
  struct FoxEnemy2__Class *klass;
  struct MonitorData *monitor;
  struct FoxEnemy2__Fields fields;
};
struct __declspec(align(8)) FoxEnemy2_FoxEnemySettings__Fields {
  float Acceleration;
  float Deceleration;
  float CurrentSpeed;
  float Gravity;
  float MaxFallSpeed;
};
struct FoxEnemy2_FoxEnemySettings {
  struct FoxEnemy2_FoxEnemySettings__Class *klass;
  struct MonitorData *monitor;
  struct FoxEnemy2_FoxEnemySettings__Fields fields;
};
struct __declspec(align(8)) FoxEnemy2_FoxEnemyJumpAttackSettings__Fields {
  struct AnimationCurve * PrepareSpeedMultiplier;
  float MinDistanceToBegin;
  float MaxDistanceToBegin;
  float MinDistanceToJump;
  float MaxDistanceToJump;
  float MinJumpSpeedX;
};
struct FoxEnemy2_FoxEnemyJumpAttackSettings {
  struct FoxEnemy2_FoxEnemyJumpAttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct FoxEnemy2_FoxEnemyJumpAttackSettings__Fields fields;
};
struct IPinnable {
  struct IPinnable__Class *klass;
  struct MonitorData *monitor;
};
struct Enemy3D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
};
struct Enemy3D__StaticFields {
};
struct Enemy3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Enemy3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Enemy3D__VTable vtable;
};
struct GroundEnemy3D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
};
struct GroundEnemy3D__StaticFields {
};
struct GroundEnemy3D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundEnemy3D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundEnemy3D__VTable vtable;
};
struct FoxEnemy2_FoxEnemySettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxEnemy2_FoxEnemySettings__StaticFields {
};
struct FoxEnemy2_FoxEnemySettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxEnemy2_FoxEnemySettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxEnemy2_FoxEnemySettings__VTable vtable;
};
struct FoxEnemy2_FoxEnemyJumpAttackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FoxEnemy2_FoxEnemyJumpAttackSettings__StaticFields {
};
struct FoxEnemy2_FoxEnemyJumpAttackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxEnemy2_FoxEnemyJumpAttackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxEnemy2_FoxEnemyJumpAttackSettings__VTable vtable;
};
struct IPinnable__VTable {
  VirtualInvokeData StartPin;
  VirtualInvokeData ReleasePin;
  VirtualInvokeData UpdatePin;
  VirtualInvokeData StartRavage;
  VirtualInvokeData EndRavage;
  VirtualInvokeData UpdateRavage;
};
struct IPinnable__StaticFields {
};
struct IPinnable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPinnable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPinnable__VTable vtable;
};
struct FoxEnemy2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnTimedRespawn;
  VirtualInvokeData RegisterRespawnDelegate;
  VirtualInvokeData OnFrustumEnter;
  VirtualInvokeData OnFrustumExit;
  VirtualInvokeData get_InsideFrustum;
  VirtualInvokeData get_Bounds;
  VirtualInvokeData get_AllowCacheBounds;
  VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
  VirtualInvokeData GetHitStopAutoSuspendables;
  VirtualInvokeData OnHitStopStart;
  VirtualInvokeData OnHitStopEnd;
  VirtualInvokeData GetHitStopAutoSuspendables_1;
  VirtualInvokeData CanBeOptimized;
  VirtualInvokeData get_Position;
  VirtualInvokeData OnFreeze;
  VirtualInvokeData OnUnfreeze;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnHitStopStart_1;
  VirtualInvokeData OnHitStopEnd_1;
  VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourEnter;
  VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourUpdate;
  VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnStateMachineBehaviourExit;
  VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnAnimationEvent;
  VirtualInvokeData StateMachineBehaviourProxy_IReceiver_OnAnimationEvent_1;
  VirtualInvokeData FoxGrabber_Receiver_OnGrabbed;
};
struct FoxEnemy2__StaticFields {
};
struct FoxEnemy2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FoxEnemy2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FoxEnemy2__VTable vtable;
};

struct StateMachineBehaviourProxy__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * ReceiverObject;
  struct Action_1_Int32_ * OnIntEventAction;
  struct Action_1_String_ * OnStringEventAction;
  struct StateMachineBehaviourProxy_IReceiver * m_Receiver;
};
struct StateMachineBehaviourProxy {
  struct StateMachineBehaviourProxy__Class *klass;
  struct MonitorData *monitor;
  struct StateMachineBehaviourProxy__Fields fields;
};
struct StateMachineBehaviourProxy_IReceiver {
  struct StateMachineBehaviourProxy_IReceiver__Class *klass;
  struct MonitorData *monitor;
};
struct StateMachineBehaviourProxy_IReceiver__VTable {
  VirtualInvokeData OnStateMachineBehaviourEnter;
  VirtualInvokeData OnStateMachineBehaviourUpdate;
  VirtualInvokeData OnStateMachineBehaviourExit;
  VirtualInvokeData OnAnimationEvent;
  VirtualInvokeData OnAnimationEvent_1;
};
struct StateMachineBehaviourProxy_IReceiver__StaticFields {
};
struct StateMachineBehaviourProxy_IReceiver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMachineBehaviourProxy_IReceiver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMachineBehaviourProxy_IReceiver__VTable vtable;
};
struct StateMachineBehaviourProxy__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StateMachineBehaviourProxy__StaticFields {
};
struct StateMachineBehaviourProxy__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMachineBehaviourProxy__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMachineBehaviourProxy__VTable vtable;
};

struct StateMachineBehaviourProxy_c {
  struct StateMachineBehaviourProxy_c__Class *klass;
  struct MonitorData *monitor;
};
struct StateMachineBehaviourProxy_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StateMachineBehaviourProxy_c__StaticFields {
  struct StateMachineBehaviourProxy_c * __9;
  struct Action_1_Int32_ * __9__14_0;
  struct Action_1_String_ * __9__14_1;
};
struct StateMachineBehaviourProxy_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMachineBehaviourProxy_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMachineBehaviourProxy_c__VTable vtable;
};

struct StateMachineBehaviourProxyCaller__Fields {
  struct StateMachineBehaviour__Fields _;
};
struct StateMachineBehaviourProxyCaller {
  struct StateMachineBehaviourProxyCaller__Class *klass;
  struct MonitorData *monitor;
  struct StateMachineBehaviourProxyCaller__Fields fields;
};
struct StateMachineBehaviourProxyCaller__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStateEnter;
  VirtualInvokeData OnStateUpdate;
  VirtualInvokeData OnStateExit;
  VirtualInvokeData OnStateMove;
  VirtualInvokeData OnStateIK;
  VirtualInvokeData OnStateMachineEnter;
  VirtualInvokeData OnStateMachineExit;
  VirtualInvokeData OnStateEnter_1;
  VirtualInvokeData OnStateUpdate_1;
  VirtualInvokeData OnStateExit_1;
  VirtualInvokeData OnStateMove_1;
  VirtualInvokeData OnStateIK_1;
  VirtualInvokeData OnStateMachineEnter_1;
  VirtualInvokeData OnStateMachineExit_1;
};
struct StateMachineBehaviourProxyCaller__StaticFields {
};
struct StateMachineBehaviourProxyCaller__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StateMachineBehaviourProxyCaller__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StateMachineBehaviourProxyCaller__VTable vtable;
};

struct __declspec(align(8)) GenericSpring2D__Fields {
  struct Rigidbody * BodyA;
  struct Rigidbody * BodyB;
  float RestDistance;
  float MinimumDistance;
  float Damping;
  float SpringPower;
  float _Distance_k__BackingField;
};
struct GenericSpring2D {
  struct GenericSpring2D__Class *klass;
  struct MonitorData *monitor;
  struct GenericSpring2D__Fields fields;
};
struct GenericSpring2D__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GenericSpring2D__StaticFields {
};
struct GenericSpring2D__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GenericSpring2D__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GenericSpring2D__VTable vtable;
};

struct UberGhostTrail__Fields {
  struct MonoBehaviour__Fields _;
  float SpawnDistance;
  struct AnimationCurve * FadeoutCurve;
  struct AnimationCurve * ScaleCurve;
  struct GameObject * AnimatorTarget;
  struct Renderer * m_targetRenderer;
  bool m_shouldSetSettings;
  struct Vector2 ConstantForce;
  struct Vector2 LocalConstantForce;
  struct Vector2 Startspeed;
  struct Vector2 RandomStartSpeed;
  struct Vector2 LocalStartSpeed;
  struct Vector2 LocalRandomStartSpeed;
  bool UseCenterOfCroppedSprite;
  struct SpriteAnimator * m_animator;
  struct SpriteAnimatorWithTransitions * m_transAnimator;
  struct SeinNaruComboAnimator * m_comboAnimator;
  struct Vector3 m_lastSpawnPoint;
  struct Vector3 m_previousPosition;
  float m_travelDistance;
  struct GameObject * m_trailParent;
  struct Renderer * m_renderer;
  struct Renderer * m_parentRenderer;
  float m_lastTime;
  struct UberGhostTrailMeshUpdate * m_meshUpdater;
  float m_deltaTime;
  struct Vector2 m_previousCenterOffset;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};}