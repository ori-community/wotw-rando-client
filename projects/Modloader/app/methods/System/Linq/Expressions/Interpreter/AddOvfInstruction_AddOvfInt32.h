#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AddOvfInstruction_AddOvfInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction_AddOvfInt32 {
    IL2CPP_REGISTER_METHOD(0x022D30E0, int32_t, Run, (app::AddOvfInstruction_AddOvfInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x04729B80, AddOvfInstruction_AddOvfInt32_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AddOvfInstruction_AddOvfInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::AddOvfInstruction_AddOvfInt32
