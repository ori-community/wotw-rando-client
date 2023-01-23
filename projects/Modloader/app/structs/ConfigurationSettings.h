#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSettings_DEFINED)
#define IL2CPP_STRUCT_ConfigurationSettings_DEFINED
struct ConfigurationSettings__Class;
struct ConfigurationSettings {
    struct ConfigurationSettings__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationSettings_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationSettings_FWDDECL
#include <Modloader/app/structs/ConfigurationSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSettings_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationSettings_FWDDECL)
#include <Modloader/app/structs/ConfigurationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
