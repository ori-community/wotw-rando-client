#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberGhostTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberGhostTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrail_DEFINED)
#include <Modloader/app/structs/UberGhostTrail__Fields.h>
#if defined(IL2CPP_STRUCT_UberGhostTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_UberGhostTrail_DEFINED
struct UberGhostTrail__Class;
struct UberGhostTrail {
    struct UberGhostTrail__Class* klass;
    MonitorData* monitor;
    struct UberGhostTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberGhostTrail_FWDDECL)
#define IL2CPP_STRUCT_UberGhostTrail_FWDDECL
#include <Modloader/app/structs/UberGhostTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_UberGhostTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberGhostTrail_DEFINED) && !defined(IL2CPP_STRUCT_UberGhostTrail_FWDDECL)
#include <Modloader/app/structs/UberGhostTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberGhostTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
