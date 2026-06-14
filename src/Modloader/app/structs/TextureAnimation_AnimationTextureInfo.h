#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_DEFINED)
#define IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_DEFINED
struct Atlas;
struct AtlasSpriteTexture;
struct TextureAnimation_AnimationTextureInfo {
    struct Atlas* Atlas;
    struct AtlasSpriteTexture* SpriteTexture;
};
#endif
#if !defined(IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_FWDDECL)
#define IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_FWDDECL
#include <Modloader/app/structs/Atlas.h>
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#endif
#undef IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_DEFINED) && !defined(IL2CPP_STRUCT_TextureAnimation_AnimationTextureInfo_FWDDECL)
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureAnimation_AnimationTextureInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
