#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DivInstruction_DivUInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DivInstruction_DivUInt32 {
    IL2CPP_REGISTER_METHOD(0x022DE270, int32_t, Run, (app::DivInstruction_DivUInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DivInstruction_DivUInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::DivInstruction_DivUInt32
