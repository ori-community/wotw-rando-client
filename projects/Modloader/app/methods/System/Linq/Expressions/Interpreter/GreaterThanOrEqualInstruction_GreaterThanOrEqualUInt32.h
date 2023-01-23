#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32 {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32 * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CD4600, int32_t, Run, (app::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32 * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32
