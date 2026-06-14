#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavigableOnGUI_Control_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavigableOnGUI_Control_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Control_DEFINED)
#define IL2CPP_STRUCT_NavigableOnGUI_Control_DEFINED
struct NavigableOnGUI;
struct NavigableOnGUI_Control {
    struct NavigableOnGUI* ui;
};
#endif
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Control_FWDDECL)
#define IL2CPP_STRUCT_NavigableOnGUI_Control_FWDDECL
#include <Modloader/app/structs/NavigableOnGUI.h>
#endif
#undef IL2CPP_STRUCT_NavigableOnGUI_Control_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavigableOnGUI_Control_DEFINED) && !defined(IL2CPP_STRUCT_NavigableOnGUI_Control_FWDDECL)
#include <Modloader/app/structs/NavigableOnGUI_Control.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavigableOnGUI_Control.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
