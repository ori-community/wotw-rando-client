namespace app {
struct ServerConfigurableJoint_ConfigurableJointData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerConfigurableJoint_ConfigurableJointData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerConfigurableJoint_ConfigurableJointData__VTable vtable;
};

struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData {
    int32_t ConfigurableJointID;
    int32_t ConfigurableJointGameObjID;
    int32_t ConnectedBodyID;
    ConfigurableJointMotion__Enum XMotion;
    
    ConfigurableJointMotion__Enum YMotion;
    
    ConfigurableJointMotion__Enum ZMotion;
    
    ConfigurableJointMotion__Enum AngularXMotion;
    
    ConfigurableJointMotion__Enum AngularYMotion;
    
    ConfigurableJointMotion__Enum AngularZMotion;
    
    float LinearLimitSprintSpring;
    float LinearLimitSprintDamper;
    float LinearLimitLimit;
    float LinearLimitBounciness;
    float LinearLimitContactDistance;
    float ZRotationSpringStiffness;
    float ZRotationSpringDamping;
    bool ShouldGenerateJoint;
    bool SetConnectedBody;
    bool SetXMotion;
    bool SetYMotion;
    bool SetZMotion;
    bool SetAngularXMotion;
    bool SetAngularYMotion;
    bool SetAngularZMotion;
    bool SetLinearLimitSpring;
    bool SetLinearLimit;
};

struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Boxed {
    struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class *klass;
    MonitorData *monitor;
    struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData fields;
};

struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__StaticFields {
};

struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerConfigureConfigurableJointAction_ConfigureConfigurableJointActionData__VTable vtable;
};

struct ServerInstantiateAction_InstantiateActionData {
    struct String *BaseData;
    int32_t PositionTransformID;
    struct ServerObject *Prefab;
    int32_t ParentTransformID;
};

struct ServerInstantiateAction_InstantiateActionData__Boxed {
    struct ServerInstantiateAction_InstantiateActionData__Class *klass;
    MonitorData *monitor;
    struct ServerInstantiateAction_InstantiateActionData fields;
};

struct ServerInstantiateAction_InstantiateActionData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerInstantiateAction_InstantiateActionData__StaticFields {
};

struct ServerInstantiateAction_InstantiateActionData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerInstantiateAction_InstantiateActionData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerInstantiateAction_InstantiateActionData__VTable vtable;
};

struct ServerMeshCollider_MeshColliderData {
    struct List_1_Vector3Ser_ *Points;
    struct Int32__Array *Triangles;
    bool IsConvex;
    bool IsTrigger;
    struct ServerPhysicalMaterial_PhysicalMaterialData PhysicMaterial;
};

struct ServerMeshCollider_MeshColliderData__Boxed {
    struct ServerMeshCollider_MeshColliderData__Class *klass;
    MonitorData *monitor;
    struct ServerMeshCollider_MeshColliderData fields;
};

struct ServerMeshCollider_MeshColliderData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerMeshCollider_MeshColliderData__StaticFields {
};

struct ServerMeshCollider_MeshColliderData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerMeshCollider_MeshColliderData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerMeshCollider_MeshColliderData__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject_ {
    struct Dictionary_2_UnityEngine_GameObject_ServerObject_ *dictionary;
    int32_t version;
    int32_t index;
    struct KeyValuePair_2_UnityEngine_GameObject_ServerObject_ current;
    int32_t getEnumeratorRetType;
};

struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___Boxed {
    struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject_ fields;
};

struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___VTable {
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

struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___StaticFields {
};

struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject___VTable vtable;
};

struct ServerOwlProjectileTest_OwlProjectileTestData {
    int32_t SpwanerLID;
    int32_t SpwanerRID;
    float Rate;
    int32_t TargetID;
};

struct ServerOwlProjectileTest_OwlProjectileTestData__Boxed {
    struct ServerOwlProjectileTest_OwlProjectileTestData__Class *klass;
    MonitorData *monitor;
    struct ServerOwlProjectileTest_OwlProjectileTestData fields;
};

struct ServerOwlProjectileTest_OwlProjectileTestData__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ServerOwlProjectileTest_OwlProjectileTestData__StaticFields {
};

struct ServerOwlProjectileTest_OwlProjectileTestData__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerOwlProjectileTest_OwlProjectileTestData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerOwlProjectileTest_OwlProjectileTestData__VTable vtable;
};

struct __declspec(align(8)) List_1_ServerPhysicalSystemManager_RigidbodyStateData___Fields {
    struct ServerPhysicalSystemManager_RigidbodyStateData__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Class *klass;
    MonitorData *monitor;
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Fields fields;
};

struct ServerPhysicalSystemManager_RigidbodyStateData {
    int32_t RigidbodyID;
    struct Vector3Ser *AngularVelocity;
    struct Vector3Ser *Velocity;
    struct Vector3Ser *OriginalPosition;
    struct Vector4Ser *OriginalRotation;
    bool WasDisabled;
    struct Vector3Ser *LastPosition;
    struct Vector4Ser *LastRotation;
};

struct ServerPhysicalSystemManager_RigidbodyStateData__Boxed {
    struct ServerPhysicalSystemManager_RigidbodyStateData__Class *klass;
    MonitorData *monitor;
    struct ServerPhysicalSystemManager_RigidbodyStateData fields;
};

struct ServerPhysicalSystemManager_RigidbodyStateData__Array {
    struct ServerPhysicalSystemManager_RigidbodyStateData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ServerPhysicalSystemManager_RigidbodyStateData vector[32];
};

struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerPhysicalSystemManager_RigidbodyStateData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerPhysicalSystemManager_RigidbodyStateData__VTable vtable;
};

struct ServerPhysicalSystemManager_RigidbodyStateData__Array__VTable {
};

struct ServerPhysicalSystemManager_RigidbodyStateData__Array__StaticFields {
};

struct ServerPhysicalSystemManager_RigidbodyStateData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerPhysicalSystemManager_RigidbodyStateData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerPhysicalSystemManager_RigidbodyStateData__Array__VTable vtable;
};

struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields {
};

struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct ServerPhysicalSystemManager_RigidbodyStateData__Array *_emptyArray;
};

struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData___VTable vtable;
};

struct ServerPhysicalSystemManager_PhysicalManagerData {
    struct MoonGuid *MGuid;
    struct Vector4Ser *Bounds;
    bool UseLocalCoords;
    int32_t JointAmount;
    struct List_1_System_Int32_ *CacheJointsIDs;
    int32_t RigidbodiesAmount;
    struct List_1_ServerPhysicalSystemManager_RigidbodyStateData_ *RigidbodiesStateData;
};

struct ServerPhysicalSystemManager_PhysicalManagerData__Boxed {
    struct ServerPhysicalSystemManager_PhysicalManagerData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerPhysicalSystemManager_PhysicalManagerData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerPhysicalSystemManager_PhysicalManagerData__VTable vtable;
};

struct ServerPolygon_PolygonData {
    struct String *BaseData;
    struct ServerPhysicalMaterial_PhysicalMaterialData PhysicMaterial;
};

struct ServerPolygon_PolygonData__Boxed {
    struct ServerPolygon_PolygonData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerPolygon_PolygonData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerPolygon_PolygonData__VTable vtable;
};

struct ServerProjectile_ServerProjectileData {
    struct String *BaseData;
    int32_t OwnerID;
};

struct ServerProjectile_ServerProjectileData__Boxed {
    struct ServerProjectile_ServerProjectileData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerProjectile_ServerProjectileData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerProjectile_ServerProjectileData__VTable vtable;
};

struct ServerProjectileSpawner_ProjectileSpawnerData {
    struct String *BaseData;
    struct ServerObject *ProjectilePrefab;
    struct Int32__Array *CollidersToIgnoreIDS;
    int32_t OwnerID;
};

struct ServerProjectileSpawner_ProjectileSpawnerData__Boxed {
    struct ServerProjectileSpawner_ProjectileSpawnerData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerProjectileSpawner_ProjectileSpawnerData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerProjectileSpawner_ProjectileSpawnerData__VTable vtable;
};

struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData {
    struct ServerAnimatorHelper_BaseAnimatorData AnimatorData;
    struct ServerAnimatorHelper_SequenceEntryData__Array *Entries;
    float CooldownTime;
    bool Repeat;
    int32_t ShootSequenceID;
    int32_t ProjectileSpawnerID;
};

struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed {
    struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class *klass;
    MonitorData *monitor;
    struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData fields;
};

struct ServerAnimatorHelper_SequenceEntryData__Array {
    struct ServerAnimatorHelper_SequenceEntryData__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ServerAnimatorHelper_SequenceEntryData vector[32];
};

struct ServerAnimatorHelper_SequenceEntryData__Array__VTable {
};

struct ServerAnimatorHelper_SequenceEntryData__Array__StaticFields {
};

struct ServerAnimatorHelper_SequenceEntryData__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerAnimatorHelper_SequenceEntryData__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerAnimatorHelper_SequenceEntryData__Array__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__VTable vtable;
};

struct ServerRigidbody_RigidbodyData {
    float Mass;
    float Drag;
    float AngularDrag;
    bool UseGravity;
    bool IsKinematic;
    RigidbodyConstraints__Enum Constraints;
    
};

struct ServerRigidbody_RigidbodyData__Boxed {
    struct ServerRigidbody_RigidbodyData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerRigidbody_RigidbodyData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerRigidbody_RigidbodyData__VTable vtable;
};

struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData {
    struct RopePhysicsSettings *PhysicsSettings;
    float AngularDrag;
    struct Int32__Array *TargetRigidbodiesIDs;
    bool IsAffectedByGravity;
    bool ShouldSerializeTheEffect;
    bool ShouldSetLayer;
    struct String *TargetLayerName;
};

struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Boxed {
    struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerSetRigidBodyPropertiesAction_SetRigidBodyPropertiesActionData__VTable vtable;
};

struct ServerSpawnOnKill_SpawnOnKillData {
    struct String *BaseData;
    struct ServerObject *ObjectToSpawn;
};

struct ServerSpawnOnKill_SpawnOnKillData__Boxed {
    struct ServerSpawnOnKill_SpawnOnKillData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerSpawnOnKill_SpawnOnKillData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerSpawnOnKill_SpawnOnKillData__VTable vtable;
};

struct ServerSphereCollider_SphereColliderData {
    bool IsTrigger;
    struct ServerPhysicalMaterial_PhysicalMaterialData SPhysicMaterial;
    struct Vector3Ser *Center;
    float Radius;
};

struct ServerSphereCollider_SphereColliderData__Boxed {
    struct ServerSphereCollider_SphereColliderData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerSphereCollider_SphereColliderData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerSphereCollider_SphereColliderData__VTable vtable;
};

struct ServerTransform_TransformData {
    struct Vector3Ser *position;
    struct Vector4Ser *rotation;
    struct Vector3Ser *scale;
};

struct ServerTransform_TransformData__Boxed {
    struct ServerTransform_TransformData__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ServerTransform_TransformData__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ServerTransform_TransformData__VTable vtable;
};

struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList_ {
    struct List_1_ShardTraderPlaceholder_ConditionalStockList_ *list;
    int32_t index;
    int32_t version;
    struct ShardTraderPlaceholder_ConditionalStockList current;
};

struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Boxed {
    struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_ShardTraderPlaceholder_ConditionalStockList___VTable vtable;
};

struct __declspec(align(8)) List_1_UpgradableShardItem___Fields {
    struct UpgradableShardItem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UpgradableShardItem_ {
    struct List_1_UpgradableShardItem___Class *klass;
    MonitorData *monitor;
    struct List_1_UpgradableShardItem___Fields fields;
};

struct IEnumerator_1_UpgradableShardItem_ {
    struct IEnumerator_1_UpgradableShardItem___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_UpgradableShardItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UpgradableShardItem___StaticFields {
};

struct IEnumerator_1_UpgradableShardItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UpgradableShardItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    struct UpgradableShardItem__Array *_emptyArray;
};

struct List_1_UpgradableShardItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UpgradableShardItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UpgradableShardItem___VTable vtable;
};

struct List_1_T_Enumerator_ShrineCombat_ {
    struct List_1_ShrineCombat_ *list;
    int32_t index;
    int32_t version;
    struct ShrineCombat *current;
};

struct List_1_T_Enumerator_ShrineCombat___Boxed {
    struct List_1_T_Enumerator_ShrineCombat___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_ShrineCombat___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_ShrineCombat___VTable vtable;
};

struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker_ {
    struct List_1_ShrineCombat_WaveProgressMarker_ *list;
    int32_t index;
    int32_t version;
    struct ShrineCombat_WaveProgressMarker *current;
};

struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___Boxed {
    struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_ShrineCombat_WaveProgressMarker___VTable vtable;
};

struct List_1_T_Enumerator_System_Single_ {
    struct List_1_System_Single_ *list;
    int32_t index;
    int32_t version;
    float current;
};

struct List_1_T_Enumerator_System_Single___Boxed {
    struct List_1_T_Enumerator_System_Single___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_System_Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_System_Single___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1 {
    struct Dictionary_2_Moon_Profile_Metric_System_Single_ *dictionary;
    int32_t version;
    int32_t index;
    struct KeyValuePair_2_Moon_Profile_Metric_System_Single_ current;
    int32_t getEnumeratorRetType;
};

struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__Boxed {
    struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Enumerator_Moon_Profile_Metric_System_Single__1__VTable vtable;
};

struct List_1_T_Enumerator_SkeetoPlaceholder_ {
    struct List_1_SkeetoPlaceholder_ *list;
    int32_t index;
    int32_t version;
    struct SkeetoPlaceholder *current;
};

struct List_1_T_Enumerator_SkeetoPlaceholder___Boxed {
    struct List_1_T_Enumerator_SkeetoPlaceholder___Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_T_Enumerator_SkeetoPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_T_Enumerator_SkeetoPlaceholder___VTable vtable;
};

}
