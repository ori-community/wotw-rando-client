#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::ScriptingRuntimeHelpers {
    IL2CPP_REGISTER_METHOD(0x02410880, app::Object *, Int32ToObject, (int32_t i))
    IL2CPP_REGISTER_METHOD(0x02410A50, app::Object *, GetPrimitiveDefaultValue, (app::Type * type))
}
