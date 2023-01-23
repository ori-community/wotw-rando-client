#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DefaultValueInstruction.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::DefaultValueInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DefaultValueInstruction * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ProducedStack, (app::DefaultValueInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DBF50, app::String*, get_InstructionName, (app::DefaultValueInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DBFD0, int32_t, Run, (app::DefaultValueInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x022DC010, app::String*, ToString, (app::DefaultValueInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::DefaultValueInstruction
