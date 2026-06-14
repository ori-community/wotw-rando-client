#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserSocket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserSocket_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserSocket_DEFINED)
#include <Modloader/app/structs/LaserSocket__Fields.h>
#if defined(IL2CPP_STRUCT_LaserSocket__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserSocket_DEFINED
struct LaserSocket__Class;
struct LaserSocket {
    struct LaserSocket__Class* klass;
    MonitorData* monitor;
    struct LaserSocket__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserSocket_FWDDECL)
#define IL2CPP_STRUCT_LaserSocket_FWDDECL
#include <Modloader/app/structs/LaserSocket__Class.h>
#endif
#undef IL2CPP_STRUCT_LaserSocket_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserSocket_DEFINED) && !defined(IL2CPP_STRUCT_LaserSocket_FWDDECL)
#include <Modloader/app/structs/LaserSocket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserSocket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
