#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfInt32 {
    IL2CPP_REGISTER_METHOD(0x023FF890, int32_t, Run, app::MulOvfInstruction_MulOvfInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MulOvfInstruction_MulOvfInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfInt32
