#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsLoadedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsLoadedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsLoadedEventHandler_DEFINED)
#include <Modloader/app/structs/SettingsLoadedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_SettingsLoadedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_SettingsLoadedEventHandler_DEFINED
struct SettingsLoadedEventHandler__Class;
struct SettingsLoadedEventHandler {
    struct SettingsLoadedEventHandler__Class* klass;
    MonitorData* monitor;
    struct SettingsLoadedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SettingsLoadedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_SettingsLoadedEventHandler_FWDDECL
#include <Modloader/app/structs/SettingsLoadedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsLoadedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsLoadedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_SettingsLoadedEventHandler_FWDDECL)
#include <Modloader/app/structs/SettingsLoadedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsLoadedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
