#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Varying2DSoundProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Varying2DSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Varying2DSoundProvider__Fields_DEFINED)
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#include <Modloader/app/structs/SoundProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SoundProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED)
#define IL2CPP_STRUCT_Varying2DSoundProvider__Fields_DEFINED
struct Byte__Array;
struct Trigger;
struct List_1_UnityEngine_AudioClip_;
struct SoundSize;
struct LowPassFilterSettings;
struct Varying2DSoundProvider__Fields {
    struct SoundProvider__Fields _;
    struct Byte__Array* valueGuid;
    uint32_t hash;
    bool hashed;
    struct Trigger* TriggerOnPlay;
    struct List_1_UnityEngine_AudioClip_* AudioClips;
    int32_t m_index;
    float ProviderVolume;
    float MinPitch;
    float MaxPitch;
    struct SoundSize* SoundSize;
    bool ShouldBePanned;
    struct LowPassFilterSettings* LowPassFilterSettings;
    bool SyncToTime;
    MixerGroupType__Enum MixerGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Varying2DSoundProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_Varying2DSoundProvider__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_AudioClip_.h>
#include <Modloader/app/structs/LowPassFilterSettings.h>
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_Varying2DSoundProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Varying2DSoundProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Varying2DSoundProvider__Fields_FWDDECL)
#include <Modloader/app/structs/Varying2DSoundProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Varying2DSoundProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
