#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NumericConvertInstruction_ToUnderlying.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TypeCode__Enum.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_ToUnderlying {
    IL2CPP_REGISTER_METHOD(0x02409F50, app::String*, get_InstructionName, (app::NumericConvertInstruction_ToUnderlying * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02409FD0, void, ctor, (app::NumericConvertInstruction_ToUnderlying * this_ptr, app::TypeCode__Enum to, bool is_lifted_to_null))
    IL2CPP_REGISTER_METHOD(0x02409FE0, app::Object*, Convert, (app::NumericConvertInstruction_ToUnderlying * this_ptr, app::Object* obj))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NumericConvertInstruction_ToUnderlying
