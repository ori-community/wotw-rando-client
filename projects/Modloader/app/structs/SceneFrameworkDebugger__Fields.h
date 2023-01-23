#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_DEFINED
struct List_1_System_Tuple_2__1;
struct String;
struct GUIStyle;
struct SceneFrameworkDebugger__Fields {
    struct MonoBehaviour__Fields _;
    float m_lastRenderStringUpdate;
    struct List_1_System_Tuple_2__1* m_history;
    struct String* m_renderString;
    bool m_imGuiRegistered;
    struct GUIStyle* m_labelStyle;
    bool m_forceTextUpdate;
    struct String* m_loadingColor;
    struct String* m_loadedColor;
    struct String* m_enabledColor;
    struct String* m_disabledColor;
    struct String* m_fallbackColor;
    struct String* m_loadingCancelledColor;
    struct String* m_noBoostColor;
    struct String* m_boostColor;
    struct String* m_criticalColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_System_Tuple_2__1.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/SceneFrameworkDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFrameworkDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
