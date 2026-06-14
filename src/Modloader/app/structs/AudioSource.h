#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSource_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSource_DEFINED)
#include <Modloader/app/structs/AudioSource__Fields.h>
#if defined(IL2CPP_STRUCT_AudioSource__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSource_DEFINED
struct AudioSource__Class;
struct AudioSource {
    struct AudioSource__Class* klass;
    MonitorData* monitor;
    struct AudioSource__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSource_FWDDECL)
#define IL2CPP_STRUCT_AudioSource_FWDDECL
#include <Modloader/app/structs/AudioSource__Class.h>
#endif
#undef IL2CPP_STRUCT_AudioSource_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSource_DEFINED) && !defined(IL2CPP_STRUCT_AudioSource_FWDDECL)
#include <Modloader/app/structs/AudioSource.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSource.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
