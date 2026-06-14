#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableSolidWall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableSolidWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWall_DEFINED)
#include <Modloader/app/structs/BombableSolidWall__Fields.h>
#if defined(IL2CPP_STRUCT_BombableSolidWall__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableSolidWall_DEFINED
struct BombableSolidWall__Class;
struct BombableSolidWall {
    struct BombableSolidWall__Class* klass;
    MonitorData* monitor;
    struct BombableSolidWall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableSolidWall_FWDDECL)
#define IL2CPP_STRUCT_BombableSolidWall_FWDDECL
#include <Modloader/app/structs/BombableSolidWall__Class.h>
#endif
#undef IL2CPP_STRUCT_BombableSolidWall_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWall_DEFINED) && !defined(IL2CPP_STRUCT_BombableSolidWall_FWDDECL)
#include <Modloader/app/structs/BombableSolidWall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableSolidWall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
