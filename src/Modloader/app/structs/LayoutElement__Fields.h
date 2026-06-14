#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayoutElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayoutElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutElement__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LayoutElement__Fields_DEFINED
struct LayoutElement__Fields {
    struct UIBehaviour__Fields _;
    bool m_IgnoreLayout;
    float m_MinWidth;
    float m_MinHeight;
    float m_PreferredWidth;
    float m_PreferredHeight;
    float m_FlexibleWidth;
    float m_FlexibleHeight;
    int32_t m_LayoutPriority;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayoutElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayoutElement__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LayoutElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayoutElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayoutElement__Fields_FWDDECL)
#include <Modloader/app/structs/LayoutElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayoutElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
