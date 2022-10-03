namespace app {
    enum class ScenesManager_LoadingCameraState__Enum : int32_t {
        Normal = 0x00000000,
        Slowed = 0x00000001,
        Stalled = 0x00000002,
    };

    struct ScenesManager_LoadingCameraState__Enum__Boxed {
        struct ScenesManager_LoadingCameraState__Enum__Class* klass;
        MonitorData* monitor;
        ScenesManager_LoadingCameraState__Enum value;
    };

    struct ScenesManager_LoadingCameraState__Enum__VTable {
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

    struct ScenesManager_LoadingCameraState__Enum__StaticFields {
    };

    struct ScenesManager_LoadingCameraState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_LoadingCameraState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_LoadingCameraState__Enum__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManager_c_DisplayClass187_0__Fields {
        struct RuntimeSceneMetaData* meta;
    };

    struct ScenesManager_c_DisplayClass187_0 {
        struct ScenesManager_c_DisplayClass187_0__Class* klass;
        MonitorData* monitor;
        struct ScenesManager_c_DisplayClass187_0__Fields fields;
    };

    struct ScenesManager_c_DisplayClass187_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScenesManager_c_DisplayClass187_0__StaticFields {
    };

    struct ScenesManager_c_DisplayClass187_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_c_DisplayClass187_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_c_DisplayClass187_0__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManager_c_DisplayClass188_0__Fields {
        struct RuntimeSceneMetaData* meta;
    };

    struct ScenesManager_c_DisplayClass188_0 {
        struct ScenesManager_c_DisplayClass188_0__Class* klass;
        MonitorData* monitor;
        struct ScenesManager_c_DisplayClass188_0__Fields fields;
    };

    struct ScenesManager_c_DisplayClass188_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScenesManager_c_DisplayClass188_0__StaticFields {
    };

    struct ScenesManager_c_DisplayClass188_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_c_DisplayClass188_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_c_DisplayClass188_0__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct AsyncOperation_1* loadOperation;
        struct ScenesManager* __4__this;
        struct RuntimeSceneMetaData* sceneMetaData;
    };

    struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215 {
        struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class* klass;
        MonitorData* monitor;
        struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Fields fields;
    };

    struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__VTable {
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

    struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__StaticFields {
    };

    struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManager_HandleSceneLoadedEvent_d_216__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct ScenesManager* __4__this;
        struct RuntimeSceneMetaData* sceneMetaData;
    };

    struct ScenesManager_HandleSceneLoadedEvent_d_216 {
        struct ScenesManager_HandleSceneLoadedEvent_d_216__Class* klass;
        MonitorData* monitor;
        struct ScenesManager_HandleSceneLoadedEvent_d_216__Fields fields;
    };

    struct ScenesManager_HandleSceneLoadedEvent_d_216__VTable {
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

    struct ScenesManager_HandleSceneLoadedEvent_d_216__StaticFields {
    };

    struct ScenesManager_HandleSceneLoadedEvent_d_216__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_HandleSceneLoadedEvent_d_216__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_HandleSceneLoadedEvent_d_216__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManager_ShowFellOutOfWorldMessage_d_257__Fields {
        int32_t __1__state;
        struct Object* __2__current;
    };

    struct ScenesManager_ShowFellOutOfWorldMessage_d_257 {
        struct ScenesManager_ShowFellOutOfWorldMessage_d_257__Class* klass;
        MonitorData* monitor;
        struct ScenesManager_ShowFellOutOfWorldMessage_d_257__Fields fields;
    };

    struct ScenesManager_ShowFellOutOfWorldMessage_d_257__VTable {
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

    struct ScenesManager_ShowFellOutOfWorldMessage_d_257__StaticFields {
    };

    struct ScenesManager_ShowFellOutOfWorldMessage_d_257__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_ShowFellOutOfWorldMessage_d_257__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_ShowFellOutOfWorldMessage_d_257__VTable vtable;
    };

    struct ScenesManager_c {
        struct ScenesManager_c__Class* klass;
        MonitorData* monitor;
    };

    struct ScenesManager_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScenesManager_c__StaticFields {
        struct ScenesManager_c* __9;
        struct Action* __9__295_0;
    };

    struct ScenesManager_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManager_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManager_c__VTable vtable;
    };

    enum class RuntimeSceneMetaData_PositionTypes__Enum : int32_t {
        TargetPosition = 0x00000000,
        TargetPositionExtrapolated = 0x00000001,
        TargetPositionExtrapolatedShort = 0x00000002,
        Count = 0x00000003,
    };

    struct RuntimeSceneMetaData_PositionTypes__Enum__Boxed {
        struct RuntimeSceneMetaData_PositionTypes__Enum__Class* klass;
        MonitorData* monitor;
        RuntimeSceneMetaData_PositionTypes__Enum value;
    };

    struct RuntimeSceneMetaData_PositionTypes__Enum__VTable {
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

    struct RuntimeSceneMetaData_PositionTypes__Enum__StaticFields {
    };

    struct RuntimeSceneMetaData_PositionTypes__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeSceneMetaData_PositionTypes__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeSceneMetaData_PositionTypes__Enum__VTable vtable;
    };

    struct ScalePositionForAspectRatio__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 m_initialPosition;
    };

    struct ScalePositionForAspectRatio {
        struct ScalePositionForAspectRatio__Class* klass;
        MonitorData* monitor;
        struct ScalePositionForAspectRatio__Fields fields;
    };

    struct ScalePositionForAspectRatio__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScalePositionForAspectRatio__StaticFields {
    };

    struct ScalePositionForAspectRatio__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScalePositionForAspectRatio__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScalePositionForAspectRatio__VTable vtable;
    };

    struct ScaleWidthForAspectRatio__Fields {
        struct MonoBehaviour__Fields _;
        bool m_registered;
        struct Vector3 m_initialScale;
    };

    struct ScaleWidthForAspectRatio {
        struct ScaleWidthForAspectRatio__Class* klass;
        MonitorData* monitor;
        struct ScaleWidthForAspectRatio__Fields fields;
    };

    struct ScaleWidthForAspectRatio__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScaleWidthForAspectRatio__StaticFields {
    };

    struct ScaleWidthForAspectRatio__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScaleWidthForAspectRatio__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScaleWidthForAspectRatio__VTable vtable;
    };

    struct TemporyBoundaryGizmo_1_SceneBoundary___Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 m_previousPosition;
        struct Vector3 m_previousScale;
    };

    struct TemporyBoundaryGizmo_1_SceneBoundary_ {
        struct TemporyBoundaryGizmo_1_SceneBoundary___Class* klass;
        MonitorData* monitor;
        struct TemporyBoundaryGizmo_1_SceneBoundary___Fields fields;
    };

    struct SceneBoundary__Fields {
        struct TemporyBoundaryGizmo_1_SceneBoundary___Fields _;
    };

    struct SceneBoundary {
        struct SceneBoundary__Class* klass;
        MonitorData* monitor;
        struct SceneBoundary__Fields fields;
    };

    struct TemporyBoundaryGizmo_1_SceneBoundary___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TemporyBoundaryGizmo_1_SceneBoundary___StaticFields {
    };

    struct TemporyBoundaryGizmo_1_SceneBoundary___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TemporyBoundaryGizmo_1_SceneBoundary___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TemporyBoundaryGizmo_1_SceneBoundary___VTable vtable;
    };

    struct SceneBoundary__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneBoundary__StaticFields {
    };

    struct SceneBoundary__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneBoundary__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneBoundary__VTable vtable;
    };

    struct SceneBox__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* ScrollLockTop;
        struct Transform* ScrollLockBottom;
        struct Transform* ScrollLockLeft;
        struct Transform* ScrollLockRight;
        struct List_1_UnityEngine_Transform_* MatchSizes;
        struct Vector3 m_lastPosition;
        struct Vector3 m_lastScale;
    };

    struct SceneBox {
        struct SceneBox__Class* klass;
        MonitorData* monitor;
        struct SceneBox__Fields fields;
    };

    struct SceneBox__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Category;
    };

    struct SceneBox__StaticFields {
    };

    struct SceneBox__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneBox__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneBox__VTable vtable;
    };

    struct SceneCollection__Fields {
        struct ScriptableObject__Fields _;
        struct List_1_SceneMetaData_* SceneMetaDatas;
        struct Dictionary_2_System_String_SceneMetaData_* m_metaDatasByNameDictionary;
        struct Dictionary_2_System_String_SceneMetaData_* m_metaDatasByGuidDictionary;
    };

    struct SceneCollection {
        struct SceneCollection__Class* klass;
        MonitorData* monitor;
        struct SceneCollection__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_SceneMetaData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_SceneMetaData_ {
        struct Dictionary_2_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_SceneMetaData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct SceneMetaData* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___Fields {
        struct Dictionary_2_System_String_SceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___Fields {
        struct Dictionary_2_System_String_SceneMetaData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___Fields fields;
    };

    struct ICollection_1_SceneMetaData_ {
        struct ICollection_1_SceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_SceneMetaData_ {
        struct String* key;
        struct SceneMetaData* value;
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Boxed {
        struct KeyValuePair_2_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_SceneMetaData_ fields;
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Array {
        struct KeyValuePair_2_System_String_SceneMetaData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_SceneMetaData_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_SceneMetaData_ {
        struct IEnumerable_1_SceneMetaData___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_SceneMetaData___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_SceneMetaData___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_SceneMetaData___VTable vtable;
    };

    struct ICollection_1_SceneMetaData___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_SceneMetaData___StaticFields {
    };

    struct ICollection_1_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_SceneMetaData___VTable vtable;
    };

    struct SceneMetaData___VTable {
    };

    struct SceneMetaData___StaticFields {
    };

    struct SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneMetaData___VTable vtable;
    };

    struct KeyValuePair_2_System_String_SceneMetaData___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_SceneMetaData___StaticFields {
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_SceneMetaData___VTable vtable;
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Array__VTable {
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_SceneMetaData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_SceneMetaData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_SceneMetaData___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_SceneMetaData___VTable vtable;
    };

    struct IEnumerable_1_SceneMetaData___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_SceneMetaData___StaticFields {
    };

    struct IEnumerable_1_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_SceneMetaData___VTable vtable;
    };

    struct Dictionary_2_System_String_SceneMetaData___VTable {
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

    struct Dictionary_2_System_String_SceneMetaData___StaticFields {
    };

    struct Dictionary_2_System_String_SceneMetaData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_SceneMetaData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_SceneMetaData___VTable vtable;
    };

    struct SceneCollection__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneCollection__StaticFields {
        struct SceneCollection* m_sceneCollection;
    };

    struct SceneCollection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneCollection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneCollection__VTable vtable;
    };

    struct SceneRoot___VTable {
    };

    struct SceneRoot___StaticFields {
    };

    struct SceneRoot___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneRoot___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneRoot___VTable vtable;
    };

    struct SceneLoadingTester__Fields {
        struct MonoBehaviour__Fields _;
        struct Color DisabledColor;
        struct Color EnabledColor;
        struct String* ColorPropertyName;
        int32_t _ColorPropertyID;
    };

    struct SceneLoadingTester {
        struct SceneLoadingTester__Class* klass;
        MonitorData* monitor;
        struct SceneLoadingTester__Fields fields;
    };

    struct SceneLoadingTester__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneLoadingTester__StaticFields {
    };

    struct SceneLoadingTester__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneLoadingTester__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneLoadingTester__VTable vtable;
    };

    struct TemporyBoundaryGizmo_1_SceneLoadingZone___Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 m_previousPosition;
        struct Vector3 m_previousScale;
    };

    struct TemporyBoundaryGizmo_1_SceneLoadingZone_ {
        struct TemporyBoundaryGizmo_1_SceneLoadingZone___Class* klass;
        MonitorData* monitor;
        struct TemporyBoundaryGizmo_1_SceneLoadingZone___Fields fields;
    };

    struct SceneLoadingZone__Fields {
        struct TemporyBoundaryGizmo_1_SceneLoadingZone___Fields _;
    };

    struct SceneLoadingZone {
        struct SceneLoadingZone__Class* klass;
        MonitorData* monitor;
        struct SceneLoadingZone__Fields fields;
    };

    struct TemporyBoundaryGizmo_1_SceneLoadingZone___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TemporyBoundaryGizmo_1_SceneLoadingZone___StaticFields {
    };

    struct TemporyBoundaryGizmo_1_SceneLoadingZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TemporyBoundaryGizmo_1_SceneLoadingZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TemporyBoundaryGizmo_1_SceneLoadingZone___VTable vtable;
    };

    struct SceneLoadingZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData DoStrip;
        VirtualInvokeData get_Category;
    };

    struct SceneLoadingZone__StaticFields {
    };

    struct SceneLoadingZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneLoadingZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneLoadingZone__VTable vtable;
    };

    struct GetAbilityOnCondition__Fields {
        struct MonoBehaviour__Fields _;
        struct DesiredPlayerAbilityState* Ability;
        struct Condition_1* Condition;
        bool CreateCheckpoint;
        struct CheckpointFunctionality Checkpoint;
    };

    struct GetAbilityOnCondition {
        struct GetAbilityOnCondition__Class* klass;
        MonitorData* monitor;
        struct GetAbilityOnCondition__Fields fields;
    };

    struct __declspec(align(8)) DesiredPlayerAbilityState__Fields {
        struct PlayerUberStateDescriptor* Descriptor;
        AbilityType__Enum Ability;

        bool DesiredValue;
        bool m_previousState;
    };

    struct DesiredPlayerAbilityState {
        struct DesiredPlayerAbilityState__Class* klass;
        MonitorData* monitor;
        struct DesiredPlayerAbilityState__Fields fields;
    };

    struct DesiredPlayerAbilityState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData IsFulfilled;
        VirtualInvokeData WriteDesiredStates;
        VirtualInvokeData Revert;
        VirtualInvokeData get_UberState;
        VirtualInvokeData get_NiceName;
    };

    struct DesiredPlayerAbilityState__StaticFields {
    };

    struct DesiredPlayerAbilityState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DesiredPlayerAbilityState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DesiredPlayerAbilityState__VTable vtable;
    };

} // namespace app
