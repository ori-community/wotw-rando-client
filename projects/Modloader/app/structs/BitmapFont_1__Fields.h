#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BitmapFont_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BitmapFont_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFont_1__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BitmapFont_1__Fields_DEFINED
struct BitmapFontChar_1__Array;
struct BitmapFontChar_1;
struct BitmapFont_1__Fields {
    struct ScriptableObject__Fields _;
    struct BitmapFontChar_1__Array* asciiChars;
    struct BitmapFontChar_1__Array* otherChars;
    float pixelLineHeight;
    float baseline;
    float baselineToBottom;
    float spaceAdvance;
    bool hasImportedKerningData;
    float importOffsetX;
    float importOffsetY;
    float importOffsetAdvance;
    float importLineHeightAdjustment;
    struct BitmapFontChar_1* missing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BitmapFont_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_BitmapFont_1__Fields_FWDDECL
#include <Modloader/app/structs/BitmapFontChar_1.h>
#include <Modloader/app/structs/BitmapFontChar_1__Array.h>
#endif
#undef IL2CPP_STRUCT_BitmapFont_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BitmapFont_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BitmapFont_1__Fields_FWDDECL)
#include <Modloader/app/structs/BitmapFont_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BitmapFont_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
