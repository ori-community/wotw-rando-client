#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_UnaryExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C77C0, void, ctor, (app::Expression_UnaryExpressionProxy * this_ptr, app::UnaryExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7860, bool, get_IsLifted, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7880, bool, get_IsLiftedToNull, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88520, app::MethodInfo_1*, get_Method, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::Expression*, get_Operand, (app::Expression_UnaryExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_UnaryExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_UnaryExpressionProxy
