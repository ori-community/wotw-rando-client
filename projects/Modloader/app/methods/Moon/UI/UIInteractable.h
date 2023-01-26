#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UIInteractable.h>
#include <Modloader/app/structs/ItemSelectionManager.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Window.h>

namespace app::classes::Moon::UI::UIInteractable {
    IL2CPP_REGISTER_METHOD(0x0118B670, void, Awake, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B680, void, Initialize, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Selected, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B890, void, set_Selected, (app::UIInteractable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F3540, app::Object*, FindTypeInHierarchy_1, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F3540, app::Window*, FindTypeInHierarchy_2, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F3540, app::ItemSelectionManager*, FindTypeInHierarchy_3, (app::UIInteractable * this_ptr))
} // namespace app::classes::Moon::UI::UIInteractable
