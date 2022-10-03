#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::TypedParameterExpression {
    IL2CPP_REGISTER_METHOD(0x01FA01B0, void, ctor, (app::TypedParameterExpression * this_ptr, app::Type* type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_Type, (app::TypedParameterExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::TypedParameterExpression
