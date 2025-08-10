#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DivInstruction_DivSingle.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DivInstruction_DivSingle {
    IL2CPP_REGISTER_METHOD(0x022DDEC0, int32_t, Run, app::DivInstruction_DivSingle* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DivInstruction_DivSingle* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::DivInstruction_DivSingle
