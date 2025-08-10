#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AndInstruction_AndByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::AndInstruction_AndByte {
    IL2CPP_REGISTER_METHOD(0x022D4740, int32_t, Run, app::AndInstruction_AndByte* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AndInstruction_AndByte* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::AndInstruction_AndByte
