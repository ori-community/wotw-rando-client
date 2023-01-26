#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadObjectInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LoadObjectInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LoadObjectInstruction * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadObjectInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FA110, app::String*, get_InstructionName, (app::LoadObjectInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FA190, int32_t, Run, (app::LoadObjectInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x023FA230, app::String*, ToString, (app::LoadObjectInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LoadObjectInstruction
