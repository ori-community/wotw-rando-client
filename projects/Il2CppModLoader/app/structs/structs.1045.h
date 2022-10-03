namespace app {
    struct IVRSystem_SetDisplayVisibility__StaticFields {
    };

    struct IVRSystem_SetDisplayVisibility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_SetDisplayVisibility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_SetDisplayVisibility__VTable vtable;
    };

    struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetDeviceToAbsoluteTrackingPose {
        struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Fields fields;
    };

    enum class ETrackingUniverseOrigin__Enum : int32_t {
        TrackingUniverseSeated = 0x00000000,
        TrackingUniverseStanding = 0x00000001,
        TrackingUniverseRawAndUncalibrated = 0x00000002,
    };

    struct ETrackingUniverseOrigin__Enum__Boxed {
        struct ETrackingUniverseOrigin__Enum__Class* klass;
        MonitorData* monitor;
        ETrackingUniverseOrigin__Enum value;
    };

    struct HmdVector3_t {
        float v0;
        float v1;
        float v2;
    };

    struct HmdVector3_t__Boxed {
        struct HmdVector3_t__Class* klass;
        MonitorData* monitor;
        struct HmdVector3_t fields;
    };

    enum class ETrackingResult__Enum : int32_t {
        Uninitialized = 0x00000001,
        Calibrating_InProgress = 0x00000064,
        Calibrating_OutOfRange = 0x00000065,
        Running_OK = 0x000000c8,
        Running_OutOfRange = 0x000000c9,
    };

    struct ETrackingResult__Enum__Boxed {
        struct ETrackingResult__Enum__Class* klass;
        MonitorData* monitor;
        ETrackingResult__Enum value;
    };

    struct TrackedDevicePose_t {
        struct HmdMatrix34_t mDeviceToAbsoluteTracking;
        struct HmdVector3_t vVelocity;
        struct HmdVector3_t vAngularVelocity;
        ETrackingResult__Enum eTrackingResult;

        bool bPoseIsValid;
        bool bDeviceIsConnected;
    };

    struct TrackedDevicePose_t__Boxed {
        struct TrackedDevicePose_t__Class* klass;
        MonitorData* monitor;
        struct TrackedDevicePose_t fields;
    };

    struct TrackedDevicePose_t__Array {
        struct TrackedDevicePose_t__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TrackedDevicePose_t vector[32];
    };

    struct ETrackingUniverseOrigin__Enum__VTable {
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

    struct ETrackingUniverseOrigin__Enum__StaticFields {
    };

    struct ETrackingUniverseOrigin__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ETrackingUniverseOrigin__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ETrackingUniverseOrigin__Enum__VTable vtable;
    };

    struct HmdVector3_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HmdVector3_t__StaticFields {
    };

    struct HmdVector3_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HmdVector3_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HmdVector3_t__VTable vtable;
    };

    struct ETrackingResult__Enum__VTable {
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

    struct ETrackingResult__Enum__StaticFields {
    };

    struct ETrackingResult__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ETrackingResult__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ETrackingResult__Enum__VTable vtable;
    };

    struct TrackedDevicePose_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TrackedDevicePose_t__StaticFields {
    };

    struct TrackedDevicePose_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrackedDevicePose_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrackedDevicePose_t__VTable vtable;
    };

    struct TrackedDevicePose_t__Array__VTable {
    };

    struct TrackedDevicePose_t__Array__StaticFields {
    };

    struct TrackedDevicePose_t__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrackedDevicePose_t__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrackedDevicePose_t__Array__VTable vtable;
    };

    struct IVRSystem_GetDeviceToAbsoluteTrackingPose__VTable {
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

    struct IVRSystem_GetDeviceToAbsoluteTrackingPose__StaticFields {
    };

    struct IVRSystem_GetDeviceToAbsoluteTrackingPose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetDeviceToAbsoluteTrackingPose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetDeviceToAbsoluteTrackingPose__VTable vtable;
    };

    struct IVRSystem_ResetSeatedZeroPose__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_ResetSeatedZeroPose {
        struct IVRSystem_ResetSeatedZeroPose__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_ResetSeatedZeroPose__Fields fields;
    };

    struct IVRSystem_ResetSeatedZeroPose__VTable {
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

    struct IVRSystem_ResetSeatedZeroPose__StaticFields {
    };

    struct IVRSystem_ResetSeatedZeroPose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_ResetSeatedZeroPose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_ResetSeatedZeroPose__VTable vtable;
    };

    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose {
        struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Fields fields;
    };

    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__VTable {
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

    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__StaticFields {
    };

    struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetSeatedZeroPoseToStandingAbsoluteTrackingPose__VTable vtable;
    };

    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose {
        struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Fields fields;
    };

    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__VTable {
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

    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__StaticFields {
    };

    struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetRawZeroPoseToStandingAbsoluteTrackingPose__VTable vtable;
    };

    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass {
        struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Fields fields;
    };

    enum class ETrackedDeviceClass__Enum : int32_t {
        Invalid = 0x00000000,
        HMD = 0x00000001,
        Controller = 0x00000002,
        GenericTracker = 0x00000003,
        TrackingReference = 0x00000004,
        DisplayRedirect = 0x00000005,
    };

    struct ETrackedDeviceClass__Enum__Boxed {
        struct ETrackedDeviceClass__Enum__Class* klass;
        MonitorData* monitor;
        ETrackedDeviceClass__Enum value;
    };

    struct ETrackedDeviceClass__Enum__VTable {
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

    struct ETrackedDeviceClass__Enum__StaticFields {
    };

    struct ETrackedDeviceClass__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ETrackedDeviceClass__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ETrackedDeviceClass__Enum__VTable vtable;
    };

    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__VTable {
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

    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__StaticFields {
    };

    struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetSortedTrackedDeviceIndicesOfClass__VTable vtable;
    };

    struct IVRSystem_GetTrackedDeviceActivityLevel__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetTrackedDeviceActivityLevel {
        struct IVRSystem_GetTrackedDeviceActivityLevel__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetTrackedDeviceActivityLevel__Fields fields;
    };

    enum class EDeviceActivityLevel__Enum : int32_t {
        k_EDeviceActivityLevel_Unknown = -1,
        k_EDeviceActivityLevel_Idle = 0x00000000,
        k_EDeviceActivityLevel_UserInteraction = 0x00000001,
        k_EDeviceActivityLevel_UserInteraction_Timeout = 0x00000002,
        k_EDeviceActivityLevel_Standby = 0x00000003,
    };

    struct EDeviceActivityLevel__Enum__Boxed {
        struct EDeviceActivityLevel__Enum__Class* klass;
        MonitorData* monitor;
        EDeviceActivityLevel__Enum value;
    };

    struct EDeviceActivityLevel__Enum__VTable {
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

    struct EDeviceActivityLevel__Enum__StaticFields {
    };

    struct EDeviceActivityLevel__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EDeviceActivityLevel__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EDeviceActivityLevel__Enum__VTable vtable;
    };

    struct IVRSystem_GetTrackedDeviceActivityLevel__VTable {
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

    struct IVRSystem_GetTrackedDeviceActivityLevel__StaticFields {
    };

    struct IVRSystem_GetTrackedDeviceActivityLevel__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetTrackedDeviceActivityLevel__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetTrackedDeviceActivityLevel__VTable vtable;
    };

    struct IVRSystem_ApplyTransform__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_ApplyTransform {
        struct IVRSystem_ApplyTransform__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_ApplyTransform__Fields fields;
    };

    struct TrackedDevicePose_t___VTable {
    };

    struct TrackedDevicePose_t___StaticFields {
    };

    struct TrackedDevicePose_t___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TrackedDevicePose_t___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TrackedDevicePose_t___VTable vtable;
    };

    struct HmdMatrix34_t___VTable {
    };

    struct HmdMatrix34_t___StaticFields {
    };

    struct HmdMatrix34_t___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HmdMatrix34_t___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HmdMatrix34_t___VTable vtable;
    };

    struct IVRSystem_ApplyTransform__VTable {
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

    struct IVRSystem_ApplyTransform__StaticFields {
    };

    struct IVRSystem_ApplyTransform__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_ApplyTransform__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_ApplyTransform__VTable vtable;
    };

    struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetTrackedDeviceIndexForControllerRole {
        struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Fields fields;
    };

    enum class ETrackedControllerRole__Enum : int32_t {
        Invalid = 0x00000000,
        LeftHand = 0x00000001,
        RightHand = 0x00000002,
    };

    struct ETrackedControllerRole__Enum__Boxed {
        struct ETrackedControllerRole__Enum__Class* klass;
        MonitorData* monitor;
        ETrackedControllerRole__Enum value;
    };

    struct ETrackedControllerRole__Enum__VTable {
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

    struct ETrackedControllerRole__Enum__StaticFields {
    };

    struct ETrackedControllerRole__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ETrackedControllerRole__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ETrackedControllerRole__Enum__VTable vtable;
    };

    struct IVRSystem_GetTrackedDeviceIndexForControllerRole__VTable {
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

    struct IVRSystem_GetTrackedDeviceIndexForControllerRole__StaticFields {
    };

    struct IVRSystem_GetTrackedDeviceIndexForControllerRole__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetTrackedDeviceIndexForControllerRole__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetTrackedDeviceIndexForControllerRole__VTable vtable;
    };

    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex {
        struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Fields fields;
    };

    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__VTable {
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

    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__StaticFields {
    };

    struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetControllerRoleForTrackedDeviceIndex__VTable vtable;
    };

    struct IVRSystem_GetTrackedDeviceClass__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetTrackedDeviceClass {
        struct IVRSystem_GetTrackedDeviceClass__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetTrackedDeviceClass__Fields fields;
    };

    struct IVRSystem_GetTrackedDeviceClass__VTable {
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

    struct IVRSystem_GetTrackedDeviceClass__StaticFields {
    };

    struct IVRSystem_GetTrackedDeviceClass__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_GetTrackedDeviceClass__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_GetTrackedDeviceClass__VTable vtable;
    };

    struct IVRSystem_IsTrackedDeviceConnected__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_IsTrackedDeviceConnected {
        struct IVRSystem_IsTrackedDeviceConnected__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_IsTrackedDeviceConnected__Fields fields;
    };

    struct IVRSystem_IsTrackedDeviceConnected__VTable {
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

    struct IVRSystem_IsTrackedDeviceConnected__StaticFields {
    };

    struct IVRSystem_IsTrackedDeviceConnected__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRSystem_IsTrackedDeviceConnected__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRSystem_IsTrackedDeviceConnected__VTable vtable;
    };

    struct IVRSystem_GetBoolTrackedDeviceProperty__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRSystem_GetBoolTrackedDeviceProperty {
        struct IVRSystem_GetBoolTrackedDeviceProperty__Class* klass;
        MonitorData* monitor;
        struct IVRSystem_GetBoolTrackedDeviceProperty__Fields fields;
    };

    enum class ETrackedDeviceProperty__Enum : int32_t {
        Prop_Invalid = 0x00000000,
        Prop_TrackingSystemName_String = 0x000003e8,
        Prop_ModelNumber_String = 0x000003e9,
        Prop_SerialNumber_String = 0x000003ea,
        Prop_RenderModelName_String = 0x000003eb,
        Prop_WillDriftInYaw_Bool = 0x000003ec,
        Prop_ManufacturerName_String = 0x000003ed,
        Prop_TrackingFirmwareVersion_String = 0x000003ee,
        Prop_HardwareRevision_String = 0x000003ef,
        Prop_AllWirelessDongleDescriptions_String = 0x000003f0,
        Prop_ConnectedWirelessDongle_String = 0x000003f1,
        Prop_DeviceIsWireless_Bool = 0x000003f2,
        Prop_DeviceIsCharging_Bool = 0x000003f3,
        Prop_DeviceBatteryPercentage_Float = 0x000003f4,
        Prop_StatusDisplayTransform_Matrix34 = 0x000003f5,
        Prop_Firmware_UpdateAvailable_Bool = 0x000003f6,
        Prop_Firmware_ManualUpdate_Bool = 0x000003f7,
        Prop_Firmware_ManualUpdateURL_String = 0x000003f8,
        Prop_HardwareRevision_Uint64 = 0x000003f9,
        Prop_FirmwareVersion_Uint64 = 0x000003fa,
        Prop_FPGAVersion_Uint64 = 0x000003fb,
        Prop_VRCVersion_Uint64 = 0x000003fc,
        Prop_RadioVersion_Uint64 = 0x000003fd,
        Prop_DongleVersion_Uint64 = 0x000003fe,
        Prop_BlockServerShutdown_Bool = 0x000003ff,
        Prop_CanUnifyCoordinateSystemWithHmd_Bool = 0x00000400,
        Prop_ContainsProximitySensor_Bool = 0x00000401,
        Prop_DeviceProvidesBatteryStatus_Bool = 0x00000402,
        Prop_DeviceCanPowerOff_Bool = 0x00000403,
        Prop_Firmware_ProgrammingTarget_String = 0x00000404,
        Prop_DeviceClass_Int32 = 0x00000405,
        Prop_HasCamera_Bool = 0x00000406,
        Prop_DriverVersion_String = 0x00000407,
        Prop_Firmware_ForceUpdateRequired_Bool = 0x00000408,
        Prop_ViveSystemButtonFixRequired_Bool = 0x00000409,
        Prop_ParentDriver_Uint64 = 0x0000040a,
        Prop_ResourceRoot_String = 0x0000040b,
        Prop_ReportsTimeSinceVSync_Bool = 0x000007d0,
        Prop_SecondsFromVsyncToPhotons_Float = 0x000007d1,
        Prop_DisplayFrequency_Float = 0x000007d2,
        Prop_UserIpdMeters_Float = 0x000007d3,
        Prop_CurrentUniverseId_Uint64 = 0x000007d4,
        Prop_PreviousUniverseId_Uint64 = 0x000007d5,
        Prop_DisplayFirmwareVersion_Uint64 = 0x000007d6,
        Prop_IsOnDesktop_Bool = 0x000007d7,
        Prop_DisplayMCType_Int32 = 0x000007d8,
        Prop_DisplayMCOffset_Float = 0x000007d9,
        Prop_DisplayMCScale_Float = 0x000007da,
        Prop_EdidVendorID_Int32 = 0x000007db,
        Prop_DisplayMCImageLeft_String = 0x000007dc,
        Prop_DisplayMCImageRight_String = 0x000007dd,
        Prop_DisplayGCBlackClamp_Float = 0x000007de,
        Prop_EdidProductID_Int32 = 0x000007df,
        Prop_CameraToHeadTransform_Matrix34 = 0x000007e0,
        Prop_DisplayGCType_Int32 = 0x000007e1,
        Prop_DisplayGCOffset_Float = 0x000007e2,
        Prop_DisplayGCScale_Float = 0x000007e3,
        Prop_DisplayGCPrescale_Float = 0x000007e4,
        Prop_DisplayGCImage_String = 0x000007e5,
        Prop_LensCenterLeftU_Float = 0x000007e6,
        Prop_LensCenterLeftV_Float = 0x000007e7,
        Prop_LensCenterRightU_Float = 0x000007e8,
        Prop_LensCenterRightV_Float = 0x000007e9,
        Prop_UserHeadToEyeDepthMeters_Float = 0x000007ea,
        Prop_CameraFirmwareVersion_Uint64 = 0x000007eb,
        Prop_CameraFirmwareDescription_String = 0x000007ec,
        Prop_DisplayFPGAVersion_Uint64 = 0x000007ed,
        Prop_DisplayBootloaderVersion_Uint64 = 0x000007ee,
        Prop_DisplayHardwareVersion_Uint64 = 0x000007ef,
        Prop_AudioFirmwareVersion_Uint64 = 0x000007f0,
        Prop_CameraCompatibilityMode_Int32 = 0x000007f1,
        Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 0x000007f2,
        Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 0x000007f3,
        Prop_DisplaySuppressed_Bool = 0x000007f4,
        Prop_DisplayAllowNightMode_Bool = 0x000007f5,
        Prop_DisplayMCImageWidth_Int32 = 0x000007f6,
        Prop_DisplayMCImageHeight_Int32 = 0x000007f7,
        Prop_DisplayMCImageNumChannels_Int32 = 0x000007f8,
        Prop_DisplayMCImageData_Binary = 0x000007f9,
        Prop_SecondsFromPhotonsToVblank_Float = 0x000007fa,
        Prop_DriverDirectModeSendsVsyncEvents_Bool = 0x000007fb,
        Prop_DisplayDebugMode_Bool = 0x000007fc,
        Prop_GraphicsAdapterLuid_Uint64 = 0x000007fd,
        Prop_DriverProvidedChaperonePath_String = 0x00000800,
        Prop_AttachedDeviceId_String = 0x00000bb8,
        Prop_SupportedButtons_Uint64 = 0x00000bb9,
        Prop_Axis0Type_Int32 = 0x00000bba,
        Prop_Axis1Type_Int32 = 0x00000bbb,
        Prop_Axis2Type_Int32 = 0x00000bbc,
        Prop_Axis3Type_Int32 = 0x00000bbd,
        Prop_Axis4Type_Int32 = 0x00000bbe,
        Prop_ControllerRoleHint_Int32 = 0x00000bbf,
        Prop_FieldOfViewLeftDegrees_Float = 0x00000fa0,
        Prop_FieldOfViewRightDegrees_Float = 0x00000fa1,
        Prop_FieldOfViewTopDegrees_Float = 0x00000fa2,
        Prop_FieldOfViewBottomDegrees_Float = 0x00000fa3,
        Prop_TrackingRangeMinimumMeters_Float = 0x00000fa4,
        Prop_TrackingRangeMaximumMeters_Float = 0x00000fa5,
        Prop_ModeLabel_String = 0x00000fa6,
        Prop_IconPathName_String = 0x00001388,
        Prop_NamedIconPathDeviceOff_String = 0x00001389,
        Prop_NamedIconPathDeviceSearching_String = 0x0000138a,
        Prop_NamedIconPathDeviceSearchingAlert_String = 0x0000138b,
        Prop_NamedIconPathDeviceReady_String = 0x0000138c,
        Prop_NamedIconPathDeviceReadyAlert_String = 0x0000138d,
        Prop_NamedIconPathDeviceNotReady_String = 0x0000138e,
        Prop_NamedIconPathDeviceStandby_String = 0x0000138f,
        Prop_NamedIconPathDeviceAlertLow_String = 0x00001390,
        Prop_DisplayHiddenArea_Binary_Start = 0x000013ec,
        Prop_DisplayHiddenArea_Binary_End = 0x0000141e,
        Prop_UserConfigPath_String = 0x00001770,
        Prop_InstallPath_String = 0x00001771,
        Prop_HasDisplayComponent_Bool = 0x00001772,
        Prop_HasControllerComponent_Bool = 0x00001773,
        Prop_HasCameraComponent_Bool = 0x00001774,
        Prop_HasDriverDirectModeComponent_Bool = 0x00001775,
        Prop_HasVirtualDisplayComponent_Bool = 0x00001776,
        Prop_VendorSpecific_Reserved_Start = 0x00002710,
        Prop_VendorSpecific_Reserved_End = 0x00002af7,
    };

    struct ETrackedDeviceProperty__Enum__Boxed {
        struct ETrackedDeviceProperty__Enum__Class* klass;
        MonitorData* monitor;
        ETrackedDeviceProperty__Enum value;
    };

    enum class ETrackedPropertyError__Enum : int32_t {
        TrackedProp_Success = 0x00000000,
        TrackedProp_WrongDataType = 0x00000001,
        TrackedProp_WrongDeviceClass = 0x00000002,
        TrackedProp_BufferTooSmall = 0x00000003,
        TrackedProp_UnknownProperty = 0x00000004,
        TrackedProp_InvalidDevice = 0x00000005,
        TrackedProp_CouldNotContactServer = 0x00000006,
        TrackedProp_ValueNotProvidedByDevice = 0x00000007,
        TrackedProp_StringExceedsMaximumLength = 0x00000008,
        TrackedProp_NotYetAvailable = 0x00000009,
        TrackedProp_PermissionDenied = 0x0000000a,
        TrackedProp_InvalidOperation = 0x0000000b,
    };

    struct ETrackedPropertyError__Enum__Boxed {
        struct ETrackedPropertyError__Enum__Class* klass;
        MonitorData* monitor;
        ETrackedPropertyError__Enum value;
    };

    struct ETrackedDeviceProperty__Enum__VTable {
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

} // namespace app
