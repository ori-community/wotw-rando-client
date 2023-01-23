#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWall_DEFINED)
#include <Modloader/app/structs/SeinGrabWall__Fields.h>
#if defined(IL2CPP_STRUCT_SeinGrabWall__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabWall_DEFINED
struct SeinGrabWall__Class;
struct SeinGrabWall {
    struct SeinGrabWall__Class* klass;
    MonitorData* monitor;
    struct SeinGrabWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabWall_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabWall_FWDDECL
#include <Modloader/app/structs/SeinGrabWall__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWall_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabWall_FWDDECL)
#include <Modloader/app/structs/SeinGrabWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
