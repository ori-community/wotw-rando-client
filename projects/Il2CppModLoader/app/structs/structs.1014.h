namespace app {
    struct GameControllerLate__StaticFields {
        struct PlayerLoopSystem m_endParticleEndUpdatePLS;
    };

    struct GameControllerLate__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameControllerLate__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameControllerLate__VTable vtable;
    };

    struct __declspec(align(8)) GameControllerLate_Start_d_4__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct GameControllerLate* __4__this;
    };

    struct GameControllerLate_Start_d_4 {
        struct GameControllerLate_Start_d_4__Class* klass;
        MonitorData* monitor;
        struct GameControllerLate_Start_d_4__Fields fields;
    };

    struct GameControllerLate_Start_d_4__VTable {
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

    struct GameControllerLate_Start_d_4__StaticFields {
    };

    struct GameControllerLate_Start_d_4__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameControllerLate_Start_d_4__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameControllerLate_Start_d_4__VTable vtable;
    };

    struct __declspec(align(8)) GameControllerLate_OnEndOfFrame_d_6__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct GameControllerLate* __4__this;
    };

    struct GameControllerLate_OnEndOfFrame_d_6 {
        struct GameControllerLate_OnEndOfFrame_d_6__Class* klass;
        MonitorData* monitor;
        struct GameControllerLate_OnEndOfFrame_d_6__Fields fields;
    };

    struct GameControllerLate_OnEndOfFrame_d_6__VTable {
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

    struct GameControllerLate_OnEndOfFrame_d_6__StaticFields {
    };

    struct GameControllerLate_OnEndOfFrame_d_6__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameControllerLate_OnEndOfFrame_d_6__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameControllerLate_OnEndOfFrame_d_6__VTable vtable;
    };

    struct GameObjectTransformVisualizer__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* GameObject;
    };

    struct GameObjectTransformVisualizer {
        struct GameObjectTransformVisualizer__Class* klass;
        MonitorData* monitor;
        struct GameObjectTransformVisualizer__Fields fields;
    };

    struct GameObjectTransformVisualizer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameObjectTransformVisualizer__StaticFields {
    };

    struct GameObjectTransformVisualizer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameObjectTransformVisualizer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameObjectTransformVisualizer__VTable vtable;
    };

    struct GameStateCondition__Fields {
        struct Condition_1__Fields _;
        GameStateMachine_State__Enum m_isState;
    };

    struct GameStateCondition {
        struct GameStateCondition__Class* klass;
        MonitorData* monitor;
        struct GameStateCondition__Fields fields;
    };

    struct GameStateCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Validate;
        VirtualInvokeData Validate_1;
        VirtualInvokeData ResetCondition;
        VirtualInvokeData UpdateCondition;
        VirtualInvokeData GetNiceName;
    };

    struct GameStateCondition__StaticFields {
    };

    struct GameStateCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameStateCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameStateCondition__VTable vtable;
    };

    struct __declspec(align(8)) GameStateMachine__Fields {
        GameStateMachine_State__Enum _CurrentState_k__BackingField;
    };

    struct GameStateMachine {
        struct GameStateMachine__Class* klass;
        MonitorData* monitor;
        struct GameStateMachine__Fields fields;
    };

    struct GameStateMachine__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameStateMachine__StaticFields {
        struct GameStateMachine* m_instance;
    };

    struct GameStateMachine__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameStateMachine__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameStateMachine__VTable vtable;
    };

    struct GlideFeatherAnimator__Fields {
        struct MonoBehaviour__Fields _;
        struct TextureAnimation__Array* Animations;
        struct Atlas__Array* m_atlases;
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* m_nameToFrames;
        struct Mesh* m_mesh;
        struct MeshFilter* m_meshFilter;
        struct Renderer* m_renderer;
        struct AtlasSpriteTextureBinder* m_binder;
        struct IPuppet* m_puppet;
        bool m_wasGliding;
    };

    struct GlideFeatherAnimator {
        struct GlideFeatherAnimator__Class* klass;
        MonitorData* monitor;
        struct GlideFeatherAnimator__Fields fields;
    };

    struct TextureAnimation__Array {
        struct TextureAnimation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TextureAnimation* vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields fields;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture {
        struct Atlas* Atlas;
        struct AtlasSpriteTexture* AtlasSpriteTexture;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Boxed {
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__Class* klass;
        MonitorData* monitor;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields {
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields {
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Fields fields;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array {
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture vector[32];
    };

    struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct String* key;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture value;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Boxed {
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ fields;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array {
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture_ {
        struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class* klass;
        MonitorData* monitor;
    };

    struct TextureAnimation__Array__VTable {
    };

    struct TextureAnimation__Array__StaticFields {
    };

    struct TextureAnimation__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TextureAnimation__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TextureAnimation__Array__VTable vtable;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__StaticFields {
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__VTable {
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__StaticFields {
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture__Array__VTable vtable;
    };

    struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__VTable {
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__StaticFields {
    };

    struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable {
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

    struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields {
    };

    struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_System_String_GlideFeatherAnimator_AtlasAndSpriteTexture___VTable vtable;
    };

    struct GlideFeatherAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetExternalUberScreenMode;
        VirtualInvokeData GetUberTweakValue;
        VirtualInvokeData DoesProvideAtlas;
        VirtualInvokeData Update;
    };

    struct GlideFeatherAnimator__StaticFields {
    };

    struct GlideFeatherAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlideFeatherAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlideFeatherAnimator__VTable vtable;
    };

    struct GlideFeatherAnimator_c {
        struct GlideFeatherAnimator_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1_ {
        struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___Class* klass;
        MonitorData* monitor;
        struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___Fields fields;
    };

    struct IEnumerable_1_Atlas_ {
        struct IEnumerable_1_Atlas___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Atlas___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Atlas___StaticFields {
    };

    struct IEnumerable_1_Atlas___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Atlas___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Atlas___VTable vtable;
    };

    struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___VTable {
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

    struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___StaticFields {
    };

    struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1___VTable vtable;
    };

    struct GlideFeatherAnimator_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GlideFeatherAnimator_c__StaticFields {
        struct GlideFeatherAnimator_c* __9;
        struct Func_2_TextureAnimation_System_Collections_Generic_IEnumerable_1_* __9__4_0;
    };

    struct GlideFeatherAnimator_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GlideFeatherAnimator_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GlideFeatherAnimator_c__VTable vtable;
    };

    struct GoldenSeinPositionTrigger__Fields {
        struct MonoBehaviour__Fields _;
        struct Condition_1* Condition;
        bool m_triggered;
    };

    struct GoldenSeinPositionTrigger {
        struct GoldenSeinPositionTrigger__Class* klass;
        MonitorData* monitor;
        struct GoldenSeinPositionTrigger__Fields fields;
    };

    struct GoldenSeinPositionTrigger__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GoldenSeinPositionTrigger__StaticFields {
        struct Transform* CurrentGoldenSeinRootTransform;
    };

    struct GoldenSeinPositionTrigger__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GoldenSeinPositionTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GoldenSeinPositionTrigger__VTable vtable;
    };

    struct IgnoreCollision__Fields {
        struct MonoBehaviour__Fields _;
        struct Collider* Collider1;
        struct Collider* Collider2;
        bool Ignore;
    };

    struct IgnoreCollision {
        struct IgnoreCollision__Class* klass;
        MonitorData* monitor;
        struct IgnoreCollision__Fields fields;
    };

    struct IgnoreCollision__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IgnoreCollision__StaticFields {
    };

    struct IgnoreCollision__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IgnoreCollision__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IgnoreCollision__VTable vtable;
    };

    struct IgnoreCollisionsHelper {
        struct HashSet_1_UnityEngine_Collider_* IgnoredColliders;
        struct Collider* m_collider;
    };

    struct IgnoreCollisionsHelper__Boxed {
        struct IgnoreCollisionsHelper__Class* klass;
        MonitorData* monitor;
        struct IgnoreCollisionsHelper fields;
    };

    struct IgnoreCollisionsHelper__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct IgnoreCollisionsHelper__StaticFields {
    };

    struct IgnoreCollisionsHelper__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IgnoreCollisionsHelper__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IgnoreCollisionsHelper__VTable vtable;
    };

    struct LastExecutionOrder__Fields {
        struct MonoBehaviour__Fields _;
        struct SceneMetaData* sceneMetaData;
    };

    struct LastExecutionOrder {
        struct LastExecutionOrder__Class* klass;
        MonitorData* monitor;
        struct LastExecutionOrder__Fields fields;
    };

    struct LastExecutionOrder__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LastExecutionOrder__StaticFields {
        struct Action* OnLastFixedUpdate;
    };

    struct LastExecutionOrder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LastExecutionOrder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LastExecutionOrder__VTable vtable;
    };

    struct LeakedSceneObjectDetector__Fields {
        struct MonoBehaviour__Fields _;
        struct String__Array* m_ignoreList;
        struct String__Array* m_ignoreStartsWithList;
        struct String__Array* m_rootsToCheck;
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* m_data;
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* m_previousData;
        float m_delay;
    };

    struct LeakedSceneObjectDetector {
        struct LeakedSceneObjectDetector__Class* klass;
        MonitorData* monitor;
        struct LeakedSceneObjectDetector__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LeakedSceneObjectDetector_ObjectData_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct LeakedSceneObjectDetector_ObjectData* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData_ fields;
    };

    struct __declspec(align(8)) LeakedSceneObjectDetector_ObjectData__Fields {
        int32_t ID;
        float StartTime;
        struct String* Name;
        struct String* Scene;
    };

    struct LeakedSceneObjectDetector_ObjectData {
        struct LeakedSceneObjectDetector_ObjectData__Class* klass;
        MonitorData* monitor;
        struct LeakedSceneObjectDetector_ObjectData__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_LeakedSceneObjectDetector_ObjectData_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields {
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields {
        struct Dictionary_2_System_Int32_LeakedSceneObjectDetector_ObjectData_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_LeakedSceneObjectDetector_ObjectData___Fields fields;
    };

    struct LeakedSceneObjectDetector_ObjectData__Array {
        struct LeakedSceneObjectDetector_ObjectData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct LeakedSceneObjectDetector_ObjectData* vector[32];
    };

    struct IEnumerator_1_LeakedSceneObjectDetector_ObjectData_ {
        struct IEnumerator_1_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_LeakedSceneObjectDetector_ObjectData_ {
        struct ICollection_1_LeakedSceneObjectDetector_ObjectData___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_LeakedSceneObjectDetector_ObjectData_ {
        int32_t key;
        struct LeakedSceneObjectDetector_ObjectData* value;
    };

} // namespace app
