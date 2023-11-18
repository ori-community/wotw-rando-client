#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SubOvfInstruction_SubOvfInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::SubOvfInstruction_SubOvfInt32 {
    IL2CPP_REGISTER_METHOD(0x02413C30, int32_t, Run, (app::SubOvfInstruction_SubOvfInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubOvfInstruction_SubOvfInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::SubOvfInstruction_SubOvfInt32
