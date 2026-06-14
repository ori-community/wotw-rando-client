#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientSoundZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientSoundZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientSoundZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AmbientSoundZone__Fields_DEFINED
struct FadingSound__Array;
struct AnimatingFloat;
struct AmbientSoundZone__Fields {
    struct MonoBehaviour__Fields _;
    float FadeInDuration;
    float FadeOutDuration;
    bool Playing;
    bool PlayFromStart;
    struct FadingSound__Array* m_fadingSounds;
    bool m_enabled;
    struct AnimatingFloat* m_fade;
    bool existed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientSoundZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmbientSoundZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimatingFloat.h>
#include <Modloader/app/structs/FadingSound__Array.h>
#endif
#undef IL2CPP_STRUCT_AmbientSoundZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientSoundZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmbientSoundZone__Fields_FWDDECL)
#include <Modloader/app/structs/AmbientSoundZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientSoundZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
