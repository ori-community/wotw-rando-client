#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectChanges_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectChanges_DEFINED)
#include <Modloader/app/structs/GameObjectChanges__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectChanges__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectChanges_DEFINED
struct GameObjectChanges__Class;
struct GameObjectChanges {
    struct GameObjectChanges__Class* klass;
    MonitorData* monitor;
    struct GameObjectChanges__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectChanges_FWDDECL)
#define IL2CPP_STRUCT_GameObjectChanges_FWDDECL
#include <Modloader/app/structs/GameObjectChanges__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectChanges_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectChanges_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectChanges_FWDDECL)
#include <Modloader/app/structs/GameObjectChanges.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectChanges.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
