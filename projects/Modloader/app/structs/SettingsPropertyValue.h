#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsPropertyValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsPropertyValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyValue_DEFINED)
#define IL2CPP_STRUCT_SettingsPropertyValue_DEFINED
struct SettingsPropertyValue__Class;
struct SettingsPropertyValue {
    struct SettingsPropertyValue__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsPropertyValue_FWDDECL)
#define IL2CPP_STRUCT_SettingsPropertyValue_FWDDECL
#include <Modloader/app/structs/SettingsPropertyValue__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsPropertyValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsPropertyValue_DEFINED) && !defined(IL2CPP_STRUCT_SettingsPropertyValue_FWDDECL)
#include <Modloader/app/structs/SettingsPropertyValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsPropertyValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
