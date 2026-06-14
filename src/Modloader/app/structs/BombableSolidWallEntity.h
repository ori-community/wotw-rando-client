#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableSolidWallEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableSolidWallEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWallEntity_DEFINED)
#include <Modloader/app/structs/BombableSolidWallEntity__Fields.h>
#if defined(IL2CPP_STRUCT_BombableSolidWallEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableSolidWallEntity_DEFINED
struct BombableSolidWallEntity__Class;
struct BombableSolidWallEntity {
    struct BombableSolidWallEntity__Class* klass;
    MonitorData* monitor;
    struct BombableSolidWallEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableSolidWallEntity_FWDDECL)
#define IL2CPP_STRUCT_BombableSolidWallEntity_FWDDECL
#include <Modloader/app/structs/BombableSolidWallEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_BombableSolidWallEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableSolidWallEntity_DEFINED) && !defined(IL2CPP_STRUCT_BombableSolidWallEntity_FWDDECL)
#include <Modloader/app/structs/BombableSolidWallEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableSolidWallEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
