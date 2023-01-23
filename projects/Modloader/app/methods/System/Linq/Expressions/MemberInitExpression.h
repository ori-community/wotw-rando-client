#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/MemberBinding.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_MemberBinding_.h>

namespace app::classes::System::Linq::Expressions::MemberInitExpression {
    IL2CPP_REGISTER_METHOD(0x02418180, void, ctor, (app::MemberInitExpression * this_ptr, app::NewExpression* new_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_* bindings))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReduce, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E570, app::ExpressionType__Enum, get_NodeType, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::NewExpression*, get_NewExpression, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_*, get_Bindings, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02418230, app::Expression*, Accept, (app::MemberInitExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02418260, app::Expression*, Reduce, (app::MemberInitExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02418280, app::Expression*, ReduceMemberInit, (app::Expression * obj_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_* bindings, bool keep_on_stack))
    IL2CPP_REGISTER_METHOD(0x02418640, app::Expression*, ReduceListInit, (app::Expression * list_expression, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_* initializers, bool keep_on_stack))
    IL2CPP_REGISTER_METHOD(0x024189E0, app::Expression*, ReduceMemberBinding, (app::ParameterExpression * obj_var, app::MemberBinding* binding))
    IL2CPP_REGISTER_METHODINFO(0x04714878, MemberInitExpression_ReduceMemberBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02418BA0, app::MemberInitExpression*, Update, (app::MemberInitExpression * this_ptr, app::NewExpression* new_expression, app::IEnumerable_1_System_Linq_Expressions_MemberBinding_* bindings))
} // namespace app::classes::System::Linq::Expressions::MemberInitExpression
