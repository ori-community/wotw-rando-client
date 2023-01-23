#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnterFaultInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EnterFaultInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::EnterFaultInstruction * this_ptr, int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x022DED20, app::String*, get_InstructionName, (app::EnterFaultInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ProducedStack, (app::EnterFaultInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DEDA0, app::EnterFaultInstruction*, Create, (int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x022DF090, int32_t, Run, (app::EnterFaultInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022DF120, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::EnterFaultInstruction
