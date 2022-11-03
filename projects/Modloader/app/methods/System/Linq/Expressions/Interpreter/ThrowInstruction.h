#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ThrowInstruction {
    IL2CPP_REGISTER_METHOD(0x023BA2B0, void, ctor, (app::ThrowInstruction * this_ptr, bool has_result, bool is_rethrow))
    IL2CPP_REGISTER_METHOD(0x02414660, app::String*, get_InstructionName, (app::ThrowInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DEAF0, int32_t, get_ProducedStack, (app::ThrowInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::ThrowInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024146E0, int32_t, Run, (app::ThrowInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x04766A50, ThrowInstruction_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024148D0, app::Exception*, WrapThrownObject, (app::Object * thrown))
    IL2CPP_REGISTER_METHOD(0x024149C0, app::RuntimeWrappedException*, RuntimeWrap, (app::Object * thrown))
    IL2CPP_REGISTER_METHOD(0x02414C60, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::ThrowInstruction
