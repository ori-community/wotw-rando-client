#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCFont__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCFont__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_CCFont__Fields_DEFINED
struct CCFont_Char__Array;
struct CCFont_Char;
struct CCFont__Fields {
    struct ScriptableObject__Fields _;
    struct CCFont_Char__Array* asciiChars;
    struct CCFont_Char__Array* otherChars;
    int32_t pixelLineHeight;
    float pixelScale;
    float baseline;
    float spaceAdvance;
    bool supportsKerning;
    float leftMargin;
    float rightMargin;
    float topMargin;
    float bottomMargin;
    struct CCFont_Char* missing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCFont__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCFont__Fields_FWDDECL
#include <Modloader/app/structs/CCFont_Char.h>
#include <Modloader/app/structs/CCFont_Char__Array.h>
#endif
#undef IL2CPP_STRUCT_CCFont__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCFont__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCFont__Fields_FWDDECL)
#include <Modloader/app/structs/CCFont__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCFont__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
