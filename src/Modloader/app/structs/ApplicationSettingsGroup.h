#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplicationSettingsGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplicationSettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsGroup_DEFINED)
#define IL2CPP_STRUCT_ApplicationSettingsGroup_DEFINED
struct ApplicationSettingsGroup__Class;
struct ApplicationSettingsGroup {
    struct ApplicationSettingsGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ApplicationSettingsGroup_FWDDECL)
#define IL2CPP_STRUCT_ApplicationSettingsGroup_FWDDECL
#include <Modloader/app/structs/ApplicationSettingsGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplicationSettingsGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplicationSettingsGroup_DEFINED) && !defined(IL2CPP_STRUCT_ApplicationSettingsGroup_FWDDECL)
#include <Modloader/app/structs/ApplicationSettingsGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplicationSettingsGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
