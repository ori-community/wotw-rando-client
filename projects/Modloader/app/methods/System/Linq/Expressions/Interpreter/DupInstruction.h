#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DupInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DupInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DupInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::DupInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DE610, app::String*, get_InstructionName, (app::DupInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DE690, int32_t, Run, (app::DupInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022DE770, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::DupInstruction
