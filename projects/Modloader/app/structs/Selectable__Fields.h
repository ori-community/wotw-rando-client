#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Selectable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Selectable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED)
#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#include <Modloader/app/structs/Selectable_Transition__Enum.h>
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Navigation_DEFINED) && defined(IL2CPP_STRUCT_Selectable_Transition__Enum_DEFINED) && defined(IL2CPP_STRUCT_ColorBlock_DEFINED) && defined(IL2CPP_STRUCT_SpriteState_DEFINED) && defined(IL2CPP_STRUCT_Selectable_SelectionState__Enum_DEFINED)
#define IL2CPP_STRUCT_Selectable__Fields_DEFINED
struct AnimationTriggers;
struct Graphic;
struct List_1_UnityEngine_CanvasGroup_;
struct Selectable__Fields {
    struct UIBehaviour__Fields _;
    struct Navigation m_Navigation;
    Selectable_Transition__Enum m_Transition;

    struct ColorBlock m_Colors;
    struct SpriteState m_SpriteState;
    struct AnimationTriggers* m_AnimationTriggers;
    bool m_Interactable;
    struct Graphic* m_TargetGraphic;
    bool m_GroupsAllowInteraction;
    Selectable_SelectionState__Enum m_CurrentSelectionState;

    bool _isPointerInside_k__BackingField;
    bool _isPointerDown_k__BackingField;
    bool _hasSelection_k__BackingField;
    struct List_1_UnityEngine_CanvasGroup_* m_CanvasGroupCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Selectable__Fields_FWDDECL)
#define IL2CPP_STRUCT_Selectable__Fields_FWDDECL
#include <Modloader/app/structs/AnimationTriggers.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/List_1_UnityEngine_CanvasGroup_.h>
#endif
#undef IL2CPP_STRUCT_Selectable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Selectable__Fields_FWDDECL)
#include <Modloader/app/structs/Selectable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Selectable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
