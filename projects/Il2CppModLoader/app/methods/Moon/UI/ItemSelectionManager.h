#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UI::ItemSelectionManager {
    IL2CPP_REGISTER_METHOD(0x00D251B0, void, OnDrawGizmosSelected, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D25220, void, RefreshInteractables, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D25490, void, RecalculateNavigation, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D256E0, bool, NavigationDataExists, (app::ItemSelectionManager * this_ptr, app::UIComponent* from, app::UIComponent* to))
    IL2CPP_REGISTER_METHOD(0x00D258C0, app::UIComponent*, CheckNeighbour, (app::ItemSelectionManager * this_ptr, app::UIComponent* current, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x00D25F50, int32_t, GetNextActiveInteractableIndex, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D26080, int32_t, GetPreviousActiveInteractableIndex, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D261C0, void, OnUserInput, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D266F0, app::UIInteractable*, get_MenuItemUnderCursor, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D26B40, void, OnSelected, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D26C10, void, OnDeselected, (app::ItemSelectionManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D26CF0, void, RegisterInteractable, (app::ItemSelectionManager * this_ptr, app::UIInteractable* interactable))
    IL2CPP_REGISTER_METHOD(0x00D26D90, void, UnregisterInteractable, (app::ItemSelectionManager * this_ptr, app::UIInteractable* interactable))
    IL2CPP_REGISTER_METHOD(0x00D26E30, void, ctor, (app::ItemSelectionManager * this_ptr))
} // namespace app::classes::Moon::UI::ItemSelectionManager
