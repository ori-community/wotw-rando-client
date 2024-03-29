#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotInstruction_NotByte.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotByte {
    IL2CPP_REGISTER_METHOD(0x02406AE0, int32_t, Run, (app::NotInstruction_NotByte * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NotInstruction_NotByte * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::NotInstruction_NotByte
