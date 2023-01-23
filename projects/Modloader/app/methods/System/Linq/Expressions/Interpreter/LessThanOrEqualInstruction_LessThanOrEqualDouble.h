#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualDouble.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction_LessThanOrEqualDouble {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanOrEqualInstruction_LessThanOrEqualDouble * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CEADE0, int32_t, Run, (app::LessThanOrEqualInstruction_LessThanOrEqualDouble * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction_LessThanOrEqualDouble
