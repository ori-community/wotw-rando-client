#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakingWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakingWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakingWall_DEFINED)
#include <Modloader/app/structs/BreakingWall__Fields.h>
#if defined(IL2CPP_STRUCT_BreakingWall__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakingWall_DEFINED
struct BreakingWall__Class;
struct BreakingWall {
    struct BreakingWall__Class* klass;
    MonitorData* monitor;
    struct BreakingWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakingWall_FWDDECL)
#define IL2CPP_STRUCT_BreakingWall_FWDDECL
#include <Modloader/app/structs/BreakingWall__Class.h>
#endif
#undef IL2CPP_STRUCT_BreakingWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakingWall_DEFINED) && !defined(IL2CPP_STRUCT_BreakingWall_FWDDECL)
#include <Modloader/app/structs/BreakingWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakingWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
