#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GreaterThanInstruction_GreaterThanByte.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction_GreaterThanByte {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GreaterThanInstruction_GreaterThanByte * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x022E8290, int32_t, Run, (app::GreaterThanInstruction_GreaterThanByte * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanInstruction_GreaterThanByte
