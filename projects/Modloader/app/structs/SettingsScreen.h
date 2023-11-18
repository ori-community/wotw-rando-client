#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsScreen_DEFINED)
#include <Modloader/app/structs/SettingsScreen__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsScreen_DEFINED
struct SettingsScreen__Class;
struct SettingsScreen {
    struct SettingsScreen__Class* klass;
    MonitorData* monitor;
    struct SettingsScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsScreen_FWDDECL)
#define IL2CPP_STRUCT_SettingsScreen_FWDDECL
#include <Modloader/app/structs/SettingsScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsScreen_DEFINED) && !defined(IL2CPP_STRUCT_SettingsScreen_FWDDECL)
#include <Modloader/app/structs/SettingsScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
