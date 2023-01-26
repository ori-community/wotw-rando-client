#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GotoInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::GotoInstruction {
    IL2CPP_REGISTER_METHOD(0x022E63D0, app::String*, get_InstructionName, (app::GotoInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D6590, int32_t, get_ConsumedStack, (app::GotoInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedStack, (app::GotoInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022E6450, void, ctor, (app::GotoInstruction * this_ptr, int32_t target_index, bool has_result, bool has_value, bool label_target_gets_value))
    IL2CPP_REGISTER_METHOD(0x022E6470, app::GotoInstruction*, Create, (int32_t label_index, bool has_result, bool has_value, bool label_target_gets_value))
    IL2CPP_REGISTER_METHOD(0x022E67C0, int32_t, Run, (app::GotoInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022E6940, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::GotoInstruction
