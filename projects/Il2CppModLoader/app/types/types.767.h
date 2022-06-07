namespace app {
struct WaitForSaveGameLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod *OnCompleted;
};

struct WaitForSaveGameLogic {
    struct WaitForSaveGameLogic__Class *klass;
    MonitorData *monitor;
    struct WaitForSaveGameLogic__Fields fields;
};

struct WaitForSaveGameLogic__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WaitForSaveGameLogic__StaticFields {
    struct Action *OnCompletedStatic;
};

struct WaitForSaveGameLogic__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitForSaveGameLogic__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitForSaveGameLogic__VTable vtable;
};

struct WaitForSaveGameLogic_c {
    struct WaitForSaveGameLogic_c__Class *klass;
    MonitorData *monitor;
};

struct WaitForSaveGameLogic_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WaitForSaveGameLogic_c__StaticFields {
    struct WaitForSaveGameLogic_c *__9;
};

struct WaitForSaveGameLogic_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WaitForSaveGameLogic_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WaitForSaveGameLogic_c__VTable vtable;
};

struct WarmupMenuAction__Fields {
    struct ActionMethod__Fields _;
};

struct WarmupMenuAction {
    struct WarmupMenuAction__Class *klass;
    MonitorData *monitor;
    struct WarmupMenuAction__Fields fields;
};

struct WarmupMenuAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct WarmupMenuAction__StaticFields {
};

struct WarmupMenuAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WarmupMenuAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WarmupMenuAction__VTable vtable;
};

struct PoisonousWaterDrip__Fields {
    struct Projectile__Fields _;
    float SpawnPoisonWaterTimeout;
    float SpeedDamping;
    float SizeDamping;
    bool m_contactedWater;
    float m_timer;
    float m_radiusMultiplier;
};

struct PoisonousWaterDrip {
    struct PoisonousWaterDrip__Class *klass;
    MonitorData *monitor;
    struct PoisonousWaterDrip__Fields fields;
};

struct PoisonousWaterDrip__VTable {
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

struct PoisonousWaterDrip__StaticFields {
};

struct PoisonousWaterDrip__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PoisonousWaterDrip__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PoisonousWaterDrip__VTable vtable;
};

struct PoisonousWaterPocket__Fields {
    struct RectangleGameplayZone__Fields _;
    int32_t DamageAmount;
    float DamageInterval;
    bool SnapToSurface;
    struct MoonTimeline *SpreadTimeline;
    float Timeout;
    float SeparationForce;
    float m_damageTimer;
    float m_timeoutTimer;
    float m_timelinePlayTime;
    struct Damage *m_damage;
    struct WaterZone *m_waterZone;
    bool _DamageDealt_k__BackingField;
};

struct PoisonousWaterPocket {
    struct PoisonousWaterPocket__Class *klass;
    MonitorData *monitor;
    struct PoisonousWaterPocket__Fields fields;
};

struct PoisonousWaterPocket__VTable {
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
    VirtualInvokeData get_Category;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_ShouldUpdateWhileDisabled;
    VirtualInvokeData ContainsPoint;
    VirtualInvokeData OnEnableRuntime;
    VirtualInvokeData OnDisableRuntime;
    VirtualInvokeData OnZoneUpdate;
    VirtualInvokeData get_Category_1;
    VirtualInvokeData get_ShouldSerialize;
    VirtualInvokeData get_UpdateType_1;
    VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
    VirtualInvokeData AwakeInternal;
    VirtualInvokeData DestroyInternal;
    VirtualInvokeData OnEnableEditor;
    VirtualInvokeData OnDisableEditor;
    VirtualInvokeData EditorUpdate;
    VirtualInvokeData ShouldTriggerZoneChange;
    VirtualInvokeData OnZoneChange;
    VirtualInvokeData get_EditorBounds;
    VirtualInvokeData set_EditorBounds;
    VirtualInvokeData RefreshBounds;
};

struct PoisonousWaterPocket__StaticFields {
};

struct PoisonousWaterPocket__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PoisonousWaterPocket__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PoisonousWaterPocket__VTable vtable;
};

struct MetaballRenderer__Fields {
    struct MonoBehaviour__Fields _;
    float ZFactor;
    struct Rect Bounds;
    int32_t Resolution;
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_ *TransformMetaballs;
    struct Vector2 GridResolution;
    float EnergyConservation;
    float BallCollisionPadding;
    struct MetaballRenderer_GridSample__Array *m_grid;
    struct Vector2 m_cellSize;
    struct Vector3__Array *m_vertices;
    struct Int32__Array *m_triangles;
    struct Mesh *m_mesh;
    int32_t m_verticesLength;
    int32_t m_trianglesLength;
    struct Transform *m_transform;
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball_ *m_metaBalls;
};

struct MetaballRenderer {
    struct MetaballRenderer__Class *klass;
    MonitorData *monitor;
    struct MetaballRenderer__Fields fields;
};

struct PoisonousWaterZone__Fields {
    struct MetaballRenderer__Fields _;
    int32_t DamageAmount;
    float DamageInterval;
    float SeparationForce;
    float FloatingForce;
    float Drag;
    struct AnimationCurve *RadiusCurve;
    float m_addTimer;
    float m_damageTimer;
    struct Damage *m_damage;
    struct WaterZone *m_waterZone;
    float m_ballLifetime;
    struct Rect m_zoneBounds;
};

struct PoisonousWaterZone {
    struct PoisonousWaterZone__Class *klass;
    MonitorData *monitor;
    struct PoisonousWaterZone__Fields fields;
};

struct __declspec(align(8)) List_1_Metaballs2D_MetaballRenderer_TransformMetaball___Fields {
    struct MetaballRenderer_TransformMetaball__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball_ {
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___Class *klass;
    MonitorData *monitor;
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___Fields fields;
};

struct __declspec(align(8)) MetaballRenderer_TransformMetaball__Fields {
    struct Transform *MetaBallTransform;
    float TransformMetaballRadius;
    float _RadiusMultipier_k__BackingField;
    struct Vector2 _Speed_k__BackingField;
    float _Lifetime_k__BackingField;
    bool _ShouldRemove_k__BackingField;
};

struct MetaballRenderer_TransformMetaball {
    struct MetaballRenderer_TransformMetaball__Class *klass;
    MonitorData *monitor;
    struct MetaballRenderer_TransformMetaball__Fields fields;
};

struct MetaballRenderer_TransformMetaball__Array {
    struct MetaballRenderer_TransformMetaball__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MetaballRenderer_TransformMetaball *vector[32];
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball_ {
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) MetaballRenderer_GridSample__Fields {
    float X;
    float Y;
    float Sample;
    int32_t IB;
    int32_t IC;
    int32_t ID;
};

struct MetaballRenderer_GridSample {
    struct MetaballRenderer_GridSample__Class *klass;
    MonitorData *monitor;
    struct MetaballRenderer_GridSample__Fields fields;
};

struct MetaballRenderer_GridSample__Array {
    struct MetaballRenderer_GridSample__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MetaballRenderer_GridSample *vector[32];
};

struct __declspec(align(8)) List_1_Metaballs2D_MetaballRenderer_IMetaball___Fields {
    struct MetaballRenderer_IMetaball__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Metaballs2D_MetaballRenderer_IMetaball_ {
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball___Class *klass;
    MonitorData *monitor;
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball___Fields fields;
};

struct MetaballRenderer_IMetaball {
    struct MetaballRenderer_IMetaball__Class *klass;
    MonitorData *monitor;
};

struct MetaballRenderer_IMetaball__Array {
    struct MetaballRenderer_IMetaball__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MetaballRenderer_IMetaball *vector[32];
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball_ {
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___Class *klass;
    MonitorData *monitor;
};

struct MetaballRenderer_TransformMetaball__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Radius;
    VirtualInvokeData set_Radius;
    VirtualInvokeData get_RadiusMultipier;
    VirtualInvokeData set_RadiusMultipier;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData get_Lifetime;
    VirtualInvokeData set_Lifetime;
    VirtualInvokeData get_ShouldRemove;
    VirtualInvokeData set_ShouldRemove;
};

struct MetaballRenderer_TransformMetaball__StaticFields {
};

struct MetaballRenderer_TransformMetaball__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_TransformMetaball__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_TransformMetaball__VTable vtable;
};

struct MetaballRenderer_TransformMetaball__Array__VTable {
};

struct MetaballRenderer_TransformMetaball__Array__StaticFields {
};

struct MetaballRenderer_TransformMetaball__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_TransformMetaball__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_TransformMetaball__Array__VTable vtable;
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___StaticFields {
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_TransformMetaball___VTable vtable;
};

struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___VTable {
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

struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___StaticFields {
    struct MetaballRenderer_TransformMetaball__Array *_emptyArray;
};

struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Metaballs2D_MetaballRenderer_TransformMetaball___VTable vtable;
};

struct MetaballRenderer_GridSample__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MetaballRenderer_GridSample__StaticFields {
};

struct MetaballRenderer_GridSample__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_GridSample__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_GridSample__VTable vtable;
};

struct MetaballRenderer_GridSample__Array__VTable {
};

struct MetaballRenderer_GridSample__Array__StaticFields {
};

struct MetaballRenderer_GridSample__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_GridSample__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_GridSample__Array__VTable vtable;
};

struct MetaballRenderer_IMetaball__VTable {
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Radius;
    VirtualInvokeData set_Radius;
    VirtualInvokeData get_RadiusMultipier;
    VirtualInvokeData set_RadiusMultipier;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData get_Lifetime;
    VirtualInvokeData set_Lifetime;
    VirtualInvokeData get_ShouldRemove;
    VirtualInvokeData set_ShouldRemove;
};

struct MetaballRenderer_IMetaball__StaticFields {
};

struct MetaballRenderer_IMetaball__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_IMetaball__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_IMetaball__VTable vtable;
};

struct MetaballRenderer_IMetaball__Array__VTable {
};

struct MetaballRenderer_IMetaball__Array__StaticFields {
};

struct MetaballRenderer_IMetaball__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer_IMetaball__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer_IMetaball__Array__VTable vtable;
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields {
};

struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Metaballs2D_MetaballRenderer_IMetaball___VTable vtable;
};

struct List_1_Metaballs2D_MetaballRenderer_IMetaball___VTable {
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

struct List_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields {
    struct MetaballRenderer_IMetaball__Array *_emptyArray;
};

struct List_1_Metaballs2D_MetaballRenderer_IMetaball___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Metaballs2D_MetaballRenderer_IMetaball___VTable vtable;
};

struct MetaballRenderer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData Update;
    VirtualInvokeData Init;
    VirtualInvokeData UdpateMetaBall;
    VirtualInvokeData ApplySpeed;
    VirtualInvokeData OnBeforeUdpate;
    VirtualInvokeData OnAfterUdpate;
};

struct MetaballRenderer__StaticFields {
};

struct MetaballRenderer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MetaballRenderer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MetaballRenderer__VTable vtable;
};

struct PoisonousWaterZone__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData Update;
    VirtualInvokeData Init;
    VirtualInvokeData UdpateMetaBall;
    VirtualInvokeData ApplySpeed;
    VirtualInvokeData OnBeforeUdpate;
    VirtualInvokeData OnAfterUdpate;
};

struct PoisonousWaterZone__StaticFields {
};

struct PoisonousWaterZone__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PoisonousWaterZone__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PoisonousWaterZone__VTable vtable;
};

struct PoisonousWaterZone___VTable {
};

struct PoisonousWaterZone___StaticFields {
};

struct PoisonousWaterZone___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PoisonousWaterZone___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PoisonousWaterZone___VTable vtable;
};

enum class RaceData_RaceStartFaceDirection__Enum : int32_t {
    Left = 0x00000000,
    Right = 0x00000001,
};

struct RaceData_RaceStartFaceDirection__Enum__Boxed {
    struct RaceData_RaceStartFaceDirection__Enum__Class *klass;
    MonitorData *monitor;
    RaceData_RaceStartFaceDirection__Enum value;
    
};

struct BossRaceData__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1 *m_getReadyCondition;
    struct Condition_1 *m_beatenCondition;
    struct Condition_1 *m_postFinishCondition;
    struct DesiredUberStateComposite *m_stateOverride;
    struct List_1_EquipmentType_ *m_disabledAbilities;
    struct RaceSettings *m_raceSettings;
    struct Transform *m_startLineTransform;
    bool PlaceOriDirectlyAtStartTransform;
    struct Transform *m_endTransform;
    struct List_1_SceneMetaData_ *m_requiredPreviewScenes;
    struct List_1_Moon_MoonReference_1__13 *m_raceSyncables;
    RaceData_RaceStartFaceDirection__Enum StartFacingDirection;
    
    struct BooleanUberState *RaceInProgressState;
    float RaceStartOffset;
    struct String *m_leaderBoardId;
};

struct BossRaceData {
    struct BossRaceData__Class *klass;
    MonitorData *monitor;
    struct BossRaceData__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__13__Fields {
    struct MoonReference_1_IRaceSyncable___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__13 {
    struct List_1_Moon_MoonReference_1__13__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__13__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_IRaceSyncable___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_IRaceSyncable_ *m_cachedProxyType;
    struct IRaceSyncable *m_volatileValue;
};

struct MoonReference_1_IRaceSyncable_ {
    struct MoonReference_1_IRaceSyncable___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_IRaceSyncable___Fields fields;
};

struct IMoonType_1_IRaceSyncable_ {
    struct IMoonType_1_IRaceSyncable___Class *klass;
    MonitorData *monitor;
};

struct IRaceSyncable {
    struct IRaceSyncable__Class *klass;
    MonitorData *monitor;
};

struct MoonReference_1_IRaceSyncable___Array {
    struct MoonReference_1_IRaceSyncable___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_IRaceSyncable_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__13 {
    struct IEnumerator_1_Moon_MoonReference_1__13__Class *klass;
    MonitorData *monitor;
};

struct IMoonType_1_IRaceSyncable___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_IRaceSyncable___StaticFields {
};

struct IMoonType_1_IRaceSyncable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_IRaceSyncable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_IRaceSyncable___VTable vtable;
};

struct IRaceSyncable__VTable {
    VirtualInvokeData OnRaceStart;
    VirtualInvokeData OnSyncRaceTimer;
};

struct IRaceSyncable__StaticFields {
};

struct IRaceSyncable__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRaceSyncable__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRaceSyncable__VTable vtable;
};

struct IRaceSyncable___VTable {
};

struct IRaceSyncable___StaticFields {
};

struct IRaceSyncable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IRaceSyncable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IRaceSyncable___VTable vtable;
};

struct MoonReference_1_IRaceSyncable___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
    VirtualInvokeData get_IsStaticValue;
    VirtualInvokeData GetTypeData;
    VirtualInvokeData CanResolve;
    VirtualInvokeData get_IsCrossSceneReference;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
};

struct MoonReference_1_IRaceSyncable___StaticFields {
};

struct MoonReference_1_IRaceSyncable___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IRaceSyncable___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IRaceSyncable___VTable vtable;
};

struct MoonReference_1_IRaceSyncable___Array__VTable {
};

struct MoonReference_1_IRaceSyncable___Array__StaticFields {
};

struct MoonReference_1_IRaceSyncable___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonReference_1_IRaceSyncable___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonReference_1_IRaceSyncable___Array__VTable vtable;
};

struct IEnumerator_1_Moon_MoonReference_1__13__VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Moon_MoonReference_1__13__StaticFields {
};

struct IEnumerator_1_Moon_MoonReference_1__13__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Moon_MoonReference_1__13__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Moon_MoonReference_1__13__VTable vtable;
};

struct List_1_Moon_MoonReference_1__13__VTable {
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

struct List_1_Moon_MoonReference_1__13__StaticFields {
    struct MoonReference_1_IRaceSyncable___Array *_emptyArray;
};

struct List_1_Moon_MoonReference_1__13__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Moon_MoonReference_1__13__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Moon_MoonReference_1__13__VTable vtable;
};

struct RaceData_RaceStartFaceDirection__Enum__VTable {
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

}
