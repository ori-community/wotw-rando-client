#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsSectionInternal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsSectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal_DEFINED)
#include <Modloader/app/structs/SettingsSectionInternal__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsSectionInternal__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsSectionInternal_DEFINED
struct SettingsSectionInternal__Class;
struct SettingsSectionInternal {
    struct SettingsSectionInternal__Class* klass;
    MonitorData* monitor;
    struct SettingsSectionInternal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal_FWDDECL)
#define IL2CPP_STRUCT_SettingsSectionInternal_FWDDECL
#include <Modloader/app/structs/SettingsSectionInternal__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsSectionInternal_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSectionInternal_DEFINED) && !defined(IL2CPP_STRUCT_SettingsSectionInternal_FWDDECL)
#include <Modloader/app/structs/SettingsSectionInternal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsSectionInternal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
