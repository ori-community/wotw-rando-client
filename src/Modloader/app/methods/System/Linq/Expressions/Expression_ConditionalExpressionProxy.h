#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression_ConditionalExpressionProxy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_ConditionalExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4A30, void, ctor, app::Expression_ConditionalExpressionProxy* this_ptr, app::ConditionalExpression* node)
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00442880, app::Expression*, get_IfFalse, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_IfTrue, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Expression*, get_Test, app::Expression_ConditionalExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, app::Expression_ConditionalExpressionProxy* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Expression_ConditionalExpressionProxy
