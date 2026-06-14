#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostService_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostService_DEFINED)
#include <Modloader/app/structs/GhostService__Fields.h>
#if defined(IL2CPP_STRUCT_GhostService__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostService_DEFINED
struct GhostService__Class;
struct GhostService {
    struct GhostService__Class* klass;
    MonitorData* monitor;
    struct GhostService__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostService_FWDDECL)
#define IL2CPP_STRUCT_GhostService_FWDDECL
#include <Modloader/app/structs/GhostService__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostService_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostService_DEFINED) && !defined(IL2CPP_STRUCT_GhostService_FWDDECL)
#include <Modloader/app/structs/GhostService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
