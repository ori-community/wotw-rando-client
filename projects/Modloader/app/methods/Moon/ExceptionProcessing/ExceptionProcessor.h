#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_.h>
#include <Modloader/app/structs/ExceptionProcessor.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/LogType__Enum.h>

namespace app::classes::Moon::ExceptionProcessing::ExceptionProcessor {
    IL2CPP_REGISTER_METHOD(0x01987530, app::Dictionary_2_System_Int32_Moon_ExceptionProcessing_ExceptionEntry_*, Process, (app::ExceptionProcessor * this_ptr, app::String* log_path))
    IL2CPP_REGISTER_METHOD(0x019875F0, void, HandleLog, (app::ExceptionProcessor * this_ptr, app::String* log_string, app::String* stack_trace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHODINFO(0x04706B38, ExceptionProcessor_HandleLog__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01987600, void, ProcessMessage, (app::ExceptionProcessor * this_ptr, app::String* log_string, app::String* stack_trace))
    IL2CPP_REGISTER_METHOD(0x01987AC0, void, ProcessLog, (app::ExceptionProcessor * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x01987B80, void, ProcessMessages, (app::ExceptionProcessor * this_ptr, app::String* data))
    IL2CPP_REGISTER_METHOD(0x01987D20, app::String*, ParseException, (app::ExceptionProcessor * this_ptr, app::String* exception))
    IL2CPP_REGISTER_METHOD(0x01987DE0, app::String*, ParseStackTrace, (app::ExceptionProcessor * this_ptr, app::String* exception))
    IL2CPP_REGISTER_METHOD(0x01988130, void, ctor, (app::ExceptionProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019884C0, void, cctor, ())
} // namespace app::classes::Moon::ExceptionProcessing::ExceptionProcessor
