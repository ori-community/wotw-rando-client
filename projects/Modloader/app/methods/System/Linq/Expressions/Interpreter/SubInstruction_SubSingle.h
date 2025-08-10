#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/SubInstruction_SubSingle.h>

namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction_SubSingle {
    IL2CPP_REGISTER_METHOD(0x02412B90, int32_t, Run, app::SubInstruction_SubSingle* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SubInstruction_SubSingle* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction_SubSingle
