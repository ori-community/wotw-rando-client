#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer_DEFINED)
#include <Modloader/app/structs/SwitchVideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchVideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchVideoPlayer_DEFINED
struct SwitchVideoPlayer__Class;
struct SwitchVideoPlayer {
    struct SwitchVideoPlayer__Class* klass;
    MonitorData* monitor;
    struct SwitchVideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_SwitchVideoPlayer_FWDDECL
#include <Modloader/app/structs/SwitchVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_SwitchVideoPlayer_FWDDECL)
#include <Modloader/app/structs/SwitchVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
