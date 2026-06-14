#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IceWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IceWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_IceWall_DEFINED)
#include <Modloader/app/structs/IceWall__Fields.h>
#if defined(IL2CPP_STRUCT_IceWall__Fields_DEFINED)
#define IL2CPP_STRUCT_IceWall_DEFINED
struct IceWall__Class;
struct IceWall {
    struct IceWall__Class* klass;
    MonitorData* monitor;
    struct IceWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IceWall_FWDDECL)
#define IL2CPP_STRUCT_IceWall_FWDDECL
#include <Modloader/app/structs/IceWall__Class.h>
#endif
#undef IL2CPP_STRUCT_IceWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_IceWall_DEFINED) && !defined(IL2CPP_STRUCT_IceWall_FWDDECL)
#include <Modloader/app/structs/IceWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IceWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
