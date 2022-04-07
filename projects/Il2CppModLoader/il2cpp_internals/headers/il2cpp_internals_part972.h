namespace app {
struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
  struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Fields fields;
};
struct ServerPhysicalSystemManager_RigidbodyStateData {
  int32_t RigidbodyID;
  struct Vector3Ser * AngularVelocity;
  struct Vector3Ser * Velocity;
  struct Vector3Ser * OriginalPosition;
  struct Vector4Ser * OriginalRotation;
  bool WasDisabled;
  struct Vector3Ser * LastPosition;
  struct Vector4Ser * LastRotation;
};
struct ServerPhysicalSystemManager_RigidbodyStateData__Boxed {
  struct ServerPhysicalSystemManager_RigidbodyStateData__Class *klass;
  struct MonitorData *monitor;
  struct ServerPhysicalSystemManager_RigidbodyStateData fields;
};
struct ServerPhysicalSystemManager_RigidbodyStateData__Array {
  struct ServerPhysicalSystemManager_RigidbodyStateData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ServerPhysicalSystemManager_RigidbodyStateData vector[32];
};
struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
  struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___Class *klass;
  struct MonitorData *monitor;
};
struct ServerPhysicalSystemManager_RigidbodyStateData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerPhysicalSystemManager_RigidbodyStateData__StaticFields {
};
struct ServerPhysicalSystemManager_RigidbodyStateData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerPhysicalSystemManager_RigidbodyStateData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerPhysicalSystemManager_RigidbodyStateData__VTable vtable;
};
struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields {
};
struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable vtable;
};
struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable {
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
struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields {
  struct ServerPhysicalSystemManager_RigidbodyStateData__Array * _emptyArray;
};
struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable vtable;
};

struct ServerPhysicalSystemManager_PhysicalManagerData {
  struct MoonGuid * MGuid;
  struct Vector4Ser * Bounds;
  bool UseLocalCoords;
  int32_t JointAmount;
  struct List_1_System_Int32_ * CacheJointsIDs;
  int32_t RigidbodiesAmount;
  struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_ * RigidbodiesStateData;
};
struct ServerPhysicalSystemManager_PhysicalManagerData__Boxed {
  struct ServerPhysicalSystemManager_PhysicalManagerData__Class *klass;
  struct MonitorData *monitor;
  struct ServerPhysicalSystemManager_PhysicalManagerData fields;
};
struct ServerPhysicalSystemManager_PhysicalManagerData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerPhysicalSystemManager_PhysicalManagerData__StaticFields {
};
struct ServerPhysicalSystemManager_PhysicalManagerData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerPhysicalSystemManager_PhysicalManagerData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerPhysicalSystemManager_PhysicalManagerData__VTable vtable;
};

struct ServerPolygon_PolygonData {
  struct String * BaseData;
  struct ServerPhysicalMaterial_PhysicalMaterialData PhysicMaterial;
};
struct ServerPolygon_PolygonData__Boxed {
  struct ServerPolygon_PolygonData__Class *klass;
  struct MonitorData *monitor;
  struct ServerPolygon_PolygonData fields;
};
struct ServerPolygon_PolygonData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerPolygon_PolygonData__StaticFields {
};
struct ServerPolygon_PolygonData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerPolygon_PolygonData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerPolygon_PolygonData__VTable vtable;
};

struct ServerProjectile_ServerProjectileData {
  struct String * BaseData;
  int32_t OwnerID;
};
struct ServerProjectile_ServerProjectileData__Boxed {
  struct ServerProjectile_ServerProjectileData__Class *klass;
  struct MonitorData *monitor;
  struct ServerProjectile_ServerProjectileData fields;
};
struct ServerProjectile_ServerProjectileData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerProjectile_ServerProjectileData__StaticFields {
};
struct ServerProjectile_ServerProjectileData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerProjectile_ServerProjectileData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerProjectile_ServerProjectileData__VTable vtable;
};

struct ServerProjectileSpawner_ProjectileSpawnerData {
  struct String * BaseData;
  struct ServerObject * ProjectilePrefab;
  struct Int32__Array * CollidersToIgnoreIDS;
  int32_t OwnerID;
};
struct ServerProjectileSpawner_ProjectileSpawnerData__Boxed {
  struct ServerProjectileSpawner_ProjectileSpawnerData__Class *klass;
  struct MonitorData *monitor;
  struct ServerProjectileSpawner_ProjectileSpawnerData fields;
};
struct ServerProjectileSpawner_ProjectileSpawnerData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerProjectileSpawner_ProjectileSpawnerData__StaticFields {
};
struct ServerProjectileSpawner_ProjectileSpawnerData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerProjectileSpawner_ProjectileSpawnerData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerProjectileSpawner_ProjectileSpawnerData__VTable vtable;
};

struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData {
  struct ServerAnimatorHelper_BaseAnimatorData AnimatorData;
  struct ServerAnimatorHelper_SequenceEntryData__Array * Entries;
  float CooldownTime;
  bool Repeat;
  int32_t ShootSequenceID;
  int32_t ProjectileSpawnerID;
};
struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed {
  struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class *klass;
  struct MonitorData *monitor;
  struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData fields;
};
struct ServerAnimatorHelper_SequenceEntryData__Array {
  struct ServerAnimatorHelper_SequenceEntryData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ServerAnimatorHelper_SequenceEntryData vector[32];
};
struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__StaticFields {
};
struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__VTable vtable;
};

struct ServerRigidbody_RigidbodyData {
  float Mass;
  float Drag;
  float AngularDrag;
  bool UseGravity;
  bool IsKinematic;
  enum RigidbodyConstraints__Enum Constraints;
};
struct ServerRigidbody_RigidbodyData__Boxed {
  struct ServerRigidbody_RigidbodyData__Class *klass;
  struct MonitorData *monitor;
  struct ServerRigidbody_RigidbodyData fields;
};
struct ServerRigidbody_RigidbodyData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerRigidbody_RigidbodyData__StaticFields {
};
struct ServerRigidbody_RigidbodyData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerRigidbody_RigidbodyData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerRigidbody_RigidbodyData__VTable vtable;
};

struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
  struct RopePhysicsSettings * PhysicsSettings;
  float AngularDrag;
  struct Int32__Array * TargetRigidbodiesIDs;
  bool IsAffectedByGravity;
  bool ShouldSerializeTheEffect;
  bool ShouldSetLayer;
  struct String * TargetLayerName;
};
struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed {
  struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class *klass;
  struct MonitorData *monitor;
  struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData fields;
};
struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__StaticFields {
};
struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__VTable vtable;
};

struct ServerSpawnOnKill_SpawnOnKillData {
  struct String * BaseData;
  struct ServerObject * ObjectToSpawn;
};
struct ServerSpawnOnKill_SpawnOnKillData__Boxed {
  struct ServerSpawnOnKill_SpawnOnKillData__Class *klass;
  struct MonitorData *monitor;
  struct ServerSpawnOnKill_SpawnOnKillData fields;
};
struct ServerSpawnOnKill_SpawnOnKillData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerSpawnOnKill_SpawnOnKillData__StaticFields {
};
struct ServerSpawnOnKill_SpawnOnKillData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerSpawnOnKill_SpawnOnKillData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerSpawnOnKill_SpawnOnKillData__VTable vtable;
};

struct ServerSphereCollider_SphereColliderData {
  bool IsTrigger;
  struct ServerPhysicalMaterial_PhysicalMaterialData SPhysicMaterial;
  struct Vector3Ser * Center;
  float Radius;
};
struct ServerSphereCollider_SphereColliderData__Boxed {
  struct ServerSphereCollider_SphereColliderData__Class *klass;
  struct MonitorData *monitor;
  struct ServerSphereCollider_SphereColliderData fields;
};
struct ServerSphereCollider_SphereColliderData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerSphereCollider_SphereColliderData__StaticFields {
};
struct ServerSphereCollider_SphereColliderData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerSphereCollider_SphereColliderData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerSphereCollider_SphereColliderData__VTable vtable;
};

struct ServerTransform_TransformData {
  struct Vector3Ser * position;
  struct Vector4Ser * rotation;
  struct Vector3Ser * scale;
};
struct ServerTransform_TransformData__Boxed {
  struct ServerTransform_TransformData__Class *klass;
  struct MonitorData *monitor;
  struct ServerTransform_TransformData fields;
};
struct ServerTransform_TransformData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ServerTransform_TransformData__StaticFields {
};
struct ServerTransform_TransformData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ServerTransform_TransformData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ServerTransform_TransformData__VTable vtable;
};

struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList_ {
  struct List_1_ShardTraderPlaceholder_ConditionalStockList_ * list;
  int32_t index;
  int32_t version;
  struct ShardTraderPlaceholder_ConditionalStockList current;
};
struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed {
  struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList_ fields;
};
struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___StaticFields {
};
struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___VTable vtable;
};

struct __declspec(align(8)) List_1_UpgradableShardItem___Fields {
  struct UpgradableShardItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UpgradableShardItem_ {
  struct List_1_UpgradableShardItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UpgradableShardItem___Fields fields;
};
struct IEnumerator_1_UpgradableShardItem_ {
  struct IEnumerator_1_UpgradableShardItem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UpgradableShardItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UpgradableShardItem___StaticFields {
};
struct IEnumerator_1_UpgradableShardItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UpgradableShardItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UpgradableShardItem___VTable vtable;
};
struct List_1_UpgradableShardItem___VTable {
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
struct List_1_UpgradableShardItem___StaticFields {
  struct UpgradableShardItem__Array * _emptyArray;
};
struct List_1_UpgradableShardItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UpgradableShardItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UpgradableShardItem___VTable vtable;
};

struct List_1_T_Enumerator_ShrineCombat_ {
  struct List_1_ShrineCombat_ * list;
  int32_t index;
  int32_t version;
  struct ShrineCombat * current;
};
struct List_1_T_Enumerator_ShrineCombat___Boxed {
  struct List_1_T_Enumerator_ShrineCombat___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_ShrineCombat_ fields;
};
struct List_1_T_Enumerator_ShrineCombat___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_ShrineCombat___StaticFields {
};
struct List_1_T_Enumerator_ShrineCombat___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_ShrineCombat___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_ShrineCombat___VTable vtable;
};

struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker_ {
  struct List_1_ShrineCombat_WaveProgressMarker_ * list;
  int32_t index;
  int32_t version;
  struct ShrineCombat_WaveProgressMarker * current;
};
struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___Boxed {
  struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker_ fields;
};
struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___StaticFields {
};
struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___VTable vtable;
};

struct List_1_T_Enumerator_System_Single_ {
  struct List_1_System_Single_ * list;
  int32_t index;
  int32_t version;
  float current;
};
struct List_1_T_Enumerator_System_Single___Boxed {
  struct List_1_T_Enumerator_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_System_Single_ fields;
};
struct List_1_T_Enumerator_System_Single___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_System_Single___StaticFields {
};
struct List_1_T_Enumerator_System_Single___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_System_Single___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_System_Single___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1 {
  struct Dictionary_2_Moon_Profile_Metric_System_Single_ * dictionary;
  int32_t version;
  int32_t index;
  struct KeyValuePair_2_Moon_Profile_Metric_System_Single_ current;
  int32_t getEnumeratorRetType;
};
struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__Boxed {
  struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1 fields;
};
struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Key;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Value;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Entry;
};
struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__StaticFields {
};
struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__VTable vtable;
};

struct List_1_T_Enumerator_SkeetoPlaceholder_ {
  struct List_1_SkeetoPlaceholder_ * list;
  int32_t index;
  int32_t version;
  struct SkeetoPlaceholder * current;
};
struct List_1_T_Enumerator_SkeetoPlaceholder___Boxed {
  struct List_1_T_Enumerator_SkeetoPlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SkeetoPlaceholder_ fields;
};
struct List_1_T_Enumerator_SkeetoPlaceholder___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SkeetoPlaceholder___StaticFields {
};
struct List_1_T_Enumerator_SkeetoPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SkeetoPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SkeetoPlaceholder___VTable vtable;
};

struct IEnumerable_1_SkeetoPlaceholder_ {
  struct IEnumerable_1_SkeetoPlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SkeetoPlaceholder___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_SkeetoPlaceholder___StaticFields {
};
struct IEnumerable_1_SkeetoPlaceholder___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_SkeetoPlaceholder___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_SkeetoPlaceholder___VTable vtable;
};

struct List_1_T_Enumerator_SkillItem_ {
  struct List_1_SkillItem_ * list;
  int32_t index;
  int32_t version;
  struct SkillItem * current;
};
struct List_1_T_Enumerator_SkillItem___Boxed {
  struct List_1_T_Enumerator_SkillItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SkillItem_ fields;
};
struct List_1_T_Enumerator_SkillItem___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SkillItem___StaticFields {
};
struct List_1_T_Enumerator_SkillItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SkillItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SkillItem___VTable vtable;
};

struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider_ {
  struct List_1_SkillTreeManager_AbilityMessageProvider_ * list;
  int32_t index;
  int32_t version;
  struct SkillTreeManager_AbilityMessageProvider * current;
};
struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___Boxed {
  struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider_ fields;
};
struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___StaticFields {
};
struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SkillTreeManager_AbilityMessageProvider___VTable vtable;
};

struct Predicate_1_UnityEngine_Transform___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_UnityEngine_Transform_ {
  struct Predicate_1_UnityEngine_Transform___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_UnityEngine_Transform___Fields fields;
};
struct Predicate_1_UnityEngine_Transform___VTable {
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
struct Predicate_1_UnityEngine_Transform___StaticFields {
};
struct Predicate_1_UnityEngine_Transform___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_UnityEngine_Transform___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_UnityEngine_Transform___VTable vtable;
};

struct Predicate_1_SkinningEdge_SkinningCapsule___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_SkinningEdge_SkinningCapsule_ {
  struct Predicate_1_SkinningEdge_SkinningCapsule___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_SkinningEdge_SkinningCapsule___Fields fields;
};
struct Predicate_1_SkinningEdge_SkinningCapsule___VTable {
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
struct Predicate_1_SkinningEdge_SkinningCapsule___StaticFields {
};
struct Predicate_1_SkinningEdge_SkinningCapsule___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_SkinningEdge_SkinningCapsule___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_SkinningEdge_SkinningCapsule___VTable vtable;
};

struct List_1_T_Enumerator_SmartInput_IButtonInput_ {
  struct List_1_SmartInput_IButtonInput_ * list;
  int32_t index;
  int32_t version;
  struct IButtonInput * current;
};
struct List_1_T_Enumerator_SmartInput_IButtonInput___Boxed {
  struct List_1_T_Enumerator_SmartInput_IButtonInput___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SmartInput_IButtonInput_ fields;
};
struct List_1_T_Enumerator_SmartInput_IButtonInput___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SmartInput_IButtonInput___StaticFields {
};
struct List_1_T_Enumerator_SmartInput_IButtonInput___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SmartInput_IButtonInput___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SmartInput_IButtonInput___VTable vtable;
};

struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_2_SmartInput_KeyCodeButtonInput_Boolean_ {
  struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___Fields fields;
};
struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___VTable {
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
struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___StaticFields {
};
struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_2_SmartInput_KeyCodeButtonInput_Boolean___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * dictionary;
  int32_t index;
  int32_t version;
  struct InputCacheManager_SetupTempData_Node * currentValue;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Boxed {
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ fields;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___VTable vtable;
};

struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct List_1_SmartInput_InputCacheManager_SetupTempData_Node_ * list;
  int32_t index;
  int32_t version;
  struct InputCacheManager_SetupTempData_Node * current;
};
struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___Boxed {
  struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node_ fields;
};
struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields {
};
struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_T_Enumerator_SmartInput_InputCacheManager_SetupTempData_Node___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ {
  struct Dictionary_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ * dictionary;
  int32_t version;
  int32_t index;
  struct KeyValuePair_2_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ current;
  int32_t getEnumeratorRetType;
};
struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Boxed {
  struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node_ fields;
};
struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Current;
  VirtualInvokeData Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Key;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Value;
  VirtualInvokeData System_Collections_IDictionaryEnumerator_get_Entry;
};
struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields {
};
struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Enumerator_SmartInput_ICachableInput_SmartInput_InputCacheManager_SetupTempData_Node___VTable vtable;
};}