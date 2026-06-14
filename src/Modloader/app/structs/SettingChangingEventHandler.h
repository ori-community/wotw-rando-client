#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingChangingEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingChangingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingChangingEventHandler_DEFINED)
#include <Modloader/app/structs/SettingChangingEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SettingChangingEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingChangingEventHandler_DEFINED
struct SettingChangingEventHandler__Class;
struct SettingChangingEventHandler {
    struct SettingChangingEventHandler__Class* klass;
    MonitorData* monitor;
    struct SettingChangingEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingChangingEventHandler_FWDDECL)
#define IL2CPP_STRUCT_SettingChangingEventHandler_FWDDECL
#include <Modloader/app/structs/SettingChangingEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingChangingEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingChangingEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_SettingChangingEventHandler_FWDDECL)
#include <Modloader/app/structs/SettingChangingEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingChangingEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
