#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsSavingEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsSavingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSavingEventHandler_DEFINED)
#include <Modloader/app/structs/SettingsSavingEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsSavingEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsSavingEventHandler_DEFINED
struct SettingsSavingEventHandler__Class;
struct SettingsSavingEventHandler {
    struct SettingsSavingEventHandler__Class* klass;
    MonitorData* monitor;
    struct SettingsSavingEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsSavingEventHandler_FWDDECL)
#define IL2CPP_STRUCT_SettingsSavingEventHandler_FWDDECL
#include <Modloader/app/structs/SettingsSavingEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsSavingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsSavingEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_SettingsSavingEventHandler_FWDDECL)
#include <Modloader/app/structs/SettingsSavingEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsSavingEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
