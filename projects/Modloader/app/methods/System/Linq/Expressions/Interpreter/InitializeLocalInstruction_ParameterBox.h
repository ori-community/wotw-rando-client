#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ParameterBox {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::InitializeLocalInstruction_ParameterBox * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CD7490, int32_t, Run, (app::InitializeLocalInstruction_ParameterBox * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x01CD7680, app::String*, get_InstructionName, (app::InitializeLocalInstruction_ParameterBox * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ParameterBox
