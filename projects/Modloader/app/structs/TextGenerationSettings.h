#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextGenerationSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextGenerationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerationSettings_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/HorizontalWrapMode__Enum.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/VerticalWrapMode__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_FontStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_TextAnchor__Enum_DEFINED) && defined(IL2CPP_STRUCT_VerticalWrapMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_HorizontalWrapMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_TextGenerationSettings_DEFINED
struct Font;
struct TextGenerationSettings {
    struct Font* font;
    struct Color color;
    int32_t fontSize;
    float lineSpacing;
    bool richText;
    float scaleFactor;
    FontStyle__Enum fontStyle;

    TextAnchor__Enum textAnchor;

    bool alignByGeometry;
    bool resizeTextForBestFit;
    int32_t resizeTextMinSize;
    int32_t resizeTextMaxSize;
    bool updateBounds;
    VerticalWrapMode__Enum verticalOverflow;

    HorizontalWrapMode__Enum horizontalOverflow;

    struct Vector2 generationExtents;
    struct Vector2 pivot;
    bool generateOutOfBounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextGenerationSettings_FWDDECL)
#define IL2CPP_STRUCT_TextGenerationSettings_FWDDECL
#include <Modloader/app/structs/Font.h>
#endif
#undef IL2CPP_STRUCT_TextGenerationSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextGenerationSettings_DEFINED) && !defined(IL2CPP_STRUCT_TextGenerationSettings_FWDDECL)
#include <Modloader/app/structs/TextGenerationSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextGenerationSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
