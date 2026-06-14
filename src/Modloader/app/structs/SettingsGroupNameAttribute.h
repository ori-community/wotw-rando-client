#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsGroupNameAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsGroupNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsGroupNameAttribute_DEFINED)
#define IL2CPP_STRUCT_SettingsGroupNameAttribute_DEFINED
struct SettingsGroupNameAttribute__Class;
struct SettingsGroupNameAttribute {
    struct SettingsGroupNameAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsGroupNameAttribute_FWDDECL)
#define IL2CPP_STRUCT_SettingsGroupNameAttribute_FWDDECL
#include <Modloader/app/structs/SettingsGroupNameAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsGroupNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsGroupNameAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SettingsGroupNameAttribute_FWDDECL)
#include <Modloader/app/structs/SettingsGroupNameAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsGroupNameAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
