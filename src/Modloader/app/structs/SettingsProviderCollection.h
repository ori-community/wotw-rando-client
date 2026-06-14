#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsProviderCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsProviderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProviderCollection_DEFINED)
#define IL2CPP_STRUCT_SettingsProviderCollection_DEFINED
struct SettingsProviderCollection__Class;
struct SettingsProviderCollection {
    struct SettingsProviderCollection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsProviderCollection_FWDDECL)
#define IL2CPP_STRUCT_SettingsProviderCollection_FWDDECL
#include <Modloader/app/structs/SettingsProviderCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsProviderCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsProviderCollection_DEFINED) && !defined(IL2CPP_STRUCT_SettingsProviderCollection_FWDDECL)
#include <Modloader/app/structs/SettingsProviderCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsProviderCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
