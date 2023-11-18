#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSwitchSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSwitchSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSwitchSettings_DEFINED)
#include <Modloader/app/structs/AkSwitchSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkSwitchSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSwitchSettings_DEFINED
struct AkSwitchSettings__Class;
struct AkSwitchSettings {
    struct AkSwitchSettings__Class* klass;
    MonitorData* monitor;
    struct AkSwitchSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSwitchSettings_FWDDECL)
#define IL2CPP_STRUCT_AkSwitchSettings_FWDDECL
#include <Modloader/app/structs/AkSwitchSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSwitchSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSwitchSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkSwitchSettings_FWDDECL)
#include <Modloader/app/structs/AkSwitchSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSwitchSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
