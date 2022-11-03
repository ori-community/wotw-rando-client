namespace app {
    enum class AkDynamicSequenceType__Enum : int32_t {
        DynamicSequenceType_SampleAccurate = 0x00000000,
        DynamicSequenceType_NormalTransition = 0x00000001,
    };

    struct AkDynamicSequenceType__Enum__Boxed {
        struct AkDynamicSequenceType__Enum__Class* klass;
        MonitorData* monitor;
        AkDynamicSequenceType__Enum value;
    };

    struct AkCallbackManager_EventCallback__VTable {
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

    struct AkCallbackManager_EventCallback__StaticFields {
    };

    struct AkCallbackManager_EventCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCallbackManager_EventCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCallbackManager_EventCallback__VTable vtable;
    };

    struct AkDynamicSequenceType__Enum__VTable {
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

    struct AkDynamicSequenceType__Enum__StaticFields {
    };

    struct AkDynamicSequenceType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkDynamicSequenceType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkDynamicSequenceType__Enum__VTable vtable;
    };

    enum class AkCurveInterpolation__Enum : int32_t {
        AkCurveInterpolation_Log3 = 0x00000000,
        AkCurveInterpolation_Sine = 0x00000001,
        AkCurveInterpolation_Log1 = 0x00000002,
        AkCurveInterpolation_InvSCurve = 0x00000003,
        AkCurveInterpolation_Linear = 0x00000004,
        AkCurveInterpolation_SCurve = 0x00000005,
        AkCurveInterpolation_Exp1 = 0x00000006,
        AkCurveInterpolation_SineRecip = 0x00000007,
        AkCurveInterpolation_Exp3 = 0x00000008,
        AkCurveInterpolation_LastFadeCurve = 0x00000008,
        AkCurveInterpolation_Constant = 0x00000009,
    };

    struct AkCurveInterpolation__Enum__Boxed {
        struct AkCurveInterpolation__Enum__Class* klass;
        MonitorData* monitor;
        AkCurveInterpolation__Enum value;
    };

    struct AkCurveInterpolation__Enum__VTable {
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

    struct AkCurveInterpolation__Enum__StaticFields {
    };

    struct AkCurveInterpolation__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCurveInterpolation__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCurveInterpolation__Enum__VTable vtable;
    };

    enum class AkActionOnEventType__Enum : int32_t {
        AkActionOnEventType_Stop = 0x00000000,
        AkActionOnEventType_Pause = 0x00000001,
        AkActionOnEventType_Resume = 0x00000002,
        AkActionOnEventType_Break = 0x00000003,
        AkActionOnEventType_ReleaseEnvelope = 0x00000004,
    };

    struct AkActionOnEventType__Enum__Boxed {
        struct AkActionOnEventType__Enum__Class* klass;
        MonitorData* monitor;
        AkActionOnEventType__Enum value;
    };

    struct AkActionOnEventType__Enum__VTable {
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

    struct AkActionOnEventType__Enum__StaticFields {
    };

    struct AkActionOnEventType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkActionOnEventType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkActionOnEventType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkMIDIPostArray__Fields {
        int32_t m_Count;
        int32_t SIZE_OF;
        void* m_Buffer;
    };

    struct AkMIDIPostArray {
        struct AkMIDIPostArray__Class* klass;
        MonitorData* monitor;
        struct AkMIDIPostArray__Fields fields;
    };

    struct AkMIDIPostArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct AkMIDIPostArray__StaticFields {
    };

    struct AkMIDIPostArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkMIDIPostArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkMIDIPostArray__VTable vtable;
    };

    enum class AkPluginType__Enum : int32_t {
        AkPluginTypeNone = 0x00000000,
        AkPluginTypeCodec = 0x00000001,
        AkPluginTypeSource = 0x00000002,
        AkPluginTypeEffect = 0x00000003,
        AkPluginTypeMixer = 0x00000006,
        AkPluginTypeSink = 0x00000007,
        AkPluginTypeGlobalExtension = 0x00000008,
        AkPluginTypeMask = 0x0000000f,
    };

    struct AkPluginType__Enum__Boxed {
        struct AkPluginType__Enum__Class* klass;
        MonitorData* monitor;
        AkPluginType__Enum value;
    };

    struct AkPluginType__Enum__VTable {
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

    struct AkPluginType__Enum__StaticFields {
    };

    struct AkPluginType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPluginType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPluginType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkPositionArray__Fields {
        void* m_Buffer;
        void* m_Current;
        uint32_t m_MaxCount;
        uint32_t _Count_k__BackingField;
    };

    struct AkPositionArray {
        struct AkPositionArray__Class* klass;
        MonitorData* monitor;
        struct AkPositionArray__Fields fields;
    };

    enum class AkMultiPositionType__Enum : int32_t {
        MultiPositionType_SingleSource = 0x00000000,
        MultiPositionType_MultiSources = 0x00000001,
        MultiPositionType_MultiDirections = 0x00000002,
    };

    struct AkMultiPositionType__Enum__Boxed {
        struct AkMultiPositionType__Enum__Class* klass;
        MonitorData* monitor;
        AkMultiPositionType__Enum value;
    };

    struct AkPositionArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct AkPositionArray__StaticFields {
    };

    struct AkPositionArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPositionArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPositionArray__VTable vtable;
    };

    struct AkMultiPositionType__Enum__VTable {
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

    struct AkMultiPositionType__Enum__StaticFields {
    };

    struct AkMultiPositionType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkMultiPositionType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkMultiPositionType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkChannelEmitterArray__Fields {
        void* m_Buffer;
        void* m_Current;
        uint32_t m_MaxCount;
        uint32_t _Count_k__BackingField;
    };

    struct AkChannelEmitterArray {
        struct AkChannelEmitterArray__Class* klass;
        MonitorData* monitor;
        struct AkChannelEmitterArray__Fields fields;
    };

    struct AkChannelEmitterArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
    };

    struct AkChannelEmitterArray__StaticFields {
    };

    struct AkChannelEmitterArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkChannelEmitterArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkChannelEmitterArray__VTable vtable;
    };

    struct AkCallbackManager_BankCallback__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AkCallbackManager_BankCallback {
        struct AkCallbackManager_BankCallback__Class* klass;
        MonitorData* monitor;
        struct AkCallbackManager_BankCallback__Fields fields;
    };

    struct AkCallbackManager_BankCallback__VTable {
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

    struct AkCallbackManager_BankCallback__StaticFields {
    };

    struct AkCallbackManager_BankCallback__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkCallbackManager_BankCallback__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkCallbackManager_BankCallback__VTable vtable;
    };

    enum class AkPreparationType__Enum : int32_t {
        Preparation_Load = 0x00000000,
        Preparation_Unload = 0x00000001,
        Preparation_LoadAndDecode = 0x00000002,
    };

    struct AkPreparationType__Enum__Boxed {
        struct AkPreparationType__Enum__Class* klass;
        MonitorData* monitor;
        AkPreparationType__Enum value;
    };

    enum class AkBankContent__Enum : int32_t {
        AkBankContent_StructureOnly = 0x00000000,
        AkBankContent_All = 0x00000001,
    };

    struct AkBankContent__Enum__Boxed {
        struct AkBankContent__Enum__Class* klass;
        MonitorData* monitor;
        AkBankContent__Enum value;
    };

    struct AkPreparationType__Enum__VTable {
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

    struct AkPreparationType__Enum__StaticFields {
    };

    struct AkPreparationType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkPreparationType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkPreparationType__Enum__VTable vtable;
    };

    struct AkBankContent__Enum__VTable {
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

    struct AkBankContent__Enum__StaticFields {
    };

    struct AkBankContent__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBankContent__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBankContent__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkBaseArray_1_AkSourceSettings___Fields {
        int32_t _Capacity_k__BackingField;
        void* m_Buffer;
    };

    struct AkBaseArray_1_AkSourceSettings_ {
        struct AkBaseArray_1_AkSourceSettings___Class* klass;
        MonitorData* monitor;
        struct AkBaseArray_1_AkSourceSettings___Fields fields;
    };

    struct AkSourceSettingsArray__Fields {
        struct AkBaseArray_1_AkSourceSettings___Fields _;
    };

    struct AkSourceSettingsArray {
        struct AkSourceSettingsArray__Class* klass;
        MonitorData* monitor;
        struct AkSourceSettingsArray__Fields fields;
    };

    struct AkBaseArray_1_AkSourceSettings___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData __unknown;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct AkBaseArray_1_AkSourceSettings___StaticFields {
    };

    struct AkBaseArray_1_AkSourceSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBaseArray_1_AkSourceSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBaseArray_1_AkSourceSettings___VTable vtable;
    };

    struct AkSourceSettingsArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData get_StructureSize;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData CreateNewReferenceFromIntPtr;
        VirtualInvokeData CloneIntoReferenceFromIntPtr;
    };

    struct AkSourceSettingsArray__StaticFields {
    };

    struct AkSourceSettingsArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkSourceSettingsArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkSourceSettingsArray__VTable vtable;
    };

    enum class AkGroupType__Enum : int32_t {
        AkGroupType_Switch = 0x00000000,
        AkGroupType_State = 0x00000001,
    };

    struct AkGroupType__Enum__Boxed {
        struct AkGroupType__Enum__Class* klass;
        MonitorData* monitor;
        AkGroupType__Enum value;
    };

    struct AkGroupType__Enum__VTable {
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

    struct AkGroupType__Enum__StaticFields {
    };

    struct AkGroupType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkGroupType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkGroupType__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkBaseArray_1_AkObstructionOcclusionValues___Fields {
        int32_t _Capacity_k__BackingField;
        void* m_Buffer;
    };

    struct AkBaseArray_1_AkObstructionOcclusionValues_ {
        struct AkBaseArray_1_AkObstructionOcclusionValues___Class* klass;
        MonitorData* monitor;
        struct AkBaseArray_1_AkObstructionOcclusionValues___Fields fields;
    };

    struct AkObstructionOcclusionValuesArray__Fields {
        struct AkBaseArray_1_AkObstructionOcclusionValues___Fields _;
    };

    struct AkObstructionOcclusionValuesArray {
        struct AkObstructionOcclusionValuesArray__Class* klass;
        MonitorData* monitor;
        struct AkObstructionOcclusionValuesArray__Fields fields;
    };

    struct AkBaseArray_1_AkObstructionOcclusionValues___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData __unknown;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct AkBaseArray_1_AkObstructionOcclusionValues___StaticFields {
    };

    struct AkBaseArray_1_AkObstructionOcclusionValues___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBaseArray_1_AkObstructionOcclusionValues___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBaseArray_1_AkObstructionOcclusionValues___VTable vtable;
    };

    struct AkObstructionOcclusionValuesArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData get_StructureSize;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData CreateNewReferenceFromIntPtr;
        VirtualInvokeData CloneIntoReferenceFromIntPtr;
    };

    struct AkObstructionOcclusionValuesArray__StaticFields {
    };

    struct AkObstructionOcclusionValuesArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkObstructionOcclusionValuesArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkObstructionOcclusionValuesArray__VTable vtable;
    };

    struct __declspec(align(8)) AkBaseArray_1_AkObjectInfo___Fields {
        int32_t _Capacity_k__BackingField;
        void* m_Buffer;
    };

    struct AkBaseArray_1_AkObjectInfo_ {
        struct AkBaseArray_1_AkObjectInfo___Class* klass;
        MonitorData* monitor;
        struct AkBaseArray_1_AkObjectInfo___Fields fields;
    };

    struct AkObjectInfoArray__Fields {
        struct AkBaseArray_1_AkObjectInfo___Fields _;
    };

    struct AkObjectInfoArray {
        struct AkObjectInfoArray__Class* klass;
        MonitorData* monitor;
        struct AkObjectInfoArray__Fields fields;
    };

    struct AkBaseArray_1_AkObjectInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData __unknown;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct AkBaseArray_1_AkObjectInfo___StaticFields {
    };

    struct AkBaseArray_1_AkObjectInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBaseArray_1_AkObjectInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBaseArray_1_AkObjectInfo___VTable vtable;
    };

    struct AkObjectInfoArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData get_StructureSize;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData CreateNewReferenceFromIntPtr;
        VirtualInvokeData CloneIntoReferenceFromIntPtr;
    };

    struct AkObjectInfoArray__StaticFields {
    };

    struct AkObjectInfoArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkObjectInfoArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkObjectInfoArray__VTable vtable;
    };

    enum class AkChannelOrdering__Enum : int32_t {
        ChannelOrdering_Standard = 0x00000000,
        ChannelOrdering_RunTime = 0x00000001,
    };

    struct AkChannelOrdering__Enum__Boxed {
        struct AkChannelOrdering__Enum__Class* klass;
        MonitorData* monitor;
        AkChannelOrdering__Enum value;
    };

    struct AkChannelOrdering__Enum__VTable {
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

    struct AkChannelOrdering__Enum__StaticFields {
    };

    struct AkChannelOrdering__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkChannelOrdering__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkChannelOrdering__Enum__VTable vtable;
    };

    struct __declspec(align(8)) AkBaseArray_1_AkReflectionPathInfo___Fields {
        int32_t _Capacity_k__BackingField;
        void* m_Buffer;
    };

    struct AkBaseArray_1_AkReflectionPathInfo_ {
        struct AkBaseArray_1_AkReflectionPathInfo___Class* klass;
        MonitorData* monitor;
        struct AkBaseArray_1_AkReflectionPathInfo___Fields fields;
    };

    struct AkReflectionPathInfoArray__Fields {
        struct AkBaseArray_1_AkReflectionPathInfo___Fields _;
    };

    struct AkReflectionPathInfoArray {
        struct AkReflectionPathInfoArray__Class* klass;
        MonitorData* monitor;
        struct AkReflectionPathInfoArray__Fields fields;
    };

    struct AkBaseArray_1_AkReflectionPathInfo___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData __unknown;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData __unknown_2;
    };

    struct AkBaseArray_1_AkReflectionPathInfo___StaticFields {
    };

    struct AkBaseArray_1_AkReflectionPathInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkBaseArray_1_AkReflectionPathInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkBaseArray_1_AkReflectionPathInfo___VTable vtable;
    };

    struct AkReflectionPathInfoArray__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Dispose;
        VirtualInvokeData Count;
        VirtualInvokeData get_StructureSize;
        VirtualInvokeData DefaultConstructAtIntPtr;
        VirtualInvokeData ReleaseAllocatedMemoryFromReferenceAtIntPtr;
        VirtualInvokeData CreateNewReferenceFromIntPtr;
        VirtualInvokeData CloneIntoReferenceFromIntPtr;
    };

    struct AkReflectionPathInfoArray__StaticFields {
    };

    struct AkReflectionPathInfoArray__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkReflectionPathInfoArray__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkReflectionPathInfoArray__VTable vtable;
    };

    enum class AkAudioDeviceState__Enum : int32_t {
        AkDeviceState_Active = 0x00000001,
        AkDeviceState_Disabled = 0x00000002,
        AkDeviceState_NotPresent = 0x00000004,
        AkDeviceState_Unplugged = 0x00000008,
        AkDeviceState_All = 0x0000000f,
    };

    struct AkAudioDeviceState__Enum__Boxed {
        struct AkAudioDeviceState__Enum__Class* klass;
        MonitorData* monitor;
        AkAudioDeviceState__Enum value;
    };

    struct AkAudioDeviceState__Enum__VTable {
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

    struct AkAudioDeviceState__Enum__StaticFields {
    };

    struct AkAudioDeviceState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AkAudioDeviceState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AkAudioDeviceState__Enum__VTable vtable;
    };

    struct AkLogger_ErrorLoggerInteropDelegate__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct AkLogger_ErrorLoggerInteropDelegate {
        struct AkLogger_ErrorLoggerInteropDelegate__Class* klass;
        MonitorData* monitor;
        struct AkLogger_ErrorLoggerInteropDelegate__Fields fields;
    };

    struct AkLogger_ErrorLoggerInteropDelegate__VTable {
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
