#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer_DEFINED)
#include <Modloader/app/structs/XboxOneVideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneVideoPlayer_DEFINED
struct XboxOneVideoPlayer__Class;
struct XboxOneVideoPlayer {
    struct XboxOneVideoPlayer__Class* klass;
    MonitorData* monitor;
    struct XboxOneVideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_XboxOneVideoPlayer_FWDDECL
#include <Modloader/app/structs/XboxOneVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneVideoPlayer_FWDDECL)
#include <Modloader/app/structs/XboxOneVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
