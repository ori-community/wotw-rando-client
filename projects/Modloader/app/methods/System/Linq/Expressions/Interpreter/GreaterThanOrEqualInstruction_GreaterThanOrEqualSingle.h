#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CD42E0, int32_t, Run, (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualSingle
