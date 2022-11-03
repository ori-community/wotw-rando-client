#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LoadStaticFieldInstruction * this_ptr, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x023FA2D0, app::String*, get_InstructionName, (app::LoadStaticFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::LoadStaticFieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FA350, int32_t, Run, (app::LoadStaticFieldInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LoadStaticFieldInstruction
