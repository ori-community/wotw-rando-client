#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnterFinallyInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EnterFinallyInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::EnterFinallyInstruction * this_ptr, int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x022DF1B0, app::String*, get_InstructionName, (app::EnterFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ProducedStack, (app::EnterFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedContinuations, (app::EnterFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DF230, app::EnterFinallyInstruction*, Create, (int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x022DF520, int32_t, Run, (app::EnterFinallyInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022DF5C0, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::EnterFinallyInstruction
