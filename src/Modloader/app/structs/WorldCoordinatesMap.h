#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldCoordinatesMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldCoordinatesMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_DEFINED)
#include <Modloader/app/structs/WorldCoordinatesMap__Fields.h>
#if defined(IL2CPP_STRUCT_WorldCoordinatesMap__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldCoordinatesMap_DEFINED
struct WorldCoordinatesMap__Class;
struct WorldCoordinatesMap {
    struct WorldCoordinatesMap__Class* klass;
    MonitorData* monitor;
    struct WorldCoordinatesMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_FWDDECL)
#define IL2CPP_STRUCT_WorldCoordinatesMap_FWDDECL
#include <Modloader/app/structs/WorldCoordinatesMap__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldCoordinatesMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldCoordinatesMap_DEFINED) && !defined(IL2CPP_STRUCT_WorldCoordinatesMap_FWDDECL)
#include <Modloader/app/structs/WorldCoordinatesMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldCoordinatesMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
