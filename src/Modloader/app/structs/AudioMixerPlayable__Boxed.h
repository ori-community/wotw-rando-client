#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioMixerPlayable__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioMixerPlayable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixerPlayable__Boxed_DEFINED)
#include <Modloader/app/structs/AudioMixerPlayable.h>
#if defined(IL2CPP_STRUCT_AudioMixerPlayable_DEFINED)
#define IL2CPP_STRUCT_AudioMixerPlayable__Boxed_DEFINED
struct AudioMixerPlayable__Class;
struct AudioMixerPlayable__Boxed {
    struct AudioMixerPlayable__Class* klass;
    MonitorData* monitor;
    struct AudioMixerPlayable fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioMixerPlayable__Boxed_FWDDECL)
#define IL2CPP_STRUCT_AudioMixerPlayable__Boxed_FWDDECL
#include <Modloader/app/structs/AudioMixerPlayable__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioMixerPlayable__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixerPlayable__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_AudioMixerPlayable__Boxed_FWDDECL)
#include <Modloader/app/structs/AudioMixerPlayable__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioMixerPlayable__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
