#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftSByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftSByte {
    IL2CPP_REGISTER_METHOD(0x01CE6170, int32_t, Run, (app::LeftShiftInstruction_LeftShiftSByte * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeftShiftInstruction_LeftShiftSByte * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftSByte
