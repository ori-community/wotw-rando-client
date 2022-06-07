#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::FullConditionalExpression {
    IL2CPP_REGISTER_METHOD(0x022CFDF0, void, ctor, (app::FullConditionalExpression * this_ptr, app::Expression * test, app::Expression * if_true, app::Expression * if_false))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Expression *, GetFalse, (app::FullConditionalExpression * this_ptr))
}
