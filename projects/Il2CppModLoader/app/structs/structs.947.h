namespace app {
    struct AreaMapLegend {
        struct AreaMapLegend__Class* klass;
        MonitorData* monitor;
        struct AreaMapLegend__Fields fields;
    };

    enum class AreaMapNavigation_State__Enum : int32_t {
        Player = 0x00000000,
        ActiveQuest = 0x00000001,
        SelectedQuest = 0x00000002,
        Target = 0x00000003,
        FollowTransform = 0x00000004,
    };

    struct AreaMapNavigation_State__Enum__Boxed {
        struct AreaMapNavigation_State__Enum__Class* klass;
        MonitorData* monitor;
        AreaMapNavigation_State__Enum value;
    };

    struct AreaMapNavigation__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* MapPivot;
        float AreaMapZoomLevel;
        float WorldMapZoomLevel;
        float AreaMapCloseZoomLevel;
        float m_scrollTime;
        float m_time;
        float m_volumeFactor;
        float m_lastZoom;
        bool m_focusOnPlayer;
        struct WwiseEventSystem_SoundHandle m_zoomOutHandle;
        struct WwiseEventSystem_SoundHandle m_zoomInHandle;
        float m_zoomBuffer;
        float VolumeDecayFactor;
        struct UISoundSettingsAsset* Sounds;
        struct WwiseEventSystem_SoundHandle m_scrollingSoundHandle;
        struct AnimationCurve* ScrollingSensitivityCurve;
        struct Vector2 m_lastDragPosition;
        bool m_firstUpdate;
        struct Vector2 m_scrollPosition;
        struct AreaMapUI* m_areaMapUi;
        struct AreaMapScrollLimit__Array* m_scrollLimits;
        AreaMapNavigation_State__Enum CurrentState;

        struct Vector3 m_target;
        struct Bounds _Bounds_k__BackingField;
        struct Vector2 m_fromPosition;
        struct Vector2 m_toPosition;
        float m_focusTime;
        struct Transform* m_followTransform;
        struct Nullable_1_UnityEngine_Vector2_ m_retainedPosition;
        struct Rect m_scrollAreaLimit;
        bool m_wasScrolling;
    };

    struct AreaMapNavigation {
        struct AreaMapNavigation__Class* klass;
        MonitorData* monitor;
        struct AreaMapNavigation__Fields fields;
    };

    struct AreaMapScrollLimit__Fields {
        struct MonoBehaviour__Fields _;
        struct Condition_1* Condition;
        struct Rect m_area;
        bool m_areaCalculated;
    };

    struct AreaMapScrollLimit {
        struct AreaMapScrollLimit__Class* klass;
        MonitorData* monitor;
        struct AreaMapScrollLimit__Fields fields;
    };

    struct AreaMapScrollLimit__Array {
        struct AreaMapScrollLimit__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AreaMapScrollLimit* vector[32];
    };

    enum class AreaMapIconFilter__Enum : int32_t {
        All = 0x00000000,
        Quests = 0x00000001,
        Teleports = 0x00000002,
        Collectibles = 0x00000003,
        COUNT = 0x00000004,
    };

    struct AreaMapIconFilter__Enum__Boxed {
        struct AreaMapIconFilter__Enum__Class* klass;
        MonitorData* monitor;
        AreaMapIconFilter__Enum value;
    };

    struct AreaMapIconManager__Fields {
        struct MonoBehaviour__Fields _;
        AreaMapIconFilter__Enum Filter;

        struct AreaMapIconFilterFooterLabel__Array* Labels;
        struct AreaMapIconManager_IconGameObjects* Icons;
    };

    struct AreaMapIconManager {
        struct AreaMapIconManager__Class* klass;
        MonitorData* monitor;
        struct AreaMapIconManager__Fields fields;
    };

    struct AreaMapIconFilterFooterLabel {
        AreaMapIconFilter__Enum Filter;

        struct MessageProvider* Footer;
    };

    struct AreaMapIconFilterFooterLabel__Boxed {
        struct AreaMapIconFilterFooterLabel__Class* klass;
        MonitorData* monitor;
        struct AreaMapIconFilterFooterLabel fields;
    };

    struct AreaMapIconFilterFooterLabel__Array {
        struct AreaMapIconFilterFooterLabel__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AreaMapIconFilterFooterLabel vector[32];
    };

    struct __declspec(align(8)) AreaMapIconManager_IconGameObjects__Fields {
        struct GameObject* Keystone;
        struct GameObject* Eyestone;
        struct GameObject* Mapstone;
        struct GameObject* BreakableWall;
        struct GameObject* BreakableWallBroken;
        struct GameObject* StompableFloor;
        struct GameObject* StompableFloorBroken;
        struct GameObject* EnergyGateOpen;
        struct GameObject* KeystoneDoorTwo;
        struct GameObject* KeystoneDoorFour;
        struct GameObject* KeystoneDoorOpen;
        struct GameObject* AbilityPedestal;
        struct GameObject* HealthUpgrade;
        struct GameObject* EnergyUpgrade;
        struct GameObject* SavePedestal;
        struct GameObject* AbilityPoint;
        struct GameObject* Experience;
        struct GameObject* MapstonePickup;
        struct GameObject* EnergyGateTwelve;
        struct GameObject* EnergyGateTen;
        struct GameObject* EnergyGateEight;
        struct GameObject* EnergyGateSix;
        struct GameObject* EnergyGateFour;
        struct GameObject* EnergyGateTwo;
        struct GameObject* NPC;
        struct GameObject* QuestItem;
        struct GameObject* Shard;
        struct GameObject* ShardSlot;
        struct GameObject* TeleportPrefab;
        struct GameObject* QuestStart;
        struct GameObject* QuestEnd;
        struct GameObject* RaceStart;
        struct GameObject* RaceEnd;
        struct GameObject* WatermillDoor;
        struct GameObject* TempleDoor;
        struct GameObject* SmallDoor;
        struct GameObject* Shrine;
        struct GameObject* Loremaster;
        struct GameObject* Weaponmaster;
        struct GameObject* Gardener;
        struct GameObject* Mapmaker;
        struct GameObject* Shardtrader;
        struct GameObject* Wanderer;
        struct GameObject* Treekeeper;
        struct GameObject* Builder;
        struct GameObject* Kwolok;
        struct GameObject* Statistician;
        struct GameObject* CreepHeart;
        struct GameObject* HealthFragment;
        struct GameObject* EnergyFragment;
        struct GameObject* Ore;
        struct GameObject* Seed;
        struct GameObject* Miner;
        struct GameObject* Spiderling;
        struct GameObject* Moki;
        struct GameObject* MokiBrave;
        struct GameObject* MokiAdventurer;
        struct GameObject* MokiArtist;
        struct GameObject* MokiDarkness;
        struct GameObject* MokiFashionable;
        struct GameObject* MokiFisherman;
        struct GameObject* MokiFrozen;
        struct GameObject* MokiKwolokAmulet;
        struct GameObject* MokiSpyglass;
        struct GameObject* Ku;
        struct GameObject* IceFisher;
        struct GameObject* Siira;
    };

    struct AreaMapIconManager_IconGameObjects {
        struct AreaMapIconManager_IconGameObjects__Class* klass;
        MonitorData* monitor;
        struct AreaMapIconManager_IconGameObjects__Fields fields;
    };

    struct IconPlacementScaler__Fields {
        struct MonoBehaviour__Fields _;
        float MaxScaleFactor;
        float MinScaleFactor;
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* m_icons;
        struct Vector3 m_offset;
        struct List_1_System_Int32_* m_keysToRemove;
    };

    struct IconPlacementScaler {
        struct IconPlacementScaler__Class* klass;
        MonitorData* monitor;
        struct IconPlacementScaler__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct IconPlacementScaler_IconOffsetPosition* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ fields;
    };

    struct __declspec(align(8)) IconPlacementScaler_IconOffsetPosition__Fields {
        struct GameObject* iconObject;
        struct Vector3 RealPosition;
        struct Vector3 OriginalScale;
        bool IsTeleportable;
    };

    struct IconPlacementScaler_IconOffsetPosition {
        struct IconPlacementScaler_IconOffsetPosition__Class* klass;
        MonitorData* monitor;
        struct IconPlacementScaler_IconOffsetPosition__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields {
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Fields fields;
    };

    struct IconPlacementScaler_IconOffsetPosition__Array {
        struct IconPlacementScaler_IconOffsetPosition__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IconPlacementScaler_IconOffsetPosition* vector[32];
    };

    struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition_ {
        struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_IconPlacementScaler_IconOffsetPosition_ {
        struct ICollection_1_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        int32_t key;
        struct IconPlacementScaler_IconOffsetPosition* value;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Boxed {
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ fields;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array {
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition_ {
        struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___Class* klass;
        MonitorData* monitor;
    };

    struct AreaMapCanvasOverlay__Array {
        struct AreaMapCanvasOverlay__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AreaMapCanvasOverlay* vector[32];
    };

    struct AreaMapCanvas__Array__VTable {
    };

    struct AreaMapCanvas__Array__StaticFields {
    };

    struct AreaMapCanvas__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapCanvas__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapCanvas__Array__VTable vtable;
    };

    struct IEnumerator_1_AreaMapCanvas___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_AreaMapCanvas___StaticFields {
    };

    struct IEnumerator_1_AreaMapCanvas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_AreaMapCanvas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_AreaMapCanvas___VTable vtable;
    };

    struct List_1_AreaMapCanvas___VTable {
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

    struct List_1_AreaMapCanvas___StaticFields {
        struct AreaMapCanvas__Array* _emptyArray;
    };

    struct List_1_AreaMapCanvas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_AreaMapCanvas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_AreaMapCanvas___VTable vtable;
    };

    struct AreaMapLegend__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AreaMapLegend__StaticFields {
    };

    struct AreaMapLegend__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapLegend__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapLegend__VTable vtable;
    };

    struct AreaMapScrollLimit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct AreaMapScrollLimit__StaticFields {
    };

    struct AreaMapScrollLimit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapScrollLimit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapScrollLimit__VTable vtable;
    };

    struct AreaMapScrollLimit__Array__VTable {
    };

    struct AreaMapScrollLimit__Array__StaticFields {
    };

    struct AreaMapScrollLimit__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapScrollLimit__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapScrollLimit__Array__VTable vtable;
    };

    struct AreaMapNavigation_State__Enum__VTable {
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

    struct AreaMapNavigation_State__Enum__StaticFields {
    };

    struct AreaMapNavigation_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapNavigation_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapNavigation_State__Enum__VTable vtable;
    };

    struct AreaMapNavigation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnPostTimeSlicedEnable;
    };

    struct AreaMapNavigation__StaticFields {
    };

    struct AreaMapNavigation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapNavigation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapNavigation__VTable vtable;
    };

    struct AreaMapIconFilter__Enum__VTable {
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

    struct AreaMapIconFilter__Enum__StaticFields {
    };

    struct AreaMapIconFilter__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapIconFilter__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapIconFilter__Enum__VTable vtable;
    };

    struct AreaMapIconFilterFooterLabel__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AreaMapIconFilterFooterLabel__StaticFields {
    };

    struct AreaMapIconFilterFooterLabel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapIconFilterFooterLabel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapIconFilterFooterLabel__VTable vtable;
    };

    struct AreaMapIconFilterFooterLabel__Array__VTable {
    };

    struct AreaMapIconFilterFooterLabel__Array__StaticFields {
    };

    struct AreaMapIconFilterFooterLabel__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapIconFilterFooterLabel__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapIconFilterFooterLabel__Array__VTable vtable;
    };

    struct AreaMapIconManager_IconGameObjects__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AreaMapIconManager_IconGameObjects__StaticFields {
    };

    struct AreaMapIconManager_IconGameObjects__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapIconManager_IconGameObjects__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapIconManager_IconGameObjects__VTable vtable;
    };

    struct AreaMapIconManager__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AreaMapIconManager__StaticFields {
    };

    struct AreaMapIconManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapIconManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapIconManager__VTable vtable;
    };

    struct IconPlacementScaler_IconOffsetPosition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IconPlacementScaler_IconOffsetPosition__StaticFields {
    };

    struct IconPlacementScaler_IconOffsetPosition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IconPlacementScaler_IconOffsetPosition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IconPlacementScaler_IconOffsetPosition__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct IconPlacementScaler_IconOffsetPosition__Array__VTable {
    };

    struct IconPlacementScaler_IconOffsetPosition__Array__StaticFields {
    };

    struct IconPlacementScaler_IconOffsetPosition__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IconPlacementScaler_IconOffsetPosition__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IconPlacementScaler_IconOffsetPosition__Array__VTable vtable;
    };

    struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct ICollection_1_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct ICollection_1_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct IconPlacementScaler_IconOffsetPosition___VTable {
    };

    struct IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__VTable {
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__StaticFields {
    };

    struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable {
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

    struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields {
    };

    struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition___VTable vtable;
    };

    struct IconPlacementScaler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IconPlacementScaler__StaticFields {
    };

    struct IconPlacementScaler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IconPlacementScaler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IconPlacementScaler__VTable vtable;
    };

    struct AreaMapCanvasOverlay__Array__VTable {
    };

    struct AreaMapCanvasOverlay__Array__StaticFields {
    };

    struct AreaMapCanvasOverlay__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AreaMapCanvasOverlay__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AreaMapCanvasOverlay__Array__VTable vtable;
    };

} // namespace app
