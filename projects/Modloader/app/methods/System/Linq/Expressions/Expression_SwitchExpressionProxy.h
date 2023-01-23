#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_SwitchExpressionProxy.h>
#include <Modloader/app/structs/SwitchExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_SwitchExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C75E0, void, ctor, (app::Expression_SwitchExpressionProxy * this_ptr, app::SwitchExpression* node))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00571730, app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_*, get_Cases, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417880, app::MethodInfo_1*, get_Comparison, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88520, app::Expression*, get_DefaultBody, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_SwitchValue, (app::Expression_SwitchExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_SwitchExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_SwitchExpressionProxy
