#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DisableAllLoggingLogHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/LogType__Enum.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ContinuousIntegration::DisableAllLoggingLogHandler {
    IL2CPP_REGISTER_METHOD(0x0318B010, void, ctor, app::DisableAllLoggingLogHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        LogFormat,
        app::DisableAllLoggingLogHandler* this_ptr,
        app::LogType__Enum type,
        app::Object_1* context,
        app::String* format,
        app::Object__Array* args
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LogException, app::DisableAllLoggingLogHandler* this_ptr, app::Exception* exception, app::Object_1* context)
} // namespace app::classes::Moon::ContinuousIntegration::DisableAllLoggingLogHandler
