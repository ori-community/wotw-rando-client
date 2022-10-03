#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Expression_ParameterExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C7400, void, ctor, (app::Expression_ParameterExpressionProxy * this_ptr, app::ParameterExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_ParameterExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_ParameterExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00442880, bool, get_IsByRef, (app::Expression_ParameterExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::String*, get_Name, (app::Expression_ParameterExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_ParameterExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_ParameterExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_ParameterExpressionProxy
