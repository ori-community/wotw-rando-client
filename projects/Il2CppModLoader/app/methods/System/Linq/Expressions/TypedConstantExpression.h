#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::TypedConstantExpression {
    IL2CPP_REGISTER_METHOD(0x02FC57C0, void, ctor, (app::TypedConstantExpression * this_ptr, app::Object * value, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type *, get_Type, (app::TypedConstantExpression * this_ptr))
}
