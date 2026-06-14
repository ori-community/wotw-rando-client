#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AudioSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AudioSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSource__Fields_DEFINED)
#include <Modloader/app/structs/AudioBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_AudioBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AudioSource__Fields_DEFINED
struct AudioSourceExtension;
struct AudioSource__Fields {
    struct AudioBehaviour__Fields _;
    struct AudioSourceExtension* spatializerExtension;
    struct AudioSourceExtension* ambisonicExtension;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AudioSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_AudioSource__Fields_FWDDECL
#include <Modloader/app/structs/AudioSourceExtension.h>
#endif
#undef IL2CPP_STRUCT_AudioSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AudioSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AudioSource__Fields_FWDDECL)
#include <Modloader/app/structs/AudioSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AudioSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
