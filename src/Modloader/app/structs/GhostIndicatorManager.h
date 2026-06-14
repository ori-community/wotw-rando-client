#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostIndicatorManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostIndicatorManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager_DEFINED)
#include <Modloader/app/structs/GhostIndicatorManager__Fields.h>
#if defined(IL2CPP_STRUCT_GhostIndicatorManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostIndicatorManager_DEFINED
struct GhostIndicatorManager__Class;
struct GhostIndicatorManager {
    struct GhostIndicatorManager__Class* klass;
    MonitorData* monitor;
    struct GhostIndicatorManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager_FWDDECL)
#define IL2CPP_STRUCT_GhostIndicatorManager_FWDDECL
#include <Modloader/app/structs/GhostIndicatorManager__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostIndicatorManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicatorManager_DEFINED) && !defined(IL2CPP_STRUCT_GhostIndicatorManager_FWDDECL)
#include <Modloader/app/structs/GhostIndicatorManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostIndicatorManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
