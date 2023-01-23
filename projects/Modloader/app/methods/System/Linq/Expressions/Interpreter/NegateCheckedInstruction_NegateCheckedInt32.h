#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NegateCheckedInstruction_NegateCheckedInt32.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateCheckedInstruction_NegateCheckedInt32 {
    IL2CPP_REGISTER_METHOD(0x02400870, int32_t, Run, (app::NegateCheckedInstruction_NegateCheckedInt32 * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x04719388, NegateCheckedInstruction_NegateCheckedInt32_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NegateCheckedInstruction_NegateCheckedInt32 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateCheckedInstruction_NegateCheckedInt32
