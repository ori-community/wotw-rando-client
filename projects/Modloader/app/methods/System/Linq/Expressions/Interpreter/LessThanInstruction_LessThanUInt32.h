#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LessThanInstruction_LessThanUInt32.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanUInt32 {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanInstruction_LessThanUInt32 * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CE8EF0, int32_t, Run, (app::LessThanInstruction_LessThanUInt32 * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanInstruction_LessThanUInt32
