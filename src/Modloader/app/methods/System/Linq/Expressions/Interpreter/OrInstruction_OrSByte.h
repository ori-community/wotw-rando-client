#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/OrInstruction_OrSByte.h>

namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction_OrSByte {
    IL2CPP_REGISTER_METHOD(0x0240C630, int32_t, Run, app::OrInstruction_OrSByte* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OrInstruction_OrSByte* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction_OrSByte
