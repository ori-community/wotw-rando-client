#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MulInstruction_MulSingle.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulSingle {
    IL2CPP_REGISTER_METHOD(0x023FE7E0, int32_t, Run, app::MulInstruction_MulSingle* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulInstruction_MulSingle* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulSingle
