#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::MemberExpression {
    IL2CPP_REGISTER_METHOD(0x005D2E60, app::MemberInfo_1 *, get_Member, (app::MemberExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression *, get_Expression, (app::MemberExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417CE0, void, ctor, (app::MemberExpression * this_ptr, app::Expression * expression))
    IL2CPP_REGISTER_METHOD(0x02417D90, app::PropertyExpression *, Make_1, (app::Expression * expression, app::PropertyInfo_1 * property))
    IL2CPP_REGISTER_METHOD(0x02417EE0, app::FieldExpression *, Make_2, (app::Expression * expression, app::FieldInfo_1 * field))
    IL2CPP_REGISTER_METHOD(0x00E3E350, app::ExpressionType__Enum, get_NodeType, (app::MemberExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02418030, app::MemberInfo_1 *, GetMember, (app::MemberExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756328, MemberExpression_GetMember__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02418070, app::Expression *, Accept, (app::MemberExpression * this_ptr, app::ExpressionVisitor * visitor))
    IL2CPP_REGISTER_METHOD(0x024180A0, app::MemberExpression *, Update, (app::MemberExpression * this_ptr, app::Expression * expression))
}
