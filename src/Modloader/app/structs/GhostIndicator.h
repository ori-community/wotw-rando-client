#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostIndicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicator_DEFINED)
#include <Modloader/app/structs/GhostIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_GhostIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostIndicator_DEFINED
struct GhostIndicator__Class;
struct GhostIndicator {
    struct GhostIndicator__Class* klass;
    MonitorData* monitor;
    struct GhostIndicator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostIndicator_FWDDECL)
#define IL2CPP_STRUCT_GhostIndicator_FWDDECL
#include <Modloader/app/structs/GhostIndicator__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostIndicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicator_DEFINED) && !defined(IL2CPP_STRUCT_GhostIndicator_FWDDECL)
#include <Modloader/app/structs/GhostIndicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostIndicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
