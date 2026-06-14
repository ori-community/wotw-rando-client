#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppliedTextStyle_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppliedTextStyle_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_1_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/LineDescent_1.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_LineDescent_1_DEFINED)
#define IL2CPP_STRUCT_AppliedTextStyle_1_DEFINED
struct BitmapFont_1;
struct TextRenderer_1;
struct AppliedTextStyle_1 {
    struct Color32 color;
    struct BitmapFont_1* font;
    struct TextRenderer_1* renderer;
    float size;
    float letterSpacing;
    float lineHeight;
    struct LineDescent_1 lineDescent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_1_FWDDECL)
#define IL2CPP_STRUCT_AppliedTextStyle_1_FWDDECL
#include <Modloader/app/structs/BitmapFont_1.h>
#include <Modloader/app/structs/TextRenderer_1.h>
#endif
#undef IL2CPP_STRUCT_AppliedTextStyle_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_1_DEFINED) && !defined(IL2CPP_STRUCT_AppliedTextStyle_1_FWDDECL)
#include <Modloader/app/structs/AppliedTextStyle_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppliedTextStyle_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
