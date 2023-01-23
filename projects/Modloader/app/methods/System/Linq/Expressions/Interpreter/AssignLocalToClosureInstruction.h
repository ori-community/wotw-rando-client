#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssignLocalToClosureInstruction.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::AssignLocalToClosureInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::AssignLocalToClosureInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::AssignLocalToClosureInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5E00, app::String*, get_InstructionName, (app::AssignLocalToClosureInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D5E80, int32_t, Run, (app::AssignLocalToClosureInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AssignLocalToClosureInstruction
