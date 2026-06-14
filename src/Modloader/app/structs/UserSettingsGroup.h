#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserSettingsGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserSettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSettingsGroup_DEFINED)
#define IL2CPP_STRUCT_UserSettingsGroup_DEFINED
struct UserSettingsGroup__Class;
struct UserSettingsGroup {
    struct UserSettingsGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UserSettingsGroup_FWDDECL)
#define IL2CPP_STRUCT_UserSettingsGroup_FWDDECL
#include <Modloader/app/structs/UserSettingsGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_UserSettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserSettingsGroup_DEFINED) && !defined(IL2CPP_STRUCT_UserSettingsGroup_FWDDECL)
#include <Modloader/app/structs/UserSettingsGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserSettingsGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
