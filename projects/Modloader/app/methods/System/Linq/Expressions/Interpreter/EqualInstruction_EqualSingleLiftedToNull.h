#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualInstruction_EqualSingleLiftedToNull.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction_EqualSingleLiftedToNull {
    IL2CPP_REGISTER_METHOD(0x022E3790, int32_t, Run, app::EqualInstruction_EqualSingleLiftedToNull* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EqualInstruction_EqualSingleLiftedToNull* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::EqualInstruction_EqualSingleLiftedToNull
