#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMusicSyncCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMusicSyncCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicSyncCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkMusicSyncCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkMusicSyncCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMusicSyncCallbackInfo_DEFINED
struct AkMusicSyncCallbackInfo__Class;
struct AkMusicSyncCallbackInfo {
    struct AkMusicSyncCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkMusicSyncCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMusicSyncCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkMusicSyncCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkMusicSyncCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMusicSyncCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicSyncCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkMusicSyncCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkMusicSyncCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMusicSyncCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
