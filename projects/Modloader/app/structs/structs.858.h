namespace app {
    struct SeinDiggingPuppet__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinDiggingPuppet__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinDiggingPuppet__VTable vtable;
    };

    struct AssetUtility {
        struct AssetUtility__Class* klass;
        MonitorData* monitor;
    };

    struct AssetUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AssetUtility__StaticFields {
    };

    struct AssetUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AssetUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AssetUtility__VTable vtable;
    };

    enum class GridObject_Mode__Enum : int32_t {
        DragSizeScaleAbsolute = 0x00000000,
        DragSizeScale = 0x00000001,
        DragSizeScaleFlipped = 0x00000002,
        Position = 0x00000003,
        Fill = 0x00000004,
        SurfaceCollider = 0x00000005,
        Plane = 0x00000006,
        KillPlayerSurfaceCollider = 0x00000007,
        AudioFill = 0x00000008,
        BackgroundFill = 0x00000009,
        PassthroughPlatform = 0x0000000a,
        ClimbableSurface = 0x0000000b,
    };

    struct GridObject_Mode__Enum__Boxed {
        struct GridObject_Mode__Enum__Class* klass;
        MonitorData* monitor;
        GridObject_Mode__Enum value;
    };

    struct __declspec(align(8)) GridObject__Fields {
        struct String* Name;
        struct GameObject* GameObject;
        struct Texture2D* Icon;
        struct String* GroupPath;
        bool Select;
        GridObject_Mode__Enum SizeMode;
    };

    struct GridObject {
        struct GridObject__Class* klass;
        MonitorData* monitor;
        struct GridObject__Fields fields;
    };

    struct GridObject_Mode__Enum__VTable {
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

    struct GridObject_Mode__Enum__StaticFields {
    };

    struct GridObject_Mode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GridObject_Mode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GridObject_Mode__Enum__VTable vtable;
    };

    struct GridObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GridObject__StaticFields {
    };

    struct GridObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GridObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GridObject__VTable vtable;
    };

    struct __declspec(align(8)) Shelf__Fields {
        struct String* Name;
        struct List_1_GridObject_* Objects;
        int32_t CurrentGridObjectIndex;
    };

    struct Shelf {
        struct Shelf__Class* klass;
        MonitorData* monitor;
        struct Shelf__Fields fields;
    };

    struct __declspec(align(8)) List_1_GridObject___Fields {
        struct GridObject__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GridObject_ {
        struct List_1_GridObject___Class* klass;
        MonitorData* monitor;
        struct List_1_GridObject___Fields fields;
    };

    struct GridObject__Array {
        struct GridObject__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GridObject* vector[32];
    };

    struct IEnumerator_1_GridObject_ {
        struct IEnumerator_1_GridObject___Class* klass;
        MonitorData* monitor;
    };

    struct GridObject__Array__VTable {
    };

    struct GridObject__Array__StaticFields {
    };

    struct GridObject__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GridObject__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GridObject__Array__VTable vtable;
    };

    struct IEnumerator_1_GridObject___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_GridObject___StaticFields {
    };

    struct IEnumerator_1_GridObject___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_GridObject___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_GridObject___VTable vtable;
    };

    struct List_1_GridObject___VTable {
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

    struct List_1_GridObject___StaticFields {
        struct GridObject__Array* _emptyArray;
    };

    struct List_1_GridObject___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_GridObject___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_GridObject___VTable vtable;
    };

    struct Shelf__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Shelf__StaticFields {
    };

    struct Shelf__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Shelf__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Shelf__VTable vtable;
    };

    struct CreateObjectsOnGridTool__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_Shelf_* Shelves;
        struct Transform* Parent;
        int32_t CurrentShelfIndex;
    };

    struct CreateObjectsOnGridTool {
        struct CreateObjectsOnGridTool__Class* klass;
        MonitorData* monitor;
        struct CreateObjectsOnGridTool__Fields fields;
    };

    struct __declspec(align(8)) List_1_Shelf___Fields {
        struct Shelf__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Shelf_ {
        struct List_1_Shelf___Class* klass;
        MonitorData* monitor;
        struct List_1_Shelf___Fields fields;
    };

    struct Shelf__Array {
        struct Shelf__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Shelf* vector[32];
    };

    struct IEnumerator_1_Shelf_ {
        struct IEnumerator_1_Shelf___Class* klass;
        MonitorData* monitor;
    };

    struct Shelf__Array__VTable {
    };

    struct Shelf__Array__StaticFields {
    };

    struct Shelf__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Shelf__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Shelf__Array__VTable vtable;
    };

    struct IEnumerator_1_Shelf___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Shelf___StaticFields {
    };

    struct IEnumerator_1_Shelf___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Shelf___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Shelf___VTable vtable;
    };

    struct List_1_Shelf___VTable {
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

    struct List_1_Shelf___StaticFields {
        struct Shelf__Array* _emptyArray;
    };

    struct List_1_Shelf___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Shelf___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Shelf___VTable vtable;
    };

    struct CreateObjectsOnGridTool__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CreateObjectsOnGridTool__StaticFields {
    };

    struct CreateObjectsOnGridTool__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CreateObjectsOnGridTool__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CreateObjectsOnGridTool__VTable vtable;
    };

    struct EditorInfoGizmo {
        struct EditorInfoGizmo__Class* klass;
        MonitorData* monitor;
    };

    struct EditorInfoGizmo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EditorInfoGizmo__StaticFields {
    };

    struct EditorInfoGizmo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EditorInfoGizmo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EditorInfoGizmo__VTable vtable;
    };

    struct Polygon_c {
        struct Polygon_c__Class* klass;
        MonitorData* monitor;
    };

    struct Polygon_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Polygon_c__StaticFields {
        struct Polygon_c* __9;
        struct Action* __9__31_0;
    };

    struct Polygon_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Polygon_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Polygon_c__VTable vtable;
    };

    struct List_1_UnityEngine_Vector2__1__VTable {
    };

    struct List_1_UnityEngine_Vector2__1__StaticFields {
    };

    struct List_1_UnityEngine_Vector2__1__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UnityEngine_Vector2__1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UnityEngine_Vector2__1__VTable vtable;
    };

    struct Triangulate {
        struct Triangulate__Class* klass;
        MonitorData* monitor;
    };

    struct Triangulate__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Triangulate__StaticFields {
        float EPSILON;
    };

    struct Triangulate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Triangulate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Triangulate__VTable vtable;
    };

    struct SelectionGizmo__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct SelectionGizmo {
        struct SelectionGizmo__Class* klass;
        MonitorData* monitor;
        struct SelectionGizmo__Fields fields;
    };

    struct SelectionGizmo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SelectionGizmo__StaticFields {
    };

    struct SelectionGizmo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SelectionGizmo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SelectionGizmo__VTable vtable;
    };

    struct BatEnemy__Fields {
        struct Enemy2D__Fields _;
        struct BatSwarmer* m_swarmer;
        struct Transform* RigHolder;
        struct Transform* WingLeft;
        struct Transform* WingRight;
        struct Transform* BodyMesh;
        float m_FlapTime;
        struct Vector3 m_BodyScaleInitial;
        float m_BodyScaleMult;
        struct BatEnemy_Body3DSettings* BodySettings;
        struct BatEnemy_States* State;
        float SeekTime;
        bool m_seekingOri;
        float FleeIfInRange;
        float FleeDuration;
        float m_fleeTimer;
        struct Vector2 m_fleeLocation;
        float m_frozenTimer;
        bool m_isCarryingStickyMine;
        float MainPOIRadiusIdle;
        float MainPOIRadiusSeek;
        float ImmunityToDamageTimer;
        struct PrefabSpawner* DeathPrefab;
        struct SoundSource* DeathSound;
    };

    struct BatEnemy {
        struct BatEnemy__Class* klass;
        MonitorData* monitor;
        struct BatEnemy__Fields fields;
    };

    struct BatSwarmer__Fields {
        struct UberSwarmer__Fields _;
        struct Vector2 MainPOI;
        float MainPOIRadius;
        bool Avoid;
        struct BatEnemy* m_enemy;
        struct Transform* m_transform;
        struct Rigidbody* m_rigidbody;
        struct Vector2 m_poiInfluence;
        float m_rotateDir;
    };

    struct BatSwarmer {
        struct BatSwarmer__Class* klass;
        MonitorData* monitor;
        struct BatSwarmer__Fields fields;
    };

    struct __declspec(align(8)) BatEnemy_Body3DSettings__Fields {
        float FlapInterval;
        float MinFlapAngle;
        float MaxFlapAngle;
        float FlapAngleMultMin;
        float FlapAngleMultMax;
        float RotateAngleMin;
        float RotateAngleMax;
        float ExtraPitch;
        float FaceCameraAngle;
        float ScaleRandMultMin;
        float ScaleRandMultMax;
    };

    struct BatEnemy_Body3DSettings {
        struct BatEnemy_Body3DSettings__Class* klass;
        MonitorData* monitor;
        struct BatEnemy_Body3DSettings__Fields fields;
    };

    struct __declspec(align(8)) BatEnemy_States__Fields {
        struct IBehaviourState* Idle;
        struct IBehaviourState* Seek;
        struct IBehaviourState* Attack;
        struct IBehaviourState* Flee;
        struct IBehaviourState* Frozen;
        struct IBehaviourState* CarryStickyMine;
    };

    struct BatEnemy_States {
        struct BatEnemy_States__Class* klass;
        MonitorData* monitor;
        struct BatEnemy_States__Fields fields;
    };

    struct BatSwarm__Fields {
        struct UberSwarm__Fields _;
        struct GameObject* BatPrefab;
        struct BatSwarmerSettings* SettingsIdle;
        struct BatSwarmerSettings* SettingsAttack;
        struct BatSwarmerSettings* SettingsFlee;
        struct BatSwarmerSettings* SettingsCarryStickyMine;
        struct Transform* IdleLocation;
        float BatHealth;
        uint32_t NumToSpawn;
        uint32_t NumInNest;
        uint32_t m_numKilled;
        float SpawnRadius;
        float SpawnInterval;
        float SpawnIntervalInitial;
        float m_spawnTimer;
        float TerritoryRadius;
        struct Vector2 m_swarmCenter;
        struct Vector2 m_pathTarget;
        struct Vector3 m_swarmDeathPoint;
        float m_deathPointIntensity;
        float AvoidMultiplier;
        float AvoidTime;
    };

    struct BatSwarm {
        struct BatSwarm__Class* klass;
        MonitorData* monitor;
        struct BatSwarm__Fields fields;
    };

    struct BatSwarmerSettings__Fields {
        struct UberSwarmerSettings__Fields _;
        float MainPOIWeight;
    };

    struct BatSwarmerSettings {
        struct BatSwarmerSettings__Class* klass;
        MonitorData* monitor;
        struct BatSwarmerSettings__Fields fields;
    };

    struct BatSwarmer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_Position;
        VirtualInvokeData set_Position;
        VirtualInvokeData get_Velocity;
        VirtualInvokeData set_Velocity;
        VirtualInvokeData ISwarmer_get_IsActive;
        VirtualInvokeData ISwarmer_set_IsActive;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData set_Position_1;
        VirtualInvokeData get_Velocity_1;
        VirtualInvokeData set_Velocity_1;
        VirtualInvokeData get_IsActive;
        VirtualInvokeData CalculateExtraVelocities;
    };

    struct BatSwarmer__StaticFields {
    };

    struct BatSwarmer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatSwarmer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatSwarmer__VTable vtable;
    };

    struct BatEnemy_Body3DSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BatEnemy_Body3DSettings__StaticFields {
    };

    struct BatEnemy_Body3DSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatEnemy_Body3DSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatEnemy_Body3DSettings__VTable vtable;
    };

    struct BatEnemy_States__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BatEnemy_States__StaticFields {
    };

    struct BatEnemy_States__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatEnemy_States__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatEnemy_States__VTable vtable;
    };

    struct BatEnemy__VTable {
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
        VirtualInvokeData IPuppetBase_get_Animation;
        VirtualInvokeData get_Animator;
        VirtualInvokeData get_SoundHost;
        VirtualInvokeData OnStickyMineStuck;
    };

    struct BatEnemy__StaticFields {
    };

    struct BatEnemy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatEnemy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatEnemy__VTable vtable;
    };

    struct BatSwarmerSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BatSwarmerSettings__StaticFields {
    };

    struct BatSwarmerSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatSwarmerSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatSwarmerSettings__VTable vtable;
    };

    struct BatSwarm__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData OnSwarmerEvent;
    };

    struct BatSwarm__StaticFields {
    };

    struct BatSwarm__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatSwarm__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatSwarm__VTable vtable;
    };

    struct __declspec(align(8)) BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Fields {
        float Health;
        uint32_t NumInNest;
        uint32_t NumToSpawn;
        float SpawnRadius;
        float SpawnInterval;
        float SpawnIntervalInitial;
        float TerritoryRadius;
        struct Transform* IdleLocation;
    };

    struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings {
        struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class* klass;
        MonitorData* monitor;
        struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Fields fields;
    };

    struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__StaticFields {
    };

    struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings__VTable vtable;
    };

    struct BatSwarmPlaceholder__Fields {
        struct SaveSerialize__Fields _;
        struct BatSwarmPlaceholder_BatSwarmPlaceholderSettings* Settings;
        struct GameObject* BatSwarm;
        struct BatSwarm* m_currentSwarm;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;
    };

    struct BatSwarmPlaceholder {
        struct BatSwarmPlaceholder__Class* klass;
        MonitorData* monitor;
        struct BatSwarmPlaceholder__Fields fields;
    };

    struct BatSwarmPlaceholder__VTable {
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
    };

    struct BatSwarmPlaceholder__StaticFields {
    };

    struct BatSwarmPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BatSwarmPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BatSwarmPlaceholder__VTable vtable;
    };

    struct GhostReplayAnimator__Fields {
        struct BaseAnimator__Fields _;
        struct GhostReplayMetaData* GhostReplayMetaData;
        struct GhostRecorderData* Data;
    };

    struct GhostReplayAnimator {
        struct GhostReplayAnimator__Class* klass;
        MonitorData* monitor;
        struct GhostReplayAnimator__Fields fields;
    };

    struct ServerConfigurationProperties {
        float MaxRecordingTime;
        float MinRecordingTime;
        bool WaitForRigidbodies;
        int32_t SimulationTimeScale;
    };

    struct ServerConfigurationProperties__Boxed {
        struct ServerConfigurationProperties__Class* klass;
        MonitorData* monitor;
        struct ServerConfigurationProperties fields;
    };

    struct BrainScript__Fields {
        struct GhostReplayAnimator__Fields _;
        struct List_1_LegacyTimelineSequence_SequenceEntry_* Entries;
        bool Simulate;
        bool OverrideServerTimeWithPreviewDuration;
        struct ServerConfigurationProperties SimulationConfig;
        struct Dictionary_2_BaseAnimator_System_Int32_* m_entriesIndexes;
        struct List_1_LegacyTimelineSequence_SequenceEntry_* m_editorEntries;
        struct Dictionary_2_BaseAnimator_LegacyTimelineSequence_SequenceEntry_* m_existingAnimators;
        struct Stack_1_UnityEngine_Transform_* m_process;
        bool ContainsDuplicateEntry;
    };

    struct BrainScript {
        struct BrainScript__Class* klass;
        MonitorData* monitor;
        struct BrainScript__Fields fields;
    };

    struct PetrifiedOwlBrainBase__Fields {
        struct BrainScript__Fields _;
        struct GameObject* OwlAnimator;
        struct GameObject* OwlEntity;
        struct BaseAnimator* IdleAnimator;
        struct PetrifiedOwlStats* Stats;
        struct MoonAnimator* m_owlAnimator;
        bool m_brainStarted;
        struct List_1_Moon_AnimationPostprocess_* m_animationPostprocesses;
        float m_duration;
    };

    struct PetrifiedOwlBrainBase {
        struct PetrifiedOwlBrainBase__Class* klass;
        MonitorData* monitor;
        struct PetrifiedOwlBrainBase__Fields fields;
    };

    struct GhostReplayMetaData__Fields {
        struct ScriptableObject__Fields _;
        struct String* Name;
        int32_t FrameCount;
        struct GhostRecorderData* ReplayInMemory;
        struct List_1_SceneMetaData_* Scenes;
    };

    struct GhostReplayMetaData {
        struct GhostReplayMetaData__Class* klass;
        MonitorData* monitor;
        struct GhostReplayMetaData__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_BaseAnimator_System_Int32___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_BaseAnimator_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_BaseAnimator_System_Int32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_BaseAnimator_System_Int32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_BaseAnimator_System_Int32_ {
        struct Dictionary_2_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_BaseAnimator_System_Int32___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32_ {
        int32_t hashCode;
        int32_t next;
        struct BaseAnimator* key;
        int32_t value;
    };

    struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_BaseAnimator_System_Int32_ fields;
    };

} // namespace app
