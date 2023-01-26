#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StoreLocalBoxedInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::StoreLocalBoxedInstruction {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::StoreLocalBoxedInstruction * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::StoreLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02411410, app::String*, get_InstructionName, (app::StoreLocalBoxedInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02411490, int32_t, Run, (app::StoreLocalBoxedInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::StoreLocalBoxedInstruction
