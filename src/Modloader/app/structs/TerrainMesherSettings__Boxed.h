#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainMesherSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainMesherSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings__Boxed_DEFINED)
#include <Modloader/app/structs/TerrainMesherSettings.h>
#if defined(IL2CPP_STRUCT_TerrainMesherSettings_DEFINED)
#define IL2CPP_STRUCT_TerrainMesherSettings__Boxed_DEFINED
struct TerrainMesherSettings__Class;
struct TerrainMesherSettings__Boxed {
    struct TerrainMesherSettings__Class* klass;
    MonitorData* monitor;
    struct TerrainMesherSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TerrainMesherSettings__Boxed_FWDDECL
#include <Modloader/app/structs/TerrainMesherSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_TerrainMesherSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TerrainMesherSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/TerrainMesherSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainMesherSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
