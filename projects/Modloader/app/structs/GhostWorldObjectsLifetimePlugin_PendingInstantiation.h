#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_DEFINED)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_DEFINED
struct GameObject;
struct GhostWorldObjectsLifetimePlugin_PendingInstantiation {
    struct GameObject* Instance;
    struct GameObject* Prefab;
};
#endif
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_FWDDECL)
#define IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_DEFINED) && !defined(IL2CPP_STRUCT_GhostWorldObjectsLifetimePlugin_PendingInstantiation_FWDDECL)
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostWorldObjectsLifetimePlugin_PendingInstantiation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
