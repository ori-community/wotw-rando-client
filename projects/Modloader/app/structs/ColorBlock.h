#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ColorBlock_DEFINED
struct ColorBlock {
    struct Color m_NormalColor;
    struct Color m_HighlightedColor;
    struct Color m_PressedColor;
    struct Color m_DisabledColor;
    float m_ColorMultiplier;
    float m_FadeDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorBlock_FWDDECL)
#define IL2CPP_STRUCT_ColorBlock_FWDDECL
#endif
#undef IL2CPP_STRUCT_ColorBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorBlock_DEFINED) && !defined(IL2CPP_STRUCT_ColorBlock_FWDDECL)
#include <Modloader/app/structs/ColorBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
