#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_DEFINED)
#include <Modloader/app/structs/VideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_VideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoPlayer_DEFINED
struct VideoPlayer__Class;
struct VideoPlayer {
    struct VideoPlayer__Class* klass;
    MonitorData* monitor;
    struct VideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_VideoPlayer_FWDDECL
#include <Modloader/app/structs/VideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_VideoPlayer_FWDDECL)
#include <Modloader/app/structs/VideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
