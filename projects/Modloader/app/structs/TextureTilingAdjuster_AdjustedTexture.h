#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_DEFINED)
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty_Texture__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_DEFINED
struct TextureTilingAdjuster_AdjustedTexture {
    UberShaderProperty_Texture__Enum TextureProperty;

    struct Vector2 OriginaTextureScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_FWDDECL)
#define IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_DEFINED) && !defined(IL2CPP_STRUCT_TextureTilingAdjuster_AdjustedTexture_FWDDECL)
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureTilingAdjuster_AdjustedTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
