#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NullCheckInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NullCheckInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02407510, app::String*, get_InstructionName, (app::NullCheckInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02407590, int32_t, Run, (app::NullCheckInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x02407670, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::NullCheckInstruction
