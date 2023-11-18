#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FullConditionalExpression.h>
#include <Modloader/app/structs/Expression.h>

namespace app::classes::System::Linq::Expressions::FullConditionalExpression {
    IL2CPP_REGISTER_METHOD(0x022CFDF0, void, ctor, (app::FullConditionalExpression * this_ptr, app::Expression* test, app::Expression* if_true, app::Expression* if_false))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Expression*, GetFalse, (app::FullConditionalExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::FullConditionalExpression
