#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_DEFINED)
#include <Modloader/app/structs/UberScreenMode__Enum.h>
#include <Modloader/app/structs/UberShaderAtlasTextureDataType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_UberScreenMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberShaderAtlasTextureDataType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_DEFINED
struct Texture2D;
struct String;
struct __declspec(align(8)) UberShaderAtlasTextureData__Fields {
    bool Flipped;
    struct Vector4 AtlasUv;
    struct Vector4 AtlasMinMax;
    struct Vector2 DOFStrength;
    struct Vector2 MaxScreenSize;
    struct Texture2D* OriginalTexture;
    struct String* OriginalTextureGUID;
    struct String* AtlasTextureGUID;
    int32_t AtlasIndex;
    UberScreenMode__Enum UberScreenMode;

    float UberScreenTweak;
    float MipBias;
    UberShaderAtlasTextureDataType__Enum AtlasTextureType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderAtlasTextureData__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderAtlasTextureData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderAtlasTextureData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
