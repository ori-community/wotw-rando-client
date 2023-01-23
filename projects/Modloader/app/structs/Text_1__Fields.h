#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Text_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Text_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text_1__Fields_DEFINED)
#include <Modloader/app/structs/AlignmentMode__Enum_1.h>
#include <Modloader/app/structs/AppliedTextStyle.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/HorizontalAnchorMode__Enum_1.h>
#include <Modloader/app/structs/UberShaderDrivenComponent__Fields.h>
#include <Modloader/app/structs/VerticalAnchorMode__Enum_1.h>
#if defined(IL2CPP_STRUCT_UberShaderDrivenComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_AlignmentMode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_HorizontalAnchorMode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_VerticalAnchorMode__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_AppliedTextStyle_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Text_1__Fields_DEFINED
struct String;
struct Vector2__Array;
struct Text_1;
struct TextStyleCollection;
struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_;
struct StringBuilder;
struct List_1_CatlikeCoding_TextBox_LineDescent_;
struct List_1_Moon_UI_TextBoxLine_;
struct CharMetaData__Array;
struct TextRenderer__Array;
struct Text_1__Fields {
    struct UberShaderDrivenComponent__Fields _;
    AlignmentMode__Enum_1 alignment;

    HorizontalAnchorMode__Enum_1 horizontalAnchor;

    VerticalAnchorMode__Enum_1 verticalAnchor;

    struct String* defaultText;
    float tabSize;
    float width;
    float paddingLeft;
    float paddingRight;
    float paddingTop;
    float paddingBottom;
    float boundsLeft;
    float boundsRight;
    float boundsTop;
    float boundsBottom;
    struct Vector2__Array* leftContour;
    struct Vector2__Array* rightContour;
    float maxHeight;
    struct Text_1* overflowBox;
    struct TextStyleCollection* styleCollection;
    bool m_initializeAfterEnabling;
    int32_t textLength;
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    struct Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* styleStack;
    struct AppliedTextStyle currentStyle;
    struct StringBuilder* styleStatementBuffer;
    struct List_1_CatlikeCoding_TextBox_LineDescent_* wordCache;
    struct List_1_Moon_UI_TextBoxLine_* lines;
    struct CharMetaData__Array* charMetaData;
    struct TextRenderer__Array* textRenderers;
    struct Text_1* overflowFromBox;
    bool overflowed;
    float size;
    struct Color color;
    float LineSpacing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Text_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Text_1__Fields_FWDDECL
#include <Modloader/app/structs/CharMetaData__Array.h>
#include <Modloader/app/structs/List_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/List_1_Moon_UI_TextBoxLine_.h>
#include <Modloader/app/structs/Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/TextRenderer__Array.h>
#include <Modloader/app/structs/TextStyleCollection.h>
#include <Modloader/app/structs/Text_1.h>
#include <Modloader/app/structs/Vector2__Array.h>
#endif
#undef IL2CPP_STRUCT_Text_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Text_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Text_1__Fields_FWDDECL)
#include <Modloader/app/structs/Text_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Text_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
