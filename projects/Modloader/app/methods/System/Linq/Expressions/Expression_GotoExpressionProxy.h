#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_GotoExpressionProxy.h>
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GotoExpressionKind__Enum.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Expression.h>

namespace app::classes::System::Linq::Expressions::Expression_GotoExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4CB0, void, ctor, (app::Expression_GotoExpressionProxy * this_ptr, app::GotoExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83750, app::GotoExpressionKind__Enum, get_Kind, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::LabelTarget*, get_Target, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_GotoExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_Value, (app::Expression_GotoExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_GotoExpressionProxy
