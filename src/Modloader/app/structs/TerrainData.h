#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainData_DEFINED)
#include <Modloader/app/structs/TerrainData__Fields.h>
#if defined(IL2CPP_STRUCT_TerrainData__Fields_DEFINED)
#define IL2CPP_STRUCT_TerrainData_DEFINED
struct TerrainData__Class;
struct TerrainData {
    struct TerrainData__Class* klass;
    MonitorData* monitor;
    struct TerrainData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainData_FWDDECL)
#define IL2CPP_STRUCT_TerrainData_FWDDECL
#include <Modloader/app/structs/TerrainData__Class.h>
#endif
#undef IL2CPP_STRUCT_TerrainData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainData_DEFINED) && !defined(IL2CPP_STRUCT_TerrainData_FWDDECL)
#include <Modloader/app/structs/TerrainData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
