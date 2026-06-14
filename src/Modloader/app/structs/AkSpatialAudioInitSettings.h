#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSpatialAudioInitSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSpatialAudioInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSpatialAudioInitSettings_DEFINED)
#include <Modloader/app/structs/AkSpatialAudioInitSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkSpatialAudioInitSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSpatialAudioInitSettings_DEFINED
struct AkSpatialAudioInitSettings__Class;
struct AkSpatialAudioInitSettings {
    struct AkSpatialAudioInitSettings__Class* klass;
    MonitorData* monitor;
    struct AkSpatialAudioInitSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSpatialAudioInitSettings_FWDDECL)
#define IL2CPP_STRUCT_AkSpatialAudioInitSettings_FWDDECL
#include <Modloader/app/structs/AkSpatialAudioInitSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSpatialAudioInitSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSpatialAudioInitSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkSpatialAudioInitSettings_FWDDECL)
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
