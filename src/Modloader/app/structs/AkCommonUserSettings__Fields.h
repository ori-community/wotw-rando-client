#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonUserSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonUserSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCommonUserSettings__Fields_DEFINED
struct String;
struct AkCommonOutputSettings;
struct AkCommonUserSettings_SpatialAudioSettings;
struct __declspec(align(8)) AkCommonUserSettings__Fields {
    struct String* m_BasePath;
    struct String* m_StartupLanguage;
    uint32_t m_PreparePoolSize;
    int32_t m_CallbackManagerBufferSize;
    bool m_EngineLogging;
    uint32_t m_MaximumNumberOfMemoryPools;
    uint32_t m_MaximumNumberOfPositioningPaths;
    uint32_t m_DefaultPoolSize;
    float m_MemoryCutoffThreshold;
    uint32_t m_CommandQueueSize;
    uint32_t m_SamplesPerFrame;
    struct AkCommonOutputSettings* m_MainOutputSettings;
    float m_StreamingLookAheadRatio;
    uint32_t m_StreamManagerPoolSize;
    uint32_t m_SampleRate;
    uint32_t m_LowerEnginePoolSize;
    float m_LowerEngineMemoryCutoffThreshold;
    uint16_t m_NumberOfRefillsInVoice;
    struct AkCommonUserSettings_SpatialAudioSettings* m_SpatialAudioSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCommonUserSettings__Fields_FWDDECL
#include <Modloader/app/structs/AkCommonOutputSettings.h>
#include <Modloader/app/structs/AkCommonUserSettings_SpatialAudioSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AkCommonUserSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonUserSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonUserSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkCommonUserSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonUserSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
