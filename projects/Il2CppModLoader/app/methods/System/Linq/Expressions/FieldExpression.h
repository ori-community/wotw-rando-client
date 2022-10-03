#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::FieldExpression {
    IL2CPP_REGISTER_METHOD(0x022CFD90, void, ctor, (app::FieldExpression * this_ptr, app::Expression* expression, app::FieldInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MemberInfo_1*, GetMember, (app::FieldExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022CFDC0, app::Type*, get_Type, (app::FieldExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::FieldExpression
