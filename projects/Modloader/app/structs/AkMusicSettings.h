#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMusicSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMusicSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicSettings_DEFINED)
#include <Modloader/app/structs/AkMusicSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkMusicSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMusicSettings_DEFINED
struct AkMusicSettings__Class;
struct AkMusicSettings {
    struct AkMusicSettings__Class* klass;
    MonitorData* monitor;
    struct AkMusicSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMusicSettings_FWDDECL)
#define IL2CPP_STRUCT_AkMusicSettings_FWDDECL
#include <Modloader/app/structs/AkMusicSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMusicSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkMusicSettings_FWDDECL)
#include <Modloader/app/structs/AkMusicSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMusicSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
