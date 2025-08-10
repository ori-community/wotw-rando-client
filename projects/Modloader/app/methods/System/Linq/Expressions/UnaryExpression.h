#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UnaryExpression.h>

namespace app::classes::System::Linq::Expressions::UnaryExpression {
    IL2CPP_REGISTER_METHOD(
        0x02FC57F0,
        void,
        ctor,
        app::UnaryExpression* this_ptr,
        app::ExpressionType__Enum node_type,
        app::Expression* expression,
        app::Type* type,
        app::MethodInfo_1* method_1
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::ExpressionType__Enum, get_NodeType, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Expression*, get_Operand, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::MethodInfo_1*, get_Method, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC58C0, bool, get_IsLifted, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC5B40, bool, get_IsLiftedToNull, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC5B80, app::Expression*, Accept, app::UnaryExpression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x02FC5BB0, bool, get_CanReduce, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC5BE0, app::Expression*, Reduce, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC5C60, bool, get_IsPrefix, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC5CB0, app::UnaryExpression*, FunctionalOp, app::UnaryExpression* this_ptr, app::Expression* operand)
    IL2CPP_REGISTER_METHOD(0x02FC5E90, app::Expression*, ReduceVariable, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC6380, app::Expression*, ReduceMember, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC6D10, app::Expression*, ReduceIndex, app::UnaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FC76B0, app::UnaryExpression*, Update, app::UnaryExpression* this_ptr, app::Expression* operand)
} // namespace app::classes::System::Linq::Expressions::UnaryExpression
