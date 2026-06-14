#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_DEFINED)
#include <Modloader/app/structs/CutsceneTransition__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_DEFINED
struct List_1_Core_Input_Button_;
struct CutsceneButtonPressedTransition__Fields {
    struct CutsceneTransition__Fields _;
    struct List_1_Core_Input_Button_* ButtonsOnPressed;
    struct List_1_Core_Input_Button_* ButtonsOnRelease;
    struct List_1_Core_Input_Button_* ButtonsPressed;
    struct List_1_Core_Input_Button_* ButtonsReleased;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Core_Input_Button_.h>
#endif
#undef IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneButtonPressedTransition__Fields_FWDDECL)
#include <Modloader/app/structs/CutsceneButtonPressedTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneButtonPressedTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
