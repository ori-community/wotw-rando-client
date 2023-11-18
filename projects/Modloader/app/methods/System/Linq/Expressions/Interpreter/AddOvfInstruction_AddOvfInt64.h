#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AddOvfInstruction_AddOvfInt64.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction_AddOvfInt64 {
    IL2CPP_REGISTER_METHOD(0x022D32D0, int32_t, Run, (app::AddOvfInstruction_AddOvfInt64 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddOvfInstruction_AddOvfInt64 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction_AddOvfInt64
