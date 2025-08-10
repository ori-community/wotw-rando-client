#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IRuntimeVariables.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/RuntimeVariables.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeVariables {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::RuntimeVariables* this_ptr, app::IStrongBox__Array* boxes)
    IL2CPP_REGISTER_METHOD(0x024102F0, app::IRuntimeVariables*, Create, app::IStrongBox__Array* boxes)
} // namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeVariables
