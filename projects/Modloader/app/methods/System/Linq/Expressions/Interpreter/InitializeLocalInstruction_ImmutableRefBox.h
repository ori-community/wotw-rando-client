#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableRefBox {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::InitializeLocalInstruction_ImmutableRefBox * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD6810, int32_t, Run, (app::InitializeLocalInstruction_ImmutableRefBox * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CD69C0, app::String*, get_InstructionName, (app::InitializeLocalInstruction_ImmutableRefBox * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableRefBox
