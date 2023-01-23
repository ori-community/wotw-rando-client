#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NewArrayInitInstruction.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NewArrayInitInstruction {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, (app::NewArrayInitInstruction * this_ptr, app::Type* element_type, int32_t element_count))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (app::NewArrayInitInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NewArrayInitInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02401A60, app::String*, get_InstructionName, (app::NewArrayInitInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02401AE0, int32_t, Run, (app::NewArrayInitInstruction * this_ptr, app::InterpretedFrame* frame))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NewArrayInitInstruction
