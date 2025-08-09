#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeAsInstruction.h>

namespace app::classes::System::Linq::Expressions::Interpreter::TypeAsInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::TypeAsInstruction* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ConsumedStack, app::TypeAsInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, app::TypeAsInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02415500, app::String*, get_InstructionName, app::TypeAsInstruction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02415580, int32_t, Run, app::TypeAsInstruction* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x02415620, app::String*, ToString, app::TypeAsInstruction* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::TypeAsInstruction
