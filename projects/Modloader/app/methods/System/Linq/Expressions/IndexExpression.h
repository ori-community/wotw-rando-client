#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::IndexExpression {
    IL2CPP_REGISTER_METHOD(0x022D0050, void, ctor, (app::IndexExpression * this_ptr, app::Expression* instance, app::PropertyInfo_1* indexer, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* arguments))
    IL2CPP_REGISTER_METHOD(0x00E3D360, app::ExpressionType__Enum, get_NodeType, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0110, app::Type*, get_Type, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_Object, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PropertyInfo_1*, get_Indexer, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0190, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Arguments, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0210, app::Expression*, GetArgument, (app::IndexExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x022D02B0, int32_t, get_ArgumentCount, (app::IndexExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0340, app::Expression*, Accept, (app::IndexExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x022D0370, app::Expression*, Rewrite, (app::IndexExpression * this_ptr, app::Expression* instance, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::IndexExpression
