#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NullableMethodCallInstruction_GetValue.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_GetValue {
    IL2CPP_REGISTER_METHOD(0x024083E0, int32_t, Run, app::NullableMethodCallInstruction_GetValue* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NullableMethodCallInstruction_GetValue* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NullableMethodCallInstruction_GetValue
