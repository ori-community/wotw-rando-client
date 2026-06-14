#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnOrbsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnOrbsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOrbsAction_DEFINED)
#include <Modloader/app/structs/SpawnOrbsAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnOrbsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnOrbsAction_DEFINED
struct SpawnOrbsAction__Class;
struct SpawnOrbsAction {
    struct SpawnOrbsAction__Class* klass;
    MonitorData* monitor;
    struct SpawnOrbsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnOrbsAction_FWDDECL)
#define IL2CPP_STRUCT_SpawnOrbsAction_FWDDECL
#include <Modloader/app/structs/SpawnOrbsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnOrbsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnOrbsAction_DEFINED) && !defined(IL2CPP_STRUCT_SpawnOrbsAction_FWDDECL)
#include <Modloader/app/structs/SpawnOrbsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnOrbsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
