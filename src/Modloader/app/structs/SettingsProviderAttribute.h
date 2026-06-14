#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsProviderAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProviderAttribute_DEFINED)
#define IL2CPP_STRUCT_SettingsProviderAttribute_DEFINED
struct SettingsProviderAttribute__Class;
struct SettingsProviderAttribute {
    struct SettingsProviderAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsProviderAttribute_FWDDECL)
#define IL2CPP_STRUCT_SettingsProviderAttribute_FWDDECL
#include <Modloader/app/structs/SettingsProviderAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsProviderAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProviderAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SettingsProviderAttribute_FWDDECL)
#include <Modloader/app/structs/SettingsProviderAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsProviderAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
