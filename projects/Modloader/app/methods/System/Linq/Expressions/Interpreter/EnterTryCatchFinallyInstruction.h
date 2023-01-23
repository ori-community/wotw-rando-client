#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction.h>
#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction {
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetTryHandler, (app::EnterTryCatchFinallyInstruction * this_ptr, app::TryCatchFinallyHandler* try_handler))
    IL2CPP_REGISTER_METHOD(0x01CE49B0, int32_t, get_ProducedContinuations, (app::EnterTryCatchFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE4920, void, ctor, (app::EnterTryCatchFinallyInstruction * this_ptr, int32_t target_index, bool has_finally))
    IL2CPP_REGISTER_METHOD(0x022DF650, app::EnterTryCatchFinallyInstruction*, CreateTryFinally, (int32_t label_index))
    IL2CPP_REGISTER_METHOD(0x022DF7A0, app::EnterTryCatchFinallyInstruction*, CreateTryCatch, ())
    IL2CPP_REGISTER_METHOD(0x022DF8E0, int32_t, Run, (app::EnterTryCatchFinallyInstruction * this_ptr, app::InterpretedFrame* frame))
    IL2CPP_REGISTER_METHODINFO(0x04707E80, EnterTryCatchFinallyInstruction_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022DFE80, app::String*, get_InstructionName, (app::EnterTryCatchFinallyInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022DFF10, app::String*, ToString, (app::EnterTryCatchFinallyInstruction * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction
