#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/FieldExpression.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::FieldExpression {
    IL2CPP_REGISTER_METHOD(0x022CFD90, void, ctor, app::FieldExpression* this_ptr, app::Expression* expression, app::FieldInfo_1* member)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MemberInfo_1*, GetMember, app::FieldExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022CFDC0, app::Type*, get_Type, app::FieldExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::FieldExpression
