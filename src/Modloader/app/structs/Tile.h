#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tile_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tile_DEFINED)
#include <Modloader/app/structs/Tile__Fields.h>
#if defined(IL2CPP_STRUCT_Tile__Fields_DEFINED)
#define IL2CPP_STRUCT_Tile_DEFINED
struct Tile__Class;
struct Tile {
    struct Tile__Class* klass;
    MonitorData* monitor;
    struct Tile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tile_FWDDECL)
#define IL2CPP_STRUCT_Tile_FWDDECL
#include <Modloader/app/structs/Tile__Class.h>
#endif
#undef IL2CPP_STRUCT_Tile_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tile_DEFINED) && !defined(IL2CPP_STRUCT_Tile_FWDDECL)
#include <Modloader/app/structs/Tile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
