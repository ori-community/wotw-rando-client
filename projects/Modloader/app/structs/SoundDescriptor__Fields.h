#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/MixerGroupType__Enum.h>
#if defined(IL2CPP_STRUCT_MixerGroupType__Enum_DEFINED)
#define IL2CPP_STRUCT_SoundDescriptor__Fields_DEFINED
struct Event_1;
struct Switch_1;
struct Trigger;
struct AudioClip;
struct SoundSize;
struct LowPassFilterSettings;
struct SoundProvider;
struct __declspec(align(8)) SoundDescriptor__Fields {
    bool IsWWiseEvent;
    struct Event_1* Event;
    struct Switch_1* Switch;
    struct Trigger* Trigger;
    struct AudioClip* AudioClip;
    struct SoundSize* SoundSize;
    struct LowPassFilterSettings* LowPassFilterSettings;
    struct SoundProvider* SoundProvider;
    float Volume;
    bool m_ownSoundSize;
    bool ShouldBePanned;
    float Pitch;
    bool m_ownLowPass;
    bool SyncToTime;
    MixerGroupType__Enum MixerGroup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/LowPassFilterSettings.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_SoundDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/SoundDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
