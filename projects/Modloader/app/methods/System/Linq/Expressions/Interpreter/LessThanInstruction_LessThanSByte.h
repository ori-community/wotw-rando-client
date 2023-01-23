#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanSByte.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanSByte {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanInstruction_LessThanSByte * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CE8A40, int32_t, Run, (app::LessThanInstruction_LessThanSByte * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanSByte
