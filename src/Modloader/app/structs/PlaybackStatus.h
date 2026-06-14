#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaybackStatus_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaybackStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaybackStatus_DEFINED)
#include <Modloader/app/structs/PlaybackStatus__Fields.h>
#if defined(IL2CPP_STRUCT_PlaybackStatus__Fields_DEFINED)
#define IL2CPP_STRUCT_PlaybackStatus_DEFINED
struct PlaybackStatus__Class;
struct PlaybackStatus {
    struct PlaybackStatus__Class* klass;
    MonitorData* monitor;
    struct PlaybackStatus__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaybackStatus_FWDDECL)
#define IL2CPP_STRUCT_PlaybackStatus_FWDDECL
#include <Modloader/app/structs/PlaybackStatus__Class.h>
#endif
#undef IL2CPP_STRUCT_PlaybackStatus_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaybackStatus_DEFINED) && !defined(IL2CPP_STRUCT_PlaybackStatus_FWDDECL)
#include <Modloader/app/structs/PlaybackStatus.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaybackStatus.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
