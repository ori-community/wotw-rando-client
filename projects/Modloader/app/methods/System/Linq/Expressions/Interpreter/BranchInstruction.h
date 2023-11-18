#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Instruction__Array.h>
#include <Modloader/app/structs/BranchInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::BranchInstruction {
    IL2CPP_REGISTER_METHOD(0x022D61E0, app::Instruction__Array*, get_Cache, (app::BranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D64F0, void, ctor_1, (app::BranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6500, void, ctor_2, (app::BranchInstruction * this_ptr, bool has_result, bool has_value))
    IL2CPP_REGISTER_METHOD(0x022D6510, app::String*, get_InstructionName, (app::BranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6590, int32_t, get_ConsumedStack, (app::BranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (app::BranchInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Run, (app::BranchInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::BranchInstruction
