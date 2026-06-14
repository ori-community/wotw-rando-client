#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/ModuloInstruction_ModuloUInt32.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction_ModuloUInt32 {
    IL2CPP_REGISTER_METHOD(0x023FD400, int32_t, Run, app::ModuloInstruction_ModuloUInt32* this_ptr, app::InterpretedFrame* frame)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ModuloInstruction_ModuloUInt32* this_ptr)
} // namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction_ModuloUInt32
