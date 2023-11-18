#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientSettingsSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientSettingsSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSettingsSection_DEFINED)
#define IL2CPP_STRUCT_ClientSettingsSection_DEFINED
struct ClientSettingsSection__Class;
struct ClientSettingsSection {
    struct ClientSettingsSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ClientSettingsSection_FWDDECL)
#define IL2CPP_STRUCT_ClientSettingsSection_FWDDECL
#include <Modloader/app/structs/ClientSettingsSection__Class.h>
#endif
#undef IL2CPP_STRUCT_ClientSettingsSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientSettingsSection_DEFINED) && !defined(IL2CPP_STRUCT_ClientSettingsSection_FWDDECL)
#include <Modloader/app/structs/ClientSettingsSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientSettingsSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
