#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnEntityAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnEntityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnEntityAction_DEFINED)
#include <Modloader/app/structs/SpawnEntityAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnEntityAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnEntityAction_DEFINED
struct SpawnEntityAction__Class;
struct SpawnEntityAction {
    struct SpawnEntityAction__Class* klass;
    MonitorData* monitor;
    struct SpawnEntityAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnEntityAction_FWDDECL)
#define IL2CPP_STRUCT_SpawnEntityAction_FWDDECL
#include <Modloader/app/structs/SpawnEntityAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnEntityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnEntityAction_DEFINED) && !defined(IL2CPP_STRUCT_SpawnEntityAction_FWDDECL)
#include <Modloader/app/structs/SpawnEntityAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnEntityAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
