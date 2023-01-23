#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_MusicZone__Fields_DEFINED
struct SoundProvider;
struct Music_Layer;
struct MusicZone__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider* SoundProvider;
    float FadeInDuration;
    float FadeOutDuration;
    int32_t Priority;
    bool ActivateOnEnable;
    struct Music_Layer* m_musicLayer;
    bool _Activated_k__BackingField;
    struct Rect Bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_MusicZone__Fields_FWDDECL
#include <Modloader/app/structs/Music_Layer.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_MusicZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MusicZone__Fields_FWDDECL)
#include <Modloader/app/structs/MusicZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
