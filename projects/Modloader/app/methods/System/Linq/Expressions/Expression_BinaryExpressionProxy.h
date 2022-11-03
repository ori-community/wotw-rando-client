#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_BinaryExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4790, void, ctor, (app::Expression_BinaryExpressionProxy * this_ptr, app::BinaryExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170C0, app::LambdaExpression*, get_Conversion, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D4830, bool, get_IsLifted, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D4850, bool, get_IsLiftedToNull, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_Left, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, app::MethodInfo_1*, get_Method, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Expression*, get_Right, (app::Expression_BinaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_BinaryExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_BinaryExpressionProxy
