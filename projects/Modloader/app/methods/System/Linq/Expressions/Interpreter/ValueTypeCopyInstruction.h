#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ValueTypeCopyInstruction.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, (app::ValueTypeCopyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::ValueTypeCopyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415B10, app::String*, get_InstructionName, (app::ValueTypeCopyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415B90, int32_t, Run, (app::ValueTypeCopyInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ValueTypeCopyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415C00, void, cctor, ())
} // namespace app::classes::System::Linq::Expressions::Interpreter::ValueTypeCopyInstruction
