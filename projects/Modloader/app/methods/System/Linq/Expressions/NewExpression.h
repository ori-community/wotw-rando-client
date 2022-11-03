#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::NewExpression {
    IL2CPP_REGISTER_METHOD(0x02FBD690, void, ctor, (app::NewExpression * this_ptr, app::ConstructorInfo* constructor, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* arguments, app::ReadOnlyCollection_1_System_Reflection_MemberInfo_* members))
    IL2CPP_REGISTER_METHOD(0x02287F30, app::Type*, get_Type, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3EE40, app::ExpressionType__Enum, get_NodeType, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ConstructorInfo*, get_Constructor, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD750, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Arguments, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD7D0, app::Expression*, GetArgument, (app::NewExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02FBD870, int32_t, get_ArgumentCount, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ReadOnlyCollection_1_System_Reflection_MemberInfo_*, get_Members, (app::NewExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBD900, app::Expression*, Accept, (app::NewExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02FBD930, app::NewExpression*, Update, (app::NewExpression * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_* arguments))
} // namespace app::classes::System::Linq::Expressions::NewExpression
