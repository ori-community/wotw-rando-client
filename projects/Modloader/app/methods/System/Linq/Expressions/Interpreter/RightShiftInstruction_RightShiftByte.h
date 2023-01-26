#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RightShiftInstruction_RightShiftByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction_RightShiftByte {
    IL2CPP_REGISTER_METHOD(0x0240F590, int32_t, Run, (app::RightShiftInstruction_RightShiftByte * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RightShiftInstruction_RightShiftByte * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::RightShiftInstruction_RightShiftByte
