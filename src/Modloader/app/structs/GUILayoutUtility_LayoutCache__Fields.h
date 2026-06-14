#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_DEFINED
struct GUILayoutGroup;
struct GenericStack;
struct __declspec(align(8)) GUILayoutUtility_LayoutCache__Fields {
    struct GUILayoutGroup* topLevel;
    struct GenericStack* layoutGroups;
    struct GUILayoutGroup* windows;
};
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_FWDDECL
#include <Modloader/app/structs/GUILayoutGroup.h>
#include <Modloader/app/structs/GenericStack.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutUtility_LayoutCache__Fields_FWDDECL)
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutUtility_LayoutCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
