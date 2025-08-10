#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_CleverMenuItem_.h>
#include <Modloader/app/structs/List_1_ICleverMenuFadeObserver_.h>
#include <Modloader/app/structs/Predicate_1_CleverMenuItem_.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::CleverMenuItemSelectionManager {
    IL2CPP_REGISTER_METHOD(0x012B4A00, app::List_1_ICleverMenuFadeObserver_*, get_ResolvedFaderObservers, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B4C60, int32_t, get_MenuItemsCount, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B4CF0, app::CleverMenuItem*, GetMenuItem, app::CleverMenuItemSelectionManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00CA2590, bool, UsingNewTimeline, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B4DA0, void, SetVisible, app::CleverMenuItemSelectionManager* this_ptr, bool visible)
    IL2CPP_REGISTER_METHOD(0x012B50D0, void, SetVisibleImmediate, app::CleverMenuItemSelectionManager* this_ptr, bool visible)
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsVisible, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsHighlightVisible, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B5540, void, set_IsHighlightVisible, app::CleverMenuItemSelectionManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00CBCEC0, int32_t, get_RadialNavItemsPerCicle, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CBCED0, void, set_RadialNavItemsPerCicle, app::CleverMenuItemSelectionManager* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x012B5690, bool, get_IsSpiralRadialSelection, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B56B0, void, RefreshVisible, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B5830, void, OnEnable, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B5C50, void, OnDisable, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, get_IsActive, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B5D70, void, set_IsActive, app::CleverMenuItemSelectionManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0061EBC0, bool, get_IsLocked, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00756FF0, void, set_IsLocked, app::CleverMenuItemSelectionManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012B5FD0, app::CleverMenuItem*, get_CurrentMenuItem, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6090, void, Awake, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6200, void, OnDestroy, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B62A0, void, CallOnBeforeFaderOnObservers, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6430, void, ChangeItemIndex, app::CleverMenuItemSelectionManager* this_ptr, int32_t item, int32_t new_index)
    IL2CPP_REGISTER_METHOD(0x012B6560, void, MoveSelection, app::CleverMenuItemSelectionManager* this_ptr, bool forward, int32_t step)
    IL2CPP_REGISTER_METHOD(
        0x012B6760,
        void,
        SetCurrentMenuItem,
        app::CleverMenuItemSelectionManager* this_ptr,
        app::CleverMenuItem* menu_item,
        bool run_actions
    )
    IL2CPP_REGISTER_METHOD(0x012B69F0, void, SetCurrentItem, app::CleverMenuItemSelectionManager* this_ptr, int32_t index, bool run_actions)
    IL2CPP_REGISTER_METHOD(0x012B6C60, void, ResetCurrentItemToTop, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6D40, void, Start, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6E30, void, SetIndexToFirst, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B6F50, void, FixedUpdate, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B84B0, void, OverrideRadialAngle, app::CleverMenuItemSelectionManager* this_ptr, app::Vector2 angle, bool is_moving)
    IL2CPP_REGISTER_METHOD(0x012B84D0, void, HandleRadialNavigation, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B8540, void, HandleFiveColumnsNavigation, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B8C80, void, OnDrawGizmosSelected, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B8FD0, void, OnDrawGizmos, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B97C0, void, HandleNavigationCage, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B9880, bool, ChangeMenuItem, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012B9EF0, void, ChangeRadialMenuItem, app::CleverMenuItemSelectionManager* this_ptr, app::Vector2 axis)
    IL2CPP_REGISTER_METHOD(0x012BA780, void, ComputeAngleDelta, app::CleverMenuItemSelectionManager* this_ptr, app::Vector2 current_menu_axis)
    IL2CPP_REGISTER_METHOD(0x012BAA30, bool, IsNewRadialIndexValid, app::CleverMenuItemSelectionManager* this_ptr, int32_t new_index)
    IL2CPP_REGISTER_METHOD(0x012BAB60, void, PressCurrentItem, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BAC50, void, OnBackPressed, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BAE00, app::CleverMenuItem*, get_CleverMenuItemUnderCursor, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BB210, void, CreateNavigationStructureFromCageToolPrefab, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BB3F0, void, CreateNavigationStructureFromCageTool, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BB500, void, CreateNavigationStructureFromCageToolChildrenOnly, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BB890, void, CreateNavigation, app::CleverMenuItemSelectionManager* this_ptr, app::List_1_CleverMenuItem_* clever_menu_items)
    IL2CPP_REGISTER_METHOD(0x012BC310, void, ClearMenuItems, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BC3C0, void, AddMenuItem, app::CleverMenuItemSelectionManager* this_ptr, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x012BC460, float, CalculateItemAngle, app::CleverMenuItemSelectionManager* this_ptr, app::CleverMenuItem* i)
    IL2CPP_REGISTER_METHOD(0x012BC650, void, SortItemsByAngle, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BC7F0, int32_t, FindMenuItemIndex, app::CleverMenuItemSelectionManager* this_ptr, app::Predicate_1_CleverMenuItem_* predicate)
    IL2CPP_REGISTER_METHOD(0x012BC8B0, int32_t, GetFirstActiveMenuItem, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00689CD0, bool, get_IsSuspended, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BC9B0, void, set_IsSuspended, app::CleverMenuItemSelectionManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011A4510, app::SuspendableMask__Enum, get_Mask, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BC9C0, void, set_Mask, app::CleverMenuItemSelectionManager* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x012BCA80, app::Vector2, get_MenuItemAxis, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BCBE0, void, ExternalInputPressed, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BCCD0, void, ExternalInputBack, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BCD90, void, SelectIfNeeded, app::CleverMenuItemSelectionManager* this_ptr, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x012BCEF0, bool, IsItemSelected, app::CleverMenuItemSelectionManager* this_ptr, app::CleverMenuItem* item)
    IL2CPP_REGISTER_METHOD(0x012BD030, void, GenerateGridNavigation, app::CleverMenuItemSelectionManager* this_ptr, int32_t items_per_row)
    IL2CPP_REGISTER_METHOD(0x012BDB70, void, GenerateSmartGridNavigation, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012BDF00, app::Int32__Array*, get_GridDirections, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012BDF20,
        int32_t,
        FindCleverMenuItemIndexInDirection,
        app::CleverMenuItemSelectionManager* this_ptr,
        int32_t source_index,
        int32_t dir_x,
        int32_t dir_y
    )
    IL2CPP_REGISTER_METHOD(0x012BE260, int32_t, GetMenuItemAt, app::CleverMenuItemSelectionManager* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x012BE3E0, int32_t, GetIndexAtGridOffsetFromIndex, int32_t ox, int32_t oy, int32_t index, int32_t width, int32_t count)
    IL2CPP_REGISTER_METHOD(0x012BE410, void, ctor, app::CleverMenuItemSelectionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012BF060,
        int32_t,
        _SortItemsByAngle_b__120_0,
        app::CleverMenuItemSelectionManager* this_ptr,
        app::CleverMenuItem* a,
        app::CleverMenuItem* b
    )
} // namespace app::classes::CleverMenuItemSelectionManager
