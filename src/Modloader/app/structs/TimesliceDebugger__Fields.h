#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceDebugger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceDebugger__Fields_DEFINED
struct GUIStyle;
struct String;
struct TimesliceDebugger__Fields {
    struct MonoBehaviour__Fields _;
    bool m_imGuiRegistered;
    struct GUIStyle* m_labelStyle;
    struct String* m_renderString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceDebugger__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimesliceDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
