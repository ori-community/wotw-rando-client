#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsContext_DEFINED)
#include <Modloader/app/structs/SettingsContext__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsContext_DEFINED
struct SettingsContext__Class;
struct SettingsContext {
    struct SettingsContext__Class* klass;
    MonitorData* monitor;
    struct SettingsContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsContext_FWDDECL)
#define IL2CPP_STRUCT_SettingsContext_FWDDECL
#include <Modloader/app/structs/SettingsContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsContext_DEFINED) && !defined(IL2CPP_STRUCT_SettingsContext_FWDDECL)
#include <Modloader/app/structs/SettingsContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
