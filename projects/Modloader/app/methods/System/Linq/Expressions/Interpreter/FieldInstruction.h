#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/FieldInstruction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::FieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::FieldInstruction* this_ptr, app::FieldInfo_1* field)
    IL2CPP_REGISTER_METHOD(0x022E5E60, app::String*, ToString, app::FieldInstruction* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::FieldInstruction
