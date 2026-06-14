#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_DEFINED)
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#if defined(IL2CPP_STRUCT_AkCurveInterpolation__Enum_DEFINED) && defined(IL2CPP_STRUCT_ArtificialSoundHostReference_DEFINED)
#define IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_DEFINED
struct SoundProvider;
struct AmbienceZone;
struct Event_1;
struct __declspec(align(8)) Ambience_AmbienceTrack__Fields {
    struct SoundProvider* SoundProvider;
    int32_t ReferenceCount;
    float FadeInDuration;
    float FadeOutDuration;
    struct AmbienceZone* Zone;
    AkCurveInterpolation__Enum FadeType;

    struct ArtificialSoundHostReference _SoundHost_k__BackingField;
    struct Event_1* _CurrentEvent_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_FWDDECL
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ambience_AmbienceTrack__Fields_FWDDECL)
#include <Modloader/app/structs/Ambience_AmbienceTrack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ambience_AmbienceTrack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
