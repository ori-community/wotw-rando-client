#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InterpretedFrame_GetStackTraceDebugInfo_d_29.h>
#include <Modloader/app/structs/InterpretedFrameInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29 {
    IL2CPP_REGISTER_METHOD(0x01426B00, void, ctor, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2AB0, bool, MoveNext, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::InterpretedFrameInfo, IEnumerator_InterpretedFrameInfo__get_Current, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2C20, void, IEnumerator_Reset, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047349F8, InterpretedFrame_GetStackTraceDebugInfo_d_29_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CE2C70, app::Object*, IEnumerator_get_Current, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2D00, app::IEnumerator_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_*, IEnumerable_InterpretedFrameInfo__GetEnumerator, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CE2EF0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::InterpretedFrame_GetStackTraceDebugInfo_d_29 * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::InterpretedFrame__GetStackTraceDebugInfo_d__29
