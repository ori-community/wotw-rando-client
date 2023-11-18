#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalTurbulenceMapManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager_DEFINED)
#include <Modloader/app/structs/GlobalTurbulenceMapManager__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager_DEFINED
struct GlobalTurbulenceMapManager__Class;
struct GlobalTurbulenceMapManager {
    struct GlobalTurbulenceMapManager__Class* klass;
    MonitorData* monitor;
    struct GlobalTurbulenceMapManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager_FWDDECL)
#define IL2CPP_STRUCT_GlobalTurbulenceMapManager_FWDDECL
#include <Modloader/app/structs/GlobalTurbulenceMapManager__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalTurbulenceMapManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager_DEFINED) && !defined(IL2CPP_STRUCT_GlobalTurbulenceMapManager_FWDDECL)
#include <Modloader/app/structs/GlobalTurbulenceMapManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalTurbulenceMapManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
