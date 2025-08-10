#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/InterpretedFrame.h>
#include <Modloader/app/structs/Interpreter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrame {
    IL2CPP_REGISTER_METHOD(0x01CE1270, void, ctor, app::InterpretedFrame* this_ptr, app::Interpreter* interpreter, app::IStrongBox__Array* closure)
    IL2CPP_REGISTER_METHOD(0x01CE1390, app::DebugInfo*, GetDebugInfo, app::InterpretedFrame* this_ptr, int32_t instruction_index)
    IL2CPP_REGISTER_METHOD(0x01CE1450, app::String*, get_Name, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE1470, void, Push_1, app::InterpretedFrame* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01CE14F0, void, Push_2, app::InterpretedFrame* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01CE1640, void, Push_3, app::InterpretedFrame* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01CE16D0, void, Push_4, app::InterpretedFrame* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x01CE17E0, void, Push_5, app::InterpretedFrame* this_ptr, int8_t value)
    IL2CPP_REGISTER_METHOD(0x01CE18F0, void, Push_6, app::InterpretedFrame* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x01CE1A00, void, Push_7, app::InterpretedFrame* this_ptr, uint16_t value)
    IL2CPP_REGISTER_METHOD(0x01CE1B10, app::Object*, Pop, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE1B60, void, SetStackDepth, app::InterpretedFrame* this_ptr, int32_t depth)
    IL2CPP_REGISTER_METHOD(0x01CE1B80, app::Object*, Peek, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE1BC0, void, Dup, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::InterpretedFrame*, get_Parent, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01CE1C80,
        app::IEnumerable_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_*,
        GetStackTraceDebugInfo,
        app::InterpretedFrame* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01CE1E10, void, SaveTraceToException, app::InterpretedFrame* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x01CE20E0, app::InterpretedFrame*, Enter, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE21F0, void, Leave, app::InterpretedFrame* this_ptr, app::InterpretedFrame* prev_frame)
    IL2CPP_REGISTER_METHOD(0x01CE22B0, bool, IsJumpHappened, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE22C0, void, RemoveContinuation, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE22D0, void, PushContinuation, app::InterpretedFrame* this_ptr, int32_t continuation)
    IL2CPP_REGISTER_METHOD(0x01CE2310, int32_t, YieldToCurrentContinuation, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE23C0, int32_t, YieldToPendingContinuation, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE2660, void, PushPendingContinuation, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE2730, void, PopPendingContinuation, app::InterpretedFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CE2840, int32_t, Goto, app::InterpretedFrame* this_ptr, int32_t label_index, app::Object* value, bool goto_exception_handler)
} // namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrame
