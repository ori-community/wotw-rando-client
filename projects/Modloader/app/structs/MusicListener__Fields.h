#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MusicListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MusicListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicListener__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MusicListener__Fields_DEFINED
struct SceneRoot;
struct Music_Layer;
struct Event_1;
struct MusicListener__Fields {
    struct MonoBehaviour__Fields _;
    struct SceneRoot* m_lastSceneRoot;
    struct Music_Layer* m_lastMusicLayer;
    struct Event_1* MusicListenerReady;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MusicListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_MusicListener__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/Music_Layer.h>
#include <Modloader/app/structs/SceneRoot.h>
#endif
#undef IL2CPP_STRUCT_MusicListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MusicListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MusicListener__Fields_FWDDECL)
#include <Modloader/app/structs/MusicListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MusicListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
