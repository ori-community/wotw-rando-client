#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ConsumedStack, (app::MulOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::MulOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FEF20, app::String*, get_InstructionName, (app::MulOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MulOvfInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023FEFA0, app::Instruction*, Create, (app::Type * type))
} // namespace app::classes::System::Linq::Expressions::Interpreter::MulOvfInstruction
