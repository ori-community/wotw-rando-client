#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostManager_DEFINED)
#include <Modloader/app/structs/GhostManager__Fields.h>
#if defined(IL2CPP_STRUCT_GhostManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostManager_DEFINED
struct GhostManager__Class;
struct GhostManager {
    struct GhostManager__Class* klass;
    MonitorData* monitor;
    struct GhostManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostManager_FWDDECL)
#define IL2CPP_STRUCT_GhostManager_FWDDECL
#include <Modloader/app/structs/GhostManager__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostManager_DEFINED) && !defined(IL2CPP_STRUCT_GhostManager_FWDDECL)
#include <Modloader/app/structs/GhostManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
