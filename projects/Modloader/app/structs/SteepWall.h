#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteepWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteepWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteepWall_DEFINED)
#include <Modloader/app/structs/SteepWall__Fields.h>
#if defined(IL2CPP_STRUCT_SteepWall__Fields_DEFINED)
#define IL2CPP_STRUCT_SteepWall_DEFINED
struct SteepWall__Class;
struct SteepWall {
    struct SteepWall__Class* klass;
    MonitorData* monitor;
    struct SteepWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteepWall_FWDDECL)
#define IL2CPP_STRUCT_SteepWall_FWDDECL
#include <Modloader/app/structs/SteepWall__Class.h>
#endif
#undef IL2CPP_STRUCT_SteepWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteepWall_DEFINED) && !defined(IL2CPP_STRUCT_SteepWall_FWDDECL)
#include <Modloader/app/structs/SteepWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteepWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
