#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExclusiveOrInstruction_ExclusiveOrByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction_ExclusiveOrByte {
    IL2CPP_REGISTER_METHOD(0x022E4F40, int32_t, Run, (app::ExclusiveOrInstruction_ExclusiveOrByte * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExclusiveOrInstruction_ExclusiveOrByte * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction_ExclusiveOrByte
