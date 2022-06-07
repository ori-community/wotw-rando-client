#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_ListInitExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D5040, void, ctor, (app::Expression_ListInitExpressionProxy * this_ptr, app::ListInitExpression * node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_ListInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_ListInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *, get_Initializers, (app::Expression_ListInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::NewExpression *, get_NewExpression, (app::Expression_ListInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_ListInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_ListInitExpressionProxy * this_ptr))
}
