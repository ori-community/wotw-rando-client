#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LocalVariable {
    IL2CPP_REGISTER_METHOD(0x023FA920, bool, get_IsBoxed, (app::LocalVariable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FA930, void, set_IsBoxed, (app::LocalVariable * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x023FA950, bool, get_InClosure, (app::LocalVariable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FA960, void, ctor, (app::LocalVariable * this_ptr, int32_t index, bool closure))
    IL2CPP_REGISTER_METHOD(0x023FA970, app::String*, ToString, (app::LocalVariable * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LocalVariable
