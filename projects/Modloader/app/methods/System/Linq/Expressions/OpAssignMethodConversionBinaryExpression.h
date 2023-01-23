#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OpAssignMethodConversionBinaryExpression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/LambdaExpression.h>

namespace app::classes::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x02FBDA50, void, ctor, (app::OpAssignMethodConversionBinaryExpression * this_ptr, app::ExpressionType__Enum node_type, app::Expression* left, app::Expression* right, app::Type* type, app::MethodInfo_1* method_1, app::LambdaExpression* conversion))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::LambdaExpression*, GetConversion, (app::OpAssignMethodConversionBinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::OpAssignMethodConversionBinaryExpression
