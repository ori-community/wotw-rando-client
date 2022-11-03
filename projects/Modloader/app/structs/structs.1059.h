namespace app {
    struct IVRSettings_GetSettingsErrorNameFromEnum__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_GetSettingsErrorNameFromEnum {
        struct IVRSettings_GetSettingsErrorNameFromEnum__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_GetSettingsErrorNameFromEnum__Fields fields;
    };

    enum class EVRSettingsError__Enum : int32_t {
        None = 0x00000000,
        IPCFailed = 0x00000001,
        WriteFailed = 0x00000002,
        ReadFailed = 0x00000003,
        JsonParseFailed = 0x00000004,
        UnsetSettingHasNoDefault = 0x00000005,
    };

    struct EVRSettingsError__Enum__Boxed {
        struct EVRSettingsError__Enum__Class* klass;
        MonitorData* monitor;
        EVRSettingsError__Enum value;
    };

    struct EVRSettingsError__Enum__VTable {
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

    struct EVRSettingsError__Enum__StaticFields {
    };

    struct EVRSettingsError__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRSettingsError__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRSettingsError__Enum__VTable vtable;
    };

    struct IVRSettings_GetSettingsErrorNameFromEnum__VTable {
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

    struct IVRSettings_GetSettingsErrorNameFromEnum__StaticFields {
    };

    struct IVRSettings_GetSettingsErrorNameFromEnum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_GetSettingsErrorNameFromEnum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_GetSettingsErrorNameFromEnum__VTable vtable;
    };

    struct IVRSettings_Sync__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_Sync {
        struct IVRSettings_Sync__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_Sync__Fields fields;
    };

    struct EVRSettingsError___VTable {
    };

    struct EVRSettingsError___StaticFields {
    };

    struct EVRSettingsError___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRSettingsError___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRSettingsError___VTable vtable;
    };

    struct IVRSettings_Sync__VTable {
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

    struct IVRSettings_Sync__StaticFields {
    };

    struct IVRSettings_Sync__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_Sync__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_Sync__VTable vtable;
    };

    struct IVRSettings_SetBool__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_SetBool {
        struct IVRSettings_SetBool__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_SetBool__Fields fields;
    };

    struct IVRSettings_SetBool__VTable {
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

    struct IVRSettings_SetBool__StaticFields {
    };

    struct IVRSettings_SetBool__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_SetBool__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_SetBool__VTable vtable;
    };

    struct IVRSettings_SetInt32__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_SetInt32 {
        struct IVRSettings_SetInt32__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_SetInt32__Fields fields;
    };

    struct IVRSettings_SetInt32__VTable {
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

    struct IVRSettings_SetInt32__StaticFields {
    };

    struct IVRSettings_SetInt32__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_SetInt32__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_SetInt32__VTable vtable;
    };

    struct IVRSettings_SetFloat__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_SetFloat {
        struct IVRSettings_SetFloat__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_SetFloat__Fields fields;
    };

    struct IVRSettings_SetFloat__VTable {
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

    struct IVRSettings_SetFloat__StaticFields {
    };

    struct IVRSettings_SetFloat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_SetFloat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_SetFloat__VTable vtable;
    };

    struct IVRSettings_SetString__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_SetString {
        struct IVRSettings_SetString__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_SetString__Fields fields;
    };

    struct IVRSettings_SetString__VTable {
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

    struct IVRSettings_SetString__StaticFields {
    };

    struct IVRSettings_SetString__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_SetString__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_SetString__VTable vtable;
    };

    struct IVRSettings_GetBool__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_GetBool {
        struct IVRSettings_GetBool__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_GetBool__Fields fields;
    };

    struct IVRSettings_GetBool__VTable {
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

    struct IVRSettings_GetBool__StaticFields {
    };

    struct IVRSettings_GetBool__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_GetBool__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_GetBool__VTable vtable;
    };

    struct IVRSettings_GetInt32__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_GetInt32 {
        struct IVRSettings_GetInt32__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_GetInt32__Fields fields;
    };

    struct IVRSettings_GetInt32__VTable {
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

    struct IVRSettings_GetInt32__StaticFields {
    };

    struct IVRSettings_GetInt32__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_GetInt32__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_GetInt32__VTable vtable;
    };

    struct IVRSettings_GetFloat__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_GetFloat {
        struct IVRSettings_GetFloat__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_GetFloat__Fields fields;
    };

    struct IVRSettings_GetFloat__VTable {
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

    struct IVRSettings_GetFloat__StaticFields {
    };

    struct IVRSettings_GetFloat__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_GetFloat__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_GetFloat__VTable vtable;
    };

    struct IVRSettings_GetString__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_GetString {
        struct IVRSettings_GetString__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_GetString__Fields fields;
    };

    struct IVRSettings_GetString__VTable {
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

    struct IVRSettings_GetString__StaticFields {
    };

    struct IVRSettings_GetString__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_GetString__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_GetString__VTable vtable;
    };

    struct IVRSettings_RemoveSection__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_RemoveSection {
        struct IVRSettings_RemoveSection__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_RemoveSection__Fields fields;
    };

    struct IVRSettings_RemoveSection__VTable {
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

    struct IVRSettings_RemoveSection__StaticFields {
    };

    struct IVRSettings_RemoveSection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_RemoveSection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_RemoveSection__VTable vtable;
    };

    struct IVRSettings_RemoveKeyInSection__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSettings_RemoveKeyInSection {
        struct IVRSettings_RemoveKeyInSection__Class* klass;
        MonitorData* monitor;
        struct IVRSettings_RemoveKeyInSection__Fields fields;
    };

    struct IVRSettings_RemoveKeyInSection__VTable {
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

    struct IVRSettings_RemoveKeyInSection__StaticFields {
    };

    struct IVRSettings_RemoveKeyInSection__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSettings_RemoveKeyInSection__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSettings_RemoveKeyInSection__VTable vtable;
    };

    struct IVRScreenshots_RequestScreenshot__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_RequestScreenshot {
        struct IVRScreenshots_RequestScreenshot__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_RequestScreenshot__Fields fields;
    };

    enum class EVRScreenshotError__Enum : int32_t {
        None = 0x00000000,
        RequestFailed = 0x00000001,
        IncompatibleVersion = 0x00000064,
        NotFound = 0x00000065,
        BufferTooSmall = 0x00000066,
        ScreenshotAlreadyInProgress = 0x0000006c,
    };

    struct EVRScreenshotError__Enum__Boxed {
        struct EVRScreenshotError__Enum__Class* klass;
        MonitorData* monitor;
        EVRScreenshotError__Enum value;
    };

    enum class EVRScreenshotType__Enum : int32_t {
        None = 0x00000000,
        Mono = 0x00000001,
        Stereo = 0x00000002,
        Cubemap = 0x00000003,
        MonoPanorama = 0x00000004,
        StereoPanorama = 0x00000005,
    };

    struct EVRScreenshotType__Enum__Boxed {
        struct EVRScreenshotType__Enum__Class* klass;
        MonitorData* monitor;
        EVRScreenshotType__Enum value;
    };

    struct EVRScreenshotError__Enum__VTable {
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

    struct EVRScreenshotError__Enum__StaticFields {
    };

    struct EVRScreenshotError__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRScreenshotError__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRScreenshotError__Enum__VTable vtable;
    };

    struct EVRScreenshotType__Enum__VTable {
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

    struct EVRScreenshotType__Enum__StaticFields {
    };

    struct EVRScreenshotType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRScreenshotType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRScreenshotType__Enum__VTable vtable;
    };

    struct IVRScreenshots_RequestScreenshot__VTable {
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

    struct IVRScreenshots_RequestScreenshot__StaticFields {
    };

    struct IVRScreenshots_RequestScreenshot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_RequestScreenshot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_RequestScreenshot__VTable vtable;
    };

    struct IVRScreenshots_HookScreenshot__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_HookScreenshot {
        struct IVRScreenshots_HookScreenshot__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_HookScreenshot__Fields fields;
    };

    struct EVRScreenshotType__Enum__Array {
        struct EVRScreenshotType__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        EVRScreenshotType__Enum vector[32];
    };

    struct EVRScreenshotType__Enum__Array__VTable {
    };

    struct EVRScreenshotType__Enum__Array__StaticFields {
    };

    struct EVRScreenshotType__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRScreenshotType__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRScreenshotType__Enum__Array__VTable vtable;
    };

    struct IVRScreenshots_HookScreenshot__VTable {
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

    struct IVRScreenshots_HookScreenshot__StaticFields {
    };

    struct IVRScreenshots_HookScreenshot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_HookScreenshot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_HookScreenshot__VTable vtable;
    };

    struct IVRScreenshots_GetScreenshotPropertyType__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_GetScreenshotPropertyType {
        struct IVRScreenshots_GetScreenshotPropertyType__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_GetScreenshotPropertyType__Fields fields;
    };

    struct EVRScreenshotError___VTable {
    };

    struct EVRScreenshotError___StaticFields {
    };

    struct EVRScreenshotError___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRScreenshotError___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRScreenshotError___VTable vtable;
    };

    struct IVRScreenshots_GetScreenshotPropertyType__VTable {
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

    struct IVRScreenshots_GetScreenshotPropertyType__StaticFields {
    };

    struct IVRScreenshots_GetScreenshotPropertyType__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_GetScreenshotPropertyType__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_GetScreenshotPropertyType__VTable vtable;
    };

    struct IVRScreenshots_GetScreenshotPropertyFilename__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_GetScreenshotPropertyFilename {
        struct IVRScreenshots_GetScreenshotPropertyFilename__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_GetScreenshotPropertyFilename__Fields fields;
    };

    enum class EVRScreenshotPropertyFilenames__Enum : int32_t {
        Preview = 0x00000000,
        VR = 0x00000001,
    };

    struct EVRScreenshotPropertyFilenames__Enum__Boxed {
        struct EVRScreenshotPropertyFilenames__Enum__Class* klass;
        MonitorData* monitor;
        EVRScreenshotPropertyFilenames__Enum value;
    };

    struct EVRScreenshotPropertyFilenames__Enum__VTable {
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

    struct EVRScreenshotPropertyFilenames__Enum__StaticFields {
    };

    struct EVRScreenshotPropertyFilenames__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRScreenshotPropertyFilenames__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRScreenshotPropertyFilenames__Enum__VTable vtable;
    };

    struct IVRScreenshots_GetScreenshotPropertyFilename__VTable {
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

    struct IVRScreenshots_GetScreenshotPropertyFilename__StaticFields {
    };

    struct IVRScreenshots_GetScreenshotPropertyFilename__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_GetScreenshotPropertyFilename__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_GetScreenshotPropertyFilename__VTable vtable;
    };

    struct IVRScreenshots_UpdateScreenshotProgress__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_UpdateScreenshotProgress {
        struct IVRScreenshots_UpdateScreenshotProgress__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_UpdateScreenshotProgress__Fields fields;
    };

    struct IVRScreenshots_UpdateScreenshotProgress__VTable {
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

    struct IVRScreenshots_UpdateScreenshotProgress__StaticFields {
    };

    struct IVRScreenshots_UpdateScreenshotProgress__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_UpdateScreenshotProgress__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_UpdateScreenshotProgress__VTable vtable;
    };

    struct IVRScreenshots_TakeStereoScreenshot__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_TakeStereoScreenshot {
        struct IVRScreenshots_TakeStereoScreenshot__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_TakeStereoScreenshot__Fields fields;
    };

    struct IVRScreenshots_TakeStereoScreenshot__VTable {
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

    struct IVRScreenshots_TakeStereoScreenshot__StaticFields {
    };

    struct IVRScreenshots_TakeStereoScreenshot__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRScreenshots_TakeStereoScreenshot__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRScreenshots_TakeStereoScreenshot__VTable vtable;
    };

    struct IVRScreenshots_SubmitScreenshot__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRScreenshots_SubmitScreenshot {
        struct IVRScreenshots_SubmitScreenshot__Class* klass;
        MonitorData* monitor;
        struct IVRScreenshots_SubmitScreenshot__Fields fields;
    };

    struct IVRScreenshots_SubmitScreenshot__VTable {
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

} // namespace app
