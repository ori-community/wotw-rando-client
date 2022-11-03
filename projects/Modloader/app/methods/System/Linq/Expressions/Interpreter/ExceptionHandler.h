#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Interpreter::ExceptionHandler {
    IL2CPP_REGISTER_METHOD(0x022E4220, void, ctor, (app::ExceptionHandler * this_ptr, int32_t label_index, int32_t handler_start_index, int32_t handler_end_index, app::Type* exception_type, app::ExceptionFilter* filter))
    IL2CPP_REGISTER_METHOD(0x01D17370, bool, Matches, (app::ExceptionHandler * this_ptr, app::Type* exception_type))
    IL2CPP_REGISTER_METHOD(0x022E4240, app::String*, ToString, (app::ExceptionHandler * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Interpreter::ExceptionHandler
