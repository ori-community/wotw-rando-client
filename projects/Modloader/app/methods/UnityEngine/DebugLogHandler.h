#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DebugLogHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::DebugLogHandler {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugLogHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242D790, void, Internal_Log, (app::LogType__Enum level, app::String* msg, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x0242D800, void, Internal_LogException, (app::Exception * exception, app::Object_1* obj))
    IL2CPP_REGISTER_METHOD(0x0242D860, void, LogFormat, (app::DebugLogHandler * this_ptr, app::LogType__Enum log_type, app::Object_1* context, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x0242D8E0, void, LogException, (app::DebugLogHandler * this_ptr, app::Exception* exception, app::Object_1* context))
} // namespace app::classes::UnityEngine::DebugLogHandler
