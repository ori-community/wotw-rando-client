#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingChangingEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingChangingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingChangingEventArgs_DEFINED)
#include <Modloader/app/structs/SettingChangingEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_SettingChangingEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingChangingEventArgs_DEFINED
struct SettingChangingEventArgs__Class;
struct SettingChangingEventArgs {
    struct SettingChangingEventArgs__Class* klass;
    MonitorData* monitor;
    struct SettingChangingEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingChangingEventArgs_FWDDECL)
#define IL2CPP_STRUCT_SettingChangingEventArgs_FWDDECL
#include <Modloader/app/structs/SettingChangingEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingChangingEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingChangingEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_SettingChangingEventArgs_FWDDECL)
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
