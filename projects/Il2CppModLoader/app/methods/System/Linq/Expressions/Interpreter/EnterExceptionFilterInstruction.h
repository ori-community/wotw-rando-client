#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::EnterExceptionFilterInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnterExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DE8B0, app::String *, get_InstructionName, (app::EnterExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::EnterExceptionFilterInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, Run, (app::EnterExceptionFilterInstruction * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x022DE930, void, cctor, ())
}
