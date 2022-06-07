#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::EnterTryFaultInstruction * this_ptr, int32_t target_index))
    IL2CPP_REGISTER_METHOD(0x022DFFD0, app::String *, get_InstructionName, (app::EnterTryFaultInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedContinuations, (app::EnterTryFaultInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetTryHandler, (app::EnterTryFaultInstruction * this_ptr, app::TryFaultHandler * try_handler))
    IL2CPP_REGISTER_METHOD(0x022E0050, int32_t, Run, (app::EnterTryFaultInstruction * this_ptr, app::InterpretedFrame * frame))
}
