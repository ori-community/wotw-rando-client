#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::UI::UIInteractable {
    IL2CPP_REGISTER_METHOD(0x0118B670, void, Awake, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B680, void, Initialize, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Selected, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0118B890, void, set_Selected, (app::UIInteractable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F3540, app::Object*, FindTypeInHierarchy_1, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F3540, app::Window*, FindTypeInHierarchy_2, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705800, UIInteractable_FindTypeInHierarchy_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015F3540, app::ItemSelectionManager*, FindTypeInHierarchy_3, (app::UIInteractable * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F360, UIInteractable_FindTypeInHierarchy_2__MethodInfo)
} // namespace app::classes::Moon::UI::UIInteractable
