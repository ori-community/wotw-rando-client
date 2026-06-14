#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsAttributeDictionary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsAttributeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsAttributeDictionary_DEFINED)
#include <Modloader/app/structs/SettingsAttributeDictionary__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsAttributeDictionary__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsAttributeDictionary_DEFINED
struct SettingsAttributeDictionary__Class;
struct SettingsAttributeDictionary {
    struct SettingsAttributeDictionary__Class* klass;
    MonitorData* monitor;
    struct SettingsAttributeDictionary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsAttributeDictionary_FWDDECL)
#define IL2CPP_STRUCT_SettingsAttributeDictionary_FWDDECL
#include <Modloader/app/structs/SettingsAttributeDictionary__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsAttributeDictionary_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsAttributeDictionary_DEFINED) && !defined(IL2CPP_STRUCT_SettingsAttributeDictionary_FWDDECL)
#include <Modloader/app/structs/SettingsAttributeDictionary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsAttributeDictionary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
