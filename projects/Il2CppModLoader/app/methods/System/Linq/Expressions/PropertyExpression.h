#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::PropertyExpression {
    IL2CPP_REGISTER_METHOD(0x022CFD90, void, ctor, (app::PropertyExpression * this_ptr, app::Expression* expression, app::PropertyInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MemberInfo_1*, GetMember, (app::PropertyExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBED80, app::Type*, get_Type, (app::PropertyExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::PropertyExpression
