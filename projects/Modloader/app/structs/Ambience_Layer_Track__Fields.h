#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ambience_Layer_Track__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ambience_Layer_Track__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_Layer_Track__Fields_DEFINED)
#include <Modloader/app/structs/AkCurveInterpolation__Enum.h>
#if defined(IL2CPP_STRUCT_AkCurveInterpolation__Enum_DEFINED)
#define IL2CPP_STRUCT_Ambience_Layer_Track__Fields_DEFINED
struct SoundProvider;
struct Ambience_AmbienceTrack;
struct AmbienceZone;
struct __declspec(align(8)) Ambience_Layer_Track__Fields {
    struct SoundProvider* SoundProvider;
    struct Ambience_AmbienceTrack* m_ambienceTrack;
    float FadeInDuration;
    float FadeOutDuration;
    struct AmbienceZone* Zone;
    AkCurveInterpolation__Enum FadeType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ambience_Layer_Track__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ambience_Layer_Track__Fields_FWDDECL
#include <Modloader/app/structs/AmbienceZone.h>
#include <Modloader/app/structs/Ambience_AmbienceTrack.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_Ambience_Layer_Track__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ambience_Layer_Track__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ambience_Layer_Track__Fields_FWDDECL)
#include <Modloader/app/structs/Ambience_Layer_Track__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ambience_Layer_Track__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
