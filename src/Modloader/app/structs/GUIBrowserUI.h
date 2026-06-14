#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIBrowserUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIBrowserUI_DEFINED)
#include <Modloader/app/structs/GUIBrowserUI__Fields.h>
#if defined(IL2CPP_STRUCT_GUIBrowserUI__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIBrowserUI_DEFINED
struct GUIBrowserUI__Class;
struct GUIBrowserUI {
    struct GUIBrowserUI__Class* klass;
    MonitorData* monitor;
    struct GUIBrowserUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIBrowserUI_FWDDECL)
#define IL2CPP_STRUCT_GUIBrowserUI_FWDDECL
#include <Modloader/app/structs/GUIBrowserUI__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIBrowserUI_DEFINED) && !defined(IL2CPP_STRUCT_GUIBrowserUI_FWDDECL)
#include <Modloader/app/structs/GUIBrowserUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIBrowserUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
