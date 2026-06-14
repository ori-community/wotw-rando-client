#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Terrain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Terrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_Terrain_DEFINED)
#define IL2CPP_STRUCT_Terrain_DEFINED
struct Terrain__Class;
struct Terrain {
    struct Terrain__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Terrain_FWDDECL)
#define IL2CPP_STRUCT_Terrain_FWDDECL
#include <Modloader/app/structs/Terrain__Class.h>
#endif
#undef IL2CPP_STRUCT_Terrain_INITIALIZING
#if !defined(IL2CPP_STRUCT_Terrain_DEFINED) && !defined(IL2CPP_STRUCT_Terrain_FWDDECL)
#include <Modloader/app/structs/Terrain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Terrain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
