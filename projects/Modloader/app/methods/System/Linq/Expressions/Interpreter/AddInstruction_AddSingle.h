#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddInstruction_AddSingle.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AddInstruction_AddSingle {
    IL2CPP_REGISTER_METHOD(0x022D2040, int32_t, Run, app::AddInstruction_AddSingle* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AddInstruction_AddSingle* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::AddInstruction_AddSingle
