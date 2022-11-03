#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::BinaryExpression {
    IL2CPP_REGISTER_METHOD(0x01F9C060, void, ctor, (app::BinaryExpression * this_ptr, app::Expression* left, app::Expression* right))
    IL2CPP_REGISTER_METHOD(0x01F9C110, bool, get_CanReduce, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9C140, bool, IsOpAssignment, (app::ExpressionType__Enum op))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression*, get_Right, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_Left, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D2E60, app::MethodInfo_1*, get_Method, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MethodInfo_1*, GetMethod, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9C150, app::BinaryExpression*, Update, (app::BinaryExpression * this_ptr, app::Expression* left, app::LambdaExpression* conversion, app::Expression* right))
    IL2CPP_REGISTER_METHOD(0x01F9C470, app::Expression*, Reduce, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9C4F0, app::ExpressionType__Enum, GetBinaryOpFromAssignmentOp, (app::ExpressionType__Enum op))
    IL2CPP_REGISTER_METHODINFO(0x04746D70, BinaryExpression_GetBinaryOpFromAssignmentOp__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F9C670, app::Expression*, ReduceVariable, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9C800, app::Expression*, ReduceMember, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9CEC0, app::Expression*, ReduceIndex, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008009A0, app::LambdaExpression*, get_Conversion, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::LambdaExpression*, GetConversion, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9D520, bool, get_IsLifted, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9D730, bool, get_IsLiftedToNull, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9D770, app::Expression*, Accept, (app::BinaryExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x01F9D7A0, bool, get_IsLiftedLogical, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9D8C0, bool, get_IsReferenceComparison, (app::BinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9DA30, app::Expression*, ReduceUserdefinedLifted, (app::BinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::BinaryExpression
