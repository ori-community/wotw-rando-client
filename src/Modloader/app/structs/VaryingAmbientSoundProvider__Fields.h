#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_DEFINED
struct Byte__Array;
struct List_1_UnityEngine_AudioClip_;
struct VaryingAmbientSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct Byte__Array* valueGuid;
    uint32_t hash;
    bool hashed;
    struct List_1_UnityEngine_AudioClip_* AudioClips;
    int32_t m_index;
    float ProviderVolume;
    MixerGroupType__Enum MixerGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_AudioClip_.h>
#endif
#undef IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VaryingAmbientSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/VaryingAmbientSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VaryingAmbientSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
