#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitializeLocalInstruction_MutableValue.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_MutableValue {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::InitializeLocalInstruction_MutableValue * this_ptr, int32_t index, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01CD6F30, int32_t, Run, (app::InitializeLocalInstruction_MutableValue * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CD7050, app::Instruction*, BoxIfIndexMatches, (app::InitializeLocalInstruction_MutableValue * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD71C0, app::String*, get_InstructionName, (app::InitializeLocalInstruction_MutableValue * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_MutableValue
