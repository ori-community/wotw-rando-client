#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsStringProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsStringProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsStringProvider_DEFINED)
#include <Modloader/app/structs/SettingsStringProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsStringProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsStringProvider_DEFINED
struct SettingsStringProvider__Class;
struct SettingsStringProvider {
    struct SettingsStringProvider__Class* klass;
    MonitorData* monitor;
    struct SettingsStringProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsStringProvider_FWDDECL)
#define IL2CPP_STRUCT_SettingsStringProvider_FWDDECL
#include <Modloader/app/structs/SettingsStringProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsStringProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsStringProvider_DEFINED) && !defined(IL2CPP_STRUCT_SettingsStringProvider_FWDDECL)
#include <Modloader/app/structs/SettingsStringProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsStringProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
