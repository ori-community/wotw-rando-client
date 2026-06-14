#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainOffset_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainOffset_DEFINED)
#include <Modloader/app/structs/TerrainOffset__Fields.h>
#if defined(IL2CPP_STRUCT_TerrainOffset__Fields_DEFINED)
#define IL2CPP_STRUCT_TerrainOffset_DEFINED
struct TerrainOffset__Class;
struct TerrainOffset {
    struct TerrainOffset__Class* klass;
    MonitorData* monitor;
    struct TerrainOffset__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainOffset_FWDDECL)
#define IL2CPP_STRUCT_TerrainOffset_FWDDECL
#include <Modloader/app/structs/TerrainOffset__Class.h>
#endif
#undef IL2CPP_STRUCT_TerrainOffset_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainOffset_DEFINED) && !defined(IL2CPP_STRUCT_TerrainOffset_FWDDECL)
#include <Modloader/app/structs/TerrainOffset.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainOffset.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
