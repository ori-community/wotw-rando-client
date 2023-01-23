#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InitializeLocalInstruction_ImmutableBox.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableBox {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::InitializeLocalInstruction_ImmutableBox * this_ptr, int32_t index, app::Object* default_value))
    IL2CPP_REGISTER_METHOD(0x01CD65C0, int32_t, Run, (app::InitializeLocalInstruction_ImmutableBox * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CD6790, app::String*, get_InstructionName, (app::InitializeLocalInstruction_ImmutableBox * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableBox
