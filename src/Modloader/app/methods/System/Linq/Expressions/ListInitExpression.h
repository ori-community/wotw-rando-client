#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/ListInitExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::ListInitExpression {
    IL2CPP_REGISTER_METHOD(
        0x02417650,
        void,
        ctor,
        app::ListInitExpression* this_ptr,
        app::NewExpression* new_expression,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(0x00E3E310, app::ExpressionType__Enum, get_NodeType, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanReduce, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::NewExpression*, get_NewExpression, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_*, get_Initializers, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02417700, app::Expression*, Accept, app::ListInitExpression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x02417730, app::Expression*, Reduce, app::ListInitExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02417750,
        app::ListInitExpression*,
        Update,
        app::ListInitExpression* this_ptr,
        app::NewExpression* new_expression,
        app::IEnumerable_1_System_Linq_Expressions_ElementInit_* initializers
    )
} // namespace app::classes::System::Linq::Expressions::ListInitExpression
