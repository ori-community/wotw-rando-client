#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrBoolean.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction_ExclusiveOrBoolean {
    IL2CPP_REGISTER_METHOD(0x022E4DB0, int32_t, Run, (app::ExclusiveOrInstruction_ExclusiveOrBoolean * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExclusiveOrInstruction_ExclusiveOrBoolean * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction_ExclusiveOrBoolean
