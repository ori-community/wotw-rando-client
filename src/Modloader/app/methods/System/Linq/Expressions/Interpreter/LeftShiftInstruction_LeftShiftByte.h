#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftByte.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftByte {
    IL2CPP_REGISTER_METHOD(0x01CE5AD0, int32_t, Run, app::LeftShiftInstruction_LeftShiftByte* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LeftShiftInstruction_LeftShiftByte* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftByte
