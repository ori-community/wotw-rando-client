#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::NewArrayExpression {
    IL2CPP_REGISTER_METHOD(0x02FBD210, void, ctor, (app::NewArrayExpression * this_ptr, app::Type * type, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * expressions))
    IL2CPP_REGISTER_METHOD(0x02FBD2C0, app::NewArrayExpression *, Make, (app::ExpressionType__Enum node_type, app::Type * type, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * expressions))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_Type, (app::NewArrayExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Expressions, (app::NewArrayExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD4C0, app::Expression *, Accept, (app::NewArrayExpression * this_ptr, app::ExpressionVisitor * visitor))
    IL2CPP_REGISTER_METHOD(0x02FBD4F0, app::NewArrayExpression *, Update, (app::NewArrayExpression * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_ * expressions))
}
