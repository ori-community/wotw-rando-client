#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/CleverMenuItem_ExtraNavigationButton__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CleverMenuItem {
    IL2CPP_REGISTER_METHOD(0x012AD8C0, app::Transform*, get_Transform, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AD980, void, add_HighlightCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x012ADA70, void, remove_HighlightCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x012ADB60, void, add_HighlightBCallback, app::CleverMenuItem* this_ptr, app::Action_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x012ADC50, void, remove_HighlightBCallback, app::CleverMenuItem* this_ptr, app::Action_1_Boolean_* value)
    IL2CPP_REGISTER_METHOD(0x012ADD40, void, add_UnhighlightCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x012ADE30, void, remove_UnhighlightCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x012ADF20, void, add_PressedCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x012AE010, void, remove_PressedCallback, app::CleverMenuItem* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, UsingNewTimeline, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE100, bool, get_IsDisabled, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE110, void, set_IsDisabled, app::CleverMenuItem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012AE190, bool, get_IsVisible, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE270, bool, get_IsActivated, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE3C0, void, set_IsActivated, app::CleverMenuItem* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012AE3D0, bool, IsPerforming, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE4F0, void, Awake, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011C4B90, void, Start, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE560, void, OnEnable, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE5A0, void, OnHighlight, app::CleverMenuItem* this_ptr, bool run_actions)
    IL2CPP_REGISTER_METHOD(0x012AE7C0, bool, get_IsHighlighted, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE7D0, void, OnUnhighlight, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AE9E0, void, OnPressed, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AEB20, void, TweenColor, app::CleverMenuItem* this_ptr, app::Color color)
    IL2CPP_REGISTER_METHOD(0x012AEB50, void, FixedUpdate, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AEC40, void, ApplyStateImmediate, app::CleverMenuItem* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x012AECC0, void, RunActiveAnimatorAccordingToState, app::CleverMenuItem* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x012AEDF0, void, ApplyColors, app::CleverMenuItem* this_ptr, bool include_inactive_renderers)
    IL2CPP_REGISTER_METHOD(0x012AEF80, void, SetParentOpacity, app::CleverMenuItem* this_ptr, float opacity)
    IL2CPP_REGISTER_METHOD(0x012AEFA0, void, SetOpacity, app::CleverMenuItem* this_ptr, float opacity)
    IL2CPP_REGISTER_METHOD(0x012AEFC0, void, set_MaterialColor, app::CleverMenuItem* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x012AF240, app::Vector3, get_Position, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AF2E0, void, RefreshVisible, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmosSelected, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AF440, app::Rect, get_Bounds, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AF810, void, SetBounds, app::CleverMenuItem* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x012AF8C0, bool, ExtraNavigationPressed, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012AFBC0,
        bool,
        ExtraNavigationButtonPressed,
        app::CleverMenuItem* this_ptr,
        app::CleverMenuItem_ExtraNavigationButton__Enum button
    )
    IL2CPP_REGISTER_METHOD(0x00A43000, void, SetSelectionManager, app::CleverMenuItem* this_ptr, app::CleverMenuItemSelectionManager* manager)
    IL2CPP_REGISTER_METHOD(0x012AFD80, void, SelectIfNeeded, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012AFF90, bool, IsSelectedInManager, app::CleverMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B0170, void, ctor, app::CleverMenuItem* this_ptr)
} // namespace app::classes::CleverMenuItem
