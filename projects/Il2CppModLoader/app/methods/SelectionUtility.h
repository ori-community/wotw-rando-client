#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SelectionUtility {
    IL2CPP_REGISTER_METHOD(0x03114070, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x031141C0, void, Register, (app::Action * action))
    IL2CPP_REGISTER_METHOD(0x031142E0, void, Unregister, (app::Action * action))
    IL2CPP_REGISTER_METHOD(0x031143A0, void, selectionChanged, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SelectionUtility * this_ptr))
} // namespace app::classes::SelectionUtility
