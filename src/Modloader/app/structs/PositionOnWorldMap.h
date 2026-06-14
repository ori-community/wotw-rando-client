#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionOnWorldMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionOnWorldMap_DEFINED)
#include <Modloader/app/structs/PositionOnWorldMap__Fields.h>
#if defined(IL2CPP_STRUCT_PositionOnWorldMap__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionOnWorldMap_DEFINED
struct PositionOnWorldMap__Class;
struct PositionOnWorldMap {
    struct PositionOnWorldMap__Class* klass;
    MonitorData* monitor;
    struct PositionOnWorldMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionOnWorldMap_FWDDECL)
#define IL2CPP_STRUCT_PositionOnWorldMap_FWDDECL
#include <Modloader/app/structs/PositionOnWorldMap__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionOnWorldMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionOnWorldMap_DEFINED) && !defined(IL2CPP_STRUCT_PositionOnWorldMap_FWDDECL)
#include <Modloader/app/structs/PositionOnWorldMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionOnWorldMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
