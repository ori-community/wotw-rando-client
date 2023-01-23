#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIStyle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIStyle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyle__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIStyle__Fields_DEFINED
struct GUIStyleState;
struct RectOffset;
struct __declspec(align(8)) GUIStyle__Fields {
    void* m_Ptr;
    struct GUIStyleState* m_Normal;
    struct GUIStyleState* m_Hover;
    struct GUIStyleState* m_Active;
    struct GUIStyleState* m_Focused;
    struct GUIStyleState* m_OnNormal;
    struct GUIStyleState* m_OnHover;
    struct GUIStyleState* m_OnActive;
    struct GUIStyleState* m_OnFocused;
    struct RectOffset* m_Border;
    struct RectOffset* m_Padding;
    struct RectOffset* m_Margin;
    struct RectOffset* m_Overflow;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIStyle__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIStyle__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyleState.h>
#include <Modloader/app/structs/RectOffset.h>
#endif
#undef IL2CPP_STRUCT_GUIStyle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIStyle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIStyle__Fields_FWDDECL)
#include <Modloader/app/structs/GUIStyle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIStyle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
