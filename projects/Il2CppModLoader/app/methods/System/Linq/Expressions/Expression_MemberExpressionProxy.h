#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_MemberExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D5180, void, ctor, (app::Expression_MemberExpressionProxy * this_ptr, app::MemberExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_MemberExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_MemberExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Expression*, get_Expression, (app::Expression_MemberExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, app::MemberInfo_1*, get_Member, (app::Expression_MemberExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_MemberExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_MemberExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_MemberExpressionProxy
