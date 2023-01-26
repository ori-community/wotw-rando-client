#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModuloInstruction_ModuloSingle.h>
#include <Modloader/app/structs/InterpretedFrame.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction_ModuloSingle {
    IL2CPP_REGISTER_METHOD(0x023FD050, int32_t, Run, (app::ModuloInstruction_ModuloSingle * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ModuloInstruction_ModuloSingle * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ModuloInstruction_ModuloSingle
