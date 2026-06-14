#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainOffset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainOffset__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_TerrainOffset__Fields_DEFINED
struct AimIK;
struct TerrainOffset__Fields {
    struct MonoBehaviour__Fields _;
    struct AimIK* aimIK;
    struct Vector3 raycastOffset;
    struct LayerMask raycastLayers;
    float min;
    float max;
    float lerpSpeed;
    struct RaycastHit hit;
    struct Vector3 offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainOffset__Fields_FWDDECL)
#define IL2CPP_STRUCT_TerrainOffset__Fields_FWDDECL
#include <Modloader/app/structs/AimIK.h>
#endif
#undef IL2CPP_STRUCT_TerrainOffset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainOffset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TerrainOffset__Fields_FWDDECL)
#include <Modloader/app/structs/TerrainOffset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainOffset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
