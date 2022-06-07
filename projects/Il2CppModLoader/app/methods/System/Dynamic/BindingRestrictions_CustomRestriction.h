#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::BindingRestrictions_CustomRestriction {
    IL2CPP_REGISTER_METHOD(0x01F89130, void, ctor, (app::BindingRestrictions_CustomRestriction * this_ptr, app::Expression * expression))
    IL2CPP_REGISTER_METHOD(0x01F891E0, bool, Equals, (app::BindingRestrictions_CustomRestriction * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01F89290, int32_t, GetHashCode, (app::BindingRestrictions_CustomRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression *, GetExpression, (app::BindingRestrictions_CustomRestriction * this_ptr))
}
