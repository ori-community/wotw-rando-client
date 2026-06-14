#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkDeviceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkDeviceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDeviceSettings_DEFINED)
#include <Modloader/app/structs/AkDeviceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkDeviceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkDeviceSettings_DEFINED
struct AkDeviceSettings__Class;
struct AkDeviceSettings {
    struct AkDeviceSettings__Class* klass;
    MonitorData* monitor;
    struct AkDeviceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkDeviceSettings_FWDDECL)
#define IL2CPP_STRUCT_AkDeviceSettings_FWDDECL
#include <Modloader/app/structs/AkDeviceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_AkDeviceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkDeviceSettings_DEFINED) && !defined(IL2CPP_STRUCT_AkDeviceSettings_FWDDECL)
#include <Modloader/app/structs/AkDeviceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkDeviceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
