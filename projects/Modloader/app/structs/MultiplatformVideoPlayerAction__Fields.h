#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_DEFINED)
#include <Modloader/app/structs/PerformingAction__Fields.h>
#if defined(IL2CPP_STRUCT_PerformingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_DEFINED
struct String;
struct GameObject;
struct MultiplatformVideoPlayer;
struct MultiplatformVideoPlayerAction__Fields {
    struct PerformingAction__Fields _;
    struct String* Filename;
    struct GameObject* MultiplatformVideoPlayer;
    bool SetVideoPlayerParentToScene;
    struct MultiplatformVideoPlayer* m_multiplatformVideoPlayer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MultiplatformVideoPlayerAction__Fields_FWDDECL)
#include <Modloader/app/structs/MultiplatformVideoPlayerAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplatformVideoPlayerAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
