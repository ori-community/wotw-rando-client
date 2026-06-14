#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_DEFINED
struct String;
struct Material;
struct Renderer;
struct LegacyTextureUVAnimator__Fields {
    struct LegacyAnimator__Fields _;
    float UMultiplier;
    float VMultiplier;
    struct String* TextureName;
    int32_t _TextureID;
    struct Material* m_mainMaterial;
    struct Vector2 m_originalOffset;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTextureUVAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTextureUVAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTextureUVAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
