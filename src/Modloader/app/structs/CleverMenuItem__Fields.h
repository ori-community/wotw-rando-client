#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItem__Fields_DEFINED
struct Transform;
struct ActionMethod;
struct Condition_1;
struct Action;
struct Action_1_Boolean_;
struct BaseAnimator;
struct MoonTimelineUiFader;
struct LegacyTransparencyAnimator;
struct GameObject;
struct CleverMenuItem_TransitionSettings;
struct List_1_CleverMenuItem_ExtraNavigationButton_;
struct Renderer__Array;
struct CleverMenuItemSelectionManager;
struct CleverMenuItem__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* m_transform;
    struct ActionMethod* Highlight;
    struct ActionMethod* Unhighlight;
    struct ActionMethod* Pressed;
    struct Condition_1* Activated;
    struct Condition_1* Visible;
    struct Color m_tweenLastColor;
    struct Color m_tweenNextColor;
    struct Vector2 Size;
    struct Vector2 Center;
    struct Action* HighlightCallback;
    struct Action_1_Boolean_* HighlightBCallback;
    struct Action* UnhighlightCallback;
    struct Action* PressedCallback;
    bool UseNewTimelineForHightlight;
    struct BaseAnimator* HighlightAnimator;
    struct MoonTimelineUiFader* HighlightFader;
    struct LegacyTransparencyAnimator* ActiveAnimator;
    struct GameObject* ColorTarget;
    struct CleverMenuItem_TransitionSettings* Transition;
    bool AnimateColors;
    bool AnimateAlphaOnly;
    float Space;
    struct List_1_CleverMenuItem_ExtraNavigationButton_* ExtraSelectionInput;
    struct List_1_CleverMenuItem_ExtraNavigationButton_* ExtraDeselectionInput;
    bool DefaultSelection;
    bool RunHighlightActionsOnce;
    bool m_isHighlighted;
    float m_tweenTime;
    bool m_tweenPlay;
    bool m_boundsInitialized;
    struct Rect m_bounds;
    float m_parentOpacity;
    float m_opacity;
    struct Renderer__Array* m_renderers;
    struct Vector3 m_cachedPosition;
    bool m_isActive;
    bool m_wasActivated;
    bool m_isDisabled;
    struct CleverMenuItemSelectionManager* m_selectionManager;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItem__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/CleverMenuItem_TransitionSettings.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_ExtraNavigationButton_.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItem__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
