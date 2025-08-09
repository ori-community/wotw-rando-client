#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/NegateCheckedInstruction_NegateCheckedInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NegateCheckedInstruction_NegateCheckedInt32 {
    IL2CPP_REGISTER_METHOD(0x02400870, int32_t, Run, app::NegateCheckedInstruction_NegateCheckedInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::NegateCheckedInstruction_NegateCheckedInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::NegateCheckedInstruction_NegateCheckedInt32
