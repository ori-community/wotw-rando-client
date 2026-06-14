#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NewInstruction.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NewInstruction {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::NewInstruction* this_ptr, app::ConstructorInfo* constructor, int32_t argument_count)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ConsumedStack, app::NewInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::NewInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02401D90, app::String*, get_InstructionName, app::NewInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02401E10, int32_t, Run, app::NewInstruction* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x02401F60, app::Object__Array*, GetArgs, app::NewInstruction* this_ptr, app::InterpretedFrame* frame, int32_t first)
    IL2CPP_REGISTER_METHOD(0x024020D0, app::String*, ToString, app::NewInstruction* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NewInstruction
