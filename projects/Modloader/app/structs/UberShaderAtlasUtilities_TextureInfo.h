#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_DEFINED)
#define IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_DEFINED
struct UberShaderAtlasUtilities_TextureInfo {
    bool IsBlurry;
    bool ExcludeFromAtlas;
    bool IsShared;
    bool IsHero;
    bool IsUnique;
    bool IsScarce;
    bool IsZone;
    bool ExcludeFromScreen;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAtlasUtilities_TextureInfo_FWDDECL)
#include <Modloader/app/structs/UberShaderAtlasUtilities_TextureInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAtlasUtilities_TextureInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
