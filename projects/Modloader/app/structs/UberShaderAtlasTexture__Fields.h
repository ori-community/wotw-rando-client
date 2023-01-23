#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_DEFINED
struct String;
struct UberShaderBlockTextured;
struct Texture2D;
struct __declspec(align(8)) UberShaderAtlasTexture__Fields {
    struct String* OriginalTextureGUID;
    struct UberShaderBlockTextured* TexturedBlock;
    struct String* m_lastGUID;
    bool m_usePrefabAtlas;
    bool m_setDofExplicit;
    struct Vector2 m_explicitDof;
    struct Texture2D* m_textureCache;
    bool m_hasExternal;
    double m_lastExternalCheck;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberShaderBlockTextured.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAtlasTexture__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderAtlasTexture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAtlasTexture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
