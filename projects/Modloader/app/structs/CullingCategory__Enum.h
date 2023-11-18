#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingCategory__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingCategory__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategory__Enum_DEFINED)
#define IL2CPP_STRUCT_CullingCategory__Enum_DEFINED
enum class CullingCategory__Enum : uint32_t {
    Light = 0x00000001,
    DepthPrecull = 0x00000002,
    MeshTrail = 0x00000004,
    GodRay = 0x00000008,
    MotionVectors = 0x00000010,
    WaterTop = 0x00000020,
    WaterEdge = 0x00000040,
    WaterCross = 0x00000080,
    Emissive = 0x00000100,
    Opaque3D = 0x00000200,
    Masked = 0x00000400,
    Refraction = 0x00000800,
    Darkening = 0x00001000,
    MaskErasing = 0x00002000,
    All = 0xffffffff,
};
#endif
#if !defined(IL2CPP_STRUCT_CullingCategory__Enum_FWDDECL)
#define IL2CPP_STRUCT_CullingCategory__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CullingCategory__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingCategory__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CullingCategory__Enum_FWDDECL)
#include <Modloader/app/structs/CullingCategory__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingCategory__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
