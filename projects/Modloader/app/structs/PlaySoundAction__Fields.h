#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaySoundAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaySoundAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_PlaySoundAction__Fields_DEFINED
struct Event_1;
struct AudioProperties;
struct SoundProvider;
struct SoundHost;
struct PlaySoundAction__Fields {
    struct ActionMethod__Fields _;
    struct Event_1* WiseEvent;
    struct AudioProperties* Audio;
    struct SoundProvider* SoundProvider;
    struct SoundHost* SoundHost;
    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaySoundAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlaySoundAction__Fields_FWDDECL
#include <Modloader/app/structs/AudioProperties.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_PlaySoundAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaySoundAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlaySoundAction__Fields_FWDDECL)
#include <Modloader/app/structs/PlaySoundAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaySoundAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
