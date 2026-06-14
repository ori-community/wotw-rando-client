#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAudioSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAudioSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioSettings_DEFINED)
#include <Modloader/app/structs/AkAudioSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkAudioSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAudioSettings_DEFINED
struct AkAudioSettings__Class;
struct AkAudioSettings {
    struct AkAudioSettings__Class* klass;
    MonitorData* monitor;
    struct AkAudioSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkAudioSettings_FWDDECL)
#define IL2CPP_STRUCT_AkAudioSettings_FWDDECL
#include <Modloader/app/structs/AkAudioSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkAudioSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAudioSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkAudioSettings_FWDDECL)
#include <Modloader/app/structs/AkAudioSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAudioSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
