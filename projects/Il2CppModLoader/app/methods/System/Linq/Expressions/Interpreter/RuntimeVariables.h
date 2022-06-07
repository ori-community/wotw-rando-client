#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::RuntimeVariables {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RuntimeVariables * this_ptr, app::IStrongBox__Array * boxes))
    IL2CPP_REGISTER_METHOD(0x024102F0, app::IRuntimeVariables *, Create, (app::IStrongBox__Array * boxes))
}
