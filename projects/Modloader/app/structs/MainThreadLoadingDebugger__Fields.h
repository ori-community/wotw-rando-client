#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_DEFINED
struct GUIStyle;
struct String;
struct List_1_MainThreadLoadingDebugger_NotifyEntry_;
struct MainThreadLoadingDebugger__Fields {
    struct MonoBehaviour__Fields _;
    bool m_imGuiRegistered;
    struct GUIStyle* m_labelStyle;
    struct String* m_renderString;
    float m_lastUpdate;
    struct List_1_MainThreadLoadingDebugger_NotifyEntry_* m_entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_MainThreadLoadingDebugger_NotifyEntry_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MainThreadLoadingDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/MainThreadLoadingDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MainThreadLoadingDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
