#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanDouble.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction_GreaterThanDouble {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::GreaterThanInstruction_GreaterThanDouble* this_ptr, app::Object* null_value)
    IL2CPP_REGISTER_METHOD(0x022E85B0, int32_t, Run, app::GreaterThanInstruction_GreaterThanDouble* this_ptr, app::InterpretedFrame* frame)
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction_GreaterThanDouble
