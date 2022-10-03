#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C74A0, void, ctor, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr, app::RuntimeVariablesExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, get_Variables, (app::Expression_RuntimeVariablesExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_RuntimeVariablesExpressionProxy
