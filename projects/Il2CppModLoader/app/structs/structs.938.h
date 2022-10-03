namespace app {
    struct UberShaderProperty_Vector__Enum__StaticFields {
    };

    struct UberShaderProperty_Vector__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderProperty_Vector__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderProperty_Vector__Enum__VTable vtable;
    };

    enum class UberShaderProperty_Float__Enum : int32_t {
        Textify_TextTime = 0x00000000,
        WorldMap_Fade = 0x00000001,
        FadeAmount = 0x00000002,
        LightCanvasAtlasFlip = 0x00000003,
        DynamicLightCanvasAtlasFlip = 0x00000004,
        TotalFloatProperties = 0x00000005,
    };

    struct UberShaderProperty_Float__Enum__Boxed {
        struct UberShaderProperty_Float__Enum__Class* klass;
        MonitorData* monitor;
        UberShaderProperty_Float__Enum value;
    };

    struct UberShaderProperty_Float__Enum__VTable {
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

    struct UberShaderProperty_Float__Enum__StaticFields {
    };

    struct UberShaderProperty_Float__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderProperty_Float__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderProperty_Float__Enum__VTable vtable;
    };

    struct VoidUberShaderRebindService {
        struct VoidUberShaderRebindService__Class* klass;
        MonitorData* monitor;
    };

    enum class RebindingReason__Enum : int32_t {
        ObjectAwake = 0x00000000,
        Unknown = 0x00000001,
        Awake = 0x00000002,
        GeneratedGameObjectFromTexture = 0x00000003,
        UberShaderAPIRequest = 0x00000004,
        ShaderRegeneration = 0x00000005,
        PrefabRebindHack = 0x00000006,
        LightCanvasUpdate = 0x00000007,
    };

    struct RebindingReason__Enum__Boxed {
        struct RebindingReason__Enum__Class* klass;
        MonitorData* monitor;
        RebindingReason__Enum value;
    };

    struct RebindingReason__Enum__VTable {
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

    struct RebindingReason__Enum__StaticFields {
    };

    struct RebindingReason__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RebindingReason__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RebindingReason__Enum__VTable vtable;
    };

    struct VoidUberShaderRebindService__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Rebind;
        VirtualInvokeData RebindAsync;
        VirtualInvokeData FinishCurrentRebinding;
        VirtualInvokeData RegisterForUpdateIfNeeded;
    };

    struct VoidUberShaderRebindService__StaticFields {
    };

    struct VoidUberShaderRebindService__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct VoidUberShaderRebindService__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct VoidUberShaderRebindService__VTable vtable;
    };

    struct __declspec(align(8)) UberShaderModifier_GetBaseVertexTextureNames_d_35__Fields {
        int32_t __1__state;
        struct String* __2__current;
        int32_t __l__initialThreadId;
    };

    struct UberShaderModifier_GetBaseVertexTextureNames_d_35 {
        struct UberShaderModifier_GetBaseVertexTextureNames_d_35__Class* klass;
        MonitorData* monitor;
        struct UberShaderModifier_GetBaseVertexTextureNames_d_35__Fields fields;
    };

    struct UberShaderModifier_GetBaseVertexTextureNames_d_35__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_System_String__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_System_String__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct UberShaderModifier_GetBaseVertexTextureNames_d_35__StaticFields {
    };

    struct UberShaderModifier_GetBaseVertexTextureNames_d_35__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderModifier_GetBaseVertexTextureNames_d_35__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderModifier_GetBaseVertexTextureNames_d_35__VTable vtable;
    };

    enum class UberShaderCategory__Enum : int32_t {
        Animation = 0x00000000,
        Turbulence = 0x00000001,
        Interaction = 0x00000002,
        Distortion = 0x00000003,
        Water = 0x00000004,
        Masking = 0x00000005,
        Lighting = 0x00000006,
        LightReceiver = 0x00000007,
        Effects = 0x00000008,
        Utility = 0x00000009,
        Text = 0x0000000a,
        LightCaster = 0x0000000b,
        Mesh = 0x0000000c,
    };

    struct UberShaderCategory__Enum__Boxed {
        struct UberShaderCategory__Enum__Class* klass;
        MonitorData* monitor;
        UberShaderCategory__Enum value;
    };

    struct __declspec(align(8)) UberShaderCategoryAttribute__Fields {
        UberShaderCategory__Enum Category;
    };

    struct UberShaderCategoryAttribute {
        struct UberShaderCategoryAttribute__Class* klass;
        MonitorData* monitor;
        struct UberShaderCategoryAttribute__Fields fields;
    };

    struct UberShaderCategory__Enum__VTable {
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

    struct UberShaderCategory__Enum__StaticFields {
    };

    struct UberShaderCategory__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderCategory__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderCategory__Enum__VTable vtable;
    };

    struct UberShaderCategoryAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct UberShaderCategoryAttribute__StaticFields {
    };

    struct UberShaderCategoryAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberShaderCategoryAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberShaderCategoryAttribute__VTable vtable;
    };

    struct CrossFadeControl__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Target1;
        struct GameObject* Target2;
        struct Material* Material;
        struct RenderTexture* Buf;
        int32_t m_frameCounter;
        int32_t m_currentFrame;
        float tweenTime;
        struct Color settingFrom;
        struct Color settingTo;
        int32_t ColourBindID;
        int32_t m_prevFrame;
    };

    struct CrossFadeControl {
        struct CrossFadeControl__Class* klass;
        MonitorData* monitor;
        struct CrossFadeControl__Fields fields;
    };

    struct CrossFadeControl__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct CrossFadeControl__StaticFields {
    };

    struct CrossFadeControl__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CrossFadeControl__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CrossFadeControl__VTable vtable;
    };

    enum class UberMotionBlurInterestZone_ZoneType__Enum : int32_t {
        MainInterest = 0x00000000,
        SecondaryInterest = 0x00000001,
        TertiaryInterest = 0x00000002,
    };

    struct UberMotionBlurInterestZone_ZoneType__Enum__Boxed {
        struct UberMotionBlurInterestZone_ZoneType__Enum__Class* klass;
        MonitorData* monitor;
        UberMotionBlurInterestZone_ZoneType__Enum value;
    };

    struct UberMotionBlurInterestZone__Fields {
        struct MonoBehaviour__Fields _;
        float Radius;
        UberMotionBlurInterestZone_ZoneType__Enum Type;

        bool ShouldIgnoreZ;
        struct Renderer* m_cachedRenderer;
        bool m_hasCachedRenderer;
        struct Transform* m_transform;
    };

    struct UberMotionBlurInterestZone {
        struct UberMotionBlurInterestZone__Class* klass;
        MonitorData* monitor;
        struct UberMotionBlurInterestZone__Fields fields;
    };

    struct __declspec(align(8)) List_1_UberMotionBlurInterestZone___Fields {
        struct UberMotionBlurInterestZone__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UberMotionBlurInterestZone_ {
        struct List_1_UberMotionBlurInterestZone___Class* klass;
        MonitorData* monitor;
        struct List_1_UberMotionBlurInterestZone___Fields fields;
    };

    struct UberMotionBlurInterestZone__Array {
        struct UberMotionBlurInterestZone__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UberMotionBlurInterestZone* vector[32];
    };

    struct IEnumerator_1_UberMotionBlurInterestZone_ {
        struct IEnumerator_1_UberMotionBlurInterestZone___Class* klass;
        MonitorData* monitor;
    };

    struct UberMotionBlurInterestZone_ZoneType__Enum__VTable {
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

    struct UberMotionBlurInterestZone_ZoneType__Enum__StaticFields {
    };

    struct UberMotionBlurInterestZone_ZoneType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberMotionBlurInterestZone_ZoneType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberMotionBlurInterestZone_ZoneType__Enum__VTable vtable;
    };

    struct UberMotionBlurInterestZone__Array__VTable {
    };

    struct UberMotionBlurInterestZone__Array__StaticFields {
    };

    struct UberMotionBlurInterestZone__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberMotionBlurInterestZone__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberMotionBlurInterestZone__Array__VTable vtable;
    };

    struct IEnumerator_1_UberMotionBlurInterestZone___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_UberMotionBlurInterestZone___StaticFields {
    };

    struct IEnumerator_1_UberMotionBlurInterestZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_UberMotionBlurInterestZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_UberMotionBlurInterestZone___VTable vtable;
    };

    struct List_1_UberMotionBlurInterestZone___VTable {
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

    struct List_1_UberMotionBlurInterestZone___StaticFields {
        struct UberMotionBlurInterestZone__Array* _emptyArray;
    };

    struct List_1_UberMotionBlurInterestZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_UberMotionBlurInterestZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_UberMotionBlurInterestZone___VTable vtable;
    };

    struct UberMotionBlurInterestZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberMotionBlurInterestZone__StaticFields {
        struct List_1_UberMotionBlurInterestZone_* activeZones;
    };

    struct UberMotionBlurInterestZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberMotionBlurInterestZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberMotionBlurInterestZone__VTable vtable;
    };

    struct UberMotionBlurInterestZone_c {
        struct UberMotionBlurInterestZone_c__Class* klass;
        MonitorData* monitor;
    };

    struct Comparison_1_UberMotionBlurInterestZone___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_UberMotionBlurInterestZone_ {
        struct Comparison_1_UberMotionBlurInterestZone___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_UberMotionBlurInterestZone___Fields fields;
    };

    struct Comparison_1_UberMotionBlurInterestZone___VTable {
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

    struct Comparison_1_UberMotionBlurInterestZone___StaticFields {
    };

    struct Comparison_1_UberMotionBlurInterestZone___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Comparison_1_UberMotionBlurInterestZone___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Comparison_1_UberMotionBlurInterestZone___VTable vtable;
    };

    struct UberMotionBlurInterestZone_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberMotionBlurInterestZone_c__StaticFields {
        struct UberMotionBlurInterestZone_c* __9;
        struct Comparison_1_UberMotionBlurInterestZone_* __9__10_0;
    };

    struct UberMotionBlurInterestZone_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberMotionBlurInterestZone_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberMotionBlurInterestZone_c__VTable vtable;
    };

    struct UberPostProcess_Bezier {
        struct Vector2 P0;
        struct Vector2 P1;
        struct Vector2 P2;
        struct Vector2 P3;
    };

    struct UberPostProcess_Bezier__Boxed {
        struct UberPostProcess_Bezier__Class* klass;
        MonitorData* monitor;
        struct UberPostProcess_Bezier fields;
    };

    struct UberPostProcess_Bezier__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberPostProcess_Bezier__StaticFields {
    };

    struct UberPostProcess_Bezier__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberPostProcess_Bezier__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberPostProcess_Bezier__VTable vtable;
    };

    struct UberUIPostProcess__Fields {
        struct MonoBehaviour__Fields _;
        struct Camera* Camera;
    };

    struct UberUIPostProcess {
        struct UberUIPostProcess__Class* klass;
        MonitorData* monitor;
        struct UberUIPostProcess__Fields fields;
    };

    struct UberUIPostProcess__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct UberUIPostProcess__StaticFields {
        struct UberUIPostProcess* _Instance_k__BackingField;
    };

    struct UberUIPostProcess__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UberUIPostProcess__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UberUIPostProcess__VTable vtable;
    };

    struct __declspec(align(8)) ObjectReference__Fields {
        struct String* Guid;
        struct String* Type;
    };

    struct ObjectReference {
        struct ObjectReference__Class* klass;
        MonitorData* monitor;
        struct ObjectReference__Fields fields;
    };

    struct ObjectReference__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ObjectReference__StaticFields {
    };

    struct ObjectReference__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ObjectReference__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ObjectReference__VTable vtable;
    };

    struct __declspec(align(8)) PresetSaveComponentSettings__Fields {
        bool Saved;
        struct Dictionary_2_System_String_System_Boolean_* ExcludePaths;
        bool Implicit;
    };

    struct PresetSaveComponentSettings {
        struct PresetSaveComponentSettings__Class* klass;
        MonitorData* monitor;
        struct PresetSaveComponentSettings__Fields fields;
    };

    struct PresetSaveComponentSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PresetSaveComponentSettings__StaticFields {
    };

    struct PresetSaveComponentSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PresetSaveComponentSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PresetSaveComponentSettings__VTable vtable;
    };

    struct UberPresetAsset__Fields {
        struct ScriptableObject__Fields _;
        int32_t m_version;
        struct UberPresetSerializedComponent__Array* m_serializedComponents;
        struct List_1_ObjectReference_* m_associatedObjects;
        bool m_isFullPreset;
        bool OverrideName;
        struct String* DisplayName;
        struct String* m_metaString;
        bool m_metaIsDirty;
        struct Texture2D* m_mainTex;
        struct String* m_mainTexGUID;
        bool m_mainTexDirty;
        struct String* m_cachedName;
        bool m_nameIsDirty;
        float m_lastWidth;
        struct GUIContent* m_cachedGUIContent;
    };

    struct UberPresetAsset {
        struct UberPresetAsset__Class* klass;
        MonitorData* monitor;
        struct UberPresetAsset__Fields fields;
    };

    struct __declspec(align(8)) UberPresetSerializedComponent__Fields {
        struct String* m_componentType;
        struct UberPresetSerializedComponent_ReferenceDictionary* m_refDictionary;
        struct UberPresetSerializedComponent_StringDictionary* m_stringDictionary;
        struct UberPresetSerializedComponent_FloatDictionary* m_floatDictionary;
        struct UberPresetSerializedComponent_IntDictionary* m_intDictionary;
        struct UberPresetSerializedComponent_BoolDictionary* m_boolDictionary;
        struct UberPresetSerializedComponent_AnimationCurveDictionary* m_curveDictionary;
        struct UberPresetSerializedComponent_ColorDictionary* m_colorDictionary;
        struct UberPresetSerializedComponent_QuaternionDictionary* m_quaternionDictionary;
        struct UberPresetSerializedComponent_Vector2Dictionary* m_vector2Dictionary;
        struct UberPresetSerializedComponent_Vector3Dictionary* m_vector3Dictionary;
        struct UberPresetSerializedComponent_Vector4Dictionary* m_vector4Dictionary;
        bool Implicit;
    };

    struct UberPresetSerializedComponent {
        struct UberPresetSerializedComponent__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent__Fields fields;
    };

    struct UberPresetSerializedComponent_ReferenceDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_String___Fields _;
    };

    struct UberPresetSerializedComponent_ReferenceDictionary {
        struct UberPresetSerializedComponent_ReferenceDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_ReferenceDictionary__Fields fields;
    };

    struct UberPresetSerializedComponent_StringDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_String___Fields _;
    };

    struct UberPresetSerializedComponent_StringDictionary {
        struct UberPresetSerializedComponent_StringDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_StringDictionary__Fields fields;
    };

    struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Single___Fields {
        struct Dictionary_2_System_String_System_Single_* m_dictionary;
        struct List_1_System_String_* m_keys;
        struct List_1_System_Single_* m_values;
    };

    struct UberShaderDictionary_2_System_String_System_Single_ {
        struct UberShaderDictionary_2_System_String_System_Single___Class* klass;
        MonitorData* monitor;
        struct UberShaderDictionary_2_System_String_System_Single___Fields fields;
    };

    struct UberPresetSerializedComponent_FloatDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_Single___Fields _;
    };

    struct UberPresetSerializedComponent_FloatDictionary {
        struct UberPresetSerializedComponent_FloatDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_FloatDictionary__Fields fields;
    };

    struct UberPresetSerializedComponent_IntDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_Int32___Fields _;
    };

    struct UberPresetSerializedComponent_IntDictionary {
        struct UberPresetSerializedComponent_IntDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_IntDictionary__Fields fields;
    };

    struct __declspec(align(8)) UberShaderDictionary_2_System_String_System_Boolean___Fields {
        struct Dictionary_2_System_String_System_Boolean_* m_dictionary;
        struct List_1_System_String_* m_keys;
        struct List_1_System_Boolean_* m_values;
    };

    struct UberShaderDictionary_2_System_String_System_Boolean_ {
        struct UberShaderDictionary_2_System_String_System_Boolean___Class* klass;
        MonitorData* monitor;
        struct UberShaderDictionary_2_System_String_System_Boolean___Fields fields;
    };

    struct UberPresetSerializedComponent_BoolDictionary__Fields {
        struct UberShaderDictionary_2_System_String_System_Boolean___Fields _;
    };

    struct UberPresetSerializedComponent_BoolDictionary {
        struct UberPresetSerializedComponent_BoolDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_BoolDictionary__Fields fields;
    };

    struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields {
        struct Dictionary_2_System_String_UnityEngine_AnimationCurve_* m_dictionary;
        struct List_1_System_String_* m_keys;
        struct List_1_UnityEngine_AnimationCurve_* m_values;
    };

    struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve_ {
        struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields fields;
    };

    struct UberPresetSerializedComponent_AnimationCurveDictionary__Fields {
        struct UberShaderDictionary_2_System_String_UnityEngine_AnimationCurve___Fields _;
    };

    struct UberPresetSerializedComponent_AnimationCurveDictionary {
        struct UberPresetSerializedComponent_AnimationCurveDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_AnimationCurveDictionary__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_AnimationCurve___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_UnityEngine_AnimationCurve_ {
        struct Dictionary_2_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_UnityEngine_AnimationCurve___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct AnimationCurve* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_AnimationCurve_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Fields {
        struct Dictionary_2_System_String_UnityEngine_AnimationCurve_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_AnimationCurve___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Fields {
        struct Dictionary_2_System_String_UnityEngine_AnimationCurve_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_AnimationCurve___Fields fields;
    };

    struct ICollection_1_UnityEngine_AnimationCurve_ {
        struct ICollection_1_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ {
        struct String* key;
        struct AnimationCurve* value;
    };

    struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Boxed {
        struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ fields;
    };

    struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Array {
        struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_AnimationCurve_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_UnityEngine_AnimationCurve_ {
        struct IEnumerable_1_UnityEngine_AnimationCurve___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) UberShaderDictionary_2_System_String_UnityEngine_Color___Fields {
        struct Dictionary_2_System_String_UnityEngine_Color_* m_dictionary;
        struct List_1_System_String_* m_keys;
        struct List_1_UnityEngine_Color_* m_values;
    };

    struct UberShaderDictionary_2_System_String_UnityEngine_Color_ {
        struct UberShaderDictionary_2_System_String_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct UberShaderDictionary_2_System_String_UnityEngine_Color___Fields fields;
    };

    struct UberPresetSerializedComponent_ColorDictionary__Fields {
        struct UberShaderDictionary_2_System_String_UnityEngine_Color___Fields _;
    };

    struct UberPresetSerializedComponent_ColorDictionary {
        struct UberPresetSerializedComponent_ColorDictionary__Class* klass;
        MonitorData* monitor;
        struct UberPresetSerializedComponent_ColorDictionary__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_UnityEngine_Color___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_UnityEngine_Color_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_Color_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_UnityEngine_Color_ {
        struct Dictionary_2_System_String_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_UnityEngine_Color___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct Color value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_UnityEngine_Color_ vector[32];
    };

} // namespace app
