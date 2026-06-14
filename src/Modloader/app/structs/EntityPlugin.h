#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlugin_DEFINED)
#include <Modloader/app/structs/EntityPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPlugin_DEFINED
struct EntityPlugin__Class;
struct EntityPlugin {
    struct EntityPlugin__Class* klass;
    MonitorData* monitor;
    struct EntityPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPlugin_FWDDECL)
#define IL2CPP_STRUCT_EntityPlugin_FWDDECL
#include <Modloader/app/structs/EntityPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPlugin_DEFINED) && !defined(IL2CPP_STRUCT_EntityPlugin_FWDDECL)
#include <Modloader/app/structs/EntityPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
