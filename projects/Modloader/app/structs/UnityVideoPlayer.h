#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer_DEFINED)
#include <Modloader/app/structs/UnityVideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_UnityVideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityVideoPlayer_DEFINED
struct UnityVideoPlayer__Class;
struct UnityVideoPlayer {
    struct UnityVideoPlayer__Class* klass;
    MonitorData* monitor;
    struct UnityVideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_UnityVideoPlayer_FWDDECL
#include <Modloader/app/structs/UnityVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_UnityVideoPlayer_FWDDECL)
#include <Modloader/app/structs/UnityVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
