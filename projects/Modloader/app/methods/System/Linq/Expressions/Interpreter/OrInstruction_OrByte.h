#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OrInstruction_OrByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction_OrByte {
    IL2CPP_REGISTER_METHOD(0x0240BFD0, int32_t, Run, (app::OrInstruction_OrByte * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OrInstruction_OrByte * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::OrInstruction_OrByte
