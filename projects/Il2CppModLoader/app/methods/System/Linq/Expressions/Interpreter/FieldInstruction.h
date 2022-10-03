#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::FieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FieldInstruction * this_ptr, app::FieldInfo_1* field))
    IL2CPP_REGISTER_METHOD(0x022E5E60, app::String*, ToString, (app::FieldInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::FieldInstruction
