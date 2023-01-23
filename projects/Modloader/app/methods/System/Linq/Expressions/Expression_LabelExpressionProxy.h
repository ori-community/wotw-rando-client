#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_LabelExpressionProxy.h>
#include <Modloader/app/structs/LabelExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_LabelExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4EB0, void, ctor, (app::Expression_LabelExpressionProxy * this_ptr, app::LabelExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_LabelExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_LabelExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_DefaultValue, (app::Expression_LabelExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_LabelExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::LabelTarget*, get_Target, (app::Expression_LabelExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_LabelExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_LabelExpressionProxy
