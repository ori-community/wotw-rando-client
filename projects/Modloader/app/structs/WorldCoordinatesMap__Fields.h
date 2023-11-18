#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldCoordinatesMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldCoordinatesMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentDirection__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_WorldCoordinatesMap__Fields_DEFINED
struct WorldCoordinatesMap_SegmentInfo__Array;
struct WorldCoordinatesMap__Fields {
    struct MonoBehaviour__Fields _;
    WorldCoordinatesMap_SegmentDirection__Enum Direction;

    struct WorldCoordinatesMap_SegmentInfo__Array* Segments;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_WorldCoordinatesMap__Fields_FWDDECL
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_WorldCoordinatesMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WorldCoordinatesMap__Fields_FWDDECL)
#include <Modloader/app/structs/WorldCoordinatesMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldCoordinatesMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
