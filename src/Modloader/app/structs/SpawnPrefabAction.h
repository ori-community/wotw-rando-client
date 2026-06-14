#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpawnPrefabAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpawnPrefabAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnPrefabAction_DEFINED)
#include <Modloader/app/structs/SpawnPrefabAction__Fields.h>
#if defined(IL2CPP_STRUCT_SpawnPrefabAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SpawnPrefabAction_DEFINED
struct SpawnPrefabAction__Class;
struct SpawnPrefabAction {
    struct SpawnPrefabAction__Class* klass;
    MonitorData* monitor;
    struct SpawnPrefabAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpawnPrefabAction_FWDDECL)
#define IL2CPP_STRUCT_SpawnPrefabAction_FWDDECL
#include <Modloader/app/structs/SpawnPrefabAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SpawnPrefabAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpawnPrefabAction_DEFINED) && !defined(IL2CPP_STRUCT_SpawnPrefabAction_FWDDECL)
#include <Modloader/app/structs/SpawnPrefabAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpawnPrefabAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
