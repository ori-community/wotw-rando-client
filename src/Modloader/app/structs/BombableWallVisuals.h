#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BombableWallVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BombableWallVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallVisuals_DEFINED)
#include <Modloader/app/structs/BombableWallVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_BombableWallVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_BombableWallVisuals_DEFINED
struct BombableWallVisuals__Class;
struct BombableWallVisuals {
    struct BombableWallVisuals__Class* klass;
    MonitorData* monitor;
    struct BombableWallVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BombableWallVisuals_FWDDECL)
#define IL2CPP_STRUCT_BombableWallVisuals_FWDDECL
#include <Modloader/app/structs/BombableWallVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_BombableWallVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_BombableWallVisuals_DEFINED) && !defined(IL2CPP_STRUCT_BombableWallVisuals_FWDDECL)
#include <Modloader/app/structs/BombableWallVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BombableWallVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
