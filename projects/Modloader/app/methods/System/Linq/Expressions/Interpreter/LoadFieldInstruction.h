#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadFieldInstruction.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LoadFieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LoadFieldInstruction * this_ptr, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x023F98B0, app::String*, get_InstructionName, (app::LoadFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::LoadFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023F9930, int32_t, Run, (app::LoadFieldInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LoadFieldInstruction
