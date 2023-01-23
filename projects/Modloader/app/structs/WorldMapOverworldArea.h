#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldMapOverworldArea_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldMapOverworldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea_DEFINED)
#include <Modloader/app/structs/WorldMapOverworldArea__Fields.h>
#if defined(IL2CPP_STRUCT_WorldMapOverworldArea__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldMapOverworldArea_DEFINED
struct WorldMapOverworldArea__Class;
struct WorldMapOverworldArea {
    struct WorldMapOverworldArea__Class* klass;
    MonitorData* monitor;
    struct WorldMapOverworldArea__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea_FWDDECL)
#define IL2CPP_STRUCT_WorldMapOverworldArea_FWDDECL
#include <Modloader/app/structs/WorldMapOverworldArea__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldMapOverworldArea_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldMapOverworldArea_DEFINED) && !defined(IL2CPP_STRUCT_WorldMapOverworldArea_FWDDECL)
#include <Modloader/app/structs/WorldMapOverworldArea.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldMapOverworldArea.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
