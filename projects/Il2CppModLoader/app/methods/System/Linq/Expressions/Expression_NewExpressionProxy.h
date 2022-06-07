#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_NewExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C7340, void, ctor, (app::Expression_NewExpressionProxy * this_ptr, app::NewExpression * node))
    IL2CPP_REGISTER_METHOD(0x022C73E0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::ConstructorInfo *, get_Constructor, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::ReadOnlyCollection_1_System_Reflection_MemberInfo_ *, get_Members, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_NewExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_NewExpressionProxy * this_ptr))
}
