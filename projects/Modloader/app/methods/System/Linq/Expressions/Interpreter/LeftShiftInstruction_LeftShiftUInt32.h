#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LeftShiftInstruction_LeftShiftUInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftUInt32 {
    IL2CPP_REGISTER_METHOD(0x01CE64B0, int32_t, Run, (app::LeftShiftInstruction_LeftShiftUInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LeftShiftInstruction_LeftShiftUInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LeftShiftInstruction_LeftShiftUInt32
