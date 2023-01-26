#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeVariablesInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeVariablesInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::RuntimeVariablesInstruction * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::RuntimeVariablesInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ConsumedStack, (app::RuntimeVariablesInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02410430, app::String*, get_InstructionName, (app::RuntimeVariablesInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024104B0, int32_t, Run, (app::RuntimeVariablesInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::RuntimeVariablesInstruction
