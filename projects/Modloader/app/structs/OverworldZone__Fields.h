#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverworldZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverworldZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverworldZone__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OverworldZone__Fields_DEFINED
struct CageStructureTool;
struct OverworldZone__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 Position;
    struct CageStructureTool* Cage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverworldZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_OverworldZone__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool.h>
#endif
#undef IL2CPP_STRUCT_OverworldZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverworldZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OverworldZone__Fields_FWDDECL)
#include <Modloader/app/structs/OverworldZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverworldZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
