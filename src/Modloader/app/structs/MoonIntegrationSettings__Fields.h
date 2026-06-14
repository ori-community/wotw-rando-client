#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonIntegrationSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonIntegrationSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonIntegrationSettings__Fields_DEFINED
struct SoundBankCollection;
struct __declspec(align(8)) MoonIntegrationSettings__Fields {
    uint32_t m_MaxRtpcSyncTasks;
    uint32_t m_MaxPositionSyncTasks;
    uint32_t m_MaxListenerZoneTasks;
    uint32_t m_MaxEmitterZoneTasks;
    uint32_t m_MaxControlledEvents;
    uint32_t m_MaxListenerSyncTasks;
    uint32_t m_MaxArtificialSoundHosts;
    uint32_t m_ArtificialSoundHostIdRange;
    struct SoundBankCollection* m_GlobalSoundBankCollection;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonIntegrationSettings__Fields_FWDDECL
#include <Modloader/app/structs/SoundBankCollection.h>
#endif
#undef IL2CPP_STRUCT_MoonIntegrationSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonIntegrationSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonIntegrationSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MoonIntegrationSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonIntegrationSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
