#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureProvider__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TextureProvider__Fields_DEFINED
struct Texture2D;
struct List_1_TextureProvider_TetxureContidionPair_;
struct TextureProvider__Fields {
    struct ScriptableObject__Fields _;
    struct Texture2D* DefaultTexture2D;
    struct List_1_TextureProvider_TetxureContidionPair_* TextureConditionPairs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureProvider__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TextureProvider_TetxureContidionPair_.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TextureProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureProvider__Fields_FWDDECL)
#include <Modloader/app/structs/TextureProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
