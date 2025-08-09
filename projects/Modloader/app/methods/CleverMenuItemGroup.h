#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemGroup.h>

namespace app::classes::CleverMenuItemGroup {
    IL2CPP_REGISTER_METHOD(0x012B08D0, bool, get_AutoSelectFirstItemOnEnable, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B09A0, bool, get_IsVisible, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B09C0, void, set_IsVisible, app::CleverMenuItemGroup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012B0B50, bool, get_CanBeEntered, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B0C30, bool, get_IsActive, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B0C50, void, set_IsActive, app::CleverMenuItemGroup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012B0E80, void, OnDisable, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B0FA0, bool, get_IsHighlightVisible, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B0FC0, void, set_IsHighlightVisible, app::CleverMenuItemGroup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, OnSelectionManagerBackPressed, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B1000, void, Awake, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B1730, void, OnDestroy, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B1FA0, void, Start, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B21B0, void, OnEnable, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B24F0, void, OnOptionBackPressed, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B2750, void, OnMenuItemChange, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B2A10, bool, OnMenuItemChangedInGroup, app::CleverMenuItemGroup* this_ptr, app::CleverMenuItemGroup* group)
    IL2CPP_REGISTER_METHOD(0x012B2C20, void, OnMenuItemPressed, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B30D0, void, UpdateHighlight, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B3270, void, OnEnteredChildGroup, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B3290, void, EnterInGroup, app::CleverMenuItemGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B3440, void, ctor, app::CleverMenuItemGroup* this_ptr)
} // namespace app::classes::CleverMenuItemGroup
