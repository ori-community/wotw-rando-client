#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomPlaybackSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomPlaybackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomPlaybackSettings_DEFINED)
#include <Modloader/app/structs/CustomPlaybackSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CustomPlaybackSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomPlaybackSettings_DEFINED
struct CustomPlaybackSettings__Class;
struct CustomPlaybackSettings {
    struct CustomPlaybackSettings__Class* klass;
    MonitorData* monitor;
    struct CustomPlaybackSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomPlaybackSettings_FWDDECL)
#define IL2CPP_STRUCT_CustomPlaybackSettings_FWDDECL
#include <Modloader/app/structs/CustomPlaybackSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomPlaybackSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomPlaybackSettings_DEFINED) && !defined(IL2CPP_STRUCT_CustomPlaybackSettings_FWDDECL)
#include <Modloader/app/structs/CustomPlaybackSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomPlaybackSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
