#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::RuntimeVariablesExpression {
    IL2CPP_REGISTER_METHOD(0x02FBEDB0, void, ctor, (app::RuntimeVariablesExpression * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables))
    IL2CPP_REGISTER_METHOD(0x02FBEE60, app::Type*, get_Type, (app::RuntimeVariablesExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F140, app::ExpressionType__Enum, get_NodeType, (app::RuntimeVariablesExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, get_Variables, (app::RuntimeVariablesExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBEF00, app::Expression*, Accept, (app::RuntimeVariablesExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02FBEF30, app::RuntimeVariablesExpression*, Update, (app::RuntimeVariablesExpression * this_ptr, app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* variables))
} // namespace app::classes::System::Linq::Expressions::RuntimeVariablesExpression
