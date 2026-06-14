#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProperty_DEFINED)
#define IL2CPP_STRUCT_SettingsProperty_DEFINED
struct SettingsProperty__Class;
struct SettingsProperty {
    struct SettingsProperty__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsProperty_FWDDECL)
#define IL2CPP_STRUCT_SettingsProperty_FWDDECL
#include <Modloader/app/structs/SettingsProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProperty_DEFINED) && !defined(IL2CPP_STRUCT_SettingsProperty_FWDDECL)
#include <Modloader/app/structs/SettingsProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
