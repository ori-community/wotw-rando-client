#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SettingsBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SettingsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsBase_DEFINED)
#define IL2CPP_STRUCT_SettingsBase_DEFINED
struct SettingsBase__Class;
struct SettingsBase {
    struct SettingsBase__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SettingsBase_FWDDECL)
#define IL2CPP_STRUCT_SettingsBase_FWDDECL
#include <Modloader/app/structs/SettingsBase__Class.h>
#endif
#undef IL2CPP_STRUCT_SettingsBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SettingsBase_DEFINED) && !defined(IL2CPP_STRUCT_SettingsBase_FWDDECL)
#include <Modloader/app/structs/SettingsBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SettingsBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
