#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbilitiesPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbilitiesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_DEFINED)
#include <Modloader/app/structs/AbilitiesPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_AbilitiesPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_AbilitiesPlugin_DEFINED
struct AbilitiesPlugin__Class;
struct AbilitiesPlugin {
    struct AbilitiesPlugin__Class* klass;
    MonitorData* monitor;
    struct AbilitiesPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_FWDDECL)
#define IL2CPP_STRUCT_AbilitiesPlugin_FWDDECL
#include <Modloader/app/structs/AbilitiesPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_AbilitiesPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbilitiesPlugin_DEFINED) && !defined(IL2CPP_STRUCT_AbilitiesPlugin_FWDDECL)
#include <Modloader/app/structs/AbilitiesPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbilitiesPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
