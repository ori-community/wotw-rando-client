#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByRefParameterExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::ByRefParameterExpression {
    IL2CPP_REGISTER_METHOD(0x01FA01B0, void, ctor, (app::ByRefParameterExpression * this_ptr, app::Type* type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetIsByRef, (app::ByRefParameterExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::ByRefParameterExpression
