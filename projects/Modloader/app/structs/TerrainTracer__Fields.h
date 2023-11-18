#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainTracer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainTracer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainTracer__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Ray_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_TerrainTracer__Fields_DEFINED
struct PlatformMovement;
struct Transform;
struct __declspec(align(8)) TerrainTracer__Fields {
    int32_t AmountOfRays;
    float RayLength;
    float GroundDotNormalLimit;
    struct LayerMask TerrainMask;
    struct PlatformMovement* m_plataformMovement;
    struct Transform* m_origin;
    float m_angle;
    struct Ray m_ray;
    struct RaycastHit m_hitInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainTracer__Fields_FWDDECL)
#define IL2CPP_STRUCT_TerrainTracer__Fields_FWDDECL
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TerrainTracer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainTracer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TerrainTracer__Fields_FWDDECL)
#include <Modloader/app/structs/TerrainTracer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainTracer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
