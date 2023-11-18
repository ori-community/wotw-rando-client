#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression_MemberInitExpressionProxy.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/MemberInitExpression.h>
#include <Modloader/app/structs/NewExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_MemberInitExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D5220, void, ctor, (app::Expression_MemberInitExpressionProxy * this_ptr, app::MemberInitExpression* node))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_*, get_Bindings, (app::Expression_MemberInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_MemberInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_MemberInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::NewExpression*, get_NewExpression, (app::Expression_MemberInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_MemberInitExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_MemberInitExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_MemberInitExpressionProxy
