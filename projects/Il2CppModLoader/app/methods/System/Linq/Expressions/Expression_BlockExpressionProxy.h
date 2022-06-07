#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_BlockExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D48A0, void, ctor, (app::Expression_BlockExpressionProxy * this_ptr, app::BlockExpression * node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Expressions, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D4940, app::Expression *, get_Result, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_BlockExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717120, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, get_Variables, (app::Expression_BlockExpressionProxy * this_ptr))
}
