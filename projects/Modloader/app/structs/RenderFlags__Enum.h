#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderFlags__Enum_DEFINED
enum class RenderFlags__Enum : uint32_t {
    Default = 0x00000001,
    Masked = 0x00000002,
    Emissive = 0x00000004,
    ReflectedOnly = 0x00000008,
    MoonTrail = 0x00000010,
    MotionVectors = 0x00000020,
    GodRays = 0x00000040,
    MeshTrail = 0x00000080,
    Refraction = 0x00000100,
    DepthPrecull = 0x00000200,
    Reflected = 0x00000400,
    Darkening = 0x00000800,
    EmissiveMoonTrail = 0x00001000,
    EmissiveMeshTrail = 0x00002000,
    MaskedMoonTrail = 0x00004000,
    DarkeningMoonTrail = 0x00008000,
    DarkeningMeshTrail = 0x00010000,
    MaskErasing = 0x00020000,
    Opaque3D = 0x00040000,
    Everything = 0xffffffff,
};
#endif
#if !defined(IL2CPP_STRUCT_RenderFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_RenderFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RenderFlags__Enum_FWDDECL)
#include <Modloader/app/structs/RenderFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
