#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_SettingsGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_SettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_SettingsGroup_DEFINED)
#define IL2CPP_STRUCT_SMAA_SettingsGroup_DEFINED
struct SMAA_SettingsGroup__Class;
struct SMAA_SettingsGroup {
    struct SMAA_SettingsGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_SettingsGroup_FWDDECL)
#define IL2CPP_STRUCT_SMAA_SettingsGroup_FWDDECL
#include <Modloader/app/structs/SMAA_SettingsGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_SettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_SettingsGroup_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_SettingsGroup_FWDDECL)
#include <Modloader/app/structs/SMAA_SettingsGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_SettingsGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
