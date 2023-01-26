#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewArrayExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::NewArrayExpression {
    IL2CPP_REGISTER_METHOD(0x02FBD210, void, ctor, (app::NewArrayExpression * this_ptr, app::Type* type, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions))
    IL2CPP_REGISTER_METHOD(0x02FBD2C0, app::NewArrayExpression*, Make, (app::ExpressionType__Enum node_type, app::Type* type, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, (app::NewArrayExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Expressions, (app::NewArrayExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD4C0, app::Expression*, Accept, (app::NewArrayExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02FBD4F0, app::NewArrayExpression*, Update, (app::NewArrayExpression * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_* expressions))
} // namespace app::classes::System::Linq::Expressions::NewArrayExpression
