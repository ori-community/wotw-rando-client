#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SubInstruction_SubDouble.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction_SubDouble {
    IL2CPP_REGISTER_METHOD(0x02412460, int32_t, Run, (app::SubInstruction_SubDouble * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubInstruction_SubDouble * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::SubInstruction_SubDouble
