#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioMixer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixer_DEFINED)
#include <Modloader/app/structs/AudioMixer__Fields.h>
#if defined(IL2CPP_STRUCT_AudioMixer__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioMixer_DEFINED
struct AudioMixer__Class;
struct AudioMixer {
    struct AudioMixer__Class* klass;
    MonitorData* monitor;
    struct AudioMixer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioMixer_FWDDECL)
#define IL2CPP_STRUCT_AudioMixer_FWDDECL
#include <Modloader/app/structs/AudioMixer__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioMixer_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioMixer_DEFINED) && !defined(IL2CPP_STRUCT_AudioMixer_FWDDECL)
#include <Modloader/app/structs/AudioMixer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioMixer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
