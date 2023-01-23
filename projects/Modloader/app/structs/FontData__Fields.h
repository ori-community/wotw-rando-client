#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FontData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FontData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontData__Fields_DEFINED)
#include <Modloader/app/structs/FontStyle__Enum.h>
#include <Modloader/app/structs/HorizontalWrapMode__Enum.h>
#include <Modloader/app/structs/TextAnchor__Enum.h>
#include <Modloader/app/structs/VerticalWrapMode__Enum.h>
#if defined(IL2CPP_STRUCT_FontStyle__Enum_DEFINED) && defined(IL2CPP_STRUCT_TextAnchor__Enum_DEFINED) && defined(IL2CPP_STRUCT_HorizontalWrapMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_VerticalWrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_FontData__Fields_DEFINED
struct Font;
struct __declspec(align(8)) FontData__Fields {
    struct Font* m_Font;
    int32_t m_FontSize;
    FontStyle__Enum m_FontStyle;

    bool m_BestFit;
    int32_t m_MinSize;
    int32_t m_MaxSize;
    TextAnchor__Enum m_Alignment;

    bool m_AlignByGeometry;
    bool m_RichText;
    HorizontalWrapMode__Enum m_HorizontalOverflow;

    VerticalWrapMode__Enum m_VerticalOverflow;

    float m_LineSpacing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FontData__Fields_FWDDECL)
#define IL2CPP_STRUCT_FontData__Fields_FWDDECL
#include <Modloader/app/structs/Font.h>
#endif
#undef IL2CPP_STRUCT_FontData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FontData__Fields_FWDDECL)
#include <Modloader/app/structs/FontData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FontData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
