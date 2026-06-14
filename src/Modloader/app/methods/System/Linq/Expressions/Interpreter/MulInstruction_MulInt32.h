#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MulInstruction_MulInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulInt32 {
    IL2CPP_REGISTER_METHOD(0x023FE450, int32_t, Run, app::MulInstruction_MulInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulInstruction_MulInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulInstruction_MulInt32
