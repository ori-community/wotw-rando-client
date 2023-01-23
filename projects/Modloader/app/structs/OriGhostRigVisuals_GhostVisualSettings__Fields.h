#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_DEFINED
struct UberShaderColor;
struct __declspec(align(8)) OriGhostRigVisuals_GhostVisualSettings__Fields {
    struct UberShaderColor* MultiplyLayerColor;
    struct UberShaderColor* EmissivityColor;
    struct UberShaderColor* TrailColor;
    struct UberShaderColor* FirstVignetteColor;
    struct UberShaderColor* SecondVignetteColor;
    struct UberShaderColor* GhostIndicatorColor;
    struct UberShaderColor* ParticleColor;
};
#endif
#if !defined(IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_FWDDECL
#include <Modloader/app/structs/UberShaderColor.h>
#endif
#undef IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriGhostRigVisuals_GhostVisualSettings__Fields_FWDDECL)
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
