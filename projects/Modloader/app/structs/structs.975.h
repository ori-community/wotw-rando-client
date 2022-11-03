namespace app {
    struct JUnitReporter_TestSuites_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JUnitReporter_TestSuites_c__StaticFields {
        struct JUnitReporter_TestSuites_c* __9;
        struct Func_2_JUnitReporter_TestSuite_Int32_* __9__8_0;
        struct Func_2_JUnitReporter_TestSuite_Int32_* __9__8_1;
    };

    struct JUnitReporter_TestSuites_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestSuites_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestSuites_c__VTable vtable;
    };

    struct JUnitReporter_TestSuite_c {
        struct JUnitReporter_TestSuite_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_JUnitReporter_TestCase_Int32___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_JUnitReporter_TestCase_Int32_ {
        struct Func_2_JUnitReporter_TestCase_Int32___Class* klass;
        MonitorData* monitor;
        struct Func_2_JUnitReporter_TestCase_Int32___Fields fields;
    };

    struct Func_2_JUnitReporter_TestCase_Int32___VTable {
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

    struct Func_2_JUnitReporter_TestCase_Int32___StaticFields {
    };

    struct Func_2_JUnitReporter_TestCase_Int32___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_JUnitReporter_TestCase_Int32___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_JUnitReporter_TestCase_Int32___VTable vtable;
    };

    struct JUnitReporter_TestSuite_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JUnitReporter_TestSuite_c__StaticFields {
        struct JUnitReporter_TestSuite_c* __9;
        struct Func_2_JUnitReporter_TestCase_Int32_* __9__8_0;
    };

    struct JUnitReporter_TestSuite_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JUnitReporter_TestSuite_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JUnitReporter_TestSuite_c__VTable vtable;
    };

    struct __declspec(align(8)) RuntimeBuildInformation__Fields {
        struct String* revision;
        struct String* coreRevision;
        struct String* lastRevisionTime;
        int32_t buildServerBuildId;
        struct String* teamCityBuildConfiguration;
        bool cheatsEnabled;
        bool finalBuild;
        bool developmentBuild;
        bool il2Cpp;
        struct String* sceneSettings;
        bool tlc;
        bool wwiseEnable;
        bool shouldRebindPrefabs;
        bool shouldStripPrefabs;
        struct String* atlasPlatform;
        int64_t BuildNumber;
        struct String* TeamCityProjectName;
        struct String* TeamCityBuildConfName;
        struct String* EngineVersion;
        struct String* GraphicsAPI;
        bool ScriptDebugging;
        bool MoonProfiling;
        bool ExperimentalBuild;
    };

    struct RuntimeBuildInformation {
        struct RuntimeBuildInformation__Class* klass;
        MonitorData* monitor;
        struct RuntimeBuildInformation__Fields fields;
    };

    struct RuntimeBuildInformation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RuntimeBuildInformation__StaticFields {
    };

    struct RuntimeBuildInformation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RuntimeBuildInformation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RuntimeBuildInformation__VTable vtable;
    };

    struct XboxRecorder__Fields {
        struct MonoBehaviour__Fields _;
        struct TcpClient* m_client;
        struct NetworkStream* m_stream;
        float m_recordTime;
        bool _Recording_k__BackingField;
    };

    struct XboxRecorder {
        struct XboxRecorder__Class* klass;
        MonitorData* monitor;
        struct XboxRecorder__Fields fields;
    };

    struct XboxRecorder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct XboxRecorder__StaticFields {
    };

    struct XboxRecorder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct XboxRecorder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct XboxRecorder__VTable vtable;
    };

    struct DebugHub_DebugHubLayout {
        struct DebugHubItem_DebugHubItemLayout__Array* ItemsLayout;
    };

    struct DebugHub_DebugHubLayout__Boxed {
        struct DebugHub_DebugHubLayout__Class* klass;
        MonitorData* monitor;
        struct DebugHub_DebugHubLayout fields;
    };

    struct DebugHub__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_DebugHubItem_* m_items;
        struct List_1_System_Int32_* m_modalRestore;
        bool m_active;
        bool m_wasActive;
        int32_t m_modalItemIndex;
        struct DebugHub_DebugHubLayout m_layout;
        struct Vector2 m_inputAxis;
        float m_relativeMouseAngle;
        struct DebugHubItem* m_activeItem;
        float m_maxItemWidth;
        int32_t m_lastScreenWidth;
        int32_t m_lastScreenHeight;
        int32_t m_paddingSize;
        struct GUIStyle* m_centeredLabel;
        struct GUIStyle* m_centeredLabelActive;
    };

    struct DebugHub {
        struct DebugHub__Class* klass;
        MonitorData* monitor;
        struct DebugHub__Fields fields;
    };

    struct __declspec(align(8)) List_1_DebugHubItem___Fields {
        struct DebugHubItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DebugHubItem_ {
        struct List_1_DebugHubItem___Class* klass;
        MonitorData* monitor;
        struct List_1_DebugHubItem___Fields fields;
    };

    struct DebugHubItem_DebugHubItemLayout {
        struct Vector2 Size;
        struct Rect Bounds;
        float StartAngle;
        float EndAngle;
    };

    struct DebugHubItem_DebugHubItemLayout__Boxed {
        struct DebugHubItem_DebugHubItemLayout__Class* klass;
        MonitorData* monitor;
        struct DebugHubItem_DebugHubItemLayout fields;
    };

    struct __declspec(align(8)) DebugHubItem__Fields {
        struct String* _Name_k__BackingField;
        Input_Button__Enum _ButtonBinding_k__BackingField;

        bool _IsModal_k__BackingField;
        struct Action* _ToggleAction_k__BackingField;
        struct Func_1_Boolean_* _IsActiveFunc_k__BackingField;
        struct DebugHubItem_DebugHubItemLayout _Layout_k__BackingField;
    };

    struct DebugHubItem {
        struct DebugHubItem__Class* klass;
        MonitorData* monitor;
        struct DebugHubItem__Fields fields;
    };

    struct DebugHubItem__Array {
        struct DebugHubItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DebugHubItem* vector[32];
    };

    struct IEnumerator_1_DebugHubItem_ {
        struct IEnumerator_1_DebugHubItem___Class* klass;
        MonitorData* monitor;
    };

    struct DebugHubItem_DebugHubItemLayout__Array {
        struct DebugHubItem_DebugHubItemLayout__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DebugHubItem_DebugHubItemLayout vector[32];
    };

    struct DebugHubItem_DebugHubItemLayout__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugHubItem_DebugHubItemLayout__StaticFields {
    };

    struct DebugHubItem_DebugHubItemLayout__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHubItem_DebugHubItemLayout__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHubItem_DebugHubItemLayout__VTable vtable;
    };

    struct DebugHubItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugHubItem__StaticFields {
    };

    struct DebugHubItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHubItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHubItem__VTable vtable;
    };

    struct DebugHubItem__Array__VTable {
    };

    struct DebugHubItem__Array__StaticFields {
    };

    struct DebugHubItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHubItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHubItem__Array__VTable vtable;
    };

    struct IEnumerator_1_DebugHubItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DebugHubItem___StaticFields {
    };

    struct IEnumerator_1_DebugHubItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DebugHubItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DebugHubItem___VTable vtable;
    };

    struct List_1_DebugHubItem___VTable {
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

    struct List_1_DebugHubItem___StaticFields {
        struct DebugHubItem__Array* _emptyArray;
    };

    struct List_1_DebugHubItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DebugHubItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DebugHubItem___VTable vtable;
    };

    struct DebugHubItem_DebugHubItemLayout__Array__VTable {
    };

    struct DebugHubItem_DebugHubItemLayout__Array__StaticFields {
    };

    struct DebugHubItem_DebugHubItemLayout__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHubItem_DebugHubItemLayout__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHubItem_DebugHubItemLayout__Array__VTable vtable;
    };

    struct DebugHub_DebugHubLayout__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugHub_DebugHubLayout__StaticFields {
    };

    struct DebugHub_DebugHubLayout__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHub_DebugHubLayout__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHub_DebugHubLayout__VTable vtable;
    };

    struct DebugHub__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugHub__StaticFields {
        struct HashSet_1_Moon_ISuspendable_* SuspendablesToIgnoreForGameplay;
        struct DebugHub* Instance;
        struct String* s_colorBufferShaderName;
        struct Material* s_baseMaterial;
    };

    struct DebugHub__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHub__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHub__VTable vtable;
    };

    struct DebugHub_c {
        struct DebugHub_c__Class* klass;
        MonitorData* monitor;
    };

    struct DebugHub_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugHub_c__StaticFields {
        struct DebugHub_c* __9;
        struct Action* __9__31_0;
        struct Func_1_Boolean_* __9__31_1;
        struct Action* __9__31_2;
        struct Func_1_Boolean_* __9__31_3;
        struct Action* __9__31_4;
        struct Func_1_Boolean_* __9__31_5;
        struct Action* __9__31_6;
        struct Func_1_Boolean_* __9__31_7;
        struct Action* __9__31_8;
        struct Func_1_Boolean_* __9__31_9;
        struct Action* __9__31_10;
        struct Func_1_Boolean_* __9__31_11;
        struct Action* __9__31_12;
        struct Func_1_Boolean_* __9__31_13;
        struct Action* __9__31_14;
        struct Func_1_Boolean_* __9__31_15;
        struct Action* __9__31_16;
        struct Func_1_Boolean_* __9__31_17;
    };

    struct DebugHub_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugHub_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugHub_c__VTable vtable;
    };

    struct DebugRaycastCheck__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Target;
        float SpherecastRadiusCheck;
        struct List_1_UnityEngine_Vector2_* m_hitPoints;
    };

    struct DebugRaycastCheck {
        struct DebugRaycastCheck__Class* klass;
        MonitorData* monitor;
        struct DebugRaycastCheck__Fields fields;
    };

    struct DebugRaycastCheck__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugRaycastCheck__StaticFields {
    };

    struct DebugRaycastCheck__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugRaycastCheck__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugRaycastCheck__VTable vtable;
    };

    struct DebugRendererSettings__Fields {
        struct MonoBehaviour__Fields _;
        int32_t CurrentPatternIndex;
        struct List_1_DebugRendererSettings_SettingsPattern_* Patterns;
        struct DebugRendererSettings_SettingsPattern* m_currentPattern;
        bool m_shouldUpdateCache;
        int32_t m_delayUpdateForFrames;
        struct Dictionary_2_SceneMetaData_UnityEngine_Rect_* m_cachedSceneBounds;
        struct List_1_UnityEngine_Collider_* m_cachedColliders;
        struct List_1_UnityEngine_Collider_* m_cachedDamageColliders;
        struct List_1_UnityEngine_Collider_* m_cachedSolidColliders;
        struct List_1_UnityEngine_Collider_* m_cachedSeinCharacterColliders;
        struct List_1_UnityEngine_Collider_* m_cachedCollidersTemp;
        struct List_1_InvisibleCheckpoint_* m_cachedInvisibleCheckpoints;
        struct List_1_InvisibleCheckpoint_* m_cachedInvisibleCheckpointsTemp;
        struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesTemp;
        struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesWithCollider;
        struct List_1_UnityEngine_Rigidbody_* m_cachedRigidbodiesWithoutCollider;
        struct List_1_CheckpointRestrictZone_* m_checkpointRestrictZonesTemp;
        struct List_1_CheckpointRestrictZone_* m_checkpointRestrictZones;
        struct DebugRendererSettings_DebugRendererLegendView* m_legendView;
        struct List_1_UnityEngine_MeshFilter_* m_earlyZObjects;
        struct List_1_UnityEngine_MeshFilter_* m_tempMeshFilterCollection;
        struct List_1_VerletStructure_* m_cachedVerletStructuresTemp;
        struct List_1_VerletStructure_* m_cachedVerletStructures;
        struct Rect m_respawnPointRect;
        struct Rect m_rigidbodyRect;
        struct Rect m_checkpointRestrictZoneDotRect;
        struct Rect m_checkpointRestrictZoneRect;
        struct GUIContent* m_tempGUIContent;
        struct StringBuilder* m_builder;
        struct GUIStyle* m_labelStyle;
        struct Dictionary_2_CheckpointRestrictZone_System_String_* m_cachedCheckpointRestrictZoneInfos;
    };

    struct DebugRendererSettings {
        struct DebugRendererSettings__Class* klass;
        MonitorData* monitor;
        struct DebugRendererSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_DebugRendererSettings_SettingsPattern___Fields {
        struct DebugRendererSettings_SettingsPattern__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DebugRendererSettings_SettingsPattern_ {
        struct List_1_DebugRendererSettings_SettingsPattern___Class* klass;
        MonitorData* monitor;
        struct List_1_DebugRendererSettings_SettingsPattern___Fields fields;
    };

    struct __declspec(align(8)) DebugRendererSettings_SettingsPattern__Fields {
        bool EnabledFromStart;
        bool SceneBounds;
        struct Color SceneBoundsColor;
        bool ScenePaddingBoundaries;
        struct Color ScenePaddingBoundariesColor;
        float ScenePaddingBoundariesBorder;
        bool SceneLoadingBoundaries;
        struct Color SceneLoadingBoundariesColor;
        bool Colliders;
        struct Color CollidersColor;
        bool TriggerColliders;
        struct Color TriggerCollidersColor;
        bool DisabledColliders;
        bool DamageColliders;
        struct Color DamageCollidersColor;
        struct LayerMask DamageColliderLayerMask;
        bool InvisibleCheckpoints;
        struct Color InvisibleCheckpointsColor;
        struct Color InvisibleRespawnPointColor;
        bool SolidsColliders;
        struct Color SolidsCollidersColor;
        bool SeinCharacterColliders;
        struct Color SeinCharacterCollidersColor;
        bool Rigidbodies;
        struct Color RigidbodyWithColliderColor;
        struct Color RigidbodyWithoutColliderColor;
        bool EarlyZObjects;
        struct Color EarlyZObjectsColor;
        bool Verlet;
        struct Color VerletColor;
        bool Legend;
        struct Material* WireframeMaterial;
        struct Material* TransparentColorMaterial;
        struct Material* GLMaterial;
        struct Color SceneBoundsFillColor;
        struct Color ScenePaddingBoundariesFillColor;
        struct Color DisabledCollidersColor;
        struct Color DisabledTriggerCollidersColor;
        struct Color InvisibleCheckpointsFillColor;
        struct Color InvisibleRespawnPointFillColor;
    };

    struct DebugRendererSettings_SettingsPattern {
        struct DebugRendererSettings_SettingsPattern__Class* klass;
        MonitorData* monitor;
        struct DebugRendererSettings_SettingsPattern__Fields fields;
    };

    struct DebugRendererSettings_SettingsPattern__Array {
        struct DebugRendererSettings_SettingsPattern__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DebugRendererSettings_SettingsPattern* vector[32];
    };

    struct IEnumerator_1_DebugRendererSettings_SettingsPattern_ {
        struct IEnumerator_1_DebugRendererSettings_SettingsPattern___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_SceneMetaData_UnityEngine_Rect___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_SceneMetaData_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_SceneMetaData_UnityEngine_Rect_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_SceneMetaData_UnityEngine_Rect_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_SceneMetaData_UnityEngine_Rect_ {
        struct Dictionary_2_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_SceneMetaData_UnityEngine_Rect___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect_ {
        int32_t hashCode;
        int32_t next;
        struct SceneMetaData* key;
        struct Rect value;
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Array {
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SceneMetaData_UnityEngine_Rect___Fields {
        struct Dictionary_2_SceneMetaData_UnityEngine_Rect_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_SceneMetaData_UnityEngine_Rect_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_SceneMetaData_UnityEngine_Rect___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SceneMetaData_UnityEngine_Rect___Fields {
        struct Dictionary_2_SceneMetaData_UnityEngine_Rect_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_SceneMetaData_UnityEngine_Rect_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_SceneMetaData_UnityEngine_Rect___Fields fields;
    };

    struct ICollection_1_UnityEngine_Rect_ {
        struct ICollection_1_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect_ {
        struct SceneMetaData* key;
        struct Rect value;
    };

    struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect___Boxed {
        struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect_ fields;
    };

    struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect___Array {
        struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_SceneMetaData_UnityEngine_Rect_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_SceneMetaData_UnityEngine_Rect_ {
        struct IEnumerator_1_KeyValuePair_2_SceneMetaData_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_UnityEngine_Rect_ {
        struct IEnumerable_1_UnityEngine_Rect___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_InvisibleCheckpoint___Fields {
        struct InvisibleCheckpoint__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_InvisibleCheckpoint_ {
        struct List_1_InvisibleCheckpoint___Class* klass;
        MonitorData* monitor;
        struct List_1_InvisibleCheckpoint___Fields fields;
    };

    struct InvisibleCheckpoint__Array {
        struct InvisibleCheckpoint__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct InvisibleCheckpoint* vector[32];
    };

    struct IEnumerator_1_InvisibleCheckpoint_ {
        struct IEnumerator_1_InvisibleCheckpoint___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) DebugRendererSettings_DebugRendererLegendView__Fields {
        struct DebugRendererSettings_SettingsPattern* m_pattern;
        struct Rect m_viewRect;
    };

    struct DebugRendererSettings_DebugRendererLegendView {
        struct DebugRendererSettings_DebugRendererLegendView__Class* klass;
        MonitorData* monitor;
        struct DebugRendererSettings_DebugRendererLegendView__Fields fields;
    };

    struct __declspec(align(8)) List_1_VerletStructure___Fields {
        struct VerletStructure__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_VerletStructure_ {
        struct List_1_VerletStructure___Class* klass;
        MonitorData* monitor;
        struct List_1_VerletStructure___Fields fields;
    };

    struct IEnumerator_1_VerletStructure_ {
        struct IEnumerator_1_VerletStructure___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_CheckpointRestrictZone_System_String___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_CheckpointRestrictZone_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_CheckpointRestrictZone_System_String_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_CheckpointRestrictZone_System_String_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_CheckpointRestrictZone_System_String_ {
        struct Dictionary_2_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_CheckpointRestrictZone_System_String___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String_ {
        int32_t hashCode;
        int32_t next;
        struct CheckpointRestrictZone* key;
        struct String* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String___Array {
        struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_CheckpointRestrictZone_System_String_ vector[32];
    };

    struct IEqualityComparer_1_CheckpointRestrictZone_ {
        struct IEqualityComparer_1_CheckpointRestrictZone___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_CheckpointRestrictZone_System_String___Fields {
        struct Dictionary_2_CheckpointRestrictZone_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_CheckpointRestrictZone_System_String_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_CheckpointRestrictZone_System_String___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_CheckpointRestrictZone_System_String___Fields {
        struct Dictionary_2_CheckpointRestrictZone_System_String_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_CheckpointRestrictZone_System_String_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_CheckpointRestrictZone_System_String___Fields fields;
    };

    struct ICollection_1_CheckpointRestrictZone_ {
        struct ICollection_1_CheckpointRestrictZone___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_CheckpointRestrictZone_System_String_ {
        struct CheckpointRestrictZone* key;
        struct String* value;
    };

    struct KeyValuePair_2_CheckpointRestrictZone_System_String___Boxed {
        struct KeyValuePair_2_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_CheckpointRestrictZone_System_String_ fields;
    };

    struct KeyValuePair_2_CheckpointRestrictZone_System_String___Array {
        struct KeyValuePair_2_CheckpointRestrictZone_System_String___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_CheckpointRestrictZone_System_String_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_CheckpointRestrictZone_System_String_ {
        struct IEnumerator_1_KeyValuePair_2_CheckpointRestrictZone_System_String___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_CheckpointRestrictZone_ {
        struct IEnumerable_1_CheckpointRestrictZone___Class* klass;
        MonitorData* monitor;
    };

    struct DebugRendererSettings_SettingsPattern__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DebugRendererSettings_SettingsPattern__StaticFields {
    };

    struct DebugRendererSettings_SettingsPattern__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugRendererSettings_SettingsPattern__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugRendererSettings_SettingsPattern__VTable vtable;
    };

    struct DebugRendererSettings_SettingsPattern__Array__VTable {
    };

    struct DebugRendererSettings_SettingsPattern__Array__StaticFields {
    };

    struct DebugRendererSettings_SettingsPattern__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DebugRendererSettings_SettingsPattern__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DebugRendererSettings_SettingsPattern__Array__VTable vtable;
    };

    struct IEnumerator_1_DebugRendererSettings_SettingsPattern___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_DebugRendererSettings_SettingsPattern___StaticFields {
    };

    struct IEnumerator_1_DebugRendererSettings_SettingsPattern___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_DebugRendererSettings_SettingsPattern___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_DebugRendererSettings_SettingsPattern___VTable vtable;
    };

    struct List_1_DebugRendererSettings_SettingsPattern___VTable {
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

    struct List_1_DebugRendererSettings_SettingsPattern___StaticFields {
        struct DebugRendererSettings_SettingsPattern__Array* _emptyArray;
    };

    struct List_1_DebugRendererSettings_SettingsPattern___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_DebugRendererSettings_SettingsPattern___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_DebugRendererSettings_SettingsPattern___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_SceneMetaData_UnityEngine_Rect___VTable vtable;
    };

} // namespace app
