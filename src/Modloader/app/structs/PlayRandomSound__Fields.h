#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayRandomSound__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayRandomSound__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomSound__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayRandomSound__Fields_DEFINED
struct AudioClip__Array;
struct PlayRandomSound__Fields {
    struct MonoBehaviour__Fields _;
    struct AudioClip__Array* Sounds;
    float VolumeScale;
    bool PlayOnlyIfVisibleToCamera;
    float SoundObjectSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayRandomSound__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayRandomSound__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip__Array.h>
#endif
#undef IL2CPP_STRUCT_PlayRandomSound__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomSound__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayRandomSound__Fields_FWDDECL)
#include <Modloader/app/structs/PlayRandomSound__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayRandomSound__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
