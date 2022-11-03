namespace app {
    enum class DefaultCameraProviderEntry_Type__Enum : int32_t {
        Character = 0x00000000,
        CharacterGround = 0x00000001,
        Reference = 0x00000002,
    };

    struct DefaultCameraProviderEntry_Type__Enum__Boxed {
        struct DefaultCameraProviderEntry_Type__Enum__Class* klass;
        MonitorData* monitor;
        DefaultCameraProviderEntry_Type__Enum value;
    };

    struct __declspec(align(8)) DefaultCameraProviderEntry__Fields {
        DefaultCameraProviderEntry_Type__Enum EntryType;

        struct Vector2 Padding;
        float Weight;
        struct MoonReference_1_UnityEngine_Transform_* Reference;
    };

    struct DefaultCameraProviderEntry {
        struct DefaultCameraProviderEntry__Class* klass;
        MonitorData* monitor;
        struct DefaultCameraProviderEntry__Fields fields;
    };

    struct DefaultCameraProviderEntry_Type__Enum__VTable {
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

    struct DefaultCameraProviderEntry_Type__Enum__StaticFields {
    };

    struct DefaultCameraProviderEntry_Type__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultCameraProviderEntry_Type__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultCameraProviderEntry_Type__Enum__VTable vtable;
    };

    struct DefaultCameraProviderEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DefaultCameraProviderEntry__StaticFields {
    };

    struct DefaultCameraProviderEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultCameraProviderEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultCameraProviderEntry__VTable vtable;
    };

    struct DefaultCameraTargetsProvider__Fields {
        struct CameraTargetsProvider__Fields _;
        struct List_1_DefaultCameraProviderEntry_* Targets;
        struct OriPredictionHelper_Settings* m_oriPredictionSettings;
        struct List_1_Moon_CameraTargetSettings_* m_targets;
        struct OriPredictionHelper* m_oriPrediction;
        struct Vector3 m_kwolokSmoothedPosition;
        struct Vector3 m_kwolokPositionDampCurrentSpeed;
    };

    struct DefaultCameraTargetsProvider {
        struct DefaultCameraTargetsProvider__Class* klass;
        MonitorData* monitor;
        struct DefaultCameraTargetsProvider__Fields fields;
    };

    struct __declspec(align(8)) List_1_DefaultCameraProviderEntry___Fields {
        struct DefaultCameraProviderEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DefaultCameraProviderEntry_ {
        struct List_1_DefaultCameraProviderEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_DefaultCameraProviderEntry___Fields fields;
    };

    struct DefaultCameraProviderEntry__Array {
        struct DefaultCameraProviderEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DefaultCameraProviderEntry* vector[32];
    };

    struct IEnumerator_1_DefaultCameraProviderEntry_ {
        struct IEnumerator_1_DefaultCameraProviderEntry___Class* klass;
        MonitorData* monitor;
    };

    struct DefaultCameraProviderEntry__Array__VTable {
    };

    struct DefaultCameraProviderEntry__Array__StaticFields {
    };

    struct DefaultCameraProviderEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultCameraProviderEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultCameraProviderEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_DefaultCameraProviderEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DefaultCameraProviderEntry___StaticFields {
    };

    struct IEnumerator_1_DefaultCameraProviderEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DefaultCameraProviderEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DefaultCameraProviderEntry___VTable vtable;
    };

    struct List_1_DefaultCameraProviderEntry___VTable {
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

    struct List_1_DefaultCameraProviderEntry___StaticFields {
        struct DefaultCameraProviderEntry__Array* _emptyArray;
    };

    struct List_1_DefaultCameraProviderEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DefaultCameraProviderEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DefaultCameraProviderEntry___VTable vtable;
    };

    struct DefaultCameraTargetsProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetTargets;
        VirtualInvokeData UpdateTargets;
        VirtualInvokeData ModifyZoomRange;
        VirtualInvokeData ModifyPaddings;
        VirtualInvokeData ModifyLerping;
    };

    struct DefaultCameraTargetsProvider__StaticFields {
    };

    struct DefaultCameraTargetsProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultCameraTargetsProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultCameraTargetsProvider__VTable vtable;
    };

    struct DynamicCameraWeightZone__Fields {
        struct MonoBehaviour__Fields _;
        float Weight;
        struct Color FillColor;
        struct Color OutlineColor;
    };

    struct DynamicCameraWeightZone {
        struct DynamicCameraWeightZone__Class* klass;
        MonitorData* monitor;
        struct DynamicCameraWeightZone__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_DynamicCameraWeightZone___Fields {
        struct List_1_DynamicCameraWeightZone_* m_objects;
    };

    struct AllContainer_1_DynamicCameraWeightZone_ {
        struct AllContainer_1_DynamicCameraWeightZone___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_DynamicCameraWeightZone___Fields fields;
    };

    struct __declspec(align(8)) List_1_DynamicCameraWeightZone___Fields {
        struct DynamicCameraWeightZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DynamicCameraWeightZone_ {
        struct List_1_DynamicCameraWeightZone___Class* klass;
        MonitorData* monitor;
        struct List_1_DynamicCameraWeightZone___Fields fields;
    };

    struct DynamicCameraWeightZone__Array {
        struct DynamicCameraWeightZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DynamicCameraWeightZone* vector[32];
    };

    struct IEnumerator_1_DynamicCameraWeightZone_ {
        struct IEnumerator_1_DynamicCameraWeightZone___Class* klass;
        MonitorData* monitor;
    };

    struct DynamicCameraWeightZone__Array__VTable {
    };

    struct DynamicCameraWeightZone__Array__StaticFields {
    };

    struct DynamicCameraWeightZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicCameraWeightZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicCameraWeightZone__Array__VTable vtable;
    };

    struct IEnumerator_1_DynamicCameraWeightZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DynamicCameraWeightZone___StaticFields {
    };

    struct IEnumerator_1_DynamicCameraWeightZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DynamicCameraWeightZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DynamicCameraWeightZone___VTable vtable;
    };

    struct List_1_DynamicCameraWeightZone___VTable {
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

    struct List_1_DynamicCameraWeightZone___StaticFields {
        struct DynamicCameraWeightZone__Array* _emptyArray;
    };

    struct List_1_DynamicCameraWeightZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DynamicCameraWeightZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DynamicCameraWeightZone___VTable vtable;
    };

    struct AllContainer_1_DynamicCameraWeightZone___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AllContainer_1_DynamicCameraWeightZone___StaticFields {
    };

    struct AllContainer_1_DynamicCameraWeightZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllContainer_1_DynamicCameraWeightZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllContainer_1_DynamicCameraWeightZone___VTable vtable;
    };

    struct DynamicCameraWeightZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DynamicCameraWeightZone__StaticFields {
        struct AllContainer_1_DynamicCameraWeightZone_* All;
    };

    struct DynamicCameraWeightZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicCameraWeightZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicCameraWeightZone__VTable vtable;
    };

    struct DynamicInterestPoint__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 Padding;
        struct Vector3 InterestPointOffset;
        struct Vector2 ZoomRangeModification;
        float WeightModificationFactor;
        bool UseRadiusBasedInfluence;
        struct Vector2 InfluenceDistance;
        struct Vector2 InfluencePointOffset;
        bool IsDirectional;
        struct Vector2 InterestDirection;
        float AllowedTargetPositionDeviation;
        bool UseZoneBasedInfluence;
        struct Vector2 InfluenceZoneOffset;
        struct Vector2 InfluenceZoneSizeMin;
        struct Vector2 InfluenceZoneSizeMax;
        float FieldOfViewOffset;
        float FieldOfViewTargetZ;
        struct Transform* m_transform;
        struct Vector3 m_localStartPosition;
        bool m_registered;
        float m_currentWeight;
    };

    struct DynamicInterestPoint {
        struct DynamicInterestPoint__Class* klass;
        MonitorData* monitor;
        struct DynamicInterestPoint__Fields fields;
    };

    struct DynamicInterestPoint__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_CameraTargetActive;
        VirtualInvokeData get_CameraTargetPosition;
        VirtualInvokeData get_CameraTargetPadding;
        VirtualInvokeData get_CameraInfluencePosition;
        VirtualInvokeData AdjustCameraTargetWeight;
        VirtualInvokeData get_CameraInfluenceMinDist;
        VirtualInvokeData get_CameraInfluenceMaxDist;
        VirtualInvokeData get_CameraZoomFactor;
        VirtualInvokeData get_TargetType;
        VirtualInvokeData GetTargetData;
        VirtualInvokeData OnSceneRootPostEnable;
        VirtualInvokeData OnSceneRootPreDisable;
        VirtualInvokeData get_FOVInfluencerIsValid;
        VirtualInvokeData get_FOVInfluencerWeight;
        VirtualInvokeData get_FOVInfluencerOffset;
        VirtualInvokeData get_FOVInfluencerTargetZ;
        VirtualInvokeData OnDestroy;
    };

    struct DynamicInterestPoint__StaticFields {
    };

    struct DynamicInterestPoint__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DynamicInterestPoint__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DynamicInterestPoint__VTable vtable;
    };

    struct EnableDisableByPause__Fields {
        struct MonoBehaviour__Fields _;
        struct MonoBehaviour* ComponentToControl;
    };

    struct EnableDisableByPause {
        struct EnableDisableByPause__Class* klass;
        MonitorData* monitor;
        struct EnableDisableByPause__Fields fields;
    };

    struct EnableDisableByPause__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnableDisableByPause__StaticFields {
    };

    struct EnableDisableByPause__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnableDisableByPause__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnableDisableByPause__VTable vtable;
    };

    struct GameplayCameraTargetsProvider__Fields {
        struct CameraTargetsProvider__Fields _;
        struct List_1_GameplayCameraTargetEntry_* Targets;
        struct OriPredictionHelper_Settings* m_oriPredictionSettings;
        struct List_1_Moon_CameraTargetSettings_* m_targets;
        struct OriPredictionHelper* m_oriPrediction;
        struct Vector2 CharacterPadding;
        struct Vector2 CharacterOffset;
        struct Vector2 CharacterPaddingMax;
        struct Vector2 MinSpeedBeforePaddingGrows;
        float PaddingLerpSpeed;
        float PaddingWorldSpeedMultiplier;
        struct Vector2 m_characterPadding;
        struct CameraTargetData* m_tempData;
    };

    struct GameplayCameraTargetsProvider {
        struct GameplayCameraTargetsProvider__Class* klass;
        MonitorData* monitor;
        struct GameplayCameraTargetsProvider__Fields fields;
    };

    struct __declspec(align(8)) AllContainer_1_ICameraTarget___Fields {
        struct List_1_ICameraTarget_* m_objects;
    };

    struct AllContainer_1_ICameraTarget_ {
        struct AllContainer_1_ICameraTarget___Class* klass;
        MonitorData* monitor;
        struct AllContainer_1_ICameraTarget___Fields fields;
    };

    struct __declspec(align(8)) List_1_ICameraTarget___Fields {
        struct ICameraTarget__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ICameraTarget_ {
        struct List_1_ICameraTarget___Class* klass;
        MonitorData* monitor;
        struct List_1_ICameraTarget___Fields fields;
    };

    struct ICameraTarget__Array {
        struct ICameraTarget__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ICameraTarget* vector[32];
    };

    struct IEnumerator_1_ICameraTarget_ {
        struct IEnumerator_1_ICameraTarget___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_GameplayCameraTargetEntry___Fields {
        struct GameplayCameraTargetEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GameplayCameraTargetEntry_ {
        struct List_1_GameplayCameraTargetEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_GameplayCameraTargetEntry___Fields fields;
    };

    enum class GameplayCameraTargetEntry_Type__Enum : int32_t {
        Character = 0x00000000,
        CharacterGround = 0x00000001,
        Target = 0x00000002,
    };

    struct GameplayCameraTargetEntry_Type__Enum__Boxed {
        struct GameplayCameraTargetEntry_Type__Enum__Class* klass;
        MonitorData* monitor;
        GameplayCameraTargetEntry_Type__Enum value;
    };

    struct GameplayCameraTargetEntry {
        GameplayCameraTargetEntry_Type__Enum EntryType;

        struct Vector2 Padding;
        float Weight;
        struct ICameraTarget* Target;
    };

    struct GameplayCameraTargetEntry__Boxed {
        struct GameplayCameraTargetEntry__Class* klass;
        MonitorData* monitor;
        struct GameplayCameraTargetEntry fields;
    };

    struct GameplayCameraTargetEntry__Array {
        struct GameplayCameraTargetEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GameplayCameraTargetEntry vector[32];
    };

    struct IEnumerator_1_GameplayCameraTargetEntry_ {
        struct IEnumerator_1_GameplayCameraTargetEntry___Class* klass;
        MonitorData* monitor;
    };

    struct ICameraTarget__Array__VTable {
    };

    struct ICameraTarget__Array__StaticFields {
    };

    struct ICameraTarget__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICameraTarget__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICameraTarget__Array__VTable vtable;
    };

    struct IEnumerator_1_ICameraTarget___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ICameraTarget___StaticFields {
    };

    struct IEnumerator_1_ICameraTarget___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ICameraTarget___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ICameraTarget___VTable vtable;
    };

    struct List_1_ICameraTarget___VTable {
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

    struct List_1_ICameraTarget___StaticFields {
        struct ICameraTarget__Array* _emptyArray;
    };

    struct List_1_ICameraTarget___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ICameraTarget___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ICameraTarget___VTable vtable;
    };

    struct AllContainer_1_ICameraTarget___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AllContainer_1_ICameraTarget___StaticFields {
    };

    struct AllContainer_1_ICameraTarget___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllContainer_1_ICameraTarget___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllContainer_1_ICameraTarget___VTable vtable;
    };

    struct GameplayCameraTargetEntry_Type__Enum__VTable {
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

    struct GameplayCameraTargetEntry_Type__Enum__StaticFields {
    };

    struct GameplayCameraTargetEntry_Type__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayCameraTargetEntry_Type__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayCameraTargetEntry_Type__Enum__VTable vtable;
    };

    struct GameplayCameraTargetEntry__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameplayCameraTargetEntry__StaticFields {
    };

    struct GameplayCameraTargetEntry__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayCameraTargetEntry__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayCameraTargetEntry__VTable vtable;
    };

    struct GameplayCameraTargetEntry__Array__VTable {
    };

    struct GameplayCameraTargetEntry__Array__StaticFields {
    };

    struct GameplayCameraTargetEntry__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayCameraTargetEntry__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayCameraTargetEntry__Array__VTable vtable;
    };

    struct IEnumerator_1_GameplayCameraTargetEntry___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_GameplayCameraTargetEntry___StaticFields {
    };

    struct IEnumerator_1_GameplayCameraTargetEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_GameplayCameraTargetEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_GameplayCameraTargetEntry___VTable vtable;
    };

    struct List_1_GameplayCameraTargetEntry___VTable {
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

    struct List_1_GameplayCameraTargetEntry___StaticFields {
        struct GameplayCameraTargetEntry__Array* _emptyArray;
    };

    struct List_1_GameplayCameraTargetEntry___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_GameplayCameraTargetEntry___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_GameplayCameraTargetEntry___VTable vtable;
    };

    struct GameplayCameraTargetsProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetTargets;
        VirtualInvokeData UpdateTargets;
        VirtualInvokeData ModifyZoomRange;
        VirtualInvokeData ModifyPaddings;
        VirtualInvokeData ModifyLerping;
    };

    struct GameplayCameraTargetsProvider__StaticFields {
        struct AllContainer_1_ICameraTarget_* All;
    };

    struct GameplayCameraTargetsProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayCameraTargetsProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayCameraTargetsProvider__VTable vtable;
    };

    struct PlayerCameraAnimationController__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct PlayerCameraAnimationController {
        struct PlayerCameraAnimationController__Class* klass;
        MonitorData* monitor;
        struct PlayerCameraAnimationController__Fields fields;
    };

    struct PlayerCameraAnimationController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PlayerCameraAnimationController__StaticFields {
    };

    struct PlayerCameraAnimationController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerCameraAnimationController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerCameraAnimationController__VTable vtable;
    };

    struct __declspec(align(8)) Blend_1_UnityEngine_Vector4___Fields {
        struct Vector4 End;
        struct Vector4 Start;
        float Time;
        struct Func_2_Single_Single_* m_ease;
        struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_* m_lerp;
    };

    struct Blend_1_UnityEngine_Vector4_ {
        struct Blend_1_UnityEngine_Vector4___Class* klass;
        MonitorData* monitor;
        struct Blend_1_UnityEngine_Vector4___Fields fields;
    };

    struct BlendVector4__Fields {
        struct Blend_1_UnityEngine_Vector4___Fields _;
    };

    struct BlendVector4 {
        struct BlendVector4__Class* klass;
        MonitorData* monitor;
        struct BlendVector4__Fields fields;
    };

    struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4_ {
        struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___Class* klass;
        MonitorData* monitor;
        struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___Fields fields;
    };

    struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___VTable {
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

    struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___StaticFields {
    };

    struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_4_UnityEngine_Vector4_UnityEngine_Vector4_Single_UnityEngine_Vector4___VTable vtable;
    };

    struct Blend_1_UnityEngine_Vector4___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Blend_1_UnityEngine_Vector4___StaticFields {
    };

    struct Blend_1_UnityEngine_Vector4___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Blend_1_UnityEngine_Vector4___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Blend_1_UnityEngine_Vector4___VTable vtable;
    };

    struct BlendVector4__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BlendVector4__StaticFields {
    };

    struct BlendVector4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BlendVector4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BlendVector4__VTable vtable;
    };

} // namespace app
