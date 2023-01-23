#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NewArrayBoundsInstruction.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, (app::NewArrayBoundsInstruction * this_ptr, app::Type* element_type, int32_t rank))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, (app::NewArrayBoundsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::NewArrayBoundsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02401850, app::String*, get_InstructionName, (app::NewArrayBoundsInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024018D0, int32_t, Run, (app::NewArrayBoundsInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x04708188, NewArrayBoundsInstruction_Run__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NewArrayBoundsInstruction
