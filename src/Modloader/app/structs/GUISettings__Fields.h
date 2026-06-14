#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUISettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUISettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISettings__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_GUISettings__Fields_DEFINED
struct __declspec(align(8)) GUISettings__Fields {
    bool m_DoubleClickSelectsWord;
    bool m_TripleClickSelectsLine;
    struct Color m_CursorColor;
    float m_CursorFlashSpeed;
    struct Color m_SelectionColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUISettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUISettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GUISettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUISettings__Fields_FWDDECL)
#include <Modloader/app/structs/GUISettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUISettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
