#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonStopSoundArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs_DEFINED)
#include <Modloader/app/structs/WaapiJsonStopSoundArgs__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs_DEFINED
struct WaapiJsonStopSoundArgs__Class;
struct WaapiJsonStopSoundArgs {
    struct WaapiJsonStopSoundArgs__Class* klass;
    MonitorData* monitor;
    struct WaapiJsonStopSoundArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonStopSoundArgs_FWDDECL
#include <Modloader/app/structs/WaapiJsonStopSoundArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonStopSoundArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonStopSoundArgs_FWDDECL)
#include <Modloader/app/structs/WaapiJsonStopSoundArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonStopSoundArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
