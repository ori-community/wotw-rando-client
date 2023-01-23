#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioClip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip_DEFINED)
#include <Modloader/app/structs/AudioClip__Fields.h>
#if defined(IL2CPP_STRUCT_AudioClip__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioClip_DEFINED
struct AudioClip__Class;
struct AudioClip {
    struct AudioClip__Class* klass;
    MonitorData* monitor;
    struct AudioClip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioClip_FWDDECL)
#define IL2CPP_STRUCT_AudioClip_FWDDECL
#include <Modloader/app/structs/AudioClip__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioClip_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioClip_DEFINED) && !defined(IL2CPP_STRUCT_AudioClip_FWDDECL)
#include <Modloader/app/structs/AudioClip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioClip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
