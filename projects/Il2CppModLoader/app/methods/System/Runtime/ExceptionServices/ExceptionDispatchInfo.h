#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::ExceptionServices::ExceptionDispatchInfo {
    IL2CPP_REGISTER_METHOD(0x01A93870, void, ctor, (app::ExceptionDispatchInfo * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_BinaryStackTraceArray, (app::ExceptionDispatchInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93A90, app::ExceptionDispatchInfo*, Capture, (app::Exception * source))
    IL2CPP_REGISTER_METHODINFO(0x0476B5F0, ExceptionDispatchInfo_Capture__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Exception*, get_SourceException, (app::ExceptionDispatchInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A93C30, void, Throw_1, (app::ExceptionDispatchInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734A00, ExceptionDispatchInfo_Throw__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01A93C90, void, Throw_2, (app::Exception * source))
} // namespace app::classes::System::Runtime::ExceptionServices::ExceptionDispatchInfo
