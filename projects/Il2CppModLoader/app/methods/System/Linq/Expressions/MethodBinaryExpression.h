#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::MethodBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x02FBBF00, void, ctor, (app::MethodBinaryExpression * this_ptr, app::ExpressionType__Enum node_type, app::Expression* left, app::Expression* right, app::Type* type, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MethodInfo_1*, GetMethod, (app::MethodBinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::MethodBinaryExpression
