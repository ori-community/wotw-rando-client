#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanChar.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanChar {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::LessThanInstruction_LessThanChar* this_ptr, app::Object* null_value)
    IL2CPP_REGISTER_METHOD(0x01CE8280, int32_t, Run, app::LessThanInstruction_LessThanChar* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanChar
