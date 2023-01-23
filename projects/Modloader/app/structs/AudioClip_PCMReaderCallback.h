#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioClip_PCMReaderCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioClip_PCMReaderCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip_PCMReaderCallback_DEFINED)
#include <Modloader/app/structs/AudioClip_PCMReaderCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AudioClip_PCMReaderCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioClip_PCMReaderCallback_DEFINED
struct AudioClip_PCMReaderCallback__Class;
struct AudioClip_PCMReaderCallback {
    struct AudioClip_PCMReaderCallback__Class* klass;
    MonitorData* monitor;
    struct AudioClip_PCMReaderCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioClip_PCMReaderCallback_FWDDECL)
#define IL2CPP_STRUCT_AudioClip_PCMReaderCallback_FWDDECL
#include <Modloader/app/structs/AudioClip_PCMReaderCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioClip_PCMReaderCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip_PCMReaderCallback_DEFINED) && !defined(IL2CPP_STRUCT_AudioClip_PCMReaderCallback_FWDDECL)
#include <Modloader/app/structs/AudioClip_PCMReaderCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioClip_PCMReaderCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
