#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleGroup__Fields_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ToggleGroup__Fields_DEFINED
struct List_1_UnityEngine_UI_Toggle_;
struct ToggleGroup__Fields {
    struct UIBehaviour__Fields _;
    bool m_AllowSwitchOff;
    struct List_1_UnityEngine_UI_Toggle_* m_Toggles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_ToggleGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_UI_Toggle_.h>
#endif
#undef IL2CPP_STRUCT_ToggleGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ToggleGroup__Fields_FWDDECL)
#include <Modloader/app/structs/ToggleGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
