#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MethodBinaryExpression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MethodInfo_1.h>

namespace app::classes::System::Linq::Expressions::MethodBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x02FBBF00, void, ctor, (app::MethodBinaryExpression * this_ptr, app::ExpressionType__Enum node_type, app::Expression* left, app::Expression* right, app::Type* type, app::MethodInfo_1* method_1))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MethodInfo_1*, GetMethod, (app::MethodBinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::MethodBinaryExpression
