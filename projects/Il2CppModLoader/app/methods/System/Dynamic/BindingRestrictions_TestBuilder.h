#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Dynamic::BindingRestrictions_TestBuilder {
    IL2CPP_REGISTER_METHOD(0x01F89EF0, void, Append, (app::BindingRestrictions_TestBuilder * this_ptr, app::BindingRestrictions* restrictions))
    IL2CPP_REGISTER_METHOD(0x01F89FD0, app::Expression*, ToExpression, (app::BindingRestrictions_TestBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8A0F0, void, Push, (app::BindingRestrictions_TestBuilder * this_ptr, app::Expression* node, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x01F8A360, void, ctor, (app::BindingRestrictions_TestBuilder * this_ptr))
} // namespace app::classes::System::Dynamic::BindingRestrictions_TestBuilder
