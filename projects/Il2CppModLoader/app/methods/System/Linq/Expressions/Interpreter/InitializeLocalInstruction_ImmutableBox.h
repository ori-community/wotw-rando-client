#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Interpreter::InitializeLocalInstruction_ImmutableBox {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::InitializeLocalInstruction_ImmutableBox * this_ptr, int32_t index, app::Object * default_value))
    IL2CPP_REGISTER_METHOD(0x01CD65C0, int32_t, Run, (app::InitializeLocalInstruction_ImmutableBox * this_ptr, app::InterpretedFrame * frame))
    IL2CPP_REGISTER_METHOD(0x01CD6790, app::String *, get_InstructionName, (app::InitializeLocalInstruction_ImmutableBox * this_ptr))
}
