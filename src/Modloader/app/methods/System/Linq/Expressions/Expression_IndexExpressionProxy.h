#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression_IndexExpressionProxy.h>
#include <Modloader/app/structs/IndexExpression.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_IndexExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4D50, void, ctor, app::Expression_IndexExpressionProxy* this_ptr, app::IndexExpression* node)
    IL2CPP_REGISTER_METHOD(
        0x029D4DF0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*,
        get_Arguments,
        app::Expression_IndexExpressionProxy* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, app::Expression_IndexExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, app::Expression_IndexExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00571730, app::PropertyInfo_1*, get_Indexer, app::Expression_IndexExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, app::Expression_IndexExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Expression*, get_Object, app::Expression_IndexExpressionProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, app::Expression_IndexExpressionProxy* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Expression_IndexExpressionProxy
