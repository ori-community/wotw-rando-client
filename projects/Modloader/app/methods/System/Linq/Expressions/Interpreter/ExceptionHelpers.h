#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TargetInvocationException.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ExceptionHelpers {
    IL2CPP_REGISTER_METHOD(0x022E4370, void, UnwrapAndRethrow, (app::TargetInvocationException * exception))
}
