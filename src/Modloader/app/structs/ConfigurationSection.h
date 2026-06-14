#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfigurationSection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfigurationSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSection_DEFINED)
#define IL2CPP_STRUCT_ConfigurationSection_DEFINED
struct ConfigurationSection__Class;
struct ConfigurationSection {
    struct ConfigurationSection__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ConfigurationSection_FWDDECL)
#define IL2CPP_STRUCT_ConfigurationSection_FWDDECL
#include <Modloader/app/structs/ConfigurationSection__Class.h>
#endif
#undef IL2CPP_STRUCT_ConfigurationSection_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfigurationSection_DEFINED) && !defined(IL2CPP_STRUCT_ConfigurationSection_FWDDECL)
#include <Modloader/app/structs/ConfigurationSection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfigurationSection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
