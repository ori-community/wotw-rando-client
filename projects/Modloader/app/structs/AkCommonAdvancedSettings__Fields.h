#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_DEFINED
struct AkCommonAdvancedSettings_SpatialAudioSettings;
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
    struct AkCommonAdvancedSettings_SpatialAudioSettings* m_SpatialAudioSettings;
    bool m_RenderDuringFocusLoss;
    bool m_UseAsyncOpen;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_FWDDECL
#include <Modloader/app/structs/AkCommonAdvancedSettings_SpatialAudioSettings.h>
#endif
#undef IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkCommonAdvancedSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonAdvancedSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
