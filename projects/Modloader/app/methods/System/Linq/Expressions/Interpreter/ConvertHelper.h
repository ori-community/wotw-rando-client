#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ConvertHelper {
    IL2CPP_REGISTER_METHOD(0x022DA000, int32_t, ToInt32NoNull, (app::Object * val))
}
