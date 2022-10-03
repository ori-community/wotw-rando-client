#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_NewArrayExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C72A0, void, ctor, (app::Expression_NewArrayExpressionProxy * this_ptr, app::NewArrayExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_NewArrayExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_NewArrayExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Expressions, (app::Expression_NewArrayExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_NewArrayExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_NewArrayExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_NewArrayExpressionProxy
