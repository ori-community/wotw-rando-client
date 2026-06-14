#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchVideoPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchVideoPlayer__Fields_DEFINED
struct String;
struct GameObject;
struct OnDelegate;
struct SwitchVideoPlayer__Fields {
    struct MonoBehaviour__Fields _;
    bool m_playing;
    struct String* m_filename;
    struct GameObject* m_movieQuad;
    struct OnDelegate* _OnPlaybackFinished_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchVideoPlayer__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SwitchVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchVideoPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchVideoPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchVideoPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
