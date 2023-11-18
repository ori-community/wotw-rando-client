#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Logger.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ILogHandler.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Logger {
    IL2CPP_REGISTER_METHOD(0x02530570, void, ctor, (app::Logger * this_ptr, app::ILogHandler* log_handler))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::ILogHandler*, get_logHandler, (app::Logger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_logHandler, (app::Logger * this_ptr, app::ILogHandler* value))
    IL2CPP_REGISTER_METHOD(0x02530580, bool, get_logEnabled, (app::Logger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_logEnabled, (app::Logger * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024AD180, app::LogType__Enum, get_filterLogType, (app::Logger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_filterLogType, (app::Logger * this_ptr, app::LogType__Enum value))
    IL2CPP_REGISTER_METHOD(0x02530590, bool, IsLogTypeAllowed, (app::Logger * this_ptr, app::LogType__Enum log_type))
    IL2CPP_REGISTER_METHOD(0x025305C0, app::String*, GetString, (app::Object * message))
    IL2CPP_REGISTER_METHOD(0x025306C0, void, Log_1, (app::Logger * this_ptr, app::LogType__Enum log_type, app::Object* message))
    IL2CPP_REGISTER_METHOD(0x02530820, void, Log_2, (app::Logger * this_ptr, app::LogType__Enum log_type, app::Object* message, app::Object_1* context))
    IL2CPP_REGISTER_METHOD(0x02530980, void, LogFormat_1, (app::Logger * this_ptr, app::LogType__Enum log_type, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x02530A60, void, LogFormat_2, (app::Logger * this_ptr, app::LogType__Enum log_type, app::Object_1* context, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x02530B40, void, LogException, (app::Logger * this_ptr, app::Exception* exception, app::Object_1* context))
} // namespace app::classes::UnityEngine::Logger
