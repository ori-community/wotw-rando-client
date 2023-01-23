#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleMenuAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleMenuAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/ToggleMenuAction_MenuToggleType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_ToggleMenuAction_MenuToggleType__Enum_DEFINED)
#define IL2CPP_STRUCT_ToggleMenuAction__Fields_DEFINED
struct List_1_BaseAnimator_;
struct List_1_CleverMenuItem_;
struct ToggleMenuAction__Fields {
    struct ActionMethod__Fields _;
    ToggleMenuAction_MenuToggleType__Enum ToggleType;

    struct List_1_BaseAnimator_* SliderAnimators;
    struct List_1_CleverMenuItem_* ItemsToDisable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleMenuAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ToggleMenuAction__Fields_FWDDECL
#include <Modloader/app/structs/List_1_BaseAnimator_.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#endif
#undef IL2CPP_STRUCT_ToggleMenuAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleMenuAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ToggleMenuAction__Fields_FWDDECL)
#include <Modloader/app/structs/ToggleMenuAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleMenuAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
