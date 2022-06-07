#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_CatchBlockProxy {
    IL2CPP_REGISTER_METHOD(0x029D4990, void, ctor, (app::Expression_CatchBlockProxy * this_ptr, app::CatchBlock * node))
    IL2CPP_REGISTER_METHOD(0x00571730, app::Expression *, get_Body, (app::Expression_CatchBlockProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A88520, app::Expression *, get_Filter, (app::Expression_CatchBlockProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Type *, get_Test, (app::Expression_CatchBlockProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::ParameterExpression *, get_Variable, (app::Expression_CatchBlockProxy * this_ptr))
}
