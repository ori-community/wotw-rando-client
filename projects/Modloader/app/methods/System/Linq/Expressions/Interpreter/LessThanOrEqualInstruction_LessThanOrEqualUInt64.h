#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LessThanOrEqualInstruction_LessThanOrEqualUInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction_LessThanOrEqualUInt64 {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::LessThanOrEqualInstruction_LessThanOrEqualUInt64 * this_ptr, app::Object* null_value))
    IL2CPP_REGISTER_METHOD(0x01CEBA40, int32_t, Run, (app::LessThanOrEqualInstruction_LessThanOrEqualUInt64 * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::LessThanOrEqualInstruction_LessThanOrEqualUInt64
