#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_DEFINED)
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Fields.h>
#if defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_DEFINED
struct WorldCoordinatesMap_SegmentInfo__Class;
struct WorldCoordinatesMap_SegmentInfo {
    struct WorldCoordinatesMap_SegmentInfo__Class* klass;
    MonitorData* monitor;
    struct WorldCoordinatesMap_SegmentInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_FWDDECL)
#define IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_FWDDECL
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_DEFINED) && !defined(IL2CPP_STRUCT_WorldCoordinatesMap_SegmentInfo_FWDDECL)
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldCoordinatesMap_SegmentInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
