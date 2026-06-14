#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_DEFINED
struct GUIStyle;
struct HierarchyDebugMenu__StaticFields {
    struct GUIStyle* SelectedStyle;
    struct GUIStyle* Style;
    struct GUIStyle* PressedStyle;
    struct GUIStyle* SuspendedStyle;
    struct GUIStyle* DebugMenuStyle;
    struct GUIStyle* StyleEnabled;
    struct GUIStyle* StyleDisabled;
    struct GUIStyle* TimelineStyleDisabled;
    struct GUIStyle* TimelineStyleEnabled;
};
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenu__StaticFields_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenu__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenu__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
