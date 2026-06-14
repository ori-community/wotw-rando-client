#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultExpression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression_DefaultExpressionProxy.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_DefaultExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4C10, void, ctor, app::Expression_DefaultExpressionProxy* this_ptr, app::DefaultExpression* node)
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, app::Expression_DefaultExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, app::Expression_DefaultExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, app::Expression_DefaultExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, app::Expression_DefaultExpressionProxy* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Expression_DefaultExpressionProxy
