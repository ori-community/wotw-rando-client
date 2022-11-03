#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::CoalesceConversionBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x01FA1100, void, ctor, (app::CoalesceConversionBinaryExpression * this_ptr, app::Expression* left, app::Expression* right, app::LambdaExpression* conversion))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::LambdaExpression*, GetConversion, (app::CoalesceConversionBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, app::ExpressionType__Enum, get_NodeType, (app::CoalesceConversionBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::CoalesceConversionBinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::CoalesceConversionBinaryExpression
