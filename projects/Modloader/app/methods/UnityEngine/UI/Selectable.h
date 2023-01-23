#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Selectable.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Selectable_.h>
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Selectable_Transition__Enum.h>
#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/SpriteState.h>
#include <Modloader/app/structs/AnimationTriggers.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/PointerEventData.h>

namespace app::classes::UnityEngine::UI::Selectable {
    IL2CPP_REGISTER_METHOD(0x026714F0, void, ctor, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671830, app::List_1_UnityEngine_UI_Selectable_*, get_allSelectables, ())
    IL2CPP_REGISTER_METHOD(0x026718D0, app::Navigation, get_navigation, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026718F0, void, set_navigation, (app::Selectable * this_ptr, app::Navigation value))
    IL2CPP_REGISTER_METHOD(0x02671A20, app::Selectable_Transition__Enum, get_transition, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671A30, void, set_transition, (app::Selectable * this_ptr, app::Selectable_Transition__Enum value))
    IL2CPP_REGISTER_METHOD(0x02671AE0, app::ColorBlock, get_colors, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671B20, void, set_colors, (app::Selectable * this_ptr, app::ColorBlock value))
    IL2CPP_REGISTER_METHOD(0x02671CB0, app::SpriteState, get_spriteState, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671CD0, void, set_spriteState, (app::Selectable * this_ptr, app::SpriteState value))
    IL2CPP_REGISTER_METHOD(0x02671DF0, app::AnimationTriggers*, get_animationTriggers, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671E00, void, set_animationTriggers, (app::Selectable * this_ptr, app::AnimationTriggers* value))
    IL2CPP_REGISTER_METHOD(0x024B76C0, app::Graphic*, get_targetGraphic, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671EC0, void, set_targetGraphic, (app::Selectable * this_ptr, app::Graphic* value))
    IL2CPP_REGISTER_METHOD(0x01F26F50, bool, get_interactable, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02671F80, void, set_interactable, (app::Selectable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01F23090, bool, get_isPointerInside, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_isPointerInside, (app::Selectable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02672190, bool, get_isPointerDown, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBE80, void, set_isPointerDown, (app::Selectable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026721A0, bool, get_hasSelection, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026721B0, void, set_hasSelection, (app::Selectable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026721C0, app::Image*, get_image, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_image, (app::Selectable * this_ptr, app::Image* value))
    IL2CPP_REGISTER_METHOD(0x02672280, app::Animator*, get_animator, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672300, void, Awake, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026723D0, void, OnCanvasGroupChanged, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672630, bool, IsInteractable, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672650, void, OnDidApplyAnimationProperties, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672660, void, OnEnable, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0112C0A0, void, OnTransformParentChanged, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672650, void, OnSetProperty, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672750, void, OnDisable, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672820, app::Selectable_SelectionState__Enum, get_currentSelectionState, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02672830, void, InstantClearState, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026728B0, void, DoStateTransition, (app::Selectable * this_ptr, app::Selectable_SelectionState__Enum state, bool instant))
    IL2CPP_REGISTER_METHOD(0x02672B90, app::Selectable*, FindSelectable, (app::Selectable * this_ptr, app::Vector3 dir))
    IL2CPP_REGISTER_METHOD(0x02673350, app::Vector3, GetPointOnRectEdge, (app::RectTransform * rect, app::Vector2 dir))
    IL2CPP_REGISTER_METHOD(0x02673680, void, Navigate, (app::Selectable * this_ptr, app::AxisEventData* event_data, app::Selectable* sel))
    IL2CPP_REGISTER_METHOD(0x02673780, app::Selectable*, FindSelectableOnLeft, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02673940, app::Selectable*, FindSelectableOnRight, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02673B00, app::Selectable*, FindSelectableOnUp, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02673CC0, app::Selectable*, FindSelectableOnDown, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02673E80, void, OnMove, (app::Selectable * this_ptr, app::AxisEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02673F20, void, StartColorTween, (app::Selectable * this_ptr, app::Color target_color, bool instant))
    IL2CPP_REGISTER_METHOD(0x02674040, void, DoSpriteSwap, (app::Selectable * this_ptr, app::Sprite* new_sprite))
    IL2CPP_REGISTER_METHOD(0x026741E0, void, TriggerAnimation, (app::Selectable * this_ptr, app::String* triggername))
    IL2CPP_REGISTER_METHOD(0x026744B0, bool, IsHighlighted, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674750, bool, IsPressed_1, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674750, bool, IsPressed_2, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026747A0, void, UpdateSelectionState, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674830, void, EvaluateAndTransitionToSelectionState, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x026748A0, void, InternalEvaluateAndTransitionToSelectionState, (app::Selectable * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x02674920, void, OnPointerDown, (app::Selectable * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674AA0, void, OnPointerUp, (app::Selectable * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674AD0, void, OnPointerEnter, (app::Selectable * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674B40, void, OnPointerExit, (app::Selectable * this_ptr, app::PointerEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674BB0, void, OnSelect, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674C20, void, OnDeselect, (app::Selectable * this_ptr, app::BaseEventData* event_data))
    IL2CPP_REGISTER_METHOD(0x02674C90, void, Select, (app::Selectable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02674DF0, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::Selectable
