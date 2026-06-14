#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextStyle_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextStyle_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyle_1__Fields_DEFINED)
#include <Modloader/app/structs/Color32.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED)
#define IL2CPP_STRUCT_TextStyle_1__Fields_DEFINED
struct String;
struct BitmapFont_1;
struct TextRenderer_1;
struct __declspec(align(8)) TextStyle_1__Fields {
    struct String* name;
    struct Color32 color;
    struct BitmapFont_1* font;
    struct TextRenderer_1* renderer;
    float letterSpacing;
    float fontScale;
    bool absoluteFontScale;
    float lineScale;
    bool hasColor;
    bool hasLetterSpacing;
    bool hasFontScale;
    bool hasLineScale;
    int32_t rendererId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextStyle_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextStyle_1__Fields_FWDDECL
#include <Modloader/app/structs/BitmapFont_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#endif
#undef IL2CPP_STRUCT_TextStyle_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextStyle_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextStyle_1__Fields_FWDDECL)
#include <Modloader/app/structs/TextStyle_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextStyle_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
