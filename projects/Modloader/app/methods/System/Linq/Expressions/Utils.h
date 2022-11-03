#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Utils {
    IL2CPP_REGISTER_METHOD(0x02FC77C0, app::ConstantExpression*, Constant_1, (bool value))
    IL2CPP_REGISTER_METHOD(0x02FC78A0, app::ConstantExpression*, Constant_2, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x02FC7AB0, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Utils
