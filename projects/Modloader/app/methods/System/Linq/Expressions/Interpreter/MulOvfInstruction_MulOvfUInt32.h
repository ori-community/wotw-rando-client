#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MulOvfInstruction_MulOvfUInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfUInt32 {
    IL2CPP_REGISTER_METHOD(0x023FFEA0, int32_t, Run, (app::MulOvfInstruction_MulOvfUInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x047170F8, MulOvfInstruction_MulOvfUInt32_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MulOvfInstruction_MulOvfUInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction_MulOvfUInt32
