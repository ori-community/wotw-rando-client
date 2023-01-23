#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_DEFINED
struct SurfaceToSoundProviderMap;
struct RTPC;
struct SeinFootstepsPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SurfaceToSoundProviderMap* FootstepsSounds;
    struct RTPC* FootsetpSpeedRTPC;
    struct SurfaceToSoundProviderMap* GrabbingSounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_FWDDECL
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFootstepsPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFootstepsPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFootstepsPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
