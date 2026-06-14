#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZoneDamageSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZoneDamageSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneDamageSettings_DEFINED)
#include <Modloader/app/structs/ZoneDamageSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ZoneDamageSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ZoneDamageSettings_DEFINED
struct ZoneDamageSettings__Class;
struct ZoneDamageSettings {
    struct ZoneDamageSettings__Class* klass;
    MonitorData* monitor;
    struct ZoneDamageSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZoneDamageSettings_FWDDECL)
#define IL2CPP_STRUCT_ZoneDamageSettings_FWDDECL
#include <Modloader/app/structs/ZoneDamageSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ZoneDamageSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZoneDamageSettings_DEFINED) && !defined(IL2CPP_STRUCT_ZoneDamageSettings_FWDDECL)
#include <Modloader/app/structs/ZoneDamageSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZoneDamageSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
