#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserObstacle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserObstacle_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserObstacle_DEFINED)
#include <Modloader/app/structs/LaserObstacle__Fields.h>
#if defined(IL2CPP_STRUCT_LaserObstacle__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserObstacle_DEFINED
struct LaserObstacle__Class;
struct LaserObstacle {
    struct LaserObstacle__Class* klass;
    MonitorData* monitor;
    struct LaserObstacle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserObstacle_FWDDECL)
#define IL2CPP_STRUCT_LaserObstacle_FWDDECL
#include <Modloader/app/structs/LaserObstacle__Class.h>
#endif
#undef IL2CPP_STRUCT_LaserObstacle_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserObstacle_DEFINED) && !defined(IL2CPP_STRUCT_LaserObstacle_FWDDECL)
#include <Modloader/app/structs/LaserObstacle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserObstacle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
