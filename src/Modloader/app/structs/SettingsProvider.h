#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProvider_DEFINED)
#define IL2CPP_STRUCT_SettingsProvider_DEFINED
struct SettingsProvider__Class;
struct SettingsProvider {
    struct SettingsProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsProvider_FWDDECL)
#define IL2CPP_STRUCT_SettingsProvider_FWDDECL
#include <Modloader/app/structs/SettingsProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProvider_DEFINED) && !defined(IL2CPP_STRUCT_SettingsProvider_FWDDECL)
#include <Modloader/app/structs/SettingsProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
