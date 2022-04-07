namespace app {
struct LaserShooterMinibossEntity {
  struct LaserShooterMinibossEntity__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterMinibossEntity__Fields fields;
};
struct BlockableLaser__Fields {
  struct GuidOwner__Fields _;
  bool OptimizeStaticSetupAndOri;
  float LaserMaxDistance;
  struct LayerMask BlockingLayers;
  struct Vector3 LaserDirection;
  float LaserBeamForce;
  bool CanBeBlockedByEnemies;
  struct LaserBeam * LaserBeam;
  struct Transform * BeamRotationPivot;
  struct DamageOwner * DamageOwner;
  struct RaycastHit__Array * m_hits;
  float LaserActiveOffscreenPadding;
  float BurstSpawnOffcreenPadding;
  float MinScaleToDealDamage;
  float MinScaleToSpawnImpactFX;
  float DamagingRadius;
  bool m_inSand;
  struct MoonTimeline * LoopingVFX;
  struct SoundHost * m_soundHost;
  struct ArtificialSoundHostReference m_laserLoopSoundHost;
  struct ArtificialSoundHostReference m_impactSoundHost;
  uint32_t m_laserLoopEventPlayingID;
  uint32_t m_laserImpactLoopEventPlayingID;
  struct Collider__Array * m_ignoredColliders;
  struct List_1_UnityEngine_Collider_ * RuntimeIgnoredColliders;
  struct Collider * m_damageCollider;
  struct Collider * SocketDamageCollider;
  float m_originalScaleX;
  int32_t m_sphereCastClientID;
  bool m_impactFxTriggerEnabled;
  struct List_1_UnityEngine_ParticleSystem_ * s_particleSystemList;
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * m_ImpactEffectPerSurface;
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * m_ImpactPointLoopEffectPerSurface;
  struct Vector3 m_transformedLaserDirection;
  struct RaycastHit m_cachedEnvHit;
  bool m_cachedEnvHitValid;
  float _CurrentLaserLength_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct TextureTilingAdjuster__Array * m_laserBeamTilingAdjusters;
  bool m_activated;
  bool m_isSuspended;
  struct SoundPlayer * m_loopSoundPlayer;
  struct Collider * m_previousHitCollider;
  struct Vector3 m_lastImpactPosition;
  struct GameObject * m_lastLaserImpactLoopEffectPrefab;
  struct GameObject * m_laserImpactLoopEffect;
  struct GameObject * m_laserImpactPointLight;
  bool m_wasVisibleOnScreen;
};
struct BlockableLaser {
  struct BlockableLaser__Class *klass;
  struct MonitorData *monitor;
  struct BlockableLaser__Fields fields;
};
struct __declspec(align(8)) BlockableLaser_ActivationTimeslicer__Fields {
  struct List_1_BlockableLaser_ActivationTimeslicer_Request_ * queue;
};
struct BlockableLaser_ActivationTimeslicer {
  struct BlockableLaser_ActivationTimeslicer__Class *klass;
  struct MonitorData *monitor;
  struct BlockableLaser_ActivationTimeslicer__Fields fields;
};
struct __declspec(align(8)) List_1_BlockableLaser_ActivationTimeslicer_Request___Fields {
  struct BlockableLaser_ActivationTimeslicer_Request__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BlockableLaser_ActivationTimeslicer_Request_ {
  struct List_1_BlockableLaser_ActivationTimeslicer_Request___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BlockableLaser_ActivationTimeslicer_Request___Fields fields;
};
struct BlockableLaser_ActivationTimeslicer_Request {
  bool activate;
  struct BlockableLaser * laser;
  int32_t frame;
};
struct BlockableLaser_ActivationTimeslicer_Request__Boxed {
  struct BlockableLaser_ActivationTimeslicer_Request__Class *klass;
  struct MonitorData *monitor;
  struct BlockableLaser_ActivationTimeslicer_Request fields;
};
struct BlockableLaser_ActivationTimeslicer_Request__Array {
  struct BlockableLaser_ActivationTimeslicer_Request__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BlockableLaser_ActivationTimeslicer_Request vector[32];
};
struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request_ {
  struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_Collider_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ {
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ {
  int32_t hashCode;
  int32_t next;
  struct Collider * key;
  struct GameObject * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields {
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields {
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Fields fields;
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ {
  struct Collider * key;
  struct GameObject * value;
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Boxed {
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ fields;
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Array {
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
};
struct TextureTilingAdjuster__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 ScaleMultiplier;
  struct List_1_TextureTilingAdjuster_AdjustedTexture_ * m_adjustedTextures;
  struct Vector2 m_prevScale;
  struct Renderer * m_renderer;
  int32_t m_frame;
};
struct TextureTilingAdjuster {
  struct TextureTilingAdjuster__Class *klass;
  struct MonitorData *monitor;
  struct TextureTilingAdjuster__Fields fields;
};
struct TextureTilingAdjuster__Array {
  struct TextureTilingAdjuster__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureTilingAdjuster * vector[32];
};
enum UberShaderProperty_Texture__Enum : int32_t {
  UberShaderProperty_Texture__Enum_MainTexture = 0,
  UberShaderProperty_Texture__Enum_MaskTexture = 1,
  UberShaderProperty_Texture__Enum_MaskTextureExtra = 2,
  UberShaderProperty_Texture__Enum_DistortionTexture = 3,
  UberShaderProperty_Texture__Enum_DistortionMaskTexture = 4,
  UberShaderProperty_Texture__Enum_DistortionExtraTexture = 5,
  UberShaderProperty_Texture__Enum_DistortionExtraMaskTexture = 6,
  UberShaderProperty_Texture__Enum_MultiplyLayerTexture = 7,
  UberShaderProperty_Texture__Enum_MultiplyLayerMaskTexture = 8,
  UberShaderProperty_Texture__Enum_MultiplyLayerExtraTexture = 9,
  UberShaderProperty_Texture__Enum_MultiplyLayerExtraMaskTexture = 10,
  UberShaderProperty_Texture__Enum_MultiplyLayerThirdTexture = 11,
  UberShaderProperty_Texture__Enum_MultiplyLayerThirdMaskTexture = 12,
  UberShaderProperty_Texture__Enum_DodgeLayerTexture = 13,
  UberShaderProperty_Texture__Enum_AdditiveLayerTexture = 14,
  UberShaderProperty_Texture__Enum_AdditiveLayerMaskTexture = 15,
  UberShaderProperty_Texture__Enum_AdditiveLayerExtraTexture = 16,
  UberShaderProperty_Texture__Enum_AdditiveLayerExtraMaskTexture = 17,
  UberShaderProperty_Texture__Enum_Textify_TextTexture = 18,
  UberShaderProperty_Texture__Enum_WorldMap_MaskA = 19,
  UberShaderProperty_Texture__Enum_WorldMap_MaskB = 20,
  UberShaderProperty_Texture__Enum_MaskDissolveTexture = 21,
  UberShaderProperty_Texture__Enum_WaterFallMaskTexture = 22,
  UberShaderProperty_Texture__Enum_DecalLayerTexture = 23,
  UberShaderProperty_Texture__Enum_DecalLayerMaskTexture = 24,
  UberShaderProperty_Texture__Enum_DirLightMask = 25,
  UberShaderProperty_Texture__Enum_DirLightTextureExtra = 26,
  UberShaderProperty_Texture__Enum_CubeReflMask = 27,
  UberShaderProperty_Texture__Enum_LightCanvasTexture = 28,
  UberShaderProperty_Texture__Enum_DynamicLightCanvasTextureA = 29,
  UberShaderProperty_Texture__Enum_MultiplyLayerDistortMaskTexture = 30,
  UberShaderProperty_Texture__Enum_MultiplyLayerDistortDistortTexture = 31,
  UberShaderProperty_Texture__Enum_DodgeLayerMaskTexture = 32,
  UberShaderProperty_Texture__Enum_DirLightTexture = 33,
  UberShaderProperty_Texture__Enum_EmissivityColorTex = 34,
  UberShaderProperty_Texture__Enum_EmissivitySpreadTex = 35,
  UberShaderProperty_Texture__Enum_MaskDissolveTextureSecondary = 36,
  UberShaderProperty_Texture__Enum_MultiplyLayerDistortTexture = 37,
  UberShaderProperty_Texture__Enum_TurbulenceTranslationAnimMask = 38,
  UberShaderProperty_Texture__Enum_TurbulenceRotationAnimMask = 39,
  UberShaderProperty_Texture__Enum_TurbulenceRotationAnimMask2 = 40,
  UberShaderProperty_Texture__Enum_TurbulenceScaleAnimMask = 41,
  UberShaderProperty_Texture__Enum_OffsetTexture = 42,
  UberShaderProperty_Texture__Enum_DirLightRoughness = 43,
  UberShaderProperty_Texture__Enum_TotalTextureProperties = 44,
};
struct UberShaderProperty_Texture__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum UberShaderProperty_Texture__Enum value;
};
struct UberShaderProperty_Texture__Enum__Array {
  struct UberShaderProperty_Texture__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum UberShaderProperty_Texture__Enum vector[32];
};
struct __declspec(align(8)) List_1_TextureTilingAdjuster_AdjustedTexture___Fields {
  struct TextureTilingAdjuster_AdjustedTexture__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_TextureTilingAdjuster_AdjustedTexture_ {
  struct List_1_TextureTilingAdjuster_AdjustedTexture___Class *klass;
  struct MonitorData *monitor;
  struct List_1_TextureTilingAdjuster_AdjustedTexture___Fields fields;
};
struct TextureTilingAdjuster_AdjustedTexture {
  enum UberShaderProperty_Texture__Enum TextureProperty;
  struct Vector2 OriginaTextureScale;
};
struct TextureTilingAdjuster_AdjustedTexture__Boxed {
  struct TextureTilingAdjuster_AdjustedTexture__Class *klass;
  struct MonitorData *monitor;
  struct TextureTilingAdjuster_AdjustedTexture fields;
};
struct TextureTilingAdjuster_AdjustedTexture__Array {
  struct TextureTilingAdjuster_AdjustedTexture__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TextureTilingAdjuster_AdjustedTexture vector[32];
};
struct IEnumerator_1_TextureTilingAdjuster_AdjustedTexture_ {
  struct IEnumerator_1_TextureTilingAdjuster_AdjustedTexture___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_BlockableLaser___Fields {
  struct BlockableLaser__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_BlockableLaser_ {
  struct List_1_BlockableLaser___Class *klass;
  struct MonitorData *monitor;
  struct List_1_BlockableLaser___Fields fields;
};
struct BlockableLaser__Array {
  struct BlockableLaser__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BlockableLaser * vector[32];
};
struct IEnumerator_1_BlockableLaser_ {
  struct IEnumerator_1_BlockableLaser___Class *klass;
  struct MonitorData *monitor;
};
enum LaserShooterMinibossPathMover_State__Enum : int32_t {
  LaserShooterMinibossPathMover_State__Enum_Idle = 0,
  LaserShooterMinibossPathMover_State__Enum_ReturnToCenter = 1,
  LaserShooterMinibossPathMover_State__Enum_MoveBetweenWaypoints = 2,
  LaserShooterMinibossPathMover_State__Enum_MoveFromCenterToWaypoint = 3,
};
struct LaserShooterMinibossPathMover_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LaserShooterMinibossPathMover_State__Enum value;
};
struct LaserShooterMinibossPathMover__Fields {
  struct MonoBehaviour__Fields _;
  float MinSpeed;
  float MaxSpeed;
  float AccelerationDiscance;
  struct AnimationCurve * AccelerationCurve;
  struct LaserShooterMinibossEntity * _Entity_k__BackingField;
  struct BaseSpline_SplineIterator * m_splineIterator;
  enum LaserShooterMinibossPathMover_State__Enum m_state;
  struct LaserShooterMinibossWaypoint * m_targetWaypoint;
  struct LaserShooterMinibossWaypoint * m_currentWaypoint;
  struct Vector3 m_startMovePosition;
  struct Vector3 m_endMovePosition;
  bool _IsAtCenter_k__BackingField;
};
struct LaserShooterMinibossPathMover {
  struct LaserShooterMinibossPathMover__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterMinibossPathMover__Fields fields;
};
struct LaserShooterMinibossWaypoint__Fields {
  struct MonoBehaviour__Fields _;
  struct LaserShooterMinibossWaypoint_Connection * NextPoint;
  struct LaserShooterMinibossWaypoint * PreviousPoint;
};
struct LaserShooterMinibossWaypoint {
  struct LaserShooterMinibossWaypoint__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterMinibossWaypoint__Fields fields;
};
struct __declspec(align(8)) LaserShooterMinibossWaypoint_Connection__Fields {
  struct LaserShooterMinibossWaypoint * Waypoint;
  struct VelocityBezierSplineComponent * Edge;
  float DirectionToConnectedWaypoint;
};
struct LaserShooterMinibossWaypoint_Connection {
  struct LaserShooterMinibossWaypoint_Connection__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterMinibossWaypoint_Connection__Fields fields;
};
struct __declspec(align(8)) List_1_LaserShooterRockSpawnPoint___Fields {
  struct LaserShooterRockSpawnPoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LaserShooterRockSpawnPoint_ {
  struct List_1_LaserShooterRockSpawnPoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LaserShooterRockSpawnPoint___Fields fields;
};
struct LaserShooterRockSpawnPoint__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * EffectTimeline;
  struct EventTriggerAnimator * SpawnTrigger;
  struct LaserShieldDamageReceiver * m_piece;
  float m_projectileSpeed;
  struct LaserShieldPieceProjectile * m_prefab;
  struct LaserShieldRotationController * m_shieldController;
};
struct LaserShooterRockSpawnPoint {
  struct LaserShooterRockSpawnPoint__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterRockSpawnPoint__Fields fields;
};
struct LaserShooterRockSpawnPoint__Array {
  struct LaserShooterRockSpawnPoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShooterRockSpawnPoint * vector[32];
};
struct IEnumerator_1_LaserShooterRockSpawnPoint_ {
  struct IEnumerator_1_LaserShooterRockSpawnPoint___Class *klass;
  struct MonitorData *monitor;
};
struct LaserShooterMinibossPath__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_LaserShooterMinibossWaypoint_ * Waypoints;
};
struct LaserShooterMinibossPath {
  struct LaserShooterMinibossPath__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterMinibossPath__Fields fields;
};
struct __declspec(align(8)) List_1_LaserShooterMinibossWaypoint___Fields {
  struct LaserShooterMinibossWaypoint__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LaserShooterMinibossWaypoint_ {
  struct List_1_LaserShooterMinibossWaypoint___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LaserShooterMinibossWaypoint___Fields fields;
};
struct LaserShooterMinibossWaypoint__Array {
  struct LaserShooterMinibossWaypoint__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShooterMinibossWaypoint * vector[32];
};
struct IEnumerator_1_LaserShooterMinibossWaypoint_ {
  struct IEnumerator_1_LaserShooterMinibossWaypoint___Class *klass;
  struct MonitorData *monitor;
};
struct DamageTextSpawner__Fields {
  struct MonoBehaviour__Fields _;
};
struct DamageTextSpawner {
  struct DamageTextSpawner__Class *klass;
  struct MonitorData *monitor;
  struct DamageTextSpawner__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_MeshRenderer___Fields {
  struct MeshRenderer__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_MeshRenderer_ {
  struct List_1_UnityEngine_MeshRenderer___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_MeshRenderer___Fields fields;
};
struct MeshRenderer__Array {
  struct MeshRenderer__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeshRenderer * vector[32];
};
struct IEnumerator_1_UnityEngine_MeshRenderer_ {
  struct IEnumerator_1_UnityEngine_MeshRenderer___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_LaserShieldDamageReceiver_FollowingEffect___Fields {
  struct LaserShieldDamageReceiver_FollowingEffect__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LaserShieldDamageReceiver_FollowingEffect_ {
  struct List_1_LaserShieldDamageReceiver_FollowingEffect___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LaserShieldDamageReceiver_FollowingEffect___Fields fields;
};
struct LaserShieldDamageReceiver_FollowingEffect__Array {
  struct LaserShieldDamageReceiver_FollowingEffect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShieldDamageReceiver_FollowingEffect vector[32];
};
struct IEnumerator_1_LaserShieldDamageReceiver_FollowingEffect_ {
  struct IEnumerator_1_LaserShieldDamageReceiver_FollowingEffect___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_LaserShieldPieceProjectile___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LaserShieldPieceProjectile___StaticFields {
};
struct IEnumerator_1_LaserShieldPieceProjectile___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LaserShieldPieceProjectile___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LaserShieldPieceProjectile___VTable vtable;
};
struct List_1_LaserShieldPieceProjectile___VTable {
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
struct List_1_LaserShieldPieceProjectile___StaticFields {
  struct LaserShieldPieceProjectile__Array * _emptyArray;
};
struct List_1_LaserShieldPieceProjectile___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LaserShieldPieceProjectile___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LaserShieldPieceProjectile___VTable vtable;
};
struct ValueWithMaxValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct ValueWithMaxValue__StaticFields {
};
struct ValueWithMaxValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueWithMaxValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueWithMaxValue__VTable vtable;
};
struct HealthController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct HealthController__StaticFields {
};
struct HealthController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HealthController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HealthController__VTable vtable;
};
struct LaserShieldPieceProjectile_Ring__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LaserShieldPieceProjectile_Ring__StaticFields {
};
struct LaserShieldPieceProjectile_Ring__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShieldPieceProjectile_Ring__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShieldPieceProjectile_Ring__VTable vtable;
};
struct LaserShieldPieceProjectile__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
  VirtualInvokeData CountsTowardsPowerOfLightAchievement;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Direction;
  VirtualInvokeData set_Direction;
  VirtualInvokeData get_Speed;
  VirtualInvokeData set_Speed;
  VirtualInvokeData get_LastReflector;
  VirtualInvokeData set_LastReflector;
  VirtualInvokeData CanBeReflected;
  VirtualInvokeData OnGrabbed;
  VirtualInvokeData OnReleased;
  VirtualInvokeData OnReflected;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData set_Position;
  VirtualInvokeData IPortalVisitor_get_Speed;
  VirtualInvokeData IPortalVisitor_set_Speed;
  VirtualInvokeData OnGoThroughPortal;
  VirtualInvokeData OnPortalOverlapEnter;
  VirtualInvokeData OnPortalOverlapExit;
  VirtualInvokeData CountsTowardsSuperJumpAchievement;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_HeavySpiritSlashPriority;
  VirtualInvokeData OnHeavySpiritSlashHighlight;
  VirtualInvokeData OnHeavySpiritSlashDehighlight;
  VirtualInvokeData get_HammerPriority;
  VirtualInvokeData get_HammerEnableAutoTarget;
  VirtualInvokeData get_TrackTranformChangesForRecording;
  VirtualInvokeData get_TrackingExclusions;
  VirtualInvokeData get_ParsingGroup;
  VirtualInvokeData OnBeforeTeleportation;
  VirtualInvokeData Teleport;
  VirtualInvokeData OnAfterTeleportation;
  VirtualInvokeData ITeleportBeaconAttackable_get_Position;
  VirtualInvokeData get_CanGoThroughPortals;
  VirtualInvokeData CanBeBashed_1;
  VirtualInvokeData OnRecieveDamage_1;
  VirtualInvokeData OnBashed;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnPoolDespawned_1;
  VirtualInvokeData OnGoThroughPortal_1;
  VirtualInvokeData Awake;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData OnDamageDealt;
  VirtualInvokeData FixedUpdate;
  VirtualInvokeData OnBeforeExplodeOnWater;
  VirtualInvokeData Launch;
  VirtualInvokeData ExplodeProjectile;
  VirtualInvokeData OnRicochet;
  VirtualInvokeData OnCollisionEnter;
  VirtualInvokeData UpdateVelocity;
  VirtualInvokeData HandleGravity;
};
struct LaserShieldPieceProjectile__StaticFields {
  struct List_1_LaserShieldPieceProjectile_ * AllProjectiles;
};
struct LaserShieldPieceProjectile__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShieldPieceProjectile__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShieldPieceProjectile__VTable vtable;
};
struct IEnumerator_1_LaserShieldDamageReceiver___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_LaserShieldDamageReceiver___StaticFields {
};
struct IEnumerator_1_LaserShieldDamageReceiver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_LaserShieldDamageReceiver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_LaserShieldDamageReceiver___VTable vtable;
};
struct List_1_LaserShieldDamageReceiver___VTable {
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
struct List_1_LaserShieldDamageReceiver___StaticFields {
  struct LaserShieldDamageReceiver__Array * _emptyArray;
};
struct List_1_LaserShieldDamageReceiver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_LaserShieldDamageReceiver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_LaserShieldDamageReceiver___VTable vtable;
};
struct BlockableLaser_ActivationTimeslicer_Request__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BlockableLaser_ActivationTimeslicer_Request__StaticFields {
};
struct BlockableLaser_ActivationTimeslicer_Request__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockableLaser_ActivationTimeslicer_Request__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockableLaser_ActivationTimeslicer_Request__VTable vtable;
};
struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___StaticFields {
};
struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_BlockableLaser_ActivationTimeslicer_Request___VTable vtable;
};
struct List_1_BlockableLaser_ActivationTimeslicer_Request___VTable {
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
struct List_1_BlockableLaser_ActivationTimeslicer_Request___StaticFields {
  struct BlockableLaser_ActivationTimeslicer_Request__Array * _emptyArray;
};
struct List_1_BlockableLaser_ActivationTimeslicer_Request___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_BlockableLaser_ActivationTimeslicer_Request___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_BlockableLaser_ActivationTimeslicer_Request___VTable vtable;
};
struct BlockableLaser_ActivationTimeslicer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BlockableLaser_ActivationTimeslicer__StaticFields {
};
struct BlockableLaser_ActivationTimeslicer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockableLaser_ActivationTimeslicer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockableLaser_ActivationTimeslicer__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};
struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
  VirtualInvokeData ContainsKey;
  VirtualInvokeData Add;
  VirtualInvokeData Remove;
  VirtualInvokeData TryGetValue;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
  VirtualInvokeData Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_get_Item;
  VirtualInvokeData System_Collections_IDictionary_set_Item;
  VirtualInvokeData System_Collections_IDictionary_get_Keys;
  VirtualInvokeData System_Collections_IDictionary_get_Values;
  VirtualInvokeData System_Collections_IDictionary_Contains;
  VirtualInvokeData System_Collections_IDictionary_Add;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
  VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
  VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
  VirtualInvokeData System_Collections_IDictionary_Remove;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData ContainsKey_1;
  VirtualInvokeData TryGetValue_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
  VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
  VirtualInvokeData get_Count_2;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData OnDeserialization;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData OnDeserialization_1;
};
struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields {
};
struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_UnityEngine_Collider_UnityEngine_GameObject___VTable vtable;
};}