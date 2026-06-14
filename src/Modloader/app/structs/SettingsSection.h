#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSection_DEFINED)
#define IL2CPP_STRUCT_SettingsSection_DEFINED
struct SettingsSection__Class;
struct SettingsSection {
    struct SettingsSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsSection_FWDDECL)
#define IL2CPP_STRUCT_SettingsSection_FWDDECL
#include <Modloader/app/structs/SettingsSection__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSection_DEFINED) && !defined(IL2CPP_STRUCT_SettingsSection_FWDDECL)
#include <Modloader/app/structs/SettingsSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
