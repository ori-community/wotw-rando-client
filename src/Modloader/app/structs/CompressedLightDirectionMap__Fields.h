#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_DEFINED)
#define IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_DEFINED
struct TextureGuid;
struct Texture2D;
struct __declspec(align(8)) CompressedLightDirectionMap__Fields {
    struct TextureGuid* Left;
    struct TextureGuid* Right;
    struct TextureGuid* Top;
    struct TextureGuid* Bottom;
    struct TextureGuid* Front;
    struct TextureGuid* Rim;
    struct Texture2D* m_runtimeCompressedTexture;
};
#endif
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TextureGuid.h>
#endif
#undef IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_FWDDECL)
#include <Modloader/app/structs/CompressedLightDirectionMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompressedLightDirectionMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
