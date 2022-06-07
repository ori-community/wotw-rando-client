namespace app {
struct AkCallbackManager_BGMCallbackPackage__StaticFields {
};

struct AkCallbackManager_BGMCallbackPackage__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCallbackManager_BGMCallbackPackage__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCallbackManager_BGMCallbackPackage__VTable vtable;
};

struct AkBasePlatformSettings__Fields {
    struct ScriptableObject__Fields _;
};

struct AkBasePlatformSettings {
    struct AkBasePlatformSettings__Class *klass;
    MonitorData *monitor;
    struct AkBasePlatformSettings__Fields fields;
};

struct AkBasePlatformSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AkInitializationSettings;
    VirtualInvokeData get_AkSpatialAudioInitSettings;
    VirtualInvokeData get_CallbackManagerInitializationSettings;
    VirtualInvokeData get_InitialLanguage;
    VirtualInvokeData get_RenderDuringFocusLoss;
    VirtualInvokeData get_SoundbankPath;
    VirtualInvokeData get_AkCommunicationSettings;
    VirtualInvokeData get_UseAsyncOpen;
};

struct AkBasePlatformSettings__StaticFields {
};

struct AkBasePlatformSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkBasePlatformSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkBasePlatformSettings__VTable vtable;
};

enum class AkCommonOutputSettings_PanningRule__Enum : int32_t {
    Speakers = 0x00000000,
    Headphones = 0x00000001,
};

struct AkCommonOutputSettings_PanningRule__Enum__Boxed {
    struct AkCommonOutputSettings_PanningRule__Enum__Class *klass;
    MonitorData *monitor;
    AkCommonOutputSettings_PanningRule__Enum value;
    
};

struct __declspec(align(8)) AkCommonOutputSettings__Fields {
    struct String *m_AudioDeviceShareset;
    uint32_t m_DeviceID;
    AkCommonOutputSettings_PanningRule__Enum m_PanningRule;
    
    struct AkCommonOutputSettings_ChannelConfiguration *m_ChannelConfig;
};

struct AkCommonOutputSettings {
    struct AkCommonOutputSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonOutputSettings__Fields fields;
};

enum class AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum : int32_t {
    Anonymous = 0x00000000,
    Standard = 0x00000001,
    Ambisonic = 0x00000002,
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Boxed {
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class *klass;
    MonitorData *monitor;
    AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum value;
    
};

enum class AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum : int32_t {
    NONE = 0x00000000,
    FRONT_LEFT = 0x00000001,
    FRONT_RIGHT = 0x00000002,
    FRONT_CENTER = 0x00000004,
    LOW_FREQUENCY = 0x00000008,
    BACK_LEFT = 0x00000010,
    BACK_RIGHT = 0x00000020,
    BACK_CENTER = 0x00000100,
    SIDE_LEFT = 0x00000200,
    SIDE_RIGHT = 0x00000400,
    TOP = 0x00000800,
    HEIGHT_FRONT_LEFT = 0x00001000,
    HEIGHT_FRONT_CENTER = 0x00002000,
    HEIGHT_FRONT_RIGHT = 0x00004000,
    HEIGHT_BACK_LEFT = 0x00008000,
    HEIGHT_BACK_CENTER = 0x00010000,
    HEIGHT_BACK_RIGHT = 0x00020000,
    SETUP_MONO = 0x00000004,
    SETUP_0POINT1 = 0x00000008,
    SETUP_1POINT1 = 0x0000000c,
    SETUP_STEREO = 0x00000003,
    SETUP_2POINT1 = 0x0000000b,
    SETUP_3STEREO = 0x00000007,
    SETUP_3POINT1 = 0x0000000f,
    SETUP_4 = 0x00000603,
    SETUP_4POINT1 = 0x0000060b,
    SETUP_5 = 0x00000607,
    SETUP_5POINT1 = 0x0000060f,
    SETUP_6 = 0x00000633,
    SETUP_6POINT1 = 0x0000063b,
    SETUP_7 = 0x00000637,
    SETUP_7POINT1 = 0x0000063f,
    SETUP_SURROUND = 0x00000103,
    SETUP_DPL2 = 0x00000603,
    SETUP_HEIGHT_4 = 0x0002d000,
    SETUP_HEIGHT_5 = 0x0002f000,
    SETUP_HEIGHT_ALL = 0x0003f000,
    SETUP_AURO_222 = 0x00005603,
    SETUP_AURO_8 = 0x0002d603,
    SETUP_AURO_9 = 0x0002d607,
    SETUP_AURO_9POINT1 = 0x0002d60f,
    SETUP_AURO_10 = 0x0002de07,
    SETUP_AURO_10POINT1 = 0x0002de0f,
    SETUP_AURO_11 = 0x0002fe07,
    SETUP_AURO_11POINT1 = 0x0002fe0f,
    SETUP_AURO_11_740 = 0x0002d637,
    SETUP_AURO_11POINT1_740 = 0x0002d63f,
    SETUP_AURO_13_751 = 0x0002fe37,
    SETUP_AURO_13POINT1_751 = 0x0002fe3f,
    SETUP_DOLBY_5_0_2 = 0x00005607,
    SETUP_DOLBY_5_1_2 = 0x0000560f,
    SETUP_DOLBY_6_0_2 = 0x00005633,
    SETUP_DOLBY_6_1_2 = 0x0000563b,
    SETUP_DOLBY_6_0_4 = 0x0002d633,
    SETUP_DOLBY_6_1_4 = 0x0002d63b,
    SETUP_DOLBY_7_0_2 = 0x00005637,
    SETUP_DOLBY_7_1_2 = 0x0000563f,
    SETUP_DOLBY_7_0_4 = 0x0002d637,
    SETUP_DOLBY_7_1_4 = 0x0002d63f,
    SETUP_ALL_SPEAKERS = 0x0003ff3f,
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Boxed {
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class *klass;
    MonitorData *monitor;
    AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum value;
    
};

struct __declspec(align(8)) AkCommonOutputSettings_ChannelConfiguration__Fields {
    AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum m_ChannelConfigType;
    
    AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum m_ChannelMask;
    
    uint32_t m_NumberOfChannels;
};

struct AkCommonOutputSettings_ChannelConfiguration {
    struct AkCommonOutputSettings_ChannelConfiguration__Class *klass;
    MonitorData *monitor;
    struct AkCommonOutputSettings_ChannelConfiguration__Fields fields;
};

struct AkCommonOutputSettings_PanningRule__Enum__VTable {
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

struct AkCommonOutputSettings_PanningRule__Enum__StaticFields {
};

struct AkCommonOutputSettings_PanningRule__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonOutputSettings_PanningRule__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonOutputSettings_PanningRule__Enum__VTable vtable;
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__VTable {
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

struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__StaticFields {
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType__Enum__VTable vtable;
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__VTable {
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

struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__StaticFields {
};

struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonOutputSettings_ChannelConfiguration_ChannelMask__Enum__VTable vtable;
};

struct AkCommonOutputSettings_ChannelConfiguration__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AkCommonOutputSettings_ChannelConfiguration__StaticFields {
};

struct AkCommonOutputSettings_ChannelConfiguration__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonOutputSettings_ChannelConfiguration__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonOutputSettings_ChannelConfiguration__VTable vtable;
};

struct AkCommonOutputSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AkCommonOutputSettings__StaticFields {
};

struct AkCommonOutputSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonOutputSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonOutputSettings__VTable vtable;
};

struct AkSettingsValidationHandler {
    struct AkSettingsValidationHandler__Class *klass;
    MonitorData *monitor;
};

struct AkSettingsValidationHandler__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct AkSettingsValidationHandler__StaticFields {
};

struct AkSettingsValidationHandler__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkSettingsValidationHandler__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkSettingsValidationHandler__VTable vtable;
};

struct __declspec(align(8)) AkCommonUserSettings__Fields {
    struct String *m_BasePath;
    struct String *m_StartupLanguage;
    uint32_t m_PreparePoolSize;
    int32_t m_CallbackManagerBufferSize;
    bool m_EngineLogging;
    uint32_t m_MaximumNumberOfMemoryPools;
    uint32_t m_MaximumNumberOfPositioningPaths;
    uint32_t m_DefaultPoolSize;
    float m_MemoryCutoffThreshold;
    uint32_t m_CommandQueueSize;
    uint32_t m_SamplesPerFrame;
    struct AkCommonOutputSettings *m_MainOutputSettings;
    float m_StreamingLookAheadRatio;
    uint32_t m_StreamManagerPoolSize;
    uint32_t m_SampleRate;
    uint32_t m_LowerEnginePoolSize;
    float m_LowerEngineMemoryCutoffThreshold;
    uint16_t m_NumberOfRefillsInVoice;
    struct AkCommonUserSettings_SpatialAudioSettings *m_SpatialAudioSettings;
};

struct AkCommonUserSettings {
    struct AkCommonUserSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonUserSettings__Fields fields;
};

enum class AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum : int32_t {
    UseBuiltInParam = 0x00000001,
    UseObstruction = 0x00000002,
    CalcEmitterVirtualPosition = 0x00000008,
};

struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Boxed {
    struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class *klass;
    MonitorData *monitor;
    AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum value;
    
};

struct __declspec(align(8)) AkCommonUserSettings_SpatialAudioSettings__Fields {
    uint32_t m_PoolSize;
    uint32_t m_MaxSoundPropagationDepth;
    AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum m_DiffractionFlags;
    
    float m_MovementThreshold;
};

struct AkCommonUserSettings_SpatialAudioSettings {
    struct AkCommonUserSettings_SpatialAudioSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonUserSettings_SpatialAudioSettings__Fields fields;
};

struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__VTable {
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

struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__StaticFields {
};

struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonUserSettings_SpatialAudioSettings_DiffractionFlags__Enum__VTable vtable;
};

struct AkCommonUserSettings_SpatialAudioSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AkCommonUserSettings_SpatialAudioSettings__StaticFields {
};

struct AkCommonUserSettings_SpatialAudioSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonUserSettings_SpatialAudioSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonUserSettings_SpatialAudioSettings__VTable vtable;
};

struct AkCommonUserSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData CopyTo;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData CopyTo_2;
    VirtualInvokeData CopyTo_3;
    VirtualInvokeData CopyTo_4;
};

struct AkCommonUserSettings__StaticFields {
};

struct AkCommonUserSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonUserSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonUserSettings__VTable vtable;
};

struct __declspec(align(8)) AkCommonAdvancedSettings__Fields {
    uint32_t m_IOMemorySize;
    float m_TargetAutoStreamBufferLengthMs;
    bool m_UseStreamCache;
    uint32_t m_MaximumPinnedBytesInCache;
    int32_t m_PrepareEventMemoryPoolID;
    bool m_EnableGameSyncPreparation;
    uint32_t m_ContinuousPlaybackLookAhead;
    uint32_t m_MonitorPoolSize;
    uint32_t m_MonitorQueuePoolSize;
    uint32_t m_MaximumHardwareTimeoutMs;
    bool m_DebugOutOfRangeCheckEnabled;
    float m_DebugOutOfRangeLimit;
    struct AkCommonAdvancedSettings_SpatialAudioSettings *m_SpatialAudioSettings;
    bool m_RenderDuringFocusLoss;
    bool m_UseAsyncOpen;
};

struct AkCommonAdvancedSettings {
    struct AkCommonAdvancedSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonAdvancedSettings__Fields fields;
};

struct __declspec(align(8)) AkCommonAdvancedSettings_SpatialAudioSettings__Fields {
    float m_DiffractionShadowAttenuationFactor;
    float m_DiffractionShadowDegrees;
};

struct AkCommonAdvancedSettings_SpatialAudioSettings {
    struct AkCommonAdvancedSettings_SpatialAudioSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonAdvancedSettings_SpatialAudioSettings__Fields fields;
};

struct AkCommonAdvancedSettings_SpatialAudioSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AkCommonAdvancedSettings_SpatialAudioSettings__StaticFields {
};

struct AkCommonAdvancedSettings_SpatialAudioSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonAdvancedSettings_SpatialAudioSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonAdvancedSettings_SpatialAudioSettings__VTable vtable;
};

struct AkCommonAdvancedSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData CopyTo;
    VirtualInvokeData CopyTo_1;
    VirtualInvokeData CopyTo_2;
    VirtualInvokeData CopyTo_3;
    VirtualInvokeData CopyTo_4;
};

struct AkCommonAdvancedSettings__StaticFields {
};

struct AkCommonAdvancedSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonAdvancedSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonAdvancedSettings__VTable vtable;
};

struct __declspec(align(8)) AkCommonCommSettings__Fields {
    uint32_t m_PoolSize;
    uint16_t m_DiscoveryBroadcastPort;
    uint16_t m_CommandPort;
    uint16_t m_NotificationPort;
    bool m_InitializeSystemComms;
    struct String *m_NetworkName;
};

struct AkCommonCommSettings {
    struct AkCommonCommSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonCommSettings__Fields fields;
};

struct AkCommonCommSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData CopyTo;
};

struct AkCommonCommSettings__StaticFields {
    uint16_t DefaultDiscoveryBroadcastPort;
};

struct AkCommonCommSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkCommonCommSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkCommonCommSettings__VTable vtable;
};

struct __declspec(align(8)) MoonIntegrationSettings__Fields {
    uint32_t m_MaxRtpcSyncTasks;
    uint32_t m_MaxPositionSyncTasks;
    uint32_t m_MaxListenerZoneTasks;
    uint32_t m_MaxEmitterZoneTasks;
    uint32_t m_MaxControlledEvents;
    uint32_t m_MaxListenerSyncTasks;
    uint32_t m_MaxArtificialSoundHosts;
    uint32_t m_ArtificialSoundHostIdRange;
    struct SoundBankCollection *m_GlobalSoundBankCollection;
};

struct MoonIntegrationSettings {
    struct MoonIntegrationSettings__Class *klass;
    MonitorData *monitor;
    struct MoonIntegrationSettings__Fields fields;
};

struct SoundBankCollection__Fields {
    struct ScriptableObject__Fields _;
    struct String__Array *Banks;
    struct Bank__Array *WwiseBanks;
};

struct SoundBankCollection {
    struct SoundBankCollection__Class *klass;
    MonitorData *monitor;
    struct SoundBankCollection__Fields fields;
};

struct Bank__Fields {
    struct BaseType__Fields _;
};

struct Bank {
    struct Bank__Class *klass;
    MonitorData *monitor;
    struct Bank__Fields fields;
};

struct Bank__Array {
    struct Bank__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Bank *vector[32];
};

struct Bank__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Equals_1;
    VirtualInvokeData get_WwiseObjectType;
    VirtualInvokeData get_Name;
    VirtualInvokeData IsValid;
};

struct Bank__StaticFields {
};

struct Bank__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bank__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bank__VTable vtable;
};

struct Bank__Array__VTable {
};

struct Bank__Array__StaticFields {
};

struct Bank__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Bank__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Bank__Array__VTable vtable;
};

struct SoundBankCollection__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SoundBankCollection__StaticFields {
};

struct SoundBankCollection__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SoundBankCollection__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SoundBankCollection__VTable vtable;
};

struct MoonIntegrationSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
};

struct MoonIntegrationSettings__StaticFields {
};

struct MoonIntegrationSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MoonIntegrationSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MoonIntegrationSettings__VTable vtable;
};

struct AkCommonPlatformSettings__Fields {
    struct AkBasePlatformSettings__Fields _;
};

struct AkCommonPlatformSettings {
    struct AkCommonPlatformSettings__Class *klass;
    MonitorData *monitor;
    struct AkCommonPlatformSettings__Fields fields;
};

struct AkWwiseInitializationSettings__Fields {
    struct AkCommonPlatformSettings__Fields _;
    struct List_1_System_String_ *PlatformSettingsNameList;
    struct List_1_AkWwiseInitializationSettings_PlatformSettings_ *PlatformSettingsList;
    struct List_1_System_String_ *InvalidReferencePlatforms;
    struct AkCommonUserSettings *UserSettings;
    struct AkCommonAdvancedSettings *AdvancedSettings;
    struct AkCommonCommSettings *CommsSettings;
    struct MoonIntegrationSettings *MoonSettings;
};

struct AkWwiseInitializationSettings {
    struct AkWwiseInitializationSettings__Class *klass;
    MonitorData *monitor;
    struct AkWwiseInitializationSettings__Fields fields;
};

struct __declspec(align(8)) List_1_AkWwiseInitializationSettings_PlatformSettings___Fields {
    struct AkWwiseInitializationSettings_PlatformSettings__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_AkWwiseInitializationSettings_PlatformSettings_ {
    struct List_1_AkWwiseInitializationSettings_PlatformSettings___Class *klass;
    MonitorData *monitor;
    struct List_1_AkWwiseInitializationSettings_PlatformSettings___Fields fields;
};

struct AkWwiseInitializationSettings_PlatformSettings__Fields {
    struct AkCommonPlatformSettings__Fields _;
    struct List_1_System_String_ *IgnorePropertyNameList;
    struct List_1_System_String_ *GlobalPropertyNameList;
    struct HashSet_1_System_String_ *_GlobalPropertyHashSet;
};

struct AkWwiseInitializationSettings_PlatformSettings {
    struct AkWwiseInitializationSettings_PlatformSettings__Class *klass;
    MonitorData *monitor;
    struct AkWwiseInitializationSettings_PlatformSettings__Fields fields;
};

struct AkWwiseInitializationSettings_CommonPlatformSettings__Fields {
    struct AkWwiseInitializationSettings_PlatformSettings__Fields _;
    struct AkCommonUserSettings *UserSettings;
    struct AkCommonAdvancedSettings *AdvancedSettings;
    struct AkCommonCommSettings *CommsSettings;
    struct MoonIntegrationSettings *MoonSettings;
};

struct AkWwiseInitializationSettings_CommonPlatformSettings {
    struct AkWwiseInitializationSettings_CommonPlatformSettings__Class *klass;
    MonitorData *monitor;
    struct AkWwiseInitializationSettings_CommonPlatformSettings__Fields fields;
};

struct AkWwiseInitializationSettings_PlatformSettings__Array {
    struct AkWwiseInitializationSettings_PlatformSettings__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct AkWwiseInitializationSettings_PlatformSettings *vector[32];
};

struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings_ {
    struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___Class *klass;
    MonitorData *monitor;
};

struct AkWwiseInitializationSettings_CommonPlatformSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AkInitializationSettings;
    VirtualInvokeData get_AkSpatialAudioInitSettings;
    VirtualInvokeData get_CallbackManagerInitializationSettings;
    VirtualInvokeData get_InitialLanguage;
    VirtualInvokeData get_RenderDuringFocusLoss;
    VirtualInvokeData get_SoundbankPath;
    VirtualInvokeData get_AkCommunicationSettings;
    VirtualInvokeData get_UseAsyncOpen;
    VirtualInvokeData GetUserSettings;
    VirtualInvokeData GetAdvancedSettings;
    VirtualInvokeData GetCommsSettings;
};

struct AkWwiseInitializationSettings_CommonPlatformSettings__StaticFields {
};

struct AkWwiseInitializationSettings_CommonPlatformSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkWwiseInitializationSettings_CommonPlatformSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkWwiseInitializationSettings_CommonPlatformSettings__VTable vtable;
};

struct AkWwiseInitializationSettings_PlatformSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AkInitializationSettings;
    VirtualInvokeData get_AkSpatialAudioInitSettings;
    VirtualInvokeData get_CallbackManagerInitializationSettings;
    VirtualInvokeData get_InitialLanguage;
    VirtualInvokeData get_RenderDuringFocusLoss;
    VirtualInvokeData get_SoundbankPath;
    VirtualInvokeData get_AkCommunicationSettings;
    VirtualInvokeData get_UseAsyncOpen;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
};

struct AkWwiseInitializationSettings_PlatformSettings__StaticFields {
};

struct AkWwiseInitializationSettings_PlatformSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkWwiseInitializationSettings_PlatformSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkWwiseInitializationSettings_PlatformSettings__VTable vtable;
};

struct AkWwiseInitializationSettings_PlatformSettings__Array__VTable {
};

struct AkWwiseInitializationSettings_PlatformSettings__Array__StaticFields {
};

struct AkWwiseInitializationSettings_PlatformSettings__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkWwiseInitializationSettings_PlatformSettings__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkWwiseInitializationSettings_PlatformSettings__Array__VTable vtable;
};

struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields {
};

struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_AkWwiseInitializationSettings_PlatformSettings___VTable vtable;
};

struct List_1_AkWwiseInitializationSettings_PlatformSettings___VTable {
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

struct List_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields {
    struct AkWwiseInitializationSettings_PlatformSettings__Array *_emptyArray;
};

struct List_1_AkWwiseInitializationSettings_PlatformSettings___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_AkWwiseInitializationSettings_PlatformSettings___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_AkWwiseInitializationSettings_PlatformSettings___VTable vtable;
};

struct AkWwiseInitializationSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AkInitializationSettings;
    VirtualInvokeData get_AkSpatialAudioInitSettings;
    VirtualInvokeData get_CallbackManagerInitializationSettings;
    VirtualInvokeData get_InitialLanguage;
    VirtualInvokeData get_RenderDuringFocusLoss;
    VirtualInvokeData get_SoundbankPath;
    VirtualInvokeData get_AkCommunicationSettings;
    VirtualInvokeData get_UseAsyncOpen;
    VirtualInvokeData GetUserSettings;
    VirtualInvokeData GetAdvancedSettings;
    VirtualInvokeData GetCommsSettings;
};

struct AkWwiseInitializationSettings__StaticFields {
    struct String__Array *AllGlobalValues;
    struct AkWwiseInitializationSettings *m_Instance;
    struct AkBasePlatformSettings *m_ActivePlatformSettings;
};

struct AkWwiseInitializationSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AkWwiseInitializationSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AkWwiseInitializationSettings__VTable vtable;
};

struct AkCommonPlatformSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_AkInitializationSettings;
    VirtualInvokeData get_AkSpatialAudioInitSettings;
    VirtualInvokeData get_CallbackManagerInitializationSettings;
    VirtualInvokeData get_InitialLanguage;
    VirtualInvokeData get_RenderDuringFocusLoss;
    VirtualInvokeData get_SoundbankPath;
    VirtualInvokeData get_AkCommunicationSettings;
    VirtualInvokeData get_UseAsyncOpen;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
};

struct AkCommonPlatformSettings__StaticFields {
};

}
