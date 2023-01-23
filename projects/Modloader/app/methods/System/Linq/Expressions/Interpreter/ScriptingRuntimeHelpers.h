#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers {
    IL2CPP_REGISTER_METHOD(0x02410880, app::Object*, Int32ToObject, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x02410A50, app::Object*, GetPrimitiveDefaultValue, (app::Type * type))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers
