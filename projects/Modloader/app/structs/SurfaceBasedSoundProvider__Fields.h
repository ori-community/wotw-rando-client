#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_DEFINED
struct SurfaceProvider;
struct SurfaceToSoundProviderMap;
struct SurfaceBasedSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct SurfaceProvider* SurfaceProvider;
    struct SurfaceToSoundProviderMap* SoundProviderMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/SurfaceProvider.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SurfaceBasedSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SurfaceBasedSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
