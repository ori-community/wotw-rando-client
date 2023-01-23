#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathsPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathsPlugin_DEFINED)
#include <Modloader/app/structs/DeathsPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_DeathsPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathsPlugin_DEFINED
struct DeathsPlugin__Class;
struct DeathsPlugin {
    struct DeathsPlugin__Class* klass;
    MonitorData* monitor;
    struct DeathsPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathsPlugin_FWDDECL)
#define IL2CPP_STRUCT_DeathsPlugin_FWDDECL
#include <Modloader/app/structs/DeathsPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathsPlugin_DEFINED) && !defined(IL2CPP_STRUCT_DeathsPlugin_FWDDECL)
#include <Modloader/app/structs/DeathsPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathsPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
