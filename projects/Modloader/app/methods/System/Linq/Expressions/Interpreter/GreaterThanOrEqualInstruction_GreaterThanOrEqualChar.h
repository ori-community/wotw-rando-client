#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualChar.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar* this_ptr, app::Object* null_value)
    IL2CPP_REGISTER_METHOD(0x01CD3990, int32_t, Run, app::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualChar
