namespace app {
struct BinXmlDateTime {
    struct BinXmlDateTime__Class *klass;
    MonitorData *monitor;
};

struct BinXmlDateTime__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BinXmlDateTime__StaticFields {
    struct Int32__Array *KatmaiTimeScaleMultiplicator;
    double SQLTicksPerMillisecond;
    int32_t SQLTicksPerSecond;
    int32_t SQLTicksPerMinute;
    int32_t SQLTicksPerHour;
    int32_t SQLTicksPerDay;
};

struct BinXmlDateTime__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BinXmlDateTime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BinXmlDateTime__VTable vtable;
};

struct FormatterServices {
    struct FormatterServices__Class *klass;
    MonitorData *monitor;
};

struct FormatterServices__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FormatterServices__StaticFields {
    struct ConcurrentDictionary_2_System_Runtime_Serialization_MemberHolder_System_Reflection_MemberInfo_ *m_MemberInfoTable;
    bool unsafeTypeForwardersIsEnabled;
    bool unsafeTypeForwardersIsEnabledInitialized;
    struct Type__Array *advancedTypes;
    struct Binder *s_binder;
};

struct FormatterServices__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FormatterServices__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FormatterServices__VTable vtable;
};

struct BinaryCompatibility_1 {
    struct BinaryCompatibility_1__Class *klass;
    MonitorData *monitor;
};

struct BinaryCompatibility_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BinaryCompatibility_1__StaticFields {
    bool _targetsAtLeast_Desktop_V4_5_2;
};

struct BinaryCompatibility_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BinaryCompatibility_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BinaryCompatibility_1__VTable vtable;
};

struct BinaryCompatibility {
    struct BinaryCompatibility__Class *klass;
    MonitorData *monitor;
};

struct BinaryCompatibility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BinaryCompatibility__StaticFields {
    bool TargetsAtLeast_Desktop_V4_5;
    bool TargetsAtLeast_Desktop_V4_5_1;
};

struct BinaryCompatibility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BinaryCompatibility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BinaryCompatibility__VTable vtable;
};

struct Converter {
    struct Converter__Class *klass;
    MonitorData *monitor;
};

struct TypeCode__Enum__Array {
    struct TypeCode__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    TypeCode__Enum vector[32];
};

struct InternalPrimitiveTypeE__Enum__Array {
    struct InternalPrimitiveTypeE__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    InternalPrimitiveTypeE__Enum vector[32];
};

struct TypeCode__Enum__Array__VTable {
};

struct TypeCode__Enum__Array__StaticFields {
};

struct TypeCode__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeCode__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeCode__Enum__Array__VTable vtable;
};

struct InternalPrimitiveTypeE__Enum__Array__VTable {
};

struct InternalPrimitiveTypeE__Enum__Array__StaticFields {
};

struct InternalPrimitiveTypeE__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InternalPrimitiveTypeE__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InternalPrimitiveTypeE__Enum__Array__VTable vtable;
};

struct Converter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Converter__StaticFields {
    int32_t primitiveTypeEnumLength;
    struct Type__Array *typeA;
    struct Type__Array *arrayTypeA;
    struct String__Array *valueA;
    struct TypeCode__Enum__Array *typeCodeA;
    struct InternalPrimitiveTypeE__Enum__Array *codeA;
    struct Type *typeofISerializable;
    struct Type *typeofString;
    struct Type *typeofConverter;
    struct Type *typeofBoolean;
    struct Type *typeofByte;
    struct Type *typeofChar;
    struct Type *typeofDecimal;
    struct Type *typeofDouble;
    struct Type *typeofInt16;
    struct Type *typeofInt32;
    struct Type *typeofInt64;
    struct Type *typeofSByte;
    struct Type *typeofSingle;
    struct Type *typeofTimeSpan;
    struct Type *typeofDateTime;
    struct Type *typeofUInt16;
    struct Type *typeofUInt32;
    struct Type *typeofUInt64;
    struct Type *typeofObject;
    struct Type *typeofSystemVoid;
    struct Assembly *urtAssembly;
    struct String *urtAssemblyString;
    struct Type *typeofTypeArray;
    struct Type *typeofObjectArray;
    struct Type *typeofStringArray;
    struct Type *typeofBooleanArray;
    struct Type *typeofByteArray;
    struct Type *typeofCharArray;
    struct Type *typeofDecimalArray;
    struct Type *typeofDoubleArray;
    struct Type *typeofInt16Array;
    struct Type *typeofInt32Array;
    struct Type *typeofInt64Array;
    struct Type *typeofSByteArray;
    struct Type *typeofSingleArray;
    struct Type *typeofTimeSpanArray;
    struct Type *typeofDateTimeArray;
    struct Type *typeofUInt16Array;
    struct Type *typeofUInt32Array;
    struct Type *typeofUInt64Array;
    struct Type *typeofMarshalByRefObject;
};

struct Converter__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Converter__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Converter__VTable vtable;
};

struct ReflectionUtils {
    struct ReflectionUtils__Class *klass;
    MonitorData *monitor;
};

struct ReflectionUtils__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ReflectionUtils__StaticFields {
    struct Type__Array *EmptyTypes;
};

struct ReflectionUtils__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ReflectionUtils__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ReflectionUtils__VTable vtable;
};

struct Operators {
    struct Operators__Class *klass;
    MonitorData *monitor;
};

struct Operators__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Operators__StaticFields {
    struct Int32__Array *s_priority;
    struct String__Array *s_looks;
};

struct Operators__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Operators__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Operators__VTable vtable;
};

struct EmptyArray_1_Char_ {
    struct EmptyArray_1_Char___Class *klass;
    MonitorData *monitor;
};

struct EmptyArray_1_Char___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EmptyArray_1_Char___StaticFields {
    struct Char__Array *Value;
};

struct EmptyArray_1_Char___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EmptyArray_1_Char___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EmptyArray_1_Char___VTable vtable;
};

struct JsonTypeReflector {
    struct JsonTypeReflector__Class *klass;
    MonitorData *monitor;
};

struct JsonTypeReflector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct JsonTypeReflector__StaticFields {
    struct Nullable_1_Boolean_ _dynamicCodeGeneration;
    struct Nullable_1_Boolean_ _fullyTrusted;
    struct ThreadSafeStore_2_System_Type_System_Func_2_ *CreatorCache;
    struct ThreadSafeStore_2_System_Type_System_Type_ *AssociatedMetadataTypesCache;
    struct ReflectionObject *_metadataTypeAttributeReflectionObject;
};

struct JsonTypeReflector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct JsonTypeReflector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct JsonTypeReflector__VTable vtable;
};

struct DynamicUtils_BinderWrapper {
    struct DynamicUtils_BinderWrapper__Class *klass;
    MonitorData *monitor;
};

struct DynamicUtils_BinderWrapper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct DynamicUtils_BinderWrapper__StaticFields {
    struct Object *_getCSharpArgumentInfoArray;
    struct Object *_setCSharpArgumentInfoArray;
    struct MethodCall_2_System_Object_System_Object_ *_getMemberCall;
    struct MethodCall_2_System_Object_System_Object_ *_setMemberCall;
    bool _init;
};

struct DynamicUtils_BinderWrapper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DynamicUtils_BinderWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DynamicUtils_BinderWrapper__VTable vtable;
};

struct SecurityUtils {
    struct SecurityUtils__Class *klass;
    MonitorData *monitor;
};

struct SecurityUtils__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SecurityUtils__StaticFields {
};

struct SecurityUtils__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SecurityUtils__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SecurityUtils__VTable vtable;
};

struct IBindingList {
    struct IBindingList__Class *klass;
    MonitorData *monitor;
};

struct IBindingList__VTable {
    VirtualInvokeData get_AllowNew;
    VirtualInvokeData AddNew;
    VirtualInvokeData get_AllowEdit;
    VirtualInvokeData get_AllowRemove;
    VirtualInvokeData get_SupportsChangeNotification;
    VirtualInvokeData get_SupportsSearching;
    VirtualInvokeData get_SupportsSorting;
    VirtualInvokeData get_IsSorted;
    VirtualInvokeData get_SortProperty;
    VirtualInvokeData get_SortDirection;
    VirtualInvokeData add_ListChanged;
    VirtualInvokeData remove_ListChanged;
    VirtualInvokeData AddIndex;
    VirtualInvokeData ApplySort;
    VirtualInvokeData Find;
    VirtualInvokeData RemoveIndex;
    VirtualInvokeData RemoveSort;
};

struct IBindingList__StaticFields {
};

struct IBindingList__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IBindingList__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IBindingList__VTable vtable;
};

struct INotifyPropertyChanged {
    struct INotifyPropertyChanged__Class *klass;
    MonitorData *monitor;
};

struct INotifyPropertyChanged__VTable {
    VirtualInvokeData add_PropertyChanged;
    VirtualInvokeData remove_PropertyChanged;
};

struct INotifyPropertyChanged__StaticFields {
};

struct INotifyPropertyChanged__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct INotifyPropertyChanged__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct INotifyPropertyChanged__VTable vtable;
};

struct BipedNaming {
    struct BipedNaming__Class *klass;
    MonitorData *monitor;
};

struct BipedNaming__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BipedNaming__StaticFields {
    struct String__Array *typeLeft;
    struct String__Array *typeRight;
    struct String__Array *typeSpine;
    struct String__Array *typeHead;
    struct String__Array *typeArm;
    struct String__Array *typeLeg;
    struct String__Array *typeTail;
    struct String__Array *typeEye;
    struct String__Array *typeExclude;
    struct String__Array *typeExcludeSpine;
    struct String__Array *typeExcludeHead;
    struct String__Array *typeExcludeArm;
    struct String__Array *typeExcludeLeg;
    struct String__Array *typeExcludeTail;
    struct String__Array *typeExcludeEye;
    struct String__Array *pelvis;
    struct String__Array *hand;
    struct String__Array *foot;
};

struct BipedNaming__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BipedNaming__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BipedNaming__VTable vtable;
};

struct Text_1__Array {
    struct Text_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Text_1 *vector[32];
};

struct Text_1__Array__VTable {
};

struct Text_1__Array__StaticFields {
};

struct Text_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Text_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Text_1__Array__VTable vtable;
};

struct Bits {
    struct Bits__Class *klass;
    MonitorData *monitor;
};

struct Bits__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Bits__StaticFields {
    uint32_t MASK_0101010101010101;
    uint32_t MASK_0011001100110011;
    uint32_t MASK_0000111100001111;
    uint32_t MASK_0000000011111111;
    uint32_t MASK_1111111111111111;
};

struct Bits__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bits__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bits__VTable vtable;
};

struct ShaderID_BleachBypass {
    struct ShaderID_BleachBypass__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_BleachBypass__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_BleachBypass__StaticFields {
    int32_t _Amount;
};

struct ShaderID_BleachBypass__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_BleachBypass__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_BleachBypass__VTable vtable;
};

struct ShaderID_Blend {
    struct ShaderID_Blend__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_Blend__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_Blend__StaticFields {
    int32_t _OverlayTex;
    int32_t _Amount;
};

struct ShaderID_Blend__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_Blend__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_Blend__VTable vtable;
};

struct BlitTriExtensions {
    struct BlitTriExtensions__Class *klass;
    MonitorData *monitor;
};

struct BlitTriExtensions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BlitTriExtensions__StaticFields {
    int32_t _MainTex;
    int32_t _MainTexMS;
    int32_t _MainTex_ST;
    int32_t _SmartBlitProps;
    struct Material *s_defaultMaterial;
};

struct BlitTriExtensions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BlitTriExtensions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BlitTriExtensions__VTable vtable;
};

struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ {
    struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Class *klass;
    MonitorData *monitor;
};

struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___StaticFields {
    struct ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *Instance;
};

struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EmptyReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression___VTable vtable;
};

struct IReadOnlyCollection_1_System_Linq_Expressions_Expression_ {
    struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___Class *klass;
    MonitorData *monitor;
};

struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___VTable {
    VirtualInvokeData get_Count;
};

struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___StaticFields {
};

struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IReadOnlyCollection_1_System_Linq_Expressions_Expression___VTable vtable;
};

struct PhysicsUtils {
    struct PhysicsUtils__Class *klass;
    MonitorData *monitor;
};

struct PhysicsUtils__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PhysicsUtils__StaticFields {
    bool s_staticsInitialized;
    struct LayerMask s_groundMask;
    struct LayerMask s_obstaclesMask;
    struct LayerMask s_killCharacterMask;
    struct LayerMask s_characterMask;
    struct LayerMask s_playerMask;
    struct Comparer_1_UnityEngine_RaycastHit_ *s_nearesHitComparer;
};

struct PhysicsUtils__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PhysicsUtils__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PhysicsUtils__VTable vtable;
};

struct ShaderID_BloomAndFlares {
    struct ShaderID_BloomAndFlares__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_BloomAndFlares__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_BloomAndFlares__StaticFields {
    int32_t offsets;
    int32_t _threshold;
    int32_t tintColor;
    int32_t stretchWidth;
    int32_t _Intensity;
    int32_t _ColorBuffer;
    int32_t colorA;
    int32_t colorB;
    int32_t colorC;
    int32_t colorD;
    int32_t threshold;
    int32_t useSrcAlphaAsMask;
    int32_t vignetteIntensity;
};

struct ShaderID_BloomAndFlares__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_BloomAndFlares__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_BloomAndFlares__VTable vtable;
};

struct ShaderID_BloomOptimized {
    struct ShaderID_BloomOptimized__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_BloomOptimized__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_BloomOptimized__StaticFields {
    int32_t _Parameter;
    int32_t _Bloom;
};

struct ShaderID_BloomOptimized__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_BloomOptimized__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_BloomOptimized__VTable vtable;
};

struct ShaderID_Bloom {
    struct ShaderID_Bloom__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_Bloom__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_Bloom__StaticFields {
    int32_t _Offsets;
    int32_t _Threshhold;
    int32_t _TintColor;
    int32_t _Saturation;
    int32_t _StretchWidth;
    int32_t _Intensity;
    int32_t _ColorBuffer;
    int32_t colorA;
    int32_t colorB;
    int32_t colorC;
    int32_t colorD;
};

struct ShaderID_Bloom__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_Bloom__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_Bloom__VTable vtable;
};

struct ShaderID_Bloom_1 {
    struct ShaderID_Bloom_1__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_Bloom_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_Bloom_1__StaticFields {
    int32_t _Threshold;
    int32_t _Curve;
    int32_t _PrefilterOffs;
    int32_t _SampleScale;
    int32_t _Intensity;
    int32_t _BaseTex;
};

struct ShaderID_Bloom_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_Bloom_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_Bloom_1__VTable vtable;
};

struct ShaderID_BlurOptimized {
    struct ShaderID_BlurOptimized__Class *klass;
    MonitorData *monitor;
};

struct ShaderID_BlurOptimized__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ShaderID_BlurOptimized__StaticFields {
    int32_t _Parameter;
};

struct ShaderID_BlurOptimized__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShaderID_BlurOptimized__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShaderID_BlurOptimized__VTable vtable;
};

struct IBooleanUberState {
    struct IBooleanUberState__Class *klass;
    MonitorData *monitor;
};

struct IBooleanUberState__VTable {
    VirtualInvokeData get_Value;
    VirtualInvokeData set_Value;
    VirtualInvokeData get_DefaultBooleanValue;
    VirtualInvokeData set_DefaultBooleanValue;
    VirtualInvokeData get_Options;
};

struct IBooleanUberState__StaticFields {
};

struct IBooleanUberState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IBooleanUberState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IBooleanUberState__VTable vtable;
};

struct Statics {
    struct Statics__Class *klass;
    MonitorData *monitor;
};

struct Statics__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Statics__StaticFields {
    TraceLoggingDataType__Enum IntPtrType;
    
    TraceLoggingDataType__Enum UIntPtrType;
    
    TraceLoggingDataType__Enum HexIntPtrType;
    
};

struct Statics__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Statics__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Statics__VTable vtable;
};

struct TransformExtensions {
    struct TransformExtensions__Class *klass;
    MonitorData *monitor;
};

struct TransformExtensions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TransformExtensions__StaticFields {
    struct StringBuilder *fullNameBuilder;
};

struct TransformExtensions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TransformExtensions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TransformExtensions__VTable vtable;
};

struct TimelineSolver {
    struct TimelineSolver__Class *klass;
    MonitorData *monitor;
};

struct TimelineSolver__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimelineSolver__StaticFields {
    bool AllowEvaluate;
    bool DetectInfiniteLoops;
    bool AllowCache;
    struct Dictionary_2_System_UInt32_System_Single_ *m_cache;
    struct FastHashSet_1_System_UInt32_ *m_loopCheck;
    struct IDisposable *m_disposable;
};

struct TimelineSolver__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineSolver__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineSolver__VTable vtable;
};

struct TimelineHelper {
    struct TimelineHelper__Class *klass;
    MonitorData *monitor;
};

struct TimelineHelper__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TimelineHelper__StaticFields {
    struct List_1_Moon_Timeline_MoonTimeline_ *m_fromPath;
    struct List_1_Moon_Timeline_MoonTimeline_ *m_toPath;
};

struct TimelineHelper__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineHelper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineHelper__VTable vtable;
};

struct IIndeterminateLengthTimelineEntity {
    struct IIndeterminateLengthTimelineEntity__Class *klass;
    MonitorData *monitor;
};

struct IIndeterminateLengthTimelineEntity__VTable {
    VirtualInvokeData HasFinished;
};

struct IIndeterminateLengthTimelineEntity__StaticFields {
};

struct IIndeterminateLengthTimelineEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IIndeterminateLengthTimelineEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IIndeterminateLengthTimelineEntity__VTable vtable;
};

}
