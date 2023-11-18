#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainData__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TerrainData__Fields_DEFINED
struct __declspec(align(8)) TerrainData__Fields {
    struct Vector3 size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TerrainData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TerrainData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TerrainData__Fields_FWDDECL)
#include <Modloader/app/structs/TerrainData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
