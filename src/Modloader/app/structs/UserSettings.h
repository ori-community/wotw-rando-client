#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSettings_DEFINED)
#include <Modloader/app/structs/UserSettings__Fields.h>
#if defined(IL2CPP_STRUCT_UserSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UserSettings_DEFINED
struct UserSettings__Class;
struct UserSettings {
    struct UserSettings__Class* klass;
    MonitorData* monitor;
    struct UserSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserSettings_FWDDECL)
#define IL2CPP_STRUCT_UserSettings_FWDDECL
#include <Modloader/app/structs/UserSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_UserSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSettings_DEFINED) && !defined(IL2CPP_STRUCT_UserSettings_FWDDECL)
#include <Modloader/app/structs/UserSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
