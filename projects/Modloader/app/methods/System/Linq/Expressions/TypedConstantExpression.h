#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypedConstantExpression.h>

namespace app::classes::System::Linq::Expressions::TypedConstantExpression {
    IL2CPP_REGISTER_METHOD(0x02FC57C0, void, ctor, app::TypedConstantExpression* this_ptr, app::Object* value, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_Type, app::TypedConstantExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::TypedConstantExpression
