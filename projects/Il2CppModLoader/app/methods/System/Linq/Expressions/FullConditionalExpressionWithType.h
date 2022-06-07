#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::FullConditionalExpressionWithType {
    IL2CPP_REGISTER_METHOD(0x022CFE20, void, ctor, (app::FullConditionalExpressionWithType * this_ptr, app::Expression * test, app::Expression * if_true, app::Expression * if_false, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Type *, get_Type, (app::FullConditionalExpressionWithType * this_ptr))
}
