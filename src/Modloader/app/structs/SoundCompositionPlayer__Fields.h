#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundCompositionPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundCompositionPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundCompositionPlayer__Fields_DEFINED
struct SoundComposition;
struct List_1_SoundPlayer_;
struct SoundCompositionPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundComposition* SoundComposition;
    struct List_1_SoundPlayer_* Layers;
    struct List_1_SoundPlayer_* Loops;
    bool m_isPlaying;
    float m_time;
    int32_t m_loop;
    float m_loopDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundCompositionPlayer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SoundPlayer_.h>
#include <Modloader/app/structs/SoundComposition.h>
#endif
#undef IL2CPP_STRUCT_SoundCompositionPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundCompositionPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundCompositionPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SoundCompositionPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundCompositionPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
