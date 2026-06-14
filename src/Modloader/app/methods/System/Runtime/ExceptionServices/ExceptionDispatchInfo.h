#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::ExceptionServices::ExceptionDispatchInfo {
    IL2CPP_REGISTER_METHOD(0x01A93870, void, ctor, app::ExceptionDispatchInfo* this_ptr, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_BinaryStackTraceArray, app::ExceptionDispatchInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A93A90, app::ExceptionDispatchInfo*, Capture, app::Exception* source)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Exception*, get_SourceException, app::ExceptionDispatchInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A93C30, void, Throw_1, app::ExceptionDispatchInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A93C90, void, Throw_2, app::Exception* source)
} // namespace app::classes::System::Runtime::ExceptionServices::ExceptionDispatchInfo
