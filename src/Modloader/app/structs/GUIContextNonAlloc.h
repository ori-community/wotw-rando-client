#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContextNonAlloc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContextNonAlloc_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_GUIContextNonAlloc_DEFINED
struct GUISkin;
struct String;
struct GUIContextNonAlloc {
    struct Color m_backgroundColor;
    struct Color m_color;
    struct Color m_contentColor;
    int32_t m_depth;
    struct Matrix4x4 m_matrix;
    struct GUISkin* m_skin;
    struct String* m_tooltip;
    bool m_enabled;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc_FWDDECL)
#define IL2CPP_STRUCT_GUIContextNonAlloc_FWDDECL
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GUIContextNonAlloc_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContextNonAlloc_DEFINED) && !defined(IL2CPP_STRUCT_GUIContextNonAlloc_FWDDECL)
#include <Modloader/app/structs/GUIContextNonAlloc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContextNonAlloc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
