#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AudioSettings__StaticFields_DEFINED
struct AudioSettings_AudioConfigurationChangeHandler;
struct AudioSettings__StaticFields {
    struct AudioSettings_AudioConfigurationChangeHandler* OnAudioConfigurationChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_AudioSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AudioSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/AudioSettings_AudioConfigurationChangeHandler.h>
#endif
#undef IL2CPP_STRUCT_AudioSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AudioSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/AudioSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
