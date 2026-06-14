#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsStringProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsStringProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsStringProvider__Fields_DEFINED)
#include <Modloader/app/structs/SettingsStringProvider_SettingType__Enum.h>
#include <Modloader/app/structs/StringValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_StringValueProvider__Fields_DEFINED) && defined(IL2CPP_STRUCT_SettingsStringProvider_SettingType__Enum_DEFINED)
#define IL2CPP_STRUCT_SettingsStringProvider__Fields_DEFINED
struct SettingsStringProvider__Fields {
    struct StringValueProvider__Fields _;
    SettingsStringProvider_SettingType__Enum Setting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsStringProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_SettingsStringProvider__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SettingsStringProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsStringProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SettingsStringProvider__Fields_FWDDECL)
#include <Modloader/app/structs/SettingsStringProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsStringProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
