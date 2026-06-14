#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AppliedTextStyle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AppliedTextStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/LineDescent.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_LineDescent_DEFINED)
#define IL2CPP_STRUCT_AppliedTextStyle_DEFINED
struct BitmapFont;
struct TextRenderer;
struct AppliedTextStyle {
    struct Color32 color;
    struct BitmapFont* font;
    struct TextRenderer* renderer;
    float size;
    float letterSpacing;
    float lineHeight;
    struct LineDescent lineDescent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_FWDDECL)
#define IL2CPP_STRUCT_AppliedTextStyle_FWDDECL
#include <Modloader/app/structs/BitmapFont.h>
#include <Modloader/app/structs/TextRenderer.h>
#endif
#undef IL2CPP_STRUCT_AppliedTextStyle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AppliedTextStyle_DEFINED) && !defined(IL2CPP_STRUCT_AppliedTextStyle_FWDDECL)
#include <Modloader/app/structs/AppliedTextStyle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AppliedTextStyle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
