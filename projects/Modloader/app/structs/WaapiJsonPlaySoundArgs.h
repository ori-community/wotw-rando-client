#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_DEFINED)
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs__Fields.h>
#if defined(IL2CPP_STRUCT_WaapiJsonPlaySoundArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_DEFINED
struct WaapiJsonPlaySoundArgs__Class;
struct WaapiJsonPlaySoundArgs {
    struct WaapiJsonPlaySoundArgs__Class* klass;
    MonitorData* monitor;
    struct WaapiJsonPlaySoundArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_FWDDECL)
#define IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_FWDDECL
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_DEFINED) && !defined(IL2CPP_STRUCT_WaapiJsonPlaySoundArgs_FWDDECL)
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaapiJsonPlaySoundArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
