#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::CastReferenceToEnumInstruction * this_ptr, app::Type* t))
    IL2CPP_REGISTER_METHOD(0x022D97C0, int32_t, Run, (app::CastReferenceToEnumInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::CastReferenceToEnumInstruction
