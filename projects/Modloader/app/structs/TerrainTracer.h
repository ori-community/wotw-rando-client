#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainTracer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainTracer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainTracer_DEFINED)
#include <Modloader/app/structs/TerrainTracer__Fields.h>
#if defined(IL2CPP_STRUCT_TerrainTracer__Fields_DEFINED)
#define IL2CPP_STRUCT_TerrainTracer_DEFINED
struct TerrainTracer__Class;
struct TerrainTracer {
    struct TerrainTracer__Class* klass;
    MonitorData* monitor;
    struct TerrainTracer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainTracer_FWDDECL)
#define IL2CPP_STRUCT_TerrainTracer_FWDDECL
#include <Modloader/app/structs/TerrainTracer__Class.h>
#endif
#undef IL2CPP_STRUCT_TerrainTracer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainTracer_DEFINED) && !defined(IL2CPP_STRUCT_TerrainTracer_FWDDECL)
#include <Modloader/app/structs/TerrainTracer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainTracer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
