#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioMixerGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioMixerGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixerGroup_DEFINED)
#include <Modloader/app/structs/AudioMixerGroup__Fields.h>
#if defined(IL2CPP_STRUCT_AudioMixerGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioMixerGroup_DEFINED
struct AudioMixerGroup__Class;
struct AudioMixerGroup {
    struct AudioMixerGroup__Class* klass;
    MonitorData* monitor;
    struct AudioMixerGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioMixerGroup_FWDDECL)
#define IL2CPP_STRUCT_AudioMixerGroup_FWDDECL
#include <Modloader/app/structs/AudioMixerGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioMixerGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixerGroup_DEFINED) && !defined(IL2CPP_STRUCT_AudioMixerGroup_FWDDECL)
#include <Modloader/app/structs/AudioMixerGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioMixerGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
