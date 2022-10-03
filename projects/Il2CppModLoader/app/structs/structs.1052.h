namespace app {
    struct IVRCompositor_GetLastPoses__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetLastPoses {
        struct IVRCompositor_GetLastPoses__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetLastPoses__Fields fields;
    };

    struct IVRCompositor_GetLastPoses__VTable {
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

    struct IVRCompositor_GetLastPoses__StaticFields {
    };

    struct IVRCompositor_GetLastPoses__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetLastPoses__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetLastPoses__VTable vtable;
    };

    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex {
        struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__Fields fields;
    };

    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__VTable {
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

    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__StaticFields {
    };

    struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetLastPoseForTrackedDeviceIndex__VTable vtable;
    };

    struct IVRCompositor_Submit__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_Submit {
        struct IVRCompositor_Submit__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_Submit__Fields fields;
    };

    enum class EColorSpace__Enum : int32_t {
        Auto = 0x00000000,
        Gamma = 0x00000001,
        Linear = 0x00000002,
    };

    struct EColorSpace__Enum__Boxed {
        struct EColorSpace__Enum__Class* klass;
        MonitorData* monitor;
        EColorSpace__Enum value;
    };

    struct Texture_t {
        void* handle;
        ETextureType__Enum eType;

        EColorSpace__Enum eColorSpace;
    };

    struct Texture_t__Boxed {
        struct Texture_t__Class* klass;
        MonitorData* monitor;
        struct Texture_t fields;
    };

    enum class EVRSubmitFlags__Enum : int32_t {
        Submit_Default = 0x00000000,
        Submit_LensDistortionAlreadyApplied = 0x00000001,
        Submit_GlRenderBuffer = 0x00000002,
        Submit_Reserved = 0x00000004,
        Submit_TextureWithPose = 0x00000008,
    };

    struct EVRSubmitFlags__Enum__Boxed {
        struct EVRSubmitFlags__Enum__Class* klass;
        MonitorData* monitor;
        EVRSubmitFlags__Enum value;
    };

    struct EColorSpace__Enum__VTable {
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

    struct EColorSpace__Enum__StaticFields {
    };

    struct EColorSpace__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EColorSpace__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EColorSpace__Enum__VTable vtable;
    };

    struct Texture_t__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Texture_t__StaticFields {
    };

    struct Texture_t__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Texture_t__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Texture_t__VTable vtable;
    };

    struct Texture_t___VTable {
    };

    struct Texture_t___StaticFields {
    };

    struct Texture_t___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Texture_t___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Texture_t___VTable vtable;
    };

    struct EVRSubmitFlags__Enum__VTable {
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

    struct EVRSubmitFlags__Enum__StaticFields {
    };

    struct EVRSubmitFlags__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EVRSubmitFlags__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EVRSubmitFlags__Enum__VTable vtable;
    };

    struct IVRCompositor_Submit__VTable {
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

    struct IVRCompositor_Submit__StaticFields {
    };

    struct IVRCompositor_Submit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_Submit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_Submit__VTable vtable;
    };

    struct IVRCompositor_ClearLastSubmittedFrame__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_ClearLastSubmittedFrame {
        struct IVRCompositor_ClearLastSubmittedFrame__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_ClearLastSubmittedFrame__Fields fields;
    };

    struct IVRCompositor_ClearLastSubmittedFrame__VTable {
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

    struct IVRCompositor_ClearLastSubmittedFrame__StaticFields {
    };

    struct IVRCompositor_ClearLastSubmittedFrame__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_ClearLastSubmittedFrame__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_ClearLastSubmittedFrame__VTable vtable;
    };

    struct IVRCompositor_PostPresentHandoff__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_PostPresentHandoff {
        struct IVRCompositor_PostPresentHandoff__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_PostPresentHandoff__Fields fields;
    };

    struct IVRCompositor_PostPresentHandoff__VTable {
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

    struct IVRCompositor_PostPresentHandoff__StaticFields {
    };

    struct IVRCompositor_PostPresentHandoff__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_PostPresentHandoff__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_PostPresentHandoff__VTable vtable;
    };

    struct IVRCompositor_GetFrameTiming__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetFrameTiming {
        struct IVRCompositor_GetFrameTiming__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetFrameTiming__Fields fields;
    };

    struct Compositor_FrameTiming {
        uint32_t m_nSize;
        uint32_t m_nFrameIndex;
        uint32_t m_nNumFramePresents;
        uint32_t m_nNumMisPresented;
        uint32_t m_nNumDroppedFrames;
        uint32_t m_nReprojectionFlags;
        double m_flSystemTimeInSeconds;
        float m_flPreSubmitGpuMs;
        float m_flPostSubmitGpuMs;
        float m_flTotalRenderGpuMs;
        float m_flCompositorRenderGpuMs;
        float m_flCompositorRenderCpuMs;
        float m_flCompositorIdleCpuMs;
        float m_flClientFrameIntervalMs;
        float m_flPresentCallCpuMs;
        float m_flWaitForPresentCpuMs;
        float m_flSubmitFrameMs;
        float m_flWaitGetPosesCalledMs;
        float m_flNewPosesReadyMs;
        float m_flNewFrameReadyMs;
        float m_flCompositorUpdateStartMs;
        float m_flCompositorUpdateEndMs;
        float m_flCompositorRenderStartMs;
        struct TrackedDevicePose_t m_HmdPose;
    };

    struct Compositor_FrameTiming__Boxed {
        struct Compositor_FrameTiming__Class* klass;
        MonitorData* monitor;
        struct Compositor_FrameTiming fields;
    };

    struct Compositor_FrameTiming__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Compositor_FrameTiming__StaticFields {
    };

    struct Compositor_FrameTiming__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Compositor_FrameTiming__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Compositor_FrameTiming__VTable vtable;
    };

    struct Compositor_FrameTiming___VTable {
    };

    struct Compositor_FrameTiming___StaticFields {
    };

    struct Compositor_FrameTiming___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Compositor_FrameTiming___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Compositor_FrameTiming___VTable vtable;
    };

    struct IVRCompositor_GetFrameTiming__VTable {
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

    struct IVRCompositor_GetFrameTiming__StaticFields {
    };

    struct IVRCompositor_GetFrameTiming__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetFrameTiming__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetFrameTiming__VTable vtable;
    };

    struct IVRCompositor_GetFrameTimings__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetFrameTimings {
        struct IVRCompositor_GetFrameTimings__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetFrameTimings__Fields fields;
    };

    struct IVRCompositor_GetFrameTimings__VTable {
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

    struct IVRCompositor_GetFrameTimings__StaticFields {
    };

    struct IVRCompositor_GetFrameTimings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetFrameTimings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetFrameTimings__VTable vtable;
    };

    struct IVRCompositor_GetFrameTimeRemaining__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetFrameTimeRemaining {
        struct IVRCompositor_GetFrameTimeRemaining__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetFrameTimeRemaining__Fields fields;
    };

    struct IVRCompositor_GetFrameTimeRemaining__VTable {
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

    struct IVRCompositor_GetFrameTimeRemaining__StaticFields {
    };

    struct IVRCompositor_GetFrameTimeRemaining__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetFrameTimeRemaining__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetFrameTimeRemaining__VTable vtable;
    };

    struct IVRCompositor_GetCumulativeStats__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetCumulativeStats {
        struct IVRCompositor_GetCumulativeStats__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetCumulativeStats__Fields fields;
    };

    struct Compositor_CumulativeStats {
        uint32_t m_nPid;
        uint32_t m_nNumFramePresents;
        uint32_t m_nNumDroppedFrames;
        uint32_t m_nNumReprojectedFrames;
        uint32_t m_nNumFramePresentsOnStartup;
        uint32_t m_nNumDroppedFramesOnStartup;
        uint32_t m_nNumReprojectedFramesOnStartup;
        uint32_t m_nNumLoading;
        uint32_t m_nNumFramePresentsLoading;
        uint32_t m_nNumDroppedFramesLoading;
        uint32_t m_nNumReprojectedFramesLoading;
        uint32_t m_nNumTimedOut;
        uint32_t m_nNumFramePresentsTimedOut;
        uint32_t m_nNumDroppedFramesTimedOut;
        uint32_t m_nNumReprojectedFramesTimedOut;
    };

    struct Compositor_CumulativeStats__Boxed {
        struct Compositor_CumulativeStats__Class* klass;
        MonitorData* monitor;
        struct Compositor_CumulativeStats fields;
    };

    struct Compositor_CumulativeStats__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Compositor_CumulativeStats__StaticFields {
    };

    struct Compositor_CumulativeStats__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Compositor_CumulativeStats__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Compositor_CumulativeStats__VTable vtable;
    };

    struct Compositor_CumulativeStats___VTable {
    };

    struct Compositor_CumulativeStats___StaticFields {
    };

    struct Compositor_CumulativeStats___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Compositor_CumulativeStats___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Compositor_CumulativeStats___VTable vtable;
    };

    struct IVRCompositor_GetCumulativeStats__VTable {
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

    struct IVRCompositor_GetCumulativeStats__StaticFields {
    };

    struct IVRCompositor_GetCumulativeStats__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetCumulativeStats__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetCumulativeStats__VTable vtable;
    };

    struct IVRCompositor_FadeToColor__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_FadeToColor {
        struct IVRCompositor_FadeToColor__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_FadeToColor__Fields fields;
    };

    struct IVRCompositor_FadeToColor__VTable {
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

    struct IVRCompositor_FadeToColor__StaticFields {
    };

    struct IVRCompositor_FadeToColor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_FadeToColor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_FadeToColor__VTable vtable;
    };

    struct IVRCompositor_GetCurrentFadeColor__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetCurrentFadeColor {
        struct IVRCompositor_GetCurrentFadeColor__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetCurrentFadeColor__Fields fields;
    };

    struct IVRCompositor_GetCurrentFadeColor__VTable {
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

    struct IVRCompositor_GetCurrentFadeColor__StaticFields {
    };

    struct IVRCompositor_GetCurrentFadeColor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetCurrentFadeColor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetCurrentFadeColor__VTable vtable;
    };

    struct IVRCompositor_FadeGrid__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_FadeGrid {
        struct IVRCompositor_FadeGrid__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_FadeGrid__Fields fields;
    };

    struct IVRCompositor_FadeGrid__VTable {
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

    struct IVRCompositor_FadeGrid__StaticFields {
    };

    struct IVRCompositor_FadeGrid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_FadeGrid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_FadeGrid__VTable vtable;
    };

    struct IVRCompositor_GetCurrentGridAlpha__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_GetCurrentGridAlpha {
        struct IVRCompositor_GetCurrentGridAlpha__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_GetCurrentGridAlpha__Fields fields;
    };

    struct IVRCompositor_GetCurrentGridAlpha__VTable {
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

    struct IVRCompositor_GetCurrentGridAlpha__StaticFields {
    };

    struct IVRCompositor_GetCurrentGridAlpha__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_GetCurrentGridAlpha__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_GetCurrentGridAlpha__VTable vtable;
    };

    struct IVRCompositor_SetSkyboxOverride__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_SetSkyboxOverride {
        struct IVRCompositor_SetSkyboxOverride__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_SetSkyboxOverride__Fields fields;
    };

    struct Texture_t__Array {
        struct Texture_t__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Texture_t vector[32];
    };

    struct Texture_t__Array__VTable {
    };

    struct Texture_t__Array__StaticFields {
    };

    struct Texture_t__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Texture_t__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Texture_t__Array__VTable vtable;
    };

    struct IVRCompositor_SetSkyboxOverride__VTable {
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

    struct IVRCompositor_SetSkyboxOverride__StaticFields {
    };

    struct IVRCompositor_SetSkyboxOverride__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_SetSkyboxOverride__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_SetSkyboxOverride__VTable vtable;
    };

    struct IVRCompositor_ClearSkyboxOverride__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_ClearSkyboxOverride {
        struct IVRCompositor_ClearSkyboxOverride__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_ClearSkyboxOverride__Fields fields;
    };

    struct IVRCompositor_ClearSkyboxOverride__VTable {
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

    struct IVRCompositor_ClearSkyboxOverride__StaticFields {
    };

    struct IVRCompositor_ClearSkyboxOverride__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_ClearSkyboxOverride__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_ClearSkyboxOverride__VTable vtable;
    };

    struct IVRCompositor_CompositorBringToFront__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_CompositorBringToFront {
        struct IVRCompositor_CompositorBringToFront__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_CompositorBringToFront__Fields fields;
    };

    struct IVRCompositor_CompositorBringToFront__VTable {
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

    struct IVRCompositor_CompositorBringToFront__StaticFields {
    };

    struct IVRCompositor_CompositorBringToFront__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_CompositorBringToFront__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_CompositorBringToFront__VTable vtable;
    };

    struct IVRCompositor_CompositorGoToBack__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_CompositorGoToBack {
        struct IVRCompositor_CompositorGoToBack__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_CompositorGoToBack__Fields fields;
    };

    struct IVRCompositor_CompositorGoToBack__VTable {
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

    struct IVRCompositor_CompositorGoToBack__StaticFields {
    };

    struct IVRCompositor_CompositorGoToBack__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IVRCompositor_CompositorGoToBack__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IVRCompositor_CompositorGoToBack__VTable vtable;
    };

    struct IVRCompositor_CompositorQuit__Fields {
        struct MulticastDelegate__Fields _;
    };

    struct IVRCompositor_CompositorQuit {
        struct IVRCompositor_CompositorQuit__Class* klass;
        MonitorData* monitor;
        struct IVRCompositor_CompositorQuit__Fields fields;
    };

    struct IVRCompositor_CompositorQuit__VTable {
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
