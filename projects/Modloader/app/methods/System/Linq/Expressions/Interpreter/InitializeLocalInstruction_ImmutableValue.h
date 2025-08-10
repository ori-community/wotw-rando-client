#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableValue.h>
#include <Modloader/app/structs/Instruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableValue {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, app::InitializeLocalInstruction_ImmutableValue* this_ptr, int32_t index, app::Object* default_value)
    IL2CPP_REGISTER_METHOD(0x01CD6A40, int32_t, Run, app::InitializeLocalInstruction_ImmutableValue* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x01CD6AE0, app::Instruction*, BoxIfIndexMatches, app::InitializeLocalInstruction_ImmutableValue* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01CD6C50, app::String*, get_InstructionName, app::InitializeLocalInstruction_ImmutableValue* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableValue
