#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenOverlay__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/ScreenOverlay_OverlayBlendMode__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScreenOverlay_OverlayBlendMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenOverlay__Fields_DEFINED
struct Texture2D;
struct Shader;
struct Material;
struct ScreenOverlay__Fields {
    struct PostEffectsBase__Fields _;
    ScreenOverlay_OverlayBlendMode__Enum blendMode;

    float intensity;
    struct Texture2D* texture;
    struct Shader* overlayShader;
    struct Material* overlayMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenOverlay__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ScreenOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
