#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DelegateHelpers {
    IL2CPP_REGISTER_METHOD(0x022DC0A0, app::Type*, MakeDelegate, app::Type__Array* types)
}
