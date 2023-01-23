#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InterpretedFrameInfo.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ * this_ptr, app::InterpretedFrameInfo obj))
    IL2CPP_REGISTER_METHOD(0x02A526C0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ * this_ptr, app::InterpretedFrameInfo obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_
