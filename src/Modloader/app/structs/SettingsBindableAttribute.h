#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsBindableAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsBindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsBindableAttribute_DEFINED)
#include <Modloader/app/structs/SettingsBindableAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsBindableAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsBindableAttribute_DEFINED
struct SettingsBindableAttribute__Class;
struct SettingsBindableAttribute {
    struct SettingsBindableAttribute__Class* klass;
    MonitorData* monitor;
    struct SettingsBindableAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsBindableAttribute_FWDDECL)
#define IL2CPP_STRUCT_SettingsBindableAttribute_FWDDECL
#include <Modloader/app/structs/SettingsBindableAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsBindableAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsBindableAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SettingsBindableAttribute_FWDDECL)
#include <Modloader/app/structs/SettingsBindableAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsBindableAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
